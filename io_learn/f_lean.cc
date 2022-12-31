#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

bool readTextFileByLine(const string& file_name, vector<string>& text) {
  ifstream fin = ifstream(file_name, fstream::in);
  if (fin.is_open()) {
    string lane_txt;
    while (getline(fin, lane_txt)) {
      std::cout << lane_txt << endl;
      text.push_back(lane_txt);
    }
    fin.close();
    return true;
  } else {
    std::cerr << "not open file: " << file_name << endl;
    return false;
  }
}

int main(int argc, char** argv) {
  vector<string> text;
  readTextFileByLine("./data/I_have_a_dream.txt", text);
  return 0;
}