// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int mA;
void Question(std::string a)
{
    std::string Ua;
    std::getline(std::cin, Ua);
    if (a == Ua)
    {
        mA += 25;
        std::cout << "Correct\n";
    }
    else
        std::cout << "Wrong Anwser\n";

}

int main()
{
    std::cout << "What color is the sky?\n1.Yellow\n2.Pink\n3.Blue\n4.Magenta\n";
    Question("3");
    std::cout << "What color are fire trucks?\n1.Blue\n2.Red\n3.Yellow\n4.Gray\n";
    Question("2");
    std::cout << "How many hours are there in a day?\n1.24hrs\n2.35hrs\n3.30hrs\n4.45hrs\n";
    Question("1");
    std::cout << "How many planets are in our solar system?\n1.9 Planets\n2.8 Planets\n3.7 Planets\n4.6 Planets\n";
    Question("2");
    if (mA >= 60)
        std::cout << "\nYou Pass\n";
    else
        std::cout << "\nYou Failed\n";
    std::cout << "Your Score: (" << mA << "%)\n";
}

