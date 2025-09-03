// COMSC-210 | Lab 4A | Justin Mikesell
// IDE used: Visual Studio Code 

#include <iostream>
#include <vector>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    //declaring vector of Color
    vector<Color> colors;

       //generate random number between 25 and 50
    srand(time(0));
    int n = rand() % 26 + 25;

    cout << "Generating " << n << " random colors...\n\n";

    //pushing random colors into the vector
    for (int i = 0; i < n; i++) {
        Color temp;
        temp.red   = rand() % 256;
        temp.green = rand() % 256;
        temp.blue  = rand() % 256;
        colors.push_back(temp);
    }
