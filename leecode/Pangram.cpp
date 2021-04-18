//#include<stdlib.h>
#include<cstdlib>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26)
            return false;
        vector<int> v(26,0);
        for(int i = 0; i < sentence.size(); i++){
            v[sentence[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(v[i] == 0) return false;
        }
        return true;
    }
};
int main(){
	Solution sol;
	cout<<sol.checkIfPangram("abc")<<endl;
	cout<<sol.checkIfPangram("thequickbrownfoxjumpsoverthelazydog")<<endl;
}
