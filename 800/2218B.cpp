#include <iostream>
#include <bits/stdc++.h>

int main()
{
    int cases, result;
    std::vector<int> v(7);

    std::cin >> cases;

    for (int k = 0; k < cases; k++)
    {
        for (int i = 0; i < 7; i++)
        {
            std::cin >> v[i];
        }
        result = -accumulate(v.begin(), v.end(), 0) + *max_element(v.begin(), v.end()) * 2;
        std::cout << result << std::endl;
    }
}