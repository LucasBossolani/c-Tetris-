#include <iostream>
#include "Point.h"
#include "Tetromino.h"

int main() {
    Tetromino tet;
    tet.setShape(TetShape::T);
    tet.printToConsole();

    while (true) {
        char input;
        std::cout << "command: ";
        if (!(std::cin >> input)) {
            break;  
        }

        switch (input) {
        case 'j': tet.setShape(TetShape::J); break;
        case 's': tet.setShape(TetShape::S); break;
        case 'l': tet.setShape(TetShape::L); break;
        case 'z': tet.setShape(TetShape::Z); break;
        case 't': tet.setShape(TetShape::T); break;
        case 'o': tet.setShape(TetShape::O); break;
        case 'i': tet.setShape(TetShape::I); break;
        case 'r': tet.rotateClockwise();     break;
        case 'q': return 0;                  
        default:
            std::cout << "Unknown command. Use j/s/l/z/t/o/i to set shape, r to rotate, q to quit.\n";
            continue;  
        }

        tet.printToConsole();
    }

    return 0;
}