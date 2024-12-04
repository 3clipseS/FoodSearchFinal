//
// Created by Weston Trefry on 11/30/24.
//
#include <iostream>
#include <string>
#include <sstream>
#include "Food.h"
#include "FoodGraph.h" //add header file - ShanonB
#include "FoodHashTable.h"]
#include <chrono>

using namespace std::chrono;

// Refactor please
void outputCSV(std::vector<Food>& foundFoods)
{

    std::ofstream outputFile("../data/GraphOutputData.csv");

    if (!outputFile.is_open())
    {
        std::cerr << "Failed to open the file for writing." << std::endl;
        return;
    }

    std::stringstream ss;
    ss << "Food Description,Fiber,Protein,Sodium,Sugars,Saturated Fat,Energy\n";

    for (const Food food : foundFoods)
    {
        ss << "\"" << food.getDescription() << "\","
           << food.getFiber() << ","
           << food.getProtein() << ","
           << food.getSodium() << ","
           << food.getSugars() << ","
           << food.getSatFats() << ","
           << food.getEnergy() << "\n";
    }

    outputFile << ss.str();
    outputFile.close();

    std::cout << "CSV file has been successfully written." << std::endl;
}

int main() {
    /*=== Instantiate Data Structure Objects ===*/
    // Create Table Object
    // HashTable foodTable;
    FoodGraph foodGraph; // Create Graph Object - added ShanonB

    FoodHashTable foodHashTable(10);

    /*=== Load Data from FoodData.csv ===*/
    // Create Food class object
    Food food;
    // Read file using Food::readFile function and pushback onto vector
    std::vector<Food*> foods;
    foods = food.readFile("../data/FoodData.csv");
    // Iterate over vector and build both data structures item by item
    for (Food* food : foods) {
        foodGraph.addFood(food); //insert food data into graph added ShanonB

        foodHashTable.insert(food->getDescription(), *food); // Function takes in description of the food item in csv and then the food item
    }

    /*=== Main logic loop ===*/
    while (true) {
        cout << "Select data structure you would like to use" << endl;
        cout << "1. Graph" << endl;
        cout << "2. HashTable" << endl;

        int userInput;
        cin >> userInput;

        if (userInput == 1) {
            cout << "Enter the action you would like to do with this data structure" << endl;
            cout << "1. Search for a food" << endl;
            cout << "2. Filter" << endl;
            cin >> userInput;
            if (userInput == 1) {
                cout << "Enter the parameter you would like to search for" << endl;
                cout << "1. Search by description" << endl;
                cout << "2. Search by fiber count" << endl;
                cout << "3. Search by protein count" << endl;
                cout << "4. Search by sodium" << endl;
                cout << "5. Search by sugars" << endl;
                cout << "6. Search by saturated fats" << endl;
                cout << "7. Search by energy" << endl;
                cin >> userInput;

                if (userInput == 1) {
                    cout << "Enter if you would like to search for an exact match or search for partial" << endl;
                    cout << "1. Search for exact match" << endl;
                    cout << "2. Search for partial match" << endl;

                    cin >> userInput;
                    string foodName;
                    if (userInput == 1) {
                        cout << "Enter the exact match description" << endl;
                        cin >> foodName;
                        auto start = high_resolution_clock::now();
                        foodGraph.search_by_name(foodName);
                        auto stop = high_resolution_clock::now();
                        auto duration = duration_cast<microseconds>(stop - start);
                        cout << "This operation took " << duration.count() << " microseconds." << endl;
                        break;
                    }
                    if (userInput == 2) {
                        cout << "Enter the partial match description" << endl;
                        cin >> foodName;
                        auto start = high_resolution_clock::now();
                        foodGraph.search_by_description_bfs(foodName);
                        auto stop = high_resolution_clock::now();
                        auto duration = duration_cast<microseconds>(stop - start);
                        cout << "This operation took " << duration.count() << " microseconds." << endl;
                        break;
                    }
                }
                if (userInput == 2) {
                    float fiberAmount;
                    std::cout << "Enter the amount of fiber to search for:   ";
                    std::cin >> fiberAmount;
                    auto start = high_resolution_clock::now();
                    foodGraph.search_by_fiber(fiberAmount);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 3) {
                    float proteinAmount;
                    std::cout << "Enter the amount of protein to search for:   ";
                    std::cin >> proteinAmount;
                    auto start = high_resolution_clock::now();
                    foodGraph.search_by_protein(proteinAmount);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 4) {
                    float sodiumAmount;
                    std::cout << "Enter the amount of sodium to search for:   ";
                    std::cin >> sodiumAmount;
                    auto start = high_resolution_clock::now();
                    foodGraph.search_by_sodium(sodiumAmount);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 5) {
                    float sugarAmount;
                    std::cout << "Enter the amount of sugar to search for:   ";
                    std::cin >> sugarAmount;
                    auto start = high_resolution_clock::now();
                    foodGraph.search_by_sugars(sugarAmount);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 6) {
                    float saturatedFatsAmount;
                    std::cout << "Enter the amount of saturated fats to search for:   ";
                    std::cin >> saturatedFatsAmount;
                    auto start = high_resolution_clock::now();
                    foodGraph.search_by_saturated_fat(saturatedFatsAmount);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 7) {
                    float energyAmount;
                    std::cout << "Enter the amount of energy to search for:   ";
                    std::cin >> energyAmount;
                    auto start = high_resolution_clock::now();
                    foodGraph.search_by_energy(energyAmount);
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
            }
            else if (userInput == 2) {
                cout << "Enter what you would like to filter by" << endl;
                cout << "1. Fiber" << endl;
                cout << "2. Protein" << endl;
                cout << "3. Sodium" << endl;
                cout << "4. Sugar" << endl;
                cout << "5. Saturated Fats" << endl;
                cout << "6. Energy" << endl;

                int filterInput;
                cin >> filterInput;

                if (filterInput == 1) {
                    auto start = high_resolution_clock::now();
                    foodGraph.filterFoods("fiber");
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (filterInput == 2) {
                    auto start = high_resolution_clock::now();
                    foodGraph.filterFoods("protein");
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (filterInput == 3) {
                    auto start = high_resolution_clock::now();
                    foodGraph.filterFoods("sodium");
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (filterInput == 4) {
                    auto start = high_resolution_clock::now();
                    foodGraph.filterFoods("sugar");
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (filterInput == 5) {
                    auto start = high_resolution_clock::now();
                    foodGraph.filterFoods("fats");
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (filterInput == 6) {
                    auto start = high_resolution_clock::now();
                    foodGraph.filterFoods("energy");
                    auto stop = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
            }
        }
        if (userInput == 2) {
            cout << "Enter the action you would like to do with this data structure" << endl;
            cout << "1. Search for a food" << endl;
            cout << "2. Filter" << endl;

            cin >> userInput;

            if (userInput == 1) {
                cout << "Enter the parameter you would like to search for" << endl;
                cout << "1. Search by description" << endl;
                cout << "2. Search by fiber count" << endl;
                cout << "3. Search by protein count" << endl;
                cout << "4. Search by sodium" << endl;
                cout << "5. Search by sugars" << endl;
                cout << "6. Search by saturated fats" << endl;
                cout << "7. Search by energy" << endl;
                cin >> userInput;
                if (userInput == 1) {
                    cout << "Enter the keyword you would like to search for" << endl;
                    string keyword;
                    cin >> keyword;

                    auto start = high_resolution_clock::now();
                    // Vector for storing all matches
                    std::vector<Food> matches;

                    /*=== Exact Match Search: if there is an exact match, O(1) complexity ===*/
                    auto match = foodHashTable.getFood(keyword);
                    if (match.has_value()) {
                        // Key found,
                        matches.push_back(match.value());
                        std::cout << "Food item found in Hash Table!" << endl;
                    }
                    /*=== Partial Match Search: O(n) due to searching all keys ===*/
                    else {
                        // Search all keys (descriptions) to look for partial
                        // Make user input lower case with tolower() function
                        std::string lowerCase; // converted string
                        for (char i : keyword) {
                            lowerCase += static_cast<char>(tolower(i));
                        }
                        // Iterate through foods vector to look for partial matches
                        for(Food* food : foods) {
                            std::string description;
                            for (char i : food->getDescription()) {
                                description += static_cast<char>(tolower(i));
                            }

                            // Search Hash Table, if match found somewhere in description, push onto vector
                            if (description.find(lowerCase) != std::string::npos) {
                                // Get the food item from table, then check if it has a value & add to vector
                                auto hashFood = foodHashTable.getFood(food->getDescription());
                                // Check that match (key) has value pair and push back to matches vector
                                if (hashFood) {
                                    matches.push_back(hashFood.value());
                                }
                            }
                        }
                        outputCSV(matches);
                        std::cout << "A total of " << matches.size() << " matches have been found." << endl;
                        auto stop  = high_resolution_clock::now();
                        auto duration = duration_cast<microseconds>(stop - start);
                        cout << "This operation took " << duration.count() << " microseconds." << endl;
                        break;
                    }
                    if (matches.size() == 1) {
                        outputCSV(matches);
                        std::cout << "An exact match has been found!" << endl;
                        auto stop  = high_resolution_clock::now();
                        auto duration = duration_cast<microseconds>(stop - start);
                        cout << "This operation took " << duration.count() << " microseconds." << endl;
                        break;
                    }
                }
                if (userInput == 2) {
                    float fiberAmount;
                    std::cout << "Enter the amount of fiber to search for:   ";
                    std::cin >> fiberAmount;
                    auto start = high_resolution_clock::now();
                    vector<Food> foodVector = foodHashTable.searchByFiber(fiberAmount);
                    outputCSV(foodVector);
                    auto stop  = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 3) {
                    float proteinAmount;
                    std::cout << "Enter the amount of protein to search for:   ";
                    std::cin >> proteinAmount;
                    auto start = high_resolution_clock::now();
                    vector<Food> foodVector = foodHashTable.searchByProtein(proteinAmount);
                    outputCSV(foodVector);
                    auto stop  = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 4) {
                    float sodiumAmount;
                    std::cout << "Enter the amount of sodium to search for:   ";
                    std::cin >> sodiumAmount;
                    auto start = high_resolution_clock::now();
                    vector<Food> foodVector = foodHashTable.searchBySodium(sodiumAmount);
                    outputCSV(foodVector);
                    auto stop  = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 5) {
                    float sugarAmount;
                    std::cout << "Enter the amount of sugar to search for:   ";
                    std::cin >> sugarAmount;
                    auto start = high_resolution_clock::now();
                    vector<Food> foodVector = foodHashTable.searchBySugars(sugarAmount);
                    outputCSV(foodVector);
                    auto stop  = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 6) {
                    float saturatedFatsAmount;
                    std::cout << "Enter the amount of saturated fats to search for:   ";
                    std::cin >> saturatedFatsAmount;
                    auto start = high_resolution_clock::now();
                    vector<Food> foodVector = foodHashTable.searchBySatFats(saturatedFatsAmount);
                    outputCSV(foodVector);
                    auto stop  = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
                if (userInput == 7) {
                    float energyAmount;
                    std::cout << "Enter the amount of energy to search for:   ";
                    std::cin >> energyAmount;
                    auto start = high_resolution_clock::now();
                    vector<Food> foodVector = foodHashTable.searchByEnergy(energyAmount);
                    outputCSV(foodVector);
                    auto stop  = high_resolution_clock::now();
                    auto duration = duration_cast<microseconds>(stop - start);
                    cout << "This operation took " << duration.count() << " microseconds." << endl;
                    break;
                }
            }
        }
        if (userInput == 2) {
            cout << "Enter what you would like to filter by" << endl;
            cout << "1. Fiber" << endl;
            cout << "2. Protein" << endl;
            cout << "3. Sodium" << endl;
            cout << "4. Sugar" << endl;
            cout << "5. Saturated Fats" << endl;
            cout << "6. Energy" << endl;

            int filterInput;
            cin >> filterInput;
            if (filterInput == 1) {
                auto start = high_resolution_clock::now();
                vector<Food> foodVector = foodHashTable.filter("fiber");
                outputCSV(foodVector);
                auto stop  = high_resolution_clock::now();
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "This operation took " << duration.count() << " microseconds." << endl;
                break;
            }
            if (filterInput == 2) {
                auto start = high_resolution_clock::now();
                vector<Food> foodVector = foodHashTable.filter("protein");
                outputCSV(foodVector);
                auto stop  = high_resolution_clock::now();
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "This operation took " << duration.count() << " microseconds." << endl;
                break;
            }
            if (filterInput == 3) {
                auto start = high_resolution_clock::now();
                vector<Food> foodVector = foodHashTable.filter("sodium");
                outputCSV(foodVector);
                auto stop  = high_resolution_clock::now();
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "This operation took " << duration.count() << " microseconds." << endl;
                break;
            }
            if (filterInput == 4) {
                auto start = high_resolution_clock::now();
                vector<Food> foodVector = foodHashTable.filter("sugars");
                outputCSV(foodVector);
                auto stop  = high_resolution_clock::now();
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "This operation took " << duration.count() << " microseconds." << endl;
                break;
            }
            if (filterInput == 5) {
                auto start = high_resolution_clock::now();
                vector<Food> foodVector = foodHashTable.filter("fats");
                outputCSV(foodVector);
                auto stop  = high_resolution_clock::now();
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "This operation took " << duration.count() << " microseconds." << endl;
                break;
            }
            if (filterInput == 6) {
                auto start = high_resolution_clock::now();
                vector<Food> foodVector = foodHashTable.filter("energy");
                outputCSV(foodVector);
                auto stop  = high_resolution_clock::now();
                auto duration = duration_cast<microseconds>(stop - start);
                cout << "This operation took " << duration.count() << " microseconds." << endl;
                break;
            }
        }
    }
    return 0;
}
