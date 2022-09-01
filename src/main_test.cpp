#include <gtest/gtest.h>

#include <vector>

#include "model/calculator_model.h"

#define chwews_NAN 0.0 / 0.0

TEST(calculation_suit, first_test) {
    chwews::CalculatorModel m;
    m.update("3+10*2^2", 0);
    std::string result_str = m.update("=", 0);
    long double expected = 3 + 10 * powl(2, 2);
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, second_test) {
    chwews::CalculatorModel m;
    m.update("110-300+4/2*15", 0);
    std::string result_str = m.update("=", 0);
    long double expected = 110 - 300 + 4 / 2 * 15;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, third_test) {
    chwews::CalculatorModel m;
    m.update("3+10*2^2", 0);
    std::string result_str = m.update("=", 0);
    long double expected = 3 + 10 * powl(2, 2);
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, fourth_test) {
    chwews::CalculatorModel m;
    m.update("((90+36)*((5^3)/25)-(16*(93-116*(114.0/12.0))))*37", 0);
    std::string result_str = m.update("=", 0);
    long double expected = ((90 + 36) * ((powl(5, 3)) / 25) - (16 * (93 - 116 * (114.0 / 12.0)))) * 37;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, fifth_test) {
    chwews::CalculatorModel m;
    m.update("(123.0/987.0)%22.44", 0);
    std::string result_str = m.update("=", 0);
    long double expected = fmodl(123.0 / 987.0, 22.44);
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, sixth_test) {
    chwews::CalculatorModel m;
    m.update("sin(11.2)*cos(1.4386)*tan(0.0002)", 0);
    std::string result_str = m.update("=", 0);
    long double expected = sinl(11.2) * cosl(1.4386) * tanl(0.0002);
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, seventh_test) {
    chwews::CalculatorModel m;
    m.update("x*acos(0.2)*asin(0.2)*atan(0.2)", 13.6574);
    std::string result_str = m.update("=", 13.6574);
    double x = 13.6574;
    double expected = x * acosl(0.2) * asinl(0.2) * atanl(0.2);
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, eighth_test) {
    chwews::CalculatorModel m;
    m.update("((90+36)*((5^3)/25)-(16*(93-116*(114.0/12.0))))*37", 0);
    std::string result_str = m.update("=", 0);
    long double expected = ((90 + 36) * ((powl(5, 3)) / 25) - (16 * (93 - 116 * (114.0 / 12.0)))) * 37;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, nineth_test) {
    chwews::CalculatorModel m;
    m.update("-(sqrt(144)^12.2)", 0);
    std::string result_str = m.update("=", 0);
    double expected = -powl(sqrtl(144), 12.2);
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, tenth_test) {
    chwews::CalculatorModel m;
    m.update("2.19/sin(3-2)*cos(2.0/sqrt(8-5))*5.123", 0);
    std::string result_str = m.update("=", 0);
    long double expected = 2.19 / sinl(3 - 2) * cosl(2.0 / sqrtl(8 - 5)) * 5.123;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, eleventh_test) {
    chwews::CalculatorModel m;
    m.update("sin(20.1232*0.000017^2+5.4+cos(0.0099+3))", 0);
    std::string result_str = m.update("=", 0);
    long double expected = sinl(20.1232 * powl(0.000017, 2) + 5.4 + cosl(0.0099 + 3));
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, twelveth_test) {
    chwews::CalculatorModel m;
    m.update("log(2.33*sin(0.99)+ln(cos(56)/tan(0.5667)))", 0);
    std::string result_str = m.update("=", 0);
    long double expected = log10l(2.33 * sinl(0.99) + logl(cosl(56) / tanl(0.5667)));
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, thirteenth_test) {
    chwews::CalculatorModel m;
    m.update("0.099*tan(1.11)+(9+0.88)*1.12", 0);
    std::string result_str = m.update("=", 0);
    long double expected = 0.099 * tanl(1.11) + (9 + 0.88) * 1.12;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, fourteenth_test) {
    chwews::CalculatorModel m;
    m.update("sqrt(34.76)+log(1.15+(1.1-1.0856))", 0);
    std::string result_str = m.update("=", 0);
    long double expected = sqrtl(34.76) + log10l(1.15 + (1.1 - 1.0856));
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(calculation_suit, fifteenth_test) {
    chwews::CalculatorModel m;
    m.update("0.0000012-0.1234567^0.00003456/9.9999999", 0);
    std::string result_str = m.update("=", 0);
    long double expected = 0.0000012 - powl(0.1234567, 0.00003456) / 9.9999999;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(clear_suit, action_clear) {
    chwews::CalculatorModel m;
    m.update("", 0);
    m.update("2", 0);
    m.update("+", 0);
    m.update("1.3e+1", 0);
    m.update("-", 0);
    m.update("5", 0);
    m.update("", 0);
    m.update("", 0);
    std::string result_str = m.update("=", 0);
    double expected = 2 + 13;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(clear_suit, full_clear) {
    chwews::CalculatorModel m;
    m.update("2", 0);
    m.update("+", 0);
    m.update("3", 0);
    m.update("-", 0);
    m.update("5", 0);
    m.update("AC", 0);
    std::string result_str = m.update("=", 0);
    double expected = chwews_NAN;
    std::string expected_str = std::to_string(expected);
    ASSERT_EQ(result_str, expected_str);
}

TEST(graph_suit, graph_calculate) {
    chwews::CalculatorModel m;
    m.update("x", 0);
    std::pair<std::vector<double>, std::vector<double>> res = m.graph_calculate();
    int count = res.first.size();
    for (double i = -100.0; i < -100.0; i += 0.002) {
        ASSERT_EQ(i, res.first[count]);
        ASSERT_EQ(i, res.second[count--]);
    }
}

TEST(credit_suit, annuity_credit) {
    chwews::CalculatorModel m;
    std::vector<std::vector<double>> res = m.credit_calculate(100000, 6, 15, true);
    ASSERT_LE(fabs(res[0][1] - 17403.4), 0.1);
    ASSERT_LE(fabs(res[res.size() - 1][res[res.size() - 1].size() - 2] - 4420.29), 0.01);
    ASSERT_LE(fabs(res[res.size() - 1][res[res.size() - 1].size() - 1] - 104420), 1);
}

TEST(credit_suit, differentiated_credit) {
    chwews::CalculatorModel m;
    std::vector<std::vector<double>> res = m.credit_calculate(100000, 6, 15, false);
    ASSERT_LE(fabs(res[0][0] - 17916.7), 0.1);
    ASSERT_LE(fabs(res[res.size() - 1][res[res.size() - 1].size() - 2] - 4375), 1);
    ASSERT_LE(fabs(res[res.size() - 1][res[res.size() - 1].size() - 1] - 104375), 1);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
