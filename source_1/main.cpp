#include <iostream>
#include "text.h"
#include "paragraph.h"
#include "reversed.h"
#include "link.h"

int main() {
    {
        auto* text_block = new Paragraph(new Text());
        std::cout << text_block->render("Hello world") << std::endl;
        delete text_block;
    }
    {
        auto* text_block = new Reversed(new Text());
        std::cout << text_block->render("Hello world") << std::endl;
        delete text_block;
    }
    {
        auto* text_block = new Link(new Text());
        std::cout << text_block->render("netology.ru", "Hello world") << std::endl;
        delete text_block;
    }
    return 0;
}
