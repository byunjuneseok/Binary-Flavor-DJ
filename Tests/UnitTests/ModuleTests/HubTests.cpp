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
    DeckModule deck1, deck2, deck3, deck4;
    MixerModule testMixer;

    testHub.AssignMixer(testMixer);
    testHub.AssignDeck(1, deck1);

    EXPECT_EQ(0, deck1.GetDeckNumber());

}
