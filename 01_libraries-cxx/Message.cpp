#include "Message.hpp"

Message::Message(const std::string& text) : text(text) {}

std::string Message::getText() const {
    return text;
}
