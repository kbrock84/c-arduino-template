# VS Code Setup

This config was done using Windows connected to an Ubuntu machine using the remote SSH tools. The operating system is Ubuntu Linux, but all VS Code commands are Windows.

## Install following extensions:
    - C/C++ (Microsoft)
    - CMake (twxs)
    - CMake Tools (Microsoft)

## Configure C/C++ extension (Linux)

The C/C++ extension can be configured with multiple configurations.
I have a config named `AVR` as shown below.

Configure:
 - Open command window (`Ctrl + Shift + P` in Windows)
 - Select _C/C++: Edit Configurations (JSON)_
 - Add an AVR configuration similar to below

### C/C++: Edit Configurations (JSON) 
```json
{
    "configurations": [
        {
            "name": "AVR",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "compilerPath": "/usr/bin/avr-gcc",
            "cStandard": "gnu17",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```

# Build and Flash
Open up the `Makefile` at the root of this repo and change the folloing values as needed
```makefile
# change these values as needed
FILENAME=blink
DEVICE=atmega328p
PORT=/dev/ttyACM0
```