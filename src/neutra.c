#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {
    
    //while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
    if(argc < 2) {
        printf("Illegal Number of Arguments\n");
        printf("Usage: %s <filename>\n", argv[0]);
        return 1; // return exit failure status code
    }

    FILE* fd = fopen(argv[1], "w+");
    if(!fd) {
        printf("\n Error Opening File\n");
        return 1;
    }

    char c;
    while((c = getchar()) != EOF) putc(c, fd);

    return 0;
}
