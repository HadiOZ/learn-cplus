#include<iostream>


int main(int carg, char** varg) {
    int number;
    int type;

    std::cout << "input some number : ";
    std::cin >> number;


    number % 2 == 0 ? std::cout << "Nomor Genap" << std::endl : std::cout << "Nomor Ganjil" << std::endl;
    
    if (number >= 0) {
        std::cout << "positif" << std::endl;
        type = 1;
    }
    else
    {
        std::cout << "negatif" << std::endl;
        type = 0;
    }

    switch (type)
    {
    case 1 :
        std::cout << "positif" << std::endl;
        break;

    case 0 :
        std::cout << "negatif" << std::endl;
        break;
    default:
        std::cout << "tidak diketahui" << std::endl;
        break;
    }

    return 0;
}

