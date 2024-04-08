#include "Option.h"

Option::Option(double up, double sp, double tte, double vt,
               double rfr, const OptionType& type)
    : underlyingPrice(up), strikePrice(sp), timeToExpiration(tte), volatility(vt), riskFreeRate(rfr), type(type) {}

