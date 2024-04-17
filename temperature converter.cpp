#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit + 459.67) * 5.0 / 9.0;
}

double kelvinToFahrenheit(double kelvin) {
    return kelvin * 9.0 / 5.0 - 459.67;
}

int main() {
    char from, to;
    double temperature, convertedTemperature;

    cout << "Enter the temperature scale you are converting from (C, F, K): ";
    cin >> from;

    cout << "Enter the temperature scale you are converting to (C, F, K): ";
    cin >> to;

    cout << "Enter the temperature value: ";
    cin >> temperature;

    switch (from) {
        case 'C':
        case 'c':
            switch (to) {
                case 'F':
                case 'f':
                    convertedTemperature = celsiusToFahrenheit(temperature);
                    break;
                case 'K':
                case 'k':
                    convertedTemperature = celsiusToKelvin(temperature);
                    break;
                default:
                    cout << "Invalid scale for conversion." << endl;
                    return 1;
            }
            break;
        case 'F':
        case 'f':
            switch (to) {
                case 'C':
                case 'c':
                    convertedTemperature = fahrenheitToCelsius(temperature);
                    break;
                case 'K':
                case 'k':
                    convertedTemperature = fahrenheitToKelvin(temperature);
                    break;
                default:
                    cout << "Invalid scale for conversion." << endl;
                    return 1;
            }
            break;
        case 'K':
        case 'k':
            switch (to) {
                case 'C':
                case 'c':
                    convertedTemperature = kelvinToCelsius(temperature);
                    break;
                case 'F':
                case 'f':
                    convertedTemperature = kelvinToFahrenheit(temperature);
                    break;
                default:
                    cout << "Invalid scale for conversion." << endl;
                    return 1;
            }
            break;
        default:
            cout << "Invalid scale for conversion." << endl;
            return 1;
    }

    cout << "Converted temperature: " << convertedTemperature << endl;
    return 0;
}
