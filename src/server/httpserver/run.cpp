//
// Created by ali on 13.03.22.
//

void main() {
    string myText;
    ifstream MyReadFile("filename.txt");
    while (getline (MyReadFile, myText)) {
        cout << myText;
    }
}
