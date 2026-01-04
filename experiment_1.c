#include <stdio.h>

int main() {
    printf("Step 1: Install VS Code and GCC\n");
    printf("VS Code is just a text editor; it needs a compiler (GCC) to actually run your C code.\n\n");
    
    printf("1. Install VS Code\n");
    printf("Go to code.visualstudio.com and download the installer for your OS.\n");
    printf("Run the installer and finish the setup.\n");
    printf("Essential: Open VS Code, click the Extensions icon on the left sidebar, and search for \"C/C++\" by Microsoft. Install it.\n\n");
    
    printf("2. Install the GCC Compiler\n");
    printf("Windows: Download MSYS2 and run: pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain\n");
    printf("Mac: Type xcode-select --install\n");
    printf("Linux: Type sudo apt update && sudo apt install build-essential\n");
    printf("\n");
    printf("------------------------------------------------------------------------------------------------------\n");
    printf("\n");

    printf("HELLO WORLD!");

    return 0;
}