#include <iostream>
#include <string>

#include <Hub/Hub.h>
#include <Windows/Window.h>
#include <Windows/MixerWindow.h>

int main() {
    Binaryflavordj::MixerModule mainMixer;
    mainMixer.SetName("Main Mixer");

    Binaryflavordj::Hub mainHub;
    mainHub.AssignMixer(mainMixer);
    mainHub.PrintState();

    mainMixer.SetName("Changed");
    mainHub.PrintState();

    return 0;
}