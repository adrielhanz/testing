#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

const int W15 = 15, SIZE = 3;

class Color{
private:
    int red;
    int green;
    int blue;


public:
    // Getters and setters
    int getRed ()           { return red; }
    int getGreen ()         { return green; }
    int getBlue ()          { return blue; }
    void setRed (int r)     { red = r; }
    void setGreen (int g)   { green = g; }
    void setBlue (int b)    { blue = b; }

    // Print method
    void print (){
        cout << setw(W15) << "red: " << red << endl;
        cout << setw(W15) << "green: " << green << endl;
        cout << setw(W15) << "blue: " << blue << endl;
    }
};

int main (){
    Color color1, color2, color3;
    
    // Populate with data
    color1.setRed(255);     color1.setGreen(0);    color1.setBlue(0);   // red
    color2.setRed(0);       color2.setGreen(255);  color2.setBlue(0);   // green
    color3.setRed(0);       color3.setGreen(0);    color3.setBlue(255); // blue

    // Print values
    cout << "Color 1: \n";
    color1.print();

    cout << "Color 2: \n";
    color2.print();
    
    cout << "Color 3: \n";
    color3.print();

    return 0;
}