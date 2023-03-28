#include <iostream>
#include "spring.hpp"
#include "pass.h"

int main( void ) {
    Game first( "first" );
    std::cout << first.mainPlayer->playerInventory->amount << std::endl;
    ItemsStats Sword{
        .name="Sword",
        .description="A light steel sword that is better than a stick",
        .attack=5,
        .defence=0,
        .cost=5
    };
    first.mainPlayer->playerInventory->addItem(&Sword);
    std::cout << first.mainPlayer->playerInventory->amount << std::endl;
}

