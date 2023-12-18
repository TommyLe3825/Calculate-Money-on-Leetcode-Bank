#include <string>
#include <iostream>

class Solution {
public:
    int totalMoney(int n) {
        int deposit = 1; //First Monday
        int amount = 0;

        for (int i = 0; i < n; i++) {
            amount += deposit;
            deposit++; //from Tuesday to Sunday, he is putting 1 more in than the previous day

            // Check if it's Monday as i starts at 0 so it ensures i+1 will be 7 at 6
            if ((i + 1) % 7 == 0) {
                deposit = i / 7 + 2;  // Increment deposit on each following Monday so like on 7 for next Monday, it would be 2
                //std::cout << "deposit: " << deposit << std::endl;
            }
        }

        return amount;
    }
};

int main()
{
    Solution bank;
    int days = 0;
    std::cout << "How much days will Hercy deposit his money? " << std::endl;
    std::cin >> days;
    std::cout << "\nThe Amount at the moment: $" << bank.totalMoney(days);
}
