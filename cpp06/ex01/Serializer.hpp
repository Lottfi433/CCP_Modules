#pragma once

#include <stdint.h>
#include <string>
#include <iostream>

struct Data{
    int id;
    std::string name;
};

class Serializer{
private:
    Serializer();
    Serializer(const Serializer&);
    Serializer& operator=(const Serializer&);
public:
    ~Serializer();
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};