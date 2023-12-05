// MovingObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Вам нужно реализовать шаблонную функцию, которая перемещает содержимое одного std::vector в другой.

#include <iostream>
#include <vector>
#include <string>

template <typename T>
void move_vectors(std::vector<T>& source, std::vector<T>& destination) {
    
    destination.insert(destination.end(),
        std::make_move_iterator(source.begin()),
        std::make_move_iterator(source.end()));

    source.clear();
}

int main() {
    std::vector<std::string> one = { "test_string1", "test_string2" };
    std::vector<std::string> two;

    move_vectors(one, two);

    //one пуст содержимое перемещено в two
    std::cout << "Vector one size: " << one.size() << std::endl;
    std::cout << "Vector two size: " << two.size() << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
