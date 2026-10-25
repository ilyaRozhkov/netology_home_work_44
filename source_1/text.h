#pragma once
#include <string>

class IText {
public:
    virtual std::string render(const std::string& text) = 0;
    virtual ~IText() = default;
};

class Text : public IText {
public:
    std::string render(const std::string& text) override {
        return text;
    }
};
