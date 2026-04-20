#include "ScalarConverter.hpp"

static bool isChar(const std::string &s);
static bool isInt(const std::string &s);
static bool isFloat(const std::string &s);
static bool isDouble(const std::string &s);
static bool isPseudoLiteral(const std::string &s);

void    ScalarConverter::convert(const std::string &literal){
    (void)literal;
}

static bool isChar(const std::string &s){
    if (std::size(s) == 1 && !std::isdigit(s[0]))
        return true;
    return false;
}

static bool isInt(const std::string &s){
    int i = 0;
    if (s[i] == '\0')
        return false;
    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '+' || s[i] == '-')
        i++;
    if (s[i] == '\0')
        return false;
    while (s[i])
    {
        if (!std::isdigit(s[i]))
            return false;
        i++;
    }
    return true;
}

static bool isFloat(const std::string &s)
{
    int i = 0;
    int dot_count = 0;
    int digit_count = 0;
    if (s[i] == '\0')
        return false;
    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '+' || s[i] == '-')
        i++;
    if (s[i] == '\0')
        return false;
    while (s[i])
    {
        if (std::isdigit(s[i]))
            digit_count++;
        else if (s[i] == '.')
        {
            dot_count++;
            if (dot_count > 1)
                return false;
        }
        else if (s[i] == 'f')
            return (s[i + 1] == '\0' && dot_count == 1 && digit_count > 0);
        else
            return false;
        i++;
    }
    return false;
}

static bool isDouble(const std::string &s)
{
    int i = 0;
    int dot_count = 0;
    int digit_count = 0;
    if (s[i] == '\0')
        return false;
    while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
        i++;
    if (s[i] == '+' || s[i] == '-')
        i++;
    if (s[i] == '\0')
        return false;
    while (s[i])
    {
        if (std::isdigit(s[i]))
            digit_count++;
        else if (s[i] == '.')
        {
            dot_count++;
            if (dot_count > 1)
                return false;
        }
        else
            return false;
        i++;
    }
    if (dot_count != 1 || digit_count == 0)
        return false;
    return true;
}

static bool isPseudoLiteral(const std::string &s){
    if (s == "nan" || s == "nanf" || s == "+inf"
        || s == "-inf" || s =="+inff" || s == "-inff")
        return true;
    return false;
}