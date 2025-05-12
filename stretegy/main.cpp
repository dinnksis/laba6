#include <iostream>

#include "quick.hpp"
#include "std.hpp"
#include "buble.hpp"
#include "sorter.hpp"
#include "new.hpp"
#include <vector>

void print (const std::vector<int>& data) {
    for (int i=0;i<data.size();i++){
        std::cout<<data[i]<<" ";
    }
    std::cout<<std::endl;
    std::cout<<std::endl;
}

int main(){

    std::vector <int> data = {1,5,3,9,6,2,7,4,1,5,9,7,4,2,2,5,3,1,6,9,15,9,475,773,22};
    BubbleSortStrategy* buble = new BubbleSortStrategy();
    QuickSortStrategy* quick = new QuickSortStrategy();
    StdSortStrategy* std = new StdSortStrategy();
    InsertSortStrategy* insert = new InsertSortStrategy();
    std::vector <int> d_buble = data;
    std::vector <int> d_quick = data;
    std::vector <int> d_std = data;
    std::vector <int> d_insert = data;
    

    Sorter* sorter = new Sorter(buble);

    std::cout<<"before sorting:"<<std::endl;
    print(data);

    //bublesort
    std::cout<<"bublesort:"<<std::endl;
    sorter->SortData(d_buble);
    print(d_buble);

    //change,quicksort
    std::cout<<"quicksort:"<<std::endl;
    sorter->SetStrategy(quick);
    sorter->SortData(d_quick);
    print(d_quick);

    //stdsort
    std::cout<<"stdsort:"<<std::endl;
    sorter->SetStrategy(std);
    sorter->SortData(d_std);
    print(d_std);

    //insertsort
    std::cout<<"insertsort:"<<std::endl;
    sorter->SetStrategy(insert);
    sorter->SortData(d_insert);
    print(d_insert);


    delete buble;
    delete quick;
    delete std;
    delete insert;
    delete sorter;
}