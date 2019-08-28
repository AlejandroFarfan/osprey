#include "filereader.h"
#include <fstream>
FileReader::FileReader()
{
}

FileReader::~FileReader()
{
}

vector<string> FileReader::getLinesFromFile(string filePath)
{
    vector<string> lines;
    ifstream file;
    file.open(filePath);
    for( std::string line; std::getline( file, line ); )
    {
        lines.push_back(line);
    }
    return lines;
}
