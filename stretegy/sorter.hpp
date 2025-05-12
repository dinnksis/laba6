#pragma once
#include "sorting.hpp"

class Sorter{
    public:
        Sorter(SortingStrategy* ss):ss(ss) {};
        void SortData(std::vector<int>& data){
            ss->sort(data);
        }

        void SetStrategy(SortingStrategy* new_ss){
            ss=new_ss;
        }
    private:
        SortingStrategy* ss;
};