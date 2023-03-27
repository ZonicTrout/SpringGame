#include <iostream>
#include <type_traits>
#include "spring.hpp"


ItemsList::ItemsList(){
    ItemsLinked* headPtr = nullptr;
    ItemsLinked* tailPtr = nullptr;
}

int ItemsList::getAmount() {return amount;}

void ItemsList::addItem(ItemsStats* newItem){
    ItemsLinked* temp = new ItemsLinked;
    temp->value = *newItem;
    temp->next = nullptr;
    if (headPtr == nullptr) {
        headPtr = temp;
        tailPtr = temp;
    } else {
        tailPtr->next = temp;
        tailPtr = temp->next;
    }
    amount += 1;
}

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
