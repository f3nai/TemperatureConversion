#include <iostream>

using string = std::string;

int getTemp(const string& TemperatureType, const int TempInput){
    if ("c" == TemperatureType || TemperatureType == "celsius") {
        // Celsius -> Fahrenheit

        int output;
        output = TempInput * ((float)9/5) + 32;
        std::cout << "Conversion complete!\nCelsius: " << TempInput << "\nConverted to (F): " << output;

    } else if ("f" == TemperatureType || TemperatureType == "fahrenheit") {
        // Fahrenheit -> Celsius

        int output;
        output = (TempInput - 32) * ((float)5/9);

        std::cout << "Conversion complete!\nFahrenheit: " << TempInput << "\nConverted to (C): " << output;
    } else {
        std::cout << "Invalid temperature parameter!";
        exit(0);
    }
}

int main() {
    int temperature;
    string type;

    std::cout << "*** WELCOME ***" << std::endl;

    std::cout << "Choose a type: (c, celsius, f, fahrenheit): ";
    std::getline(std::cin >> std::ws, type);

    std::cout << "Input the degrees: ";
    std::cin >> temperature;

    getTemp(type, temperature);
    return 0;
}
