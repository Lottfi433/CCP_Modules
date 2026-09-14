#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {};

void BitcoinExchange::loadDataBase(const std::string& file)
{
    std::fstream input(file.c_str());
    std::string line;
    if (!input.is_open()){
        std::cout << "Error: Couldn't open this file!" << std::endl;
        return;
    }
    std::getline(input, line);
    while (getline(input, line)){
        std::stringstream ss(line);
        std::string date;
        float rate;
        std::getline(ss, date, ',');
        ss >> rate;
        _database[date] = rate;
    }
}
void BitcoinExchange::processInput(const std::string& file){
    std::ifstream input(file.c_str());
    std::string line;
    if (!input.is_open()){
        std::cout << "Error: Couldn't open this file!" << std::endl;
        return;
    }
    std::getline(input, line);
    while(getline(input, line)){
        std::stringstream ss(line);
        std::string date;
        std::string value;
        std::getline(ss,date, '|');
        std::getline(ss,value);
        date.erase(date.find_last_not_of(" \t") + 1);
        if (!isValidDate(date)){
            std::cout << "Error: bad input => " << date << std::endl;
            continue;
        }
        if (!isValidValue(value)){
            std::cout << "Error: invalid value." << std::endl;
            continue;
        }
        std::stringstream valueStream(value);
        float number;
        valueStream >> number;
        std::map<std::string, float>::iterator it;
        it = _database.lower_bound(date);
        if (it == _database.end() || it->first != date){
            if (it == _database.begin()){
                std::cout << "Error: date is too early." << std::endl;
                continue;
            }
            --it;
        }
        float result = number * it->second;
        std::cout << date << " => " << number << " = " << result << std::endl;
    }
}

bool BitcoinExchange::isValidValue(const std::string& value){
    std::stringstream ss(value);
    float number;
    char extra;
    if (!(ss >> number))
        return false;
    if (ss >> extra)
        return false;
    if (number < 0 || number > 1000)
        return false;
    return true;
}
bool BitcoinExchange::isValidDate(const std::string& value){
    std::stringstream ss(value);
    std::string date;
    int year;
    int month;
    int day;
    int days;
    if (!(ss >> date))
        return false;
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2])
        || !isdigit(date[3]) || !isdigit(date[5]) || !isdigit(date[6])
        || !isdigit(date[8]) || !isdigit(date[9]))
        return false;
    year = atoi(date.substr(0, 4).c_str());
    month = atoi(date.substr(5, 2).c_str());
    day = atoi(date.substr(8, 2).c_str());
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    if (month == 2){
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;
    if (day > days)
        return false;
    return true;
}