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

struct ItemsStats{
    std::string name;
    std::string description;
    int attack{0};
    int defence{0};
    int cost{0};
};
struct ItemsLinked {
    ItemsStats value;
    ItemsLinked* next;
};

class Inventory {
public:
    int amount;
    ItemsLinked* headPtr;
    ItemsLinked* tailPtr;
    Inventory();
    int getAmount();
    void addItem( ItemsStats* newItem);
    ItemsLinked* indexValue( int index );
    //void removeItem();
};

class Game;


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
    //Character(std::string name, RGB rgb, Size hw, Coordinates coords);
};

class Player: public Character {
private:
    ItemsStats Stick{
        .name="Wooden Stick",
        .description="Basic Weapon, legend says it came from a tree",
        .attack=2,
        .defence=0,
        .cost=0
    };
public:
    Inventory* playerInventory = new Inventory();
    Player();
    ~Player();
};

class Wall: public Object {
private:
    int damagePower;
public:
    Wall(int damage);
};

class Game {
    int numPlayers;
    std::string gameName;
public:
    Player* mainPlayer = new Player;
    Game(std::string name = "Game 1");
};


