#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

//Using hash map 
//time complexity O(n) 
//space complexity O(1)
bool isAnagram(string s, string t) {
        unordered_map<char, int> count;
        for(char c : s){
            count[c]++;
        }
        for(char c : t){
            count[c]--;
            if(count[c] < 0)
                return false;
        }

        for(auto& [ch, cnt] : count){
            if(cnt != 0) return false;
        }
        return true;
    }
int main(){
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s, t) << "\n"; // Output: 1 (true)
    return 0;
}