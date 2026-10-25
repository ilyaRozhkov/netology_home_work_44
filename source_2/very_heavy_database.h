#pragma once
#include <string>

class VeryHeavyDatabase
{
public:
    std::string GetData(const std::string& key) const noexcept
    {
        return "Very Big Data String: " + key;
    }
};
