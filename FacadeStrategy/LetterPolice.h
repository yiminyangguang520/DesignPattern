#ifndef LETTERPOLICE_H
#define LETTERPOLICE_H

#pragma once
#include "ILetterProcess.h"

class CLetterPolice
{
public:
    CLetterPolice(void);
    ~CLetterPolice(void);

    void CheckLetter(ILetterProcess *pLetterProcess);
};

#endif // LETTERPOLICE_H
