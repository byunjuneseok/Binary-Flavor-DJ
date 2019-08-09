//
// Created by Juneseok Byun on 2019-08-08.
//
#include <gtest/gtest.h>
#include <Modules/Hub.hpp>
#include <Modules/DeckModule.hpp>
#include <Modules/MixerModule.hpp>

using namespace Bfdj;

TEST(HubModule, Connection)
{
    Hub testHub;
    EXPECT_EQ(testHub.GetMixer(), nullptr);

    testHub.CreateMixer();
    testHub.CreateDeck(1);
    EXPECT_NE(testHub.GetMixer(), nullptr);
    EXPECT_NE(testHub.GetDeck(1), nullptr);
    EXPECT_EQ(testHub.GetDeck(2), nullptr);
    EXPECT_EQ(testHub.GetDeck(3), nullptr);
    EXPECT_EQ(testHub.GetDeck(4), nullptr);

    testHub.CreateDeck(3);
    EXPECT_NE(testHub.GetMixer(), nullptr);
    EXPECT_NE(testHub.GetDeck(1), nullptr);
    EXPECT_EQ(testHub.GetDeck(2), nullptr);
    EXPECT_NE(testHub.GetDeck(3), nullptr);
    EXPECT_EQ(testHub.GetDeck(4), nullptr);

}
