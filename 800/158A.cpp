#include <iostream>

int main()
{
    int participants_n, position_k, points, classified = 0, recap_points;

    std::cin >> participants_n >> position_k;

    for (int i = 0; i < position_k; i++)
    {
        std::cin >> points;
        if (points > 0)
            classified++;
        else
            break;
    }
    while (std::cin >> recap_points && recap_points == points && points > 0)
    {
        classified++;
    }

    std::cout << classified << std::endl;
    return 0;
}