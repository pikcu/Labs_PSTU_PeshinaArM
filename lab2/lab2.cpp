#include <iostream>
#include <clocale>
using namespace std;

// Найти сумму ряда с точностью 0.0001, общий член ряда: a = n^3 / (3n-3)!
// a(n+1) = a(n) * (n+1)^3 / n^3 / ((3n-2) * (3n-1) * 3n)

int main()
{
    setlocale(LC_ALL, "ru");
    double eps = 0.0001;   // точность
    double a = 1;          // первый член ряда (n = 1)
    double s = 0;          // сумма
    double n = 1;          // номер члена ряда

    while (a >= eps)
    {
        s = s + a;
        std::cout << "n = " << n << "  a = " << a << std::endl;

        a = a * (n + 1) * (n + 1) * (n + 1) / (n * n * n) / ((3 * n - 2) * (3 * n - 1) * (3 * n));
        n = n + 1;
    }

    std::cout << "Сумма ряда S = " << s << std::endl;
    return 0;
}
