#include<iostream> 
using namespace std; 
int main() 
{ 
// Declaring variables for height and weight 
float height, weight; 

// Taking input from user 
cout << "Enter your Height in meters: "; 
cin >> height; 

cout << "Enter your Weight in kilograms: "; 
cin >> weight; 

// Calculating BMI 
float bmi = weight/(height*height); 

// Printing BMI on screen 
cout << "Your BMI is : " << bmi << endl; 

// Defining underweight, normal weight, overweight and obesity ranges 
float underweight = 18.5, normalweight = 24.9, overweight = 29.9, obesity = 34.9; 

// Checking with ranges and printing according message 
if(bmi <= underweight) 
    cout << "You are Underweight" << endl; 
else if(bmi > underweight && bmi <= normalweight) 
    cout << "You are Normalweight" << endl; 
else if(bmi > normalweight && bmi <= overweight) 
    cout << "You are Overweight" << endl; 
else if(bmi > overweight && bmi <= obesity) 
    cout << "You are Obese" << endl; 
else
    cout << "You are severely obese" << endl; 

// Introducing Health Tips
cout << "Health Tip: Have a balanced diet and exercise regularly to maintain your health!" << endl; 

// Declaring variables for daily water intake requirement
int minAge = 0;
float waterIntake;

// Taking input from user
cout << "Enter your age: "; 
cin >> minAge; 

// Calculating required water intake 
if (minAge <= 3) 
    waterIntake=1.3; 
else if (minAge > 3 && minAge < 10) 
    waterIntake=1.7; 
else if (minAge >= 10 && minAge < 18) 
    waterIntake=2.7;
else
    waterIntake=3.7; 

// Printing the required water intake
cout << "Water Intake: " << waterIntake << " liter" << endl; 

// Introducing Health tips
cout << "Health Tip: Drink at least 8-10 glasses of water everyday to keep yourself hydrated!" << endl;

// Declaring variables for sleep time
int minSleepTime, maxSleepTime;

// Taking input from user
cout << "Enter your minimum Sleep Time: ";
cin >> minSleepTime; 

cout << "Enter your maximum Sleep Time: ";
cin >> maxSleepTime; 

// Introducing Sleep related tips
if (minSleepTime < 6) 
    cout << "Health Tip: Try increasing your sleep time, Minimum recommended Sleep Time is 6 hours." << endl; 
else if (maxSleepTime > 9) 
    cout << "Health Tip: Try reducing your sleep time, Maximum recommended Sleep Time is 9 hours." << endl; 
else 
    cout << "Health Tip: Adequate sleep time is important for perfect health!" << endl; 

// Declaring variable for calorie intake 
int calorieIntake;

// Taking input from user 
cout << "Enter your calorie intake: ";
cin >> calorieIntake; 

// Introducing calorie related tips
if (calorieIntake < 1000) 
    cout << "Health Tip: Try increasing your calorie intake, Minimum recommended calorie intake is 1000 calories." << endl; 
else if (calorieIntake > 2500) 
    cout << "Health Tip: Try reducing your calorie intake, Maximum recommended calorie intake is 2500 calories." << endl; 
else 
    cout << "Health Tip: Balanced diet with healthy calories is important for perfect health!" << endl; 

return 0; 
}