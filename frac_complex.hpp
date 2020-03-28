//header file for rational complex fractions
//function declaration
//struct FractionComplex

struct FractionComplex
{
    Fraction re;
    Fraction im;
};

FractionComplex fraction_complex_plus(FractionComplex self, FractionComplex other);

void fraction_complex_print(FractionComplex a);