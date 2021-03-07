#include <iostream>

int main(int argc, char *argv[]) {

    int star;
    std::cout << "jumlah bintang : ";
    std::cin >> star;
    for (int i = 1; i <= star; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    int j = 0;
    do
    {
        std::cout << ">" << j << "<" << std::endl;
        j++;
    } while (j < star);

    int m = 0;
    while (m < star)
    {
        std::cout << "<" << m << ">" << std::endl;
        m++;
    }
}