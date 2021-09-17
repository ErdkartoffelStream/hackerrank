#include "set-operations.hpp"

std::set<int> setOps::add(std::set<int> inputSet, int value)
{
    inputSet.insert(value);
    return inputSet;
}

std::set<int> setOps::remove(std::set<int> inputSet, int value){
    inputSet.erase(value);
    return inputSet;
}
bool setOps::lookup(std::set<int> inputSet, int value){

    std::set<int>::iterator end = inputSet.end();
    std::set<int>::iterator pos = inputSet.find(value);
    return !(end == pos);
}
