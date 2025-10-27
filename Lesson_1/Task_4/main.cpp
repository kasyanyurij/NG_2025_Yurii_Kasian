#include <iostream>
#include <string>

int main(){
    int k;
    char z='*';
    std::cout<<"max кількість зірочок:";
    std::cin>>k;
    if (k<0){
            std::cout<<"error";
    }
    for (int i=0; i<=k; i++){
        std::string fig(i, z);
        std::cout << fig << std::endl;
    }
    return 0;
}
