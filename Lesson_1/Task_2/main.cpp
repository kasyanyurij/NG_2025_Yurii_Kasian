#include <iostream>
#include <cmath>

int main()
{
    int a;
    int b;
    char diya;
    std::cout << "Перше число: ";
    std::cin >> a;
    std::cout << "Дія(+, -, *, /, k(квадрат), s(степінь)): ";
    std::cin >> diya;
    if (diya=='*' || diya=='/' || diya=='+' || diya=='-'){
        std::cout << "Друге число: ";
        std::cin >> b;
    }

    switch(diya){
    case '*':
        std::cout << a*b << std::endl;
        break;
    case '/':
        if (b==0)
            std::cout << "error" << std::endl;
        else
            std::cout << a/b << std::endl;
        break;
    case '+':
        std::cout << a+b << std::endl;
        break;
    case '-':
        std::cout << a-b << std::endl;
        break;
    case 'k':
        std::cout << a*a << std::endl;
        break;
    case 's':
        if (a<0)
            std::cout << "error" << std::endl;
        else
            std::cout << pow(a, 1/2) << std::endl;
        break;
    default:
        std::cout << "error" << std::endl;
    }
    return 0;
}
