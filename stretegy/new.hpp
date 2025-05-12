#pragma once
#include <vector>
#include "sorting.hpp"

class InsertSortStrategy : public SortingStrategy {
    void sort(std::vector<int>& data) override {
        for (size_t i = 1; i < data.size(); i++) {  
            int glavn= data[i];  
            int j = i - 1;   

            
            while (j >= 0 && data[j] > glavn) {  
                data[j + 1] = data[j];      
                j--;   
            }
            data[j + 1] =glavn;
        }
    }
};