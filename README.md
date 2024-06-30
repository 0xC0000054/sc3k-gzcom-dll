# sc3k-gzcom-dll

A GZCOM-compatible framework for creating SimCity 3000 DLL plugins.

The game's interface headers were created from the Linux build of SimCity 3000 Unlimited, witch was shipped with
debug symbols enabled. I wrote a [tool](https://github.com/0xC0000054/sc3k-linux-demangle) to undecorate the C++ interface
methods and convert them into an interface header, that tool is based on code from the GCC compiler that was used to
build the Linux version of the game.

The core GZCOM code has been adapted from the [gzcom-dll](https://github.com/nsgomez/gzcom-dll) project for SimCity 4.

# Developer Notes

SimCity 3000 requires the plugin DLLs to be placed in the same folder as the other game libraries, e.g. SIMCITY.DLL/libSimCity.so.
For the Windows release it is the `<SC3KU Root>/Apps` folder.
For the Linux release it is the `<SC3KU Root>/bin/x86/glibc-2.1/lib` folder.

# To-Do

At present the DLL is callable by SC3K, and the DLL can call game functions including subscribing to in-game messages,
interacting with the cheat code system, etc.   

Only a small number of the game's interfaces have been decoded, and the message system values are mostly unknown.

# License

This project is licensed under the terms of the MIT License.    
See [LICENSE.txt](LICENSE.txt) for more information.

## 3rd party code

[gzcom-dll](https://github.com/nsgomez/gzcom-dll) - MIT License.    