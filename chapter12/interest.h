#ifndef INTEREST_H
#define INTEREST_H

// Macro to calculate Simple Interest
#define SIMPLE_INTEREST(p, r, t) (((p) * (r) * (t)) / 100.0)

// Macro to calculate Amount (Principal + Simple Interest)
#define AMOUNT(p, r, t) ((p) + SIMPLE_INTEREST(p, r, t))

#endif // INTEREST_H
