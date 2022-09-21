#include <stdio.h>
#include <windows.h>
#include <ctype.h>


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

//apertar uma tecla
void input(char a){
    sendKeyDown(a);
    sendKeyUp(a);
}

//apertar duas teclas ex: shift+2=@
void twoKeycode(char a,char b){
        sendKeyDown(a);
        input(b);
        sendKeyUp(a);
}

void threeKeycode(char a,char b,char c){
      sendKeyDown(a);
      sendKeyDown(b);
        input(c);
        sendKeyUp(b);
        sendKeyUp(a);
}

void inputText(char a[],int d){
    for(int i=0;i<d;i++){
            
            // if(a[i]==','){
            //     input(188);
            // }else{
            //     input(toupper(a[i]));
            // }
            if (a[i] >= 'A' && a[i] <= 'Z'){
                twoKeycode(16,a[i]);
            }
        
            else {
                input(toupper(a[i]));
            }
            Sleep(200);
    }
   
}



int main()
{
   
    
    char text[]="Ola mero mortal eu posso ver voce";
    SetCursorPos(700,950);
    click();
    inputText(text,sizeof(text));

    // input(19);
   
    return 0;
}

