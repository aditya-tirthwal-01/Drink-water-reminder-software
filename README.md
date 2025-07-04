# Drink-water-remainder-software

# Daily Water Intake Reminder 🚰

This C++ console application helps users calculate their recommended daily water intake based on their body weight. It also provides periodic reminders to drink water using sound notifications and message alerts.

## 🔍 Features

- Calculates water requirement using weight (in kg).
- Sets automatic reminders at user-defined intervals.
- Provides real-time beeps and messages to encourage hydration.
- Ends when the daily water goal is met.

## 🧠 How It Works

- Recommended intake is `0.033 liters` of water per kilogram of body weight.
- The program ensures basic minimum requirements (weight ≥ 30 kg and age ≥ 12).
- Users can set reminder intervals (in seconds).
- Reminders are given with a console message and a beep sound.
- The loop continues until the full water intake goal is reached.

## 🛠 Requirements

- C++ compiler (like g++)
- Windows OS (uses `Windows.h` for `Sleep()` and `Beep()` functions)

## 🏁 How to Run

1. Open the project folder in your IDE or compiler.
2. Compile the code:
   ```bash
   g++ -o water_reminder "water 2nd sem.cpp"
