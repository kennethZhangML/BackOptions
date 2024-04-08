# Derivation of Binomial Option Pricing Model

## Introduction
The Binomial Option Pricing Model is a discrete-time model used for pricing options. In this paper, we will derive the Binomial Option Pricing Model.

## Derivation

Consider a European call option with strike price \( K \) and expiration time \( T \). Let \( S_t \) be the price of the underlying asset at time \( t \). The payoff of the call option at expiration is given by \( C = \max(S_T - K, 0) \).

We will construct a binomial tree to model the possible price movements of the underlying asset over time. Let \( u \) be the factor by which the asset price increases in one period, and \( d \) be the factor by which it decreases. We assume that \( u > 1 \) and \( d < 1 \).

At each step of the tree, the price of the underlying asset can either go up to \( S_tu \) or go down to \( S_td \). We also assume that the risk-free rate is \( r \).

To ensure no arbitrage opportunities, we need to choose \( u \) and \( d \) such that the expected return on the underlying asset matches the risk-free rate. This gives us the following equation:
\[
e^{r\Delta t} = pu + (1-p)d
\]
where \( p \) is the risk-neutral probability of an up movement, and \( \Delta t \) is the length of each time step.

We can solve for \( p \):
\[
p = \frac{e^{r\Delta t} - d}{u - d}
\]

Now, we can compute the option price at each node of the tree using backward induction. At the final step (expiration), the option price is simply the payoff:
\[
C_{n,i} = \max(S_{n,i} - K, 0)
\]
where \( n \) is the number of time steps and \( i \) is the index of the node.

At each previous step, the option price is the discounted expected value of the option price in the next period:
\[
C_{j,i} = e^{-r\Delta t}(pC_{j+1,i+1} + (1-p)C_{j+1,i})
\]
where \( j \) is the time step, \( i \) is the index of the node, and \( i+1 \) and \( i \) are the indices of the up and down nodes in the next period, respectively.

This recursive process continues until we reach the root of the tree, which gives us the initial option price.

This concludes the derivation of the Binomial Option Pricing Model.


# Derivation of Black-Scholes Formula using Risk-neutral Probability

## Introduction
In this paper, we will derive the Black-Scholes formula for European call options using the risk-neutral probability approach.

## Derivation

Consider a European call option with strike price \( K \) and expiration time \( T \). Let \( S_t \) be the price of the underlying asset at time \( t \). The payoff of the call option at expiration is given by \( C = \max(S_T - K, 0) \).

Under the risk-neutral probability measure, the discounted expected payoff of the call option is given by
\[
C = e^{-rT} \mathbb{E}^*[ \max(S_T - K, 0) ]
\]

To compute this expectation, we need the probability distribution of \( S_T \) under the risk-neutral measure. According to the Black-Scholes model, the dynamics of the underlying asset price \( S_t \) follow a geometric Brownian motion:
\[
dS_t = rS_t dt + \sigma S_t dW_t
\]
where \( r \) is the risk-free rate, \( \sigma \) is the volatility, and \( W_t \) is a Wiener process.

The solution to this stochastic differential equation is given by
\[
S_T = S_0 e^{(r - \frac{\sigma^2}{2})T + \sigma \sqrt{T}Z}
\]
where \( S_0 \) is the initial price of the asset and \( Z \sim \mathcal{N}(0,1) \).

Now, we compute the probability distribution of \( S_T \) under the risk-neutral measure. The risk-neutral probability density function is given by
\[
f(S_T) = \frac{1}{\sqrt{2\pi}\sigma \sqrt{T}} e^{-\frac{(ln(S_T/S_0) - (r - \frac{\sigma^2}{2})T)^2}{2\sigma^2T}}
\]

The risk-neutral probability of the underlying asset reaching a certain price \( X \) at time \( T \) is given by the cumulative distribution function:
\[
q = N(d_2)
\]
where
\[
d_2 = \frac{\ln(S_0/K) + (r - \frac{\sigma^2}{2})T}{\sigma\sqrt{T}}
\]

Finally, the Black-Scholes formula for the price of a European call option is given by
\[
C = S_0 N(d_1) - Ke^{-rT}N(d_2)
\]
where
\[
d_1 = \frac{\ln(S_0/K) + (r + \frac{\sigma^2}{2})T}{\sigma\sqrt{T}}
\]

This concludes the derivation of the Black-Scholes formula using risk-neutral probability.

# Derivation of Black-Scholes Model

## Introduction
The Black-Scholes model is a widely used mathematical model for pricing options. In this paper, we will derive the Black-Scholes model for a European call option.

## Derivation

Consider a European call option with strike price \( K \) and expiration time \( T \). Let \( S_t \) be the price of the underlying asset at time \( t \). The payoff of the call option at expiration is given by \( C = \max(S_T - K, 0) \).

The key assumptions of the Black-Scholes model are:
- Constant risk-free interest rate \( r \).
- Constant volatility \( \sigma \) of the underlying asset.
- Log-normal distribution of asset prices.

Under these assumptions, the dynamics of the underlying asset price \( S_t \) follow a geometric Brownian motion:
\[
dS_t = rS_t dt + \sigma S_t dW_t
\]
where \( W_t \) is a Wiener process.

The solution to this stochastic differential equation is given by:
\[
S_T = S_0 e^{(r - \frac{\sigma^2}{2})T + \sigma \sqrt{T}Z}
\]
where \( S_0 \) is the initial price of the asset, \( T \) is the time to expiration, and \( Z \) is a standard normal random variable.

The risk-neutral probability density function is given by:
\[
f(S_T) = \frac{1}{\sqrt{2\pi}\sigma \sqrt{T}} e^{-\frac{(ln(S_T/S_0) - (r - \frac{\sigma^2}{2})T)^2}{2\sigma^2T}}
\]

The risk-neutral probability of the underlying asset reaching a certain price \( X \) at time \( T \) is given by the cumulative distribution function:
\[
N(d_2) = \int_{-\infty}^{d_2} f(x) \,dx
\]
where
\[
d_2 = \frac{\ln(S_0/K) + (r - \frac{\sigma^2}{2})T}{\sigma\sqrt{T}}
\]

Finally, the Black-Scholes formula for the price of a European call option is given by:
\[
C = S_0 N(d_1) - Ke^{-rT}N(d_2)
\]
where
\[
d_1 = \frac{\ln(S_0/K) + (r + \frac{\sigma^2}{2})T}{\sigma\sqrt{T}}
\]

This concludes the derivation of the Black-Scholes model.
