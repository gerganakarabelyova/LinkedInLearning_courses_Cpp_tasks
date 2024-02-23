#include <iostream>
#include <vector>

bool is_bitonic(const std::vector<int> &v){
    int k;
    int pos;
    bool truth=true;
    if(v.size()<2) truth=true;
    for(int i=0; i<v.size()-1; i++){
        if(v[i]>=v[i+1]) 
        {
            k=v[i];
            pos=i;
            for(int i=pos; i<v.size()-1; i++){
                if(v[i]<v[i+1]) 
                {
                    truth = false;
                }
            }
        }
    }
    return truth;
}

int main(){
    
    //std::vector<int> myvec = {1, 2, 5, 4, 3};  // Yes
    //std::vector<int> myvec = {1, 1, 1, 1, 1};  // Yes
    // std::vector<int> myvec = {3, 4, 5, 2, 2};  // Yes
    // std::vector<int> myvec = {3, 4, 5, 2, 4};  // No
    // std::vector<int> myvec = {1, 2, 3, 4, 5};  // Yes
    // std::vector<int> myvec = {1, 2, 3, 1, 2};  // No
    // std::vector<int> myvec = {5, 4, 6, 2, 6};  // No
    // std::vector<int> myvec = {5, 4, 3, 2, 1};  // Yes
    // std::vector<int> myvec = {5, 4, 3, 2, 6};  // Yes
    // std::vector<int> myvec = {5, 4, 6, 5, 4};  // No
    // std::vector<int> myvec = {5, 4, 6, 5, 5};  // Yes

    std::cout << (is_bitonic(myvec) == true ? "Yes, it is bitonic." : "No, it is not bitonic.");
    std::cout << std::endl << std::endl << std::flush;
    return 0;
}
