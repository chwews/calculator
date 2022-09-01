BD=../build/
CFLAGS=-Wall -Wextra -Werror -std=c++17
GTESTFLAGS=-lgtest -I./ -L./
CC=g++
OS:=$(shell uname -s)

SRC=calculator_model.cpp
OBJ=$(addprefix $(BD),$(SRC:.cpp=.o))

PACKAGE = SmartCalc
VERSION = `date +"%Y.%m.%d"`
ARCHIVE = $(PACKAGE)-$(VERSION)

APP=$(BD)SmartCalc.app
APPDIR=../SmartCalc/
ifeq ($(OS), Darwin)
	APP_EXE=$(APPDIR)SmartCalc.app/Contents/MacOS/SmartCalc
else
	APP_EXE=$(APPDIR)SmartCalc
endif


all: build_dir install

run:
	$(APP_EXE)

build_dir:
	@mkdir $(BD) || printf ""

build: $(BD)SmartCalc.pro
	cd $(BD); qmake SmartCalc.pro
	make -C $(BD)

./$(BD)SmartCalc.pro:
	cp SmartCalc.pro $(BD)

./$(BD)%.o: */%.cpp
	$(CC) -c $(CFLAGS) $< -o $@

./$(BD)%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

install: build
	@mkdir $(APPDIR)
	cp -rf manual/ $(APPDIR)manual/
	cp -rf $(APP) $(APPDIR)
	make clean

uninstall:
	rm -rf $(APPDIR)
	rm -rf $(HOME)/Applications/SmartCalc.tar.gz

dvi:
	@open $(APPDIR)manual/manual.html || echo "Please, install application first!"

dist:
	tar -cvf $(APPDIR)../$(ARCHIVE).tar $(APPDIR)
	gzip $(APPDIR)../$(ARCHIVE).tar

clean:
	rm -rf ./$(BD)*.o ./$(BD)*_exe ./$(BD)*.dSYM ./$(BD)report
	rm -rf ./$(BD)*.gcno ./$(BD)*.gcda ./$(BD)*.info report/
	test -f ./$(BD)Makefile && Make distclean -C $(BD) || printf ""
	rm -rf ./$(BD)SmartCalc.pro

test: $(BD)main_test_exe
	./$(BD)main_test_exe

./$(BD)main_test_exe: $(OBJ) $(BD)main_test.o
	$(CC) $(CFLAGS) $^ -o $@ $(GTESTFLAGS)

gcov_report: gcov_build $(BD)main_test.o 
	@$(CC) --coverage $(BD)gcov_calculator_model.o $(BD)main_test.o  ${CPPFLAGS} ${GTESTFLAGS} -o $(BD)gcov_exe
	./$(BD)gcov_exe
	@lcov -t "gcov_report" -o $(BD)gcov_report.info -c -d ./$(BD) --no-external --directory ../src
	@genhtml -o report $(BD)gcov_report.info

gcov_build: ./model/calculator_model.cpp
	$(CC) -c --coverage $(CFLAGS) $^ -o $(BD)gcov_calculator_model.o

style:
	cp ../materials/linters/CPPLINT.cfg .
	python3 ../materials/linters/cpplint.py --filter=-runtime/references --exclude=view/qcustomplot.h --exclude=view/qcustomplot.cpp --extensions=cpp */*.cpp */*.h 
	rm -rf CPPLINT.cfg

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem .

leaks: test
	CK_FORK=no leaks --atExit -- ./test

