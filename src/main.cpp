#include <iostream>

#include "../include/Labyrinth.h"

int main() {
    Labyrinth test(5);
    test.set_start(5,1);
    test.set_arrival(5,4);
    for (int i = 0; i < 5; i++) 
        test.set_wall(5,i);
    std::cout << test;
    std::cin.get();
    return 0;
}


// ⬛ = bordure
// ⬜ = chemins
// 🟨 = chemin entrain d'être parcouru
// 🟩 = solution
// 🔵 = Départ
// 🔴 = Arrivée

// \x1B[2J is the code for cleaning the screen and set the cursor to home
// \x1B[H is the code for returning the cursor to the home position