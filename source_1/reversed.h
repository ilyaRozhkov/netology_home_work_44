#pragma once
#include <algorithm>
#include "decorator.h"

class Reversed : public Decorator {
public:
    explicit Reversed(IText* c) : Decorator(c) {}

    std::string render(const std::string& text) override {
        std::string result = component->render(text);
        std::reverse(result.begin(), result.end());
        return result;
    }
};
