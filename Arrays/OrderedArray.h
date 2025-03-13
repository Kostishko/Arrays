#pragma once
#include "SearchableArray.h"
class OrderedArray :
    public SearchableArray
{
public:
    OrderedArray();
    
    void PushNumber(int number) override;

    void RemoveAt(int index) override;

    void FillTheArray() override;

    int SearchAt(int number) override;


};

