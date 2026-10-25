#pragma once
#include "decorator.h"

class Paragraph : public Decorator {
public:
    explicit Paragraph(IText* c) : Decorator(c) {}

    std::string render(const std::string& text) override {
        return "<p>" + component->render(text) + "</p>";
    }
};
