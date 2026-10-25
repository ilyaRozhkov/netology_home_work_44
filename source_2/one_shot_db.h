#pragma once
#include <cstddef>
#include <string>
#include "very_heavy_database.h"

class OneShotDB : VeryHeavyDatabase 
{
    VeryHeavyDatabase* real_object;
    mutable std::size_t shots;

public:
    explicit OneShotDB(VeryHeavyDatabase* real_object, std::size_t shots = 1) 
        : real_object(real_object), shots(shots) {}

    std::string GetData(const std::string& key) const noexcept 
    {
        if (shots > 0) 
        {
            --shots;
            return real_object->GetData(key);
        }
        return "error";
    }
};
