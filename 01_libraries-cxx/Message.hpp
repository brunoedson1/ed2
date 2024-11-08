#pragma once

#include <string>

class Message {
public:
    Message(const std::string& text);
    std::string getText() const;

private:
    std::string text;
};
