#pragma once
#include "decorator.h"

class Link : public Decorator {
public:
    explicit Link(IText* c) : Decorator(c) {}

    std::string render(const std::string& text) override {
        return component->render(text);
    }

    std::string render(const std::string& url, const std::string& text) {
        return "<a href=" + url + ">" + component->render(text) + "</a>";
    }
};
