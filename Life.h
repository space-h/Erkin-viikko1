#pragma once
#include <vector>

using namespace std;

class Life {
public:
    void initialize();
    void print();
    void update();
private:
    vector<vector<int>> grid;  //  allows for two extra rows and columns
    int maxrow, maxcol;
    int neighbor_count(int row, int col);
};