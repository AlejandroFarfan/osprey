#ifndef FILEREADER_H
#define FILEREADER_H
#include <iostream>
#include <vector>
using namespace std;

class FileReader
{
public:
    FileReader();
    ~FileReader();
    vector<string> getLinesFromFile(string filePath);
private:
    vector<string> lines;
};

#endif // FILEREADER_H
