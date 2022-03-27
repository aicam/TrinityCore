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

        string path = "2v2arenas_fake.txt";
        string myText;
        ifstream are2v2File(path);
        vector <string> v;
        while (getline(are2v2File, myText)) {
            stringstream ss(myText);

            while (ss.good()) {
                string substr;
                getline(ss, substr, ',');
                v.push_back(substr);
            }
        }
        are2v2File.close();
        if (v.size() == 0) {
            cout << "No data found!";
            continue;
        }
        uint32 ArenaTeamId;
        {
            stringstream v0(v[5]);
            int x = 0;
            v0 >> x;
            ArenaTeamId = x;
        }
        if (ArenaTeamId != 1234) {
            cout << ArenaTeamId << "\n" << "error";
        }

        {
            stringstream v0(v[11]);
            int x = 0;
            v0 >> x;
            ArenaTeamId = x;
        }
        if (ArenaTeamId != 1234) {
            cout << ArenaTeamId << "\n" << "error";
        }
        cout << v.size() << endl;
        ofs.open(path, ios::out | ios::trunc);
        ofs.close();


}
