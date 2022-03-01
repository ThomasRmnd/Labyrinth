#pragma once

#include <iostream>
#include <vector>

class Labyrinth {
private:
    std::vector<std::vector<int>> maze;
public:
    Labyrinth(int);
    Labyrinth(int,int);
    ~Labyrinth() = default;
    Labyrinth& operator=(const Labyrinth&) = default;

    void set_path(int,int);
    void set_wall(int,int);
    void set_start(int,int);
    void set_arrival(int,int);

    int get_nb_rows() const;
    int get_nb_cols() const;
    int get_at(int,int) const;
};

std::ostream& operator<<(std::ostream&,const Labyrinth&);