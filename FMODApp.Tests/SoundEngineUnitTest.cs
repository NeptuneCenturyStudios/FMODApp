using System;
using Microsoft.VisualStudio.TestPlatform.UnitTestFramework;
using FMODApp.Engine;


namespace FMODApp.Tests
{
    [TestClass]
    public class SoundEngineUnitTest
    {
        [TestMethod]
        public void TestCreateSoundSystem()
        {
            //test creating and destroying a sound system.
            var ss = new SoundEngine();

        }
    }
}
