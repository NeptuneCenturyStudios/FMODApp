// Class1.cpp
#include "pch.h"
#include "SoundEngine.h"

using namespace FMODApp::Engine;//::Engine;
using namespace Platform;

//constructor
SoundEngine::SoundEngine()
{
	//int i = 1;
	//start up the FMOD system
	//FMOD_RESULT result = FMOD_System_Create(this->system);
	FMOD_RESULT result = FMOD::System_Create(&this->_system);
	//check the result
	if (result != FMOD_OK){
		throw ref new Exception(result, "FMOD failed to initialize");
	}
}

