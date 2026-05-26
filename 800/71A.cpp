#include <iostream>

int main()
{
    std::string word;
    int qtd, total;
    std::cin >> total;

    for (int i = 0; i < total; i++)
    {
        std::cin >> word;
        qtd = word.size();
        if (qtd > 10)
        {
            word = word[0] + std::to_string(qtd - 2) + word[qtd - 1];
            std::cout << word << std::endl;
        }

        else
            std::cout << word << std::endl;
    }

    return 0;
}