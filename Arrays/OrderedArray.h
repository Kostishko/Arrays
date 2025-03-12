#pragma once
#include "SearchableArray.h"
class OrderedArray :
    public SearchableArray
{

    OrderedArray();
    
    void PushNumber(int number) override;

    void RemoveAt(int index) override;

    void FillTheArray() override;

    void ShowTheArray() override;

    int SearchAt(int number) override;


};

