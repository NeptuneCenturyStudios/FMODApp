#pragma once

#include "FMOD\fmod.h"
//namespace FMODApp_Engine{}

namespace FMODApp//_Engine
{
	namespace Engine{
		public ref class SoundEngine sealed
		{

		private:
			FMOD_SYSTEM **system;

		public:
			SoundEngine();
			
		};
	}
}