#include "Test.hpp"
#include "SaveFile.hpp"

#include <string.h>
#include <stdlib.h>

Test::Test()
{
    m_pSaveFile = new SaveFile("save/save.save");
    char *data = m_pSaveFile->Load();
    if (strlen(data) == 0)
    {
        iTest = 0;
    }
    else
    {
        iTest = atoi(data);
    }
    delete[] data;
}

Test::~Test()
{
    save();
    delete m_pSaveFile;
}

void Test::save()
{
    char *data = new char[10];
    itoa(iTest, data, 10);
    m_pSaveFile->Save(data);
    delete[] data;
}

void Test::setTest(int iTest)
{
    this->iTest = iTest;
}

int Test::getTest()
{
    return iTest;
}