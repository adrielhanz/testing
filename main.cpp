#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <fstream>

using namespace std;

class Color{
private:
    int red;
    int green;
    int blue;

const int W15 = 15;
public:
    // getters and setters
    int getRed ()           { return red; }
    int getGreen ()         { return green; }
    int getBlue ()          { return blue; }
    void setRed (int r)     { red = r; }
    void setGreen (int g)   { green = g; }
    void setBlue (int b)    { blue = b; }

    // print method
    void print (){
        cout << setw(W15) << "red: " << red << endl;
        cout << setw(W15) << "green: " << green << endl;
        cout << setw(W15) << "blue: " << blue << endl;
    }
};

int main (){
    cout << "Hello world!";

    Color color1, color2, color3;
    
}