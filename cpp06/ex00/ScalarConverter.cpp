#include "ScalarConverter.hpp"

static bool isChar(const std::string &s);
static bool isInt(const std::string &s);
static bool isFloat(const std::string &s);
static bool isDouble(const std::string &s);
static bool isPseudoLiteral(const std::string &s);


static bool isChar(const std::string &s){
    if (s.size() == 1 && !std::isdigit(s[0]))
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

void ScalarConverter::convert(const std::string &literal){
    double value;
    if (isPseudoLiteral(literal)){
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        if (literal == "nan" || literal == "+inf" || literal == "-inf"){
            std::cout << "float: " << literal << "f\n";
            std::cout << "double: " << literal << "\n";
        }
        else{
            std::cout << "float: " << literal << "\n";
            std::cout << "double: " << literal.substr(0, literal.size() - 1) << "\n";
        }
        return;
    }
    else if (isChar(literal))
        value = static_cast<double>(literal[0]);
    else if (isInt(literal))
        value = static_cast<double>(std::atoi(literal.c_str()));
    else if (isFloat(literal))
        value = static_cast<double>(std::atof(literal.c_str()));
    else if (isDouble(literal))
        value = std::atof(literal.c_str());
    else {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
        std::cout << "float: impossible\n";
        std::cout << "double: impossible\n";
        return;
    }
    if (value < 0 || value > 127)
        std::cout << "char: impossible\n";
    else if (!std::isprint(static_cast<int>(value)))
        std::cout << "char: Non displayable\n";
    else
        std::cout << "char: '" << static_cast<char>(value) << "'\n";
    if (value < INT_MIN || value > INT_MAX)
        std::cout << "int: impossible\n";
    else
        std::cout << "int: " << static_cast<int>(value) << "\n";
    std::cout << "float: " << static_cast<float>(value);
    if (!std::isnan(value) && !std::isinf(value)
    && value == static_cast<int>(value))
        std::cout << ".0";
    std::cout << "f\n";
    std::cout << "double: " << value;
    if (value == static_cast<int>(value))
        std::cout << ".0";
    std::cout << "\n";
}