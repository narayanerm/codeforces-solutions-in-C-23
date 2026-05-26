#include <iostream>

int main()
{
    int variable = 0, total;
    std::string operation;
    std::cin >> total;

    for (int i = 0; i < total; i++)
    {
        std::cin >> operation;
        if (operation == "X++" || operation == "++X")
            variable += 1;
        if (operation == "--X" || operation == "X--")
            variable -= 1;
    }

    std::cout << variable << std::endl;
}