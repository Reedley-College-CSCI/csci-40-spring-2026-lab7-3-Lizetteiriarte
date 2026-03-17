#include <iostream>
#include <fstream>
using namespace std;
//Lizette Iriarte
// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.
struct TemperatureRecord {
    int day;
    int temperature;
};
// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord records[], int& size); // TODO: Fix the parameters
void printTemperatures(const TemperatureRecord records[], int size);
TemperatureRecord findMin(const TemperatureRecord records[], int size);
TemperatureRecord findMax(const TemperatureRecord records[], int size);
double findAverage(const TemperatureRecord records[], int size);

int main() {
    TemperatureRecord records[MAX_DAYS]; // TODO: Step 2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    
    int size = 0;  // Actual number of records read
    void readTemperatures(TemperatureRecord records[], int& size); // TODO: Fix the parameters
    void printTemperatures(const TemperatureRecord records[], int size);
    TemperatureRecord findMin(const TemperatureRecord records[], int size);
    TemperatureRecord findMax(const TemperatureRecord records[], int size);
    double findAverage(const TemperatureRecord records[], int size);
    readTemperatures(records, size);// TODO: Step 3 - Call readTemperatures() to load data from file
    
    printTemperatures(records, size); // TODO: Step 4 - Print the temperatures

    TemperatureRecord min = findMin(records, size);
    TemperatureRecord max = findMax(records, size);
    double avg = findAverage(records, size);
    
    cout << "Min Temp: Day " << min.day << " = " << min.temperature << endl;
    cout << "Max Temp: Day " << max.day << " = " << max.temperature << endl;
    cout << "Average Temp: " << avg << endl; // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

// TODO: Step 6 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array

// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
