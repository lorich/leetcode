// 406. Queue Reconstruction by Height
// https://leetcode.com/problems/queue-reconstruction-by-height/
// 

class Solution {
public:
	vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
		auto comp = [](const pair<int, int>& a, const pair<int, int>& b) {return a.first > b.first || (a.first == b.first && a.second < b.second);};
		sort(people.begin(), people.end(), comp);
		vector<pair<int, int>> res;
		for(const auto& p:people)
			res.insert(res.begin()+p.second, p);
		return res;
	}
};

/*
Suppose you have a random list of people standing in a queue. Each person is described by a pair of integers (h, k), where h is the height of the person and k is the number of people in front of this person who have a height greater than or equal to h. Write an algorithm to reconstruct the queue. Note: The number of people is less than 1,100. Example 
Input:
[[7,0], [4,4], [7,1], [5,0], [6,1], [5,2]]

Output:
[[5,0], [7,0], [5,2], [6,1], [4,4], [7,1]]
 Subscribe to see which companies asked this question. Show Tags Greedy Show Similar Problems (H) Count of Smaller Numbers After Self
*/
