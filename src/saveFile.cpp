#include "SaveFile.hpp"

#include <string.h>
#include <fstream>

SaveFile::SaveFile(const char *path)
{
    m_pFilePath = new char[strlen(path) + 1];
    strcpy(m_pFilePath, path);
    // create a file at the path if it doesn't exist
    if (!std::ifstream(m_pFilePath))
    {
        std::ofstream(m_pFilePath);
    }
}

SaveFile::~SaveFile()
{
    delete[] m_pFilePath;
}

char *SaveFile::GetFilePath()
{
    return m_pFilePath;
}

void SaveFile::Save(const char *data)
{
    std::ofstream file(m_pFilePath);
    file << data;
    file.close();
}

char *SaveFile::Load()
{
    std::ifstream file(m_pFilePath);
    std::string data;
    std::string line;
    while (std::getline(file, line))
    {
        data += line;
    }
    file.close();
    char *cstr = new char[data.length() + 1];
    strcpy(cstr, data.c_str());
    return cstr;
}