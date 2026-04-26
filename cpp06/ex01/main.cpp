#include "Serializer.hpp"

int main (){
    Data data;

    data.id = 1;
    data.name = "Lotfi";
    Data* original = &data;

    uintptr_t raw = Serializer::serialize(original);
    Data* result = Serializer::deserialize(raw);

    std::cout << "Original: " << original << std::endl;
    std::cout << "Result: " << result << std::endl;

    if (original == result)
        std::cout << "SUCCESS" << std::endl;
    else
        std::cout << "FAIL" << std::endl;
    return 0;
}