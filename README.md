# VS Code Setup

This config was done using Windows connected to an Ubuntu machine using the remote SSH tools. The operating system is Ubuntu Linux, but all VS Code commands are Windows.

## Install following extensions:

    - C/C++ (Microsoft)
    - CMake (twxs)
    - CMake Tools (Microsoft)
    - Remote - SSH (Microsoft) if connecting to a remote Linux machine

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
            "cStandard": "gnu11",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "linux-gcc-x64"
        }
    ],
    "version": 4
}
```

# Build and Flash

Open up the `Makefile` at the root of this repo and change the folloing values as needed. be sure to remove any extension from the file name as this MakeFile will search for `${FILENAME}.c` and generate `${FILENAME}.o`, `${FILENAME}.elf` and `${FILENAME}.hex` files.


The PORT will need to change depending on where you have your arduino plugged in.

```makefile
# change these values as needed
FILENAME=blink
DEVICE=atmega328p
PORT=/dev/ttyACM0
```

To build and flash, open up the integrated terminal in VS Code using key combo ``Ctrl + ` ``

Run the make command
```powershell
sudo make
```