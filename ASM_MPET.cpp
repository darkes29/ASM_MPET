#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int in_x, in_y = 0;
    int x, y = 0;
    cin >> x;
    cin >> y;
    _asm {
        // код на ассемблере
        XOR EAX, EAX
        XOR EBX, EBX
        MOV EAX, 5 // MOV[dst, src]
        MOV EBX, x
        ADD EAX, EBX // Сложить EAX и EBX, результат в EAX
        PUSH EAX // поместить в стек
        XOR EAX, EAX
        POP EAX  // достать из вершины стека
        MOV result, EAX
        XOR EAX, EAX
        XOR EBX, EBX
        MOV EAX, x
        MOV EBX, y
        PUSH EAX
        PUSH EBX
        POP EAX
        POP EBX
        MOV in_x, EBX
        MOV in_y, EAX

    }
    cout << result << endl;
    cout << "In x " << in_x << endl;
    cout << "In y " << in_y << endl;

}
