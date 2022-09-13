#pragma once
#include "SaveFile.hpp"

class Test
{
private:
    int iTest;
    SaveFile *m_pSaveFile;
    void save();

public:
    Test();
    ~Test();
    void setTest(int iTest);
    int getTest();
};