#pragma once
#include <algorithm>
#include "sorting.hpp"

class StdSortStrategy:public SortingStrategy{
    void sort (std::vector<int>& data) override {
        std::sort(data.begin(),data.end());
    }
};