#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

typedef vector<int> vi;

//using hash map
//time complexity O(n)

vi twoSum(vi& nums, int& target){
    unordered_map<int, int> seen;

    for(int i= 0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(seen.find(complement) != seen.end()){
            return{seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main(){
    vi vector = {3,4,5,6};
    int target = 7;
    cout << "Two Sum\n";

    for(int n : vector){
        cout << n << " ";
    }
    cout << "\n";
    vi result = twoSum(vector, target);
    if(!result.empty()){
        cout <<  result[0] << " "<< result[1];
    }else{
        cout << "There's not result";
    }

    return 0;
}
