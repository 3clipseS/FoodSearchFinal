# FoodSearch
A program that allows users to search foods and retrieve their corresponding nutritional data 

## Features
- Food item search by keyword input
- Six nutritional metric filters: 
  - Fiber
  - Protein
  - Sodium
  - Sugars
  - Saturated Fats
  - Energy (in KCAL)
- Builds two data structures: Hash Table & Graph
  - Selected data structure traversed (searched)
  - Items returned that contain keyword input
- Outputs: contain description of food item and corresponding nutritional metric
  - Console output
  - Write to CSV 

## Team Responsibilities
- Hash Table
  - Data structure implementation
  - Search logic
- Graph
  - Data structure implementation
  - Traversal logic
- Main Logic
  - Parsing data
  - Outputting data

## Program Instructions
- Run the program
- Select a data structure from the first menu display: Graph / Hashtable (1 or 2)
  - This data structure will be built using data parsed from the FoodData.csv
- Choose to either search for a food or search by a nutrient filter
  - If searching by food, the program will ask the user for a food item description as input
  - If searching by filter, user must input a value corresponding to the amount of a specific nutrient
- Searching by food
  - Either select search by exact or partial match
  - Program will search for target(s) based on user input and return CSV of results found
- Searching by filter
  - Select the nutrient type of the six provided you would like to search an amount of
  - Enter the amount (can be a decimal as variables are float type)
- Output results
  - Each search conducted will output a CSV file that contains:
    - If search by nutrient filter:
      - Food items only containing the searched nutrient amount sorted in ascending order
    - If search by description
      - Food items containing either an exact or partial matches
