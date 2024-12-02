#include <iostream>
#include <algorithm>
#include <vector>

int main(){

    int a, i = 0;
    std::vector<int> left, right;
    while (std::cin >> a){

        if (i % 2 == 0){
            left.push_back(a);
        }
        else{
            right.push_back(a);
        }
        i++;

    }
    
    //sort so you can match them
    std::sort(left.begin(), left.end());
    std::sort(right.begin(), right.end());
    
    int ans = 0;
    for (int i = 0; i < left.size(); i++){
        ans += abs(left[i] - right[i]);
    }
    
    std::cout << ans;

}