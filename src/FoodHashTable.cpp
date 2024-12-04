#include "FoodHashTable.h"

FoodHashTable::FoodHashTable(int size) :
    size(size),
    numFood(0),
    table(size) {}

int FoodHashTable::hashFunction(string key) {
    int hash = 0;
    for (char c : key) {
        int ascii = c;
        hash = hash * 31 + ascii;
    }

    return (hash % size + size) % size;
}

void FoodHashTable::insert(string key, Food food) {
    int hash = hashFunction(key);
    for (auto& pair : table[hash]) {
        if (key == pair.first) {
            pair.second = food;
            return;
        }
    }

    table[hash].emplace_back(key, food);
    numFood++;

    // Handle resizing if load factor > 0.75
    if (static_cast<float>(numFood) / size > 0.75) {
        vector<vector<pair<string, Food>>> newTable(size * 2);

        for (auto& bucket : table) {
            for (auto& pair : bucket) {
                int newIndex = hashFunction(pair.first) % (size * 2);
                newTable[newIndex].emplace_back(pair.first, pair.second);
            }
        }

        table = newTable;
        size = size * 2;
    }
}

void FoodHashTable::remove(string key) {
    int hash = hashFunction(key);
    for (auto it = table[hash].begin(); it != table[hash].end(); it++) {
        if (key == it->first) {
            table[hash].erase(it);
            numFood--;
            return;
        }
    }

    cout << "Key not found" << endl;
}

optional<Food> FoodHashTable::getFood(string key) {
    int hash = hashFunction(key);
    for (auto& pair : table[hash]) {
        if (key == pair.first) {
            return pair.second;
        }
    }

    return nullopt;
}

vector<Food> FoodHashTable::filter(string filterValue) {

    vector<Food> foods;

    for (const auto& row : table) {
        for (const auto& pair : row) {
            foods.push_back(pair.second);
        }
    }

    if (filterValue == "fiber") {
        sort(foods.begin(), foods.end(), [](Food food1, Food food2) {
            return food1.getFiber() < food2.getFiber();
        });
    }
    if (filterValue == "protein") {
        sort(foods.begin(), foods.end(), [](Food food1, Food food2) {
            return food1.getProtein() < food2.getProtein();
        });
    }
    if (filterValue == "sodium") {
        sort(foods.begin(), foods.end(), [](Food food1, Food food2) {
            return food1.getSodium() < food2.getSodium();
        });
    }
    if (filterValue == "sugars") {
        sort(foods.begin(), foods.end(), [](Food food1, Food food2) {
            return food1.getSugars() < food2.getSugars();
        });
    }
    if (filterValue == "fats") {
        sort(foods.begin(), foods.end(), [](Food food1, Food food2) {
            return food1.getSatFats() < food2.getSatFats();
        });
    }
    if (filterValue == "energy") {
        sort(foods.begin(), foods.end(), [](Food food1, Food food2) {
            return food1.getEnergy() < food2.getEnergy();
        });
    }
    return foods;
}

vector<Food> FoodHashTable::searchByFiber(const float fiberCount) {
    vector<Food> result;
    for (const auto& row : table) {
        vector<pair<string, Food>> newRow = row;
        for (auto& pair : newRow) {
            if (fiberCount == pair.second.getFiber()) {
                result.push_back(pair.second);
            }
        }

    }
    return result;
}

vector<Food> FoodHashTable::searchByProtein(const float proteinCount) {
    vector<Food> result;
    for (const auto& row : table) {
        vector<pair<string, Food>> newRow = row;
        for (auto& pair : newRow) {
            if (proteinCount == pair.second.getProtein()) {
                result.push_back(pair.second);
            }
        }

    }
    return result;
}

vector<Food> FoodHashTable::searchBySodium(const float sodiumCount) {
    vector<Food> result;
    for (const auto& row : table) {
        vector<pair<string, Food>> newRow = row;
        for (auto& pair : newRow) {
            if (sodiumCount == pair.second.getSodium()) {
                result.push_back(pair.second);
            }
        }

    }
    return result;
}

vector<Food> FoodHashTable::searchBySugars(const float sugarCount) {
    vector<Food> result;
    for (const auto& row : table) {
        vector<pair<string, Food>> newRow = row;
        for (auto& pair : newRow) {
            if (sugarCount == pair.second.getSugars()) {
                result.push_back(pair.second);
            }
        }

    }
    return result;
}

vector<Food> FoodHashTable::searchBySatFats(const float satFatCount) {
    vector<Food> result;
    for (const auto& row : table) {
        vector<pair<string, Food>> newRow = row;
        for (auto& pair : newRow) {
            if (satFatCount == pair.second.getSatFats()) {
                result.push_back(pair.second);
            }
        }

    }
    return result;
}

vector<Food> FoodHashTable::searchByEnergy(const float energyCount) {
    vector<Food> result;
    for (const auto& row : table) {
        vector<pair<string, Food>> newRow = row;
        for (auto& pair : newRow) {
            if (energyCount == pair.second.getEnergy()) {
                result.push_back(pair.second);
            }
        }

    }
    return result;
}

