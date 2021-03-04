#include <iostream>
  
int main()
{
        long long n, ans;
        std::cin >> n;

     	ans = n % 2 == 0 ? n/2 : (-1) * ((n+1)/2);

        std::cout << ans << std::endl;
        return 0;

}
