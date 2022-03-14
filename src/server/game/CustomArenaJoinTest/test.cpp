//
// Created by ali on 13.03.22.
//
#include <iostream>

enum BattlegroundBracketId                                  // bracketId for level ranges
{
    BG_BRACKET_ID_FIRST          = 0,
    BG_BRACKET_ID_LAST           = 15
};

int main() {
    std::cout << BattlegroundBracketId(BG_BRACKET_ID_LAST);
}