#include <iostream>     
#include <algorithm>    
#include <vector>       

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> heights (n);
    // read in data
    for (int i = 0; i < n; i++) std::cin >> heights[i];

    // flip gravity
    std::sort(heights.begin(), heights.begin() + n);

    // output result
    for (int i = 0; i < heights.size(); i++)  
    {
        std::cout << heights[i];
        if (i != heights.size()-1) std::cout << " ";
    }

    std::cout << std::endl;

    return 0;
}
