#include <stdio.h>
#include <windows.h>

void limpartela(){
    COORD coord;
    DWORD written;
    CONSOLE_SCREEN_BUFFER_INFO info;

    coord.X = 0;
    coord.Y = 0;
    GetConsoleScreenBufferInfo ( GetStdHandle ( STD_OUTPUT_HANDLE ), &info );
    FillConsoleOutputCharacter ( GetStdHandle ( STD_OUTPUT_HANDLE ), ' ',
    info.dwSize.X * info.dwSize.Y, coord, &written );
    SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
    return;
}

int main()
{
    int x, y;
    char novamente;
    do{
        printf("Digite as coordenadas no formato x,y: ");
        scanf("%d,%d", &x, &y);
        SetCursorPos(x, y); //Muda a posição do cursor
        printf("\nQuer testar novamente (s/n)? ");
        scanf("\n%c", &novamente);
        if (novamente == 's'){
            limpartela(); //Limpa a tela se quiser testar novamente
        }
    }while(novamente == 's');
    return 0;
}