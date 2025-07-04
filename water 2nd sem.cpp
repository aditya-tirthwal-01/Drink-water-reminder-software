// FUTURE SCOPE CODING AND IT STILL HAS A LOT OF THING TO FIX
#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    const double WATER_PER_KG = 0.033; // Liters of water per kilogram of body weight
    const int MINIMUM_AGE = 12; // Minimum age considered for calculation
    const int MINIMUM_WEIGHT = 30; // Minimum weight considered for calculation
    const int MINIMUM_SLEEP_HOURS = 6; // Minimum hours of sleep considered for calculation

    // Variables
    double weight, waterIntake;
    int age, sleepHours;

    // Input
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your age: ";
    cin >> age;
    // cout << "Enter the number of hours you slept last night: ";
    // cin >> sleepHours;

    // Check if input meets minimum requirements
    if (weight < MINIMUM_WEIGHT || age < MINIMUM_AGE)
    {
        cout << "Sorry, we cannot calculate water intake with the provided information." << endl;
        return 1;
    }

    // Calculate water intake
    waterIntake = weight * WATER_PER_KG;

    // Output
    cout << "Your recommended water intake for today is: " << waterIntake << " liters." << endl;

    int count = 1;
    int interval;
    int waterAmount;

    cout << "Enter reminder interval (in seconds):";
    cin >> interval;

    // cout<<"Enter amount of water to drink (in milliliters):";
    // cin>>waterAmount;

    while (waterIntake > 0)
    {
        // Wait for the specified interval
        Sleep(interval * 1000);

        // Display reminder message
        cout << "Reminder: Drink " << waterIntake << " liters of water." << endl;

        // Generate beep sound
        Beep(750, 500);

        // Decrement water intake
        waterIntake -= WATER_PER_KG;
    }

    cout << "You've finished your daily water intake. Good job!" << endl;

    return 0;
}

