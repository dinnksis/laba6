#pragma once
#include "sorting.hpp"
#include <algorithm>

class QuickSortStrategy:public SortingStrategy{
    void sort (std::vector<int>& data) override {
        quick(data,0,data.size()-1);

    }

    void quick(std::vector<int>& d,int beg,int end){
        if (beg<end){
            int Idx=partition(d,beg,end);
            quick(d,beg,Idx-1);
            quick(d,Idx+1,end);
        }
    }

    int partition(std::vector<int>& d, int beg ,int end){
        int glavn=d[end];
        int i=beg-1;
        for (int j=beg;j<end;j++){
            if (d[j]<glavn){
                i++;
                std::swap(d[i],d[j]);
            }

        }

        std::swap(d[end],d[i+1]);
        return i+1;
    }
    
};