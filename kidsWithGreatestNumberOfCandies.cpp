class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        char max = 0;
        vector<bool> greatestCandies;
        for(char i = 0; i < candies.size(); i++)
        {
            if (candies[i] > max) max = candies[i];
        }
        for(char i = 0; i < candies.size(); i++)
        {
            if(candies[i] + extraCandies >= max) greatestCandies.emplace(greatestCandies.begin()+i, true);
            else greatestCandies.emplace(greatestCandies.begin()+i, false);
        }
        return greatestCandies;
    }
};