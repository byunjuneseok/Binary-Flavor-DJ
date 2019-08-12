//
// Created by Juneseok Byun on 2019-08-08.
//
#include <gtest/gtest.h>
#include <Workspaces/Workspace.hpp>
#include <Modules/Hub.hpp>
#include <Modules/DeckModule.hpp>
#include <Modules/MixerModule.hpp>

using namespace Bfdj;

TEST(Workspace, Construction)
{
    Hub testHub;
    EXPECT_EQ(testHub.GetMixer(), nullptr);

}

TEST(Workspace, CreateFeatures)
{
    Workspace testWorkspace;

    EXPECT_EQ(testWorkspace.GetHubsOnWorkspace().size(), 0);
    EXPECT_EQ(testWorkspace.GetHubsOnWorkspace().size(), 0);
    EXPECT_EQ(testWorkspace.GetHubsOnWorkspace().size(), 0);

    testWorkspace.CreateHub();
    EXPECT_EQ(testWorkspace.GetHubsOnWorkspace().size(), 1);

    auto hubOnTestWorkspace = testWorkspace.GetHubsOnWorkspace().front();
    auto decksOnTestWorkspace = testWorkspace.GetDeckModulesOnWorkspace();
    EXPECT_EQ(decksOnTestWorkspace.size(), 0);
    testWorkspace.CreateDeck();
    testWorkspace.CreateDeck();
    testWorkspace.CreateDeck();
    testWorkspace.CreateDeck();

    decksOnTestWorkspace = testWorkspace.GetDeckModulesOnWorkspace();
    EXPECT_EQ(decksOnTestWorkspace.size(), 4);

    auto MixerModulesOnTestWorkspace = testWorkspace.GetMixerModulesOnWorkspace();
    EXPECT_EQ(MixerModulesOnTestWorkspace.size(), 0);
    testWorkspace.CreateMixer();

    MixerModulesOnTestWorkspace = testWorkspace.GetMixerModulesOnWorkspace();
    EXPECT_EQ(MixerModulesOnTestWorkspace.size(), 1);
}

TEST(Workspace, WIPInWorkspace) {
    Workspace testWorkspace;

    testWorkspace.CreateHub();

    testWorkspace.CreateDeck();
    testWorkspace.CreateDeck();
    testWorkspace.CreateDeck();
    testWorkspace.CreateDeck();

    testWorkspace.CreateMixer();

    auto hubOnTestWorkspace = testWorkspace.GetHubsOnWorkspace().front();
    auto decksOnTestWorkspace = testWorkspace.GetDeckModulesOnWorkspace();
    auto MixerModulesOnTestWorkspace = testWorkspace.GetMixerModulesOnWorkspace();

}