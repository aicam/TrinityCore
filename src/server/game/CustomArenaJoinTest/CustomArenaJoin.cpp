//
// Created by ali on 13.03.22.
//
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "BattlegroundQueue.h"

using namespace std;

struct GroupQueueInfo                                       // stores information about the group in queue (also used when joined as solo!)
{
    std::map<ObjectGuid, PlayerQueueInfo*> Players;         // player queue info map
    uint32  Team;                                           // Player team (ALLIANCE/HORDE)
    BattlegroundTypeId BgTypeId;                            // battleground type id
    bool    IsRated;                                        // rated
    uint8   ArenaType;                                      // 2v2, 3v3, 5v5 or 0 when BG
    uint32  ArenaTeamId;                                    // team id if rated match
    uint32  JoinTime;                                       // time when group was added
    uint32  RemoveInviteTime;                               // time when we will remove invite for players in group
    uint32  IsInvitedToBGInstanceGUID;                      // was invited to certain BG
    uint32  ArenaTeamRating;                                // if rated match, inited to the rating of the team
    uint32  ArenaMatchmakerRating;                          // if rated match, inited to the rating of the team
    uint32  OpponentsTeamRating;                            // for rated arena matches
    uint32  OpponentsMatchmakerRating;                      // for rated arena matches
    uint32  PreviousOpponentsTeamId;                        // excluded from the current queue until the timer is met
};


int main() {
    string myText;
    ifstream MyReadFile("../../../../dbtxt/2v2arenas.txt");
    vector<string> v;
    while (getline(MyReadFile, myText)) {
        stringstream ss(myText);

        while (ss.good()) {
            string substr;
            getline(ss, substr, ',');
            v.push_back(substr);
        }

        for (size_t i = 0; i < v.size(); i++)
            cout << v[i] << endl;
    }
    MyReadFile.close();
    GroupQueueInfo* team1;

    {
        stringstream v0(v[0]);
        int x = 0;
        v0 >> x;
        team1->ArenaTeamId = x;
    }
    cout << team1->ArenaTeamId;
}
