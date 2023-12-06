class Solution {
public:
    int totalMoney(int n) {
        int deposit = 1;
        int amount = 0;
        for (int i = 0; i < n; i++) {
            amount += deposit;
            deposit++;
            if (i % 7 == 0) {
                deposit = 1;  // Reset deposit to 1 on Monday
            }
        }
        return amount;
    }
};

//This is what I have so far but it's not working
// I sort of took sleeping pills so I can't really think so I'm gonna work on it tmr
