#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

int main(){

    int a, i = 0;
    std::vector<int> left, right;
    std::map<int, int> cnt; //maintain freq map
    while (std::cin >> a){

        if (i % 2 == 0){
            left.push_back(a);
        }
        else{
            right.push_back(a);
            cnt[a]++;
        }
        i++;

    }
    
    //add up answer
    int ans = 0;
    for (int i = 0; i < left.size(); i++){
        ans += left[i] * cnt[left[i]];
    }
    
    std::cout << ans;

}