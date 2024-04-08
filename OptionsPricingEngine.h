#ifndef OPTIONSPRICINGENGINE_H
#define OPTIONSPRICINGENGINE_H

#include <iostream>
#include <vector>

#include "Option.h"

class OptionsPricingEngine {

private:
    Option option;

public:
    OptionsPricingEngine();
    void setOption(const Option& option);
    double calculatePrice() const;
};

#endif // OPTIONSPRICINGENGINE_H