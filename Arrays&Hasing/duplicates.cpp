#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std;

typedef vector<int> vi;


//Using brute force
bool hasDuplicate1(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i <n -1; i++)
        for(int j = i + 1; j < n; j++)
            if(nums[j] == nums[i])
                return true;
    return false;
}



//Using sorting 
bool hasDuplicate2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++)
            if(nums[i] == nums[i + 1]){
                return true;
            }
        return false;
    }

//Usign hash set
bool hasDuplicate3(vector<int>& nums) {
    unordered_set<int> seen(nums.begin(), nums.end());
    return seen.size()!= nums.size(); //if size are different then there are duplicates

}
    
int main() {
    vector<int> myVec = {4, 1, 2, 3, 4};
    
    cout << "Brute Force: ";
    cout << hasDuplicate1(myVec) << "\n"; 
    cout << "Sorting: ";
    cout << hasDuplicate2(myVec) << "\n"; 
    cout << "Hash set: ";
    cout << hasDuplicate3(myVec) << "\n"; 

    return 0;
}
