#include <iostream>

int main() {
	const int ARR_LENGTH = 5;
	int arr[ARR_LENGTH] = {};
	for (int i = 0; i < ARR_LENGTH; i++) {
		std::cout << "Input an integer for array index " << i << ": ";
		std::cin >> arr[i];
	}

	int sum = 0;
	int min = arr[0];
	int max = arr[0];
	for (int num : arr) {
		sum += num;

		if (min > num) {
			min = num;
		}

		if (max < num) {
			max = num;
		}
	}

	std::cout << "The sum of elements is: " << sum << std::endl;
	std::cout << "The min is: " << min << std::endl;
	std::cout << "The max is: " << max << std::endl;
	std::cout << "The elements in reverse order is..." << std::endl;

	for (int i = ARR_LENGTH - 1; i >= 0; i--) {
		std::cout << arr[i] << std::endl;
	};

	return 0;
}