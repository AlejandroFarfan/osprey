#ifndef CONVERTNUMBER_H
#define CONVERTNUMBER_H
#include <iostream>
#include <string>

using namespace std;

class ConvertNumber
{
public:
    ConvertNumber(){}
    ~ConvertNumber(){}
    string numberToString(int value){
        return std::to_string(static_cast<long long>(value));
    }
    int stringToNumber(string value){
        return std::stoi(value);
    }
};

#endif // CONVERTNUMBER_H
