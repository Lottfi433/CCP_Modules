#pragma once
#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

class BitcoinExchange{
private:
    std::map<std::string , float> _database;
public:
    BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();
    void loadDataBase(const std::string& file);
    void processInput(const std::string& file);
    bool isValidValue(const std::string& value);
    bool isValidDate(const std::string& value);
};