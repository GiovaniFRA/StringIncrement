#include <stdio.h>
#include <windows.h>

void click(){
     mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0,0,0);
     mouse_event(MOUSEEVENTF_LEFTUP, 0, 0,0,0);
     puts("clicou");
}

void sendKeyDown(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;

    input.ki.wVk = keyCode;
    input.ki.dwFlags = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

void sendKeyUp(unsigned char keyCode)
{
    INPUT input;
    input.type = INPUT_KEYBOARD;

    input.ki.wVk = keyCode;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

void input(char a){
    sendKeyDown(a);
    sendKeyUp(a);
}

int main()
{
        
        SetCursorPos(1250,10); //Muda a posição do cursor  
        click();
        SetCursorPos(600,750);
        click();
        SetCursorPos(600,400);
        click();
        Sleep(100);
        input('R');
        input('O');
        input('G');
        input('E');
        input('R');
      
        
        // click();k

    // while(1){
    //      if(GetAsyncKeyState(0x01)){kk
    //         puts("clicou");
    //     }
    // }
       
    
    return 0;
}

