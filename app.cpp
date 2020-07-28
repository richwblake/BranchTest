#include <iostream>
#include <vector>

int reduce(std::vector<int> v)
{
    int sum = 0;
    for(int number : v)
    {
        sum += number;
    }
    return sum;
}


int main()
{
    std::vector<int> v = {1, 2, 3, 4};
    
    std::cout << "The sum of the values in vector [1, 2, 3, 4] = " << reduce(v) << std::endl;

    return 0;
}