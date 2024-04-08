#include "OptionType.h"

#include <string>

OptionType::OptionType(const std::string& type) : type(type) {}

std::string OptionType::getType() const {
    return this->type;
}

void OptionType::setType(const std::string& type) {
    this->type = type;
}

