#include <QCoreApplication>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int k;
    char z='*';
    std::cout<<"max кількість зірочок:";
    std::cin>>k;
    if (k<0){
        std::cout<<"error";
    }
    for (int i=0; i<=k; i++){
        std::string fig_t(i, z);
        std::cout << fig_t << std::endl;
    }
    std::cout<<"\n";
    std::string fig_p(k, z);
    for (int j = 0; j < k; j++){
            std::cout << fig_p << std::endl;
    }
    return a.exec();
}
