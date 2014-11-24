// Class1.cpp
#include "pch.h"
#include "SoundEngine.h"

using namespace FMODApp::Engine;//::Engine;
using namespace Platform;

//constructor
SoundEngine::SoundEngine()
{
	//start up the FMOD system
	FMOD_RESULT result = FMOD_System_Create(this->system);
	//check the result
	if (result != FMOD_OK){
		throw ref new Exception(0, "FMOD failed to initialize");
	}
}

