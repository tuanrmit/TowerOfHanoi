#include <stdio.h>

void moveDisk(char, char);
void moveDiskVia(char, char, char);
void towerOfhanoi(int, char, char, char);

int main()
{
	towerOfhanoi(4, 'A', 'B', 'C');
}

void moveDisk(char from, char to) 
{
	printf("Move disk from %c to %c.\n", from, to);
}

void moveDiskVia(char from, char via, char to)
{
	moveDisk(from, via);
	moveDisk(via, to);
}

void towerOfhanoi(int numDisk, char from, char via, char to)
{
	if(numDisk == 0) return;
	else {
		towerOfhanoi(numDisk-1, from, to, via);
		moveDisk(from, to);
		towerOfhanoi(numDisk-1, via, from, to);
    }			
}
