#include <iostream>

int main()
{
	int n, maxIncSeq = 1, currentSeq = 1;
	
	// read input size
	std::cin >> n;
	
	// input array
	int nums[n];
	// read first val to array
	std::cin >> nums[0];
	
	for (int i = 1; i < n; i++) {
		// read in data to array
		std::cin >> nums[i];
		// process data
		if (nums[i] >= nums[i-1]) {
			currentSeq++;
		} else {
			currentSeq = 1;
		}

		if (currentSeq > maxIncSeq) maxIncSeq = currentSeq;
	}
	
	std::cout << maxIncSeq << std::endl;
	return 0;
}
