#include <iostream>
#include <vector>


std::vector<int> BubbleSort(std::vector<int>& vector_) {
  
    int t = 0;  // it's ok?
        
    for (size_t i=0; i < vector_.size(); ++i) {
        for (size_t j=1; j < vector_.size()-i; ++j) {
            if (vector_[j] < vector_[j-1]) {
                t = vector_[j-1];
                vector_[j-1] = vector_[j];
                vector_[j] = t;
                t = 0;
            }
        }
    }
        
    return vector_;
        
};


std::vector<int> HeapSort(std::vector<int>& vector_) {
    
}


int main() {
    
    std::vector<int> nums = {4, 1, 0, 3, 10};
    std::vector<int> test = {0, 1, 3, 4, 10};
    
    BubbleSort(nums);

    if (BubbleSort(nums) == test) {
    	std::cout << "True";
    }
    else std::cout << "False";
 
}
