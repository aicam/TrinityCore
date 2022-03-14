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
