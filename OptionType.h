#ifndef OPTION_TYPE_H
#define OPTION_TYPE_H

#include <string>

class OptionType {
private:
    std::string type;

public:
    OptionType(const std::string& type);
    std::string getType() const;
    void setType(const std::string& type);
};

#endif // OPTION_TYPE_H
