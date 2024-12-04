#ifndef FOODGRAPH_H
#define FOODGRAPH_H

#include <vector>
#include <iostream>
#include <queue>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include "Food.h"

using namespace std;

class GraphNode {
public:
    Food* food;
    vector<pair<GraphNode*, string>> edges;

    GraphNode(Food* foodItem);
    void addEdge(GraphNode* targetNode, const std::string& attribute);
};

class FoodGraph {
private:
    std::vector<GraphNode*> vertices;

    void outputCSV(const std::vector<Food*>& foundFoods) const;
    static string toLowerCase(const std::string& str);
    static void addEdgeBasedOnAttribute(GraphNode* node1, GraphNode* node2, const std::string& attribute);

public:
    FoodGraph();
    void addFood(Food* foodItem);
    void search_by_description_bfs(const std::string& descriptionSubstring) const;
    void search_by_name(const std::string& searchFoodName) const;
    void search_by_fiber(float fiber) const;
    void search_by_protein(float protein) const;
    void search_by_sodium(float sodium) const;
    void search_by_sugars(float sugars) const;
    void search_by_saturated_fat(float saturatedFat) const;
    void search_by_energy(float energy) const;
    void filterFoods(std::string filterValue) const;
};

#endif // FOODGRAPH_H
