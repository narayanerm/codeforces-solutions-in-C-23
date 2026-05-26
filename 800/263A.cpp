#include <iostream>
#include <vector>

int main()
{
    int beautiful_column = 0, beautiful_row = 0;
    std::vector<int> row(5);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> row[j];
            if (row[j] == 1)
            {
                beautiful_row = i;
                beautiful_column = j;
            }
        }
    }

    std::cout << abs(2 - beautiful_column) + abs(2 - beautiful_row) << std::endl;
}