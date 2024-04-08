#ifndef OPTION_H
#define OPTION_H

#include "OptionType.h"

class Option {
private:
    double underlyingPrice;
    double strikePrice;
    double timeToExpiration;
    double volatility;
    double riskFreeRate;
    OptionType type;

public:
    Option(double underlyingPrice, double strikePrice, double timeToExpiration,
           double volatility, double riskFreeRate, const OptionType& type);
           
    double getUnderlyingPrice() const;
    void setUnderlyingPrice(double price);
    double getStrikePrice() const;
    void setStrikePrice(double price);
    double getTimeToExpiration() const;
    void setTimeToExpiration(double time);
    double getVolatility() const;
    void setVolatility(double volatility);
    double getRiskFreeRate() const;
    void setRiskFreeRate(double rate);
    OptionType getType() const;
    void setType(const OptionType& type);
};

#endif // OPTION_H
