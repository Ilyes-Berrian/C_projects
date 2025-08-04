#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib, "winmm.lib")

int main(){
    PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME | SND_SYNC);
    Beep(5000, 10000);  // Frequency 750Hz, Duration 300ms
    return 0;
}
