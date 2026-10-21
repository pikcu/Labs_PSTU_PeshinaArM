#include <iostream>

// 1) n++*m   2) n++<m   3) m-- >m

int main()
{
    int n, m, r;
    int n0, m0;

    std::cin >> n0;
    std::cin >> m0;

    // 1) n++*m
    n = n0;
    m = m0;
    r = n++ * m;
    std::cout << "n++*m = " << r << ", n = " << n << ", m = " << m << std::endl;

    // 2) n++<m
    n = n0;
    m = m0;
    r = n++ < m;
    std::cout << "n++<m = " << r << ", n = " << n << ", m = " << m << std::endl;

    // 3) m-- >m  (сначала сравнивается старое m, потом m уменьшается)
    n = n0;
    m = m0;
    int old = m;
    m--;
    r = old > m;
    std::cout << "m-- >m = " << r << ", n = " << n << ", m = " << m << std::endl;

    return 0;
}
