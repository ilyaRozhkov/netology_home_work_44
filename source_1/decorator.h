#pragma once
#include "text.h"

class Decorator : public IText {
protected:
    IText* component;
public:
    explicit Decorator(IText* c) : component(c) {}

    std::string render(const std::string& text) override {
        return component->render(text);
    }

    virtual ~Decorator() { delete component; }
};
