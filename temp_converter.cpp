#include <iostream>
using namespace std;

// celsius conversion
float celsiusToFahrenheit(float celsius) {
    float fahrenheit = (celsius*9.0/5.0) + 32.0;
    return fahrenheit;
}

float celsiusToKelvin(float celsius) {
    float kelvin = (celsius + 273.15);
    return kelvin; 
}

// fahrenheit conversion
float fahrenheitToCelsius(float fahrenheit) {
    float celsius = ((fahrenheit - 32.0) * 5.0) / 9.0;
    return celsius;
}

float fahrenheitToKelvin(float fahrenheit) {
    float kelvin = ((fahrenheit + 459.67) * 5.0) / 9.0;
    return kelvin;
}

// kelvin conversion
float kelvinToCelsius(float kelvin) {
    float celsius = kelvin - 273.15;
    return celsius;
}

float kelvinToFahrenheit(float kelvin) {
    float fahrenheit = ((kelvin * 9.0)/5.0) - 459.67;
    return fahrenheit;
}

int main() {
    cout << "Temperature Converter\n"
            "1. Celsius to Fahrenheit\n"
            "2. Celsius to Kelvin\n"
            "3. Fahrenheit to Celsius\n"
            "4. Fahrenheit to Kelvin\n"
            "5. Kelvin to Celsius\n"
            "6. Kelvin to Fahrenheit\n";

    int choice;
    float temperature;

    cout << "Enter your choice (1-6):" << endl;
    cin >> choice;

    cout << "Enter the temperature:" << endl;
    cin >> temperature;
    
    switch (choice) {
        case 1: 
            cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature);
            break;
        case 2:
            cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature);
            break;
        case 3:
            cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature);
            break;
        case 4:
            cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature);
            break;
        case 5:
            cout << "Temperature in Celsius: " << kelvinToCelsius(temperature);
            break;
        case 6: 
            cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature);
            break;
        default:
            cout << "Invalid choice\n";
    }  

    return 0;
}
