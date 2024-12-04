#ifndef FOODHASHTABLE_H
#define FOODHASHTABLE_H

#include <string>
#include <vector>
#include <utility>
#include <optional>
#include <iostream>
#include "Food.h"
#include <algorithm>

using namespace std;

class FoodHashTable {
    int size;
    int numFood;
    vector<vector<pair<string, Food>>> table;
public:
    FoodHashTable(int size);
    int hashFunction(string key);
    void insert(string key, Food food);
    void remove(string key);
    optional<Food> getFood(string key);
    vector<Food> filter(string filterValue);
    vector<Food> searchByFiber(float fiberCount);
    vector<Food> searchByProtein(float proteinCount);
    vector<Food> searchBySodium(float sodiumCount);
    vector<Food> searchBySugars(float sugarCount);
    vector<Food> searchBySatFats(float satFatCount);
    vector<Food> searchByEnergy(float energyCount);
};

#endif
