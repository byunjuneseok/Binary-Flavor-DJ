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
    // EXPECT_EQ(deck1.GetDeckNumber(), 0);
}

TEST(DeckBasicFeatures, BasicFeatures)
{
    EXPECT_EQ(0, 0);
}

