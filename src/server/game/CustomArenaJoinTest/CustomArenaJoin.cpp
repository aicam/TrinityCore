//
// Created by ali on 13.03.22.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef uint32_t uint32;
fstream ofs;



int main() {

//    std::string arena2v2FilePath = "arena.txt";
//    std::ifstream arena2v2File(arena2v2FilePath);
//
//    std::vector<std::string> betTeamVars;
//    std::string fileLineTxt;
//    std::string substr;
//
//
//    while (getline(arena2v2File, fileLineTxt)) {
//        std::stringstream ss(fileLineTxt);
//        while (ss.good()) {
//            getline(ss, substr, ',');
//            betTeamVars.push_back(substr);
//        }
//    }
//    arena2v2File.close();
//
//    // end if there is no team in queue
//    if (betTeamVars.size() < 6)
//        return 0;
//
//    // iterate over queued teams for bet
//    for (int i = 0; i < betTeamVars.size(); i += 6) {
//        // find leader players by name
//        std::string leaderNameTeam1 = betTeamVars[i + 1];
//        cout << leaderNameTeam1 << endl;
//        std::string leaderNameTeam2 = betTeamVars[i + 3];
//        cout << leaderNameTeam2 << endl;
//
//        // convert arena team ids from string to int
//        uint32 ArenaTeamId1;
//        {
//            std::stringstream v0(betTeamVars[i]);
//            int x = 0;
//            v0 >> x;
//            ArenaTeamId1 = x;
//        }
//        cout << ArenaTeamId1 << endl;
//        uint32 ArenaTeamId2;
//        {
//            std::stringstream v0(betTeamVars[i + 2]);
//            int x = 0;
//            v0 >> x;
//            ArenaTeamId2 = x;
//        }
//        cout << ArenaTeamId2 << endl;
//        // convert arenatype to int
//        uint32 arenaTypeId;
//        {
//            std::stringstream v0(betTeamVars[i + 4]);
//            int x = 0;
//            v0 >> x;
//            arenaTypeId = x;
//        }
//        ArenaType arenaTypeCustom;
//        switch (arenaTypeId) {
//            case 2:
//                arenaTypeCustom = ARENA_TYPE_2v2;
//                break;
//            case 3:
//                arenaTypeCustom = ARENA_TYPE_3v3;
//                break;
//            case 5:
//                arenaTypeCustom = ARENA_TYPE_5v5;
//                break;
//        }
//        cout << arenaTypeCustom << endl;
//        // convert bg type id to int
//        BattlegroundTypeId bgTypeIdCustom;
//        {
//            std::stringstream v0(betTeamVars[i + 5]);
//            int x = 0;
//            v0 >> x;
//            bgTypeIdCustom = BattlegroundTypeId(x);
//        }
//        cout << bgTypeIdCustom << endl;
//    }
}
