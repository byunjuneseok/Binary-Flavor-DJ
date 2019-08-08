//
// Created by Juneseok Byun on 2019-08-02.
//

#include <gtest/gtest.h>
#include <Modules/DeckModule.hpp>

using namespace Bfdj;

TEST(DeckModule, Constructors)
{
    DeckModule deck1;
    EXPECT_EQ(0, deck1.GetDeckNumber());
}

TEST(DeckBasicFeatures, BasicFeatures)
{
    DeckModule deck1, deck2;

    EXPECT_EQ(0, 0);
}

