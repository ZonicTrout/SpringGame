#include <iostream>
#include <type_traits>
#include "spring.hpp"


ItemsList::ItemsList(){pass;}
int ItemsList::getAmount() {return amount;}
void ItemsList::addItem(ItemsStats* newItem){}

Game::Game(std::string name): numPlayers(0), gameName(name) {
    std::cout << "New Game: " << gameName << std::endl;
}

void Object::setCoords(int x, int y) {
    coordinatesPtr->x = x;
    coordinatesPtr->y = y;
}
void Object::setSize(int h, int w) {
    size->height = h;
    size->width = w;
}
void Object::setColor(int R, int G, int B) {
    color->Red = R;
    color->Green = G;
    color->Blue = B;
}
void Object::setVisibility(bool vis) {
    color->visible = vis;
}
/*
Character::Character(std::string name, RGB rgb, Size hw, Coordinates coords) {
    characterStats->fullName = name;
    *color = rgb;
    *size = hw;
    *coordinatesPtr = coords;
}
*/

Wall::Wall(int damage): damagePower(damage) {}
