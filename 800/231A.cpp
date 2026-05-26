#include <iostream>

int main(){
    int total, Ptya, Vasya, Tonya, solutions=0;
    std::cin >> total;

    for(int i=0; i<total; i++){
        std::cin >> Ptya >> Vasya >> Tonya;
        if(Ptya+Vasya+Tonya>1) solutions++;
    }

    std::cout << solutions << std::endl;
}