#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;

    int reps;
    std::cin >> reps;
    for(int i = 0; i < reps - 1; i++) {
        int tmp;
        std::cin >> tmp;
        nums.push_back(tmp);
    }

    for(int i = 1; i <= reps; i++) {
        int count = 0;
        for(int num : nums) {
            if(i == num) {
                count++;
            }
        }
        if(count == 0) {
            std::cout << i;
        }
    }
    
    return 0;
}

