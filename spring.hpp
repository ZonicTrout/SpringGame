#include <iostream>
#include <string>
#include "pass.h"

struct Coordinates {
    int x;
    int y;
};
struct Size {
    int height;
    int width;
};
struct RGB {
    int Red;
    int Green;
    int Blue;
    bool visible{true};
};
struct Stats {
    std::string fullName;
    int attack{0};
    int defence{0};
    int speed{0};
    int health{100};
    int level{0};
    int totalEXP{0};
    int money{0};
};

class Game {
    int numPlayers;
    std::string gameName;
public:
    Game(std::string name = "Game 1");
};


class Object {
protected:
    Coordinates* coordinatesPtr = new Coordinates;
    Size* size = new Size;
    RGB* color = new RGB;
public:
    void setCoords(int x, int y);
    void setSize(int h, int w);
    void setColor(int R, int G, int B);
    void setVisibility(bool vis);
};

class Character: public Object {
private:
    Stats* characterStats = new Stats;
public:
    Character(std::string name, RGB rgb, Size hw, Coordinates coords);
};

class Wall: public Object {
private:
    int damagePower;
public:
    Wall(int damage);
};




