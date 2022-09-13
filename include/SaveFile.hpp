#pragma once

class SaveFile
{
private:
    char *m_pFilePath;

public:
    SaveFile(const char *path);
    ~SaveFile();
    char *GetFilePath();
    void Save(const char *data);
    char *Load();
};