#include "../include/Labyrinth.h"

Labyrinth::Labyrinth(int n) : maze(2*n+1,std::vector<int>(2*n+1,0)) {}

Labyrinth::Labyrinth(int m, int n) : maze(2*m+1,std::vector<int>(2*n+1,0)) {}

void Labyrinth::set_path(int i, int j) {
    maze[i][j] = 0;
}

void Labyrinth::set_wall(int i, int j) {
    if (maze[i][j] == 2 || maze[i][j] == 3)
        return;
    maze[i][j] = 1;
}

void Labyrinth::set_start(int i, int j) {
    maze[i][j] = 2;
}

void Labyrinth::set_arrival(int i, int j) {
    maze[i][j] = 3;
}

int Labyrinth::get_nb_rows() const {
    return maze.size();
}

int Labyrinth::get_nb_cols() const {
    return maze[0].size();
}

int Labyrinth::get_at(int i, int j) const {
    return maze[i][j];
}

std::ostream& operator<<(std::ostream& os, const Labyrinth& l) {
    for (int i = 0; i < l.get_nb_rows(); i++) {
        for (int j = 0; j < l.get_nb_cols(); j++) {
            int value = l.get_at(i,j);
            switch(value) {
                case 0:
                    os << "⬜";
                    break;
                case 1:
                    os << "⬛";
                    break;
                case 2:
                    os << "🔵";
                    break;
                case 3:
                    os << "🔴";
                    break;

            }
        }
        std::cout << std::endl;
    }
    return os;
}