#pragma once

class Labyrinth;

class Generator {
public:
    virtual void operator()(Labyrinth&)=0;
};

class DepthFirstSearch : public Generator {
public:
    virtual void operator()(Labyrinth&);
};

class KruskalsAlgorithm : public Generator {
public:
    virtual void operator()(Labyrinth&);
};

class PrimsAlgorithm : public Generator {
public:
    virtual void operator()(Labyrinth&);
};

class WilsonsAlgorithm : public Generator {
public:
    virtual void operator()(Labyrinth&);
};

class AldousBroderAlgorithm : public Generator {
public:
    virtual void operator()(Labyrinth&);
};

class DivisionMethod : public Generator {
public:
    virtual void operator()(Labyrinth&);
};