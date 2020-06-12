#include <iostream>
using namespace std;



int main()
{
    char szMessage[100] = "Madam, I\'m Adam";
    __asm
    {
        mov ECX, 15
        mov EDI, 0
        lea ESI, szMessage

            cycle:
        push [ESI + EDI]
        inc EDI
        loop cycle
            
        mov EDI, 0
        mov ECX, 15
        
            cycle1:
        pop EAX
        mov [ESI + EDI], AL
        inc EDI
        loop cycle1
    }
    printf(szMessage);
}