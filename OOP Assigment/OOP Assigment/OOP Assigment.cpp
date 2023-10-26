
#include <iostream>
using namespace std;


class Dog {
public:
    string breed;
    string color;
    int height;
    int weight;

    void Shake() {
        cout << "I'm Happy!" << "\n";
    }
    void Sit() {
        cout << "I am calm." << "\n";
    }
    void LayDown() {
        cout << "I am tired.." << "\n";
    }

    void Sentence() {
        cout << "My name is Airbud and I am a " << height << " feet " << weight << " pound " << color << " " << breed << "\n";
    }
};




int main()
{
    Dog Airbud;
    Airbud.breed = "Hound";
    Airbud.color = "Brown";
    Airbud.height = 2;
    Airbud.weight = 60;

    Airbud.Sentence();

    Airbud.Shake();
    Airbud.Sit();
    Airbud.LayDown();


 }


