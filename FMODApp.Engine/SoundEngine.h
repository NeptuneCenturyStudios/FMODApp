#pragma once

#include "FMOD\fmod.hpp"
//namespace FMODApp_Engine{}

namespace FMODApp//_Engine
{
	namespace Engine{
		public ref class SoundEngine sealed
		{

		private:
			FMOD::System* _system;

		public:
			SoundEngine();
			
		};
	}
}