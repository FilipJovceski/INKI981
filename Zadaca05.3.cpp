#include <iostream>
#include <cmath>
//Filip Jovcheski INKI981
using namespace std;

int Sobiranje(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return *a + *b;
}

int Odzemanje(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return *a - *b;
}

double Stepen(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return pow(*a, *b);
}

float Delenje(const void *num1, const void *num2)
{
    const int *a = static_cast<const int *>(num1);
    const int *b = static_cast<const int *>(num2);
    return static_cast<float>(*a) / static_cast<float>(*b);
}

void Cal (void *result, const void *num1, const void *num2, int (*func)(const void *, const void *))
{
    int *r = static_cast<int *>(result);
    *r = (*func)(num1, num2);
}

void Cal (void *result, const void *num1, const void *num2, float (*func)(const void *, const void *))
{
    float *r = static_cast<float *>(result);
    *r = (*func)(num1, num2);
}

void Cal (void *result, const void *num1, const void *num2, double (*func)(const void *, const void *))
{
    double *r = static_cast<double *>(result);
    *r = (*func)(num1, num2);
}

int main()
{
    int F = (int)'F', J = (int)'J';
    int result;
    float fresult;
    double dresult;

    Cal (&result, &F, &J, &Sobiranje);
    cout << F << " + " << J << " = " << result <<endl;

    Cal (&result, &F, &J, &Odzemanje);
    cout << F << " - " << J << " = " << result <<endl;

    Cal (&dresult, &F, &J, &Stepen);
    cout << F << " ^ " << J << " = " << dresult <<endl;

    Cal (&fresult, &F, &J, &Delenje);
    cout << F << " / " << J << " = " << fresult <<endl;
}