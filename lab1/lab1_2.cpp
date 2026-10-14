#include <iostream>
#include <cstdlib>

// 1) n++*m   2) n++<m   3) m-- >m

int main(int argc, char* argv[])
{
    int n0 = 0, m0 = 0;
    int n, m, r;

    if (argc >= 3)     // значения заданы аргументами командной строки
    {
        n0 = std::atoi(argv[1]);
        m0 = std::atoi(argv[2]);
    }
    else            // ввод с клавиатуры
    {
        std::cout << "Введите n: " << std::flush;
        if (!(std::cin >> n0))
        {
            std::cout << "Ошибка. n должна быть интегрирована\n";
            return 1;
        }
        std::cout << "Введите m: " << std::flush;
        if (!(std::cin >> m0))
        {
            std::cout << "Ошибка. m должна быть интегрирована\n";
            return 1;
        }
    }
    std::cout << "n = " << n0 << ", m = " << m0 << "\n\n";

    // 1) n++*m : берётся старое n, затем n увеличивается на 1
    n = n0; m = m0;
    r = n++ * m;
    std::cout << "1) n++*m  = " << r << "\n";

    // 2) n++<m : сравнивается старое n с m, затем n увеличивается на 1
    n = n0; m = m0;
    r = n++ < m;
    std::cout << "2) n++<m  = " << r << "\n";

    // 3) m-- >m : слева старое значение m, справа уже уменьшенное.
    n = n0; m = m0;
    int old = m;        // значение, которое вернёт m--
    m = m - 1;  
    r = old > m;
    std::cout << "3) m-- >m = " << r << "\n";

    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cin.get();
    return 0;
}
