#include <iostream>
#include <vector>
#include <algorithm>

void read(std::vector<int> &vec) {
	int len;
	int k;
	std::cin >> len;
	for (int i = 0; i<len; i++) {
		std::cin >> k;
		vec.push_back(k);
	}
}

void print(const std::vector<int> &vec){
	int len = vec.size();
	for (int i = 0; i < len; i++) {
		std::cout << vec.at(i) << ' ';
	}
}

int main() {
	std::vector<int> vec;
	read(vec);
	std::sort(vec.begin(),vec.end());
	print(vec);
	return 0;
}
