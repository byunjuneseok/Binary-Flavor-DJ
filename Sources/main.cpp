#include <iostream>

#include <Hub/Hub.h>
#include <Windows/Window.h>
#include <Windows/MixerWindow.h>

int main() {
    Binaryflavordj::Mixer mainMixer;
    Binaryflavordj::Hub mainHub;
    std::cout << mainHub.CheckDeckState(0);

    std::cout << "Hello, World!" << std::endl;
    return 0;

}