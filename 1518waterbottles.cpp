class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int num = numBottles;
        while (numBottles >= numExchange)
        {
            int newBottles = numBottles / numExchange;
            num += newBottles;
            numBottles = newBottles + numBottles % numExchange;
        }
        return num;
    }
};