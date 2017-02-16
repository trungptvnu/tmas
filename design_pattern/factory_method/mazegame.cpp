#include <cstdio>
using namespace std;

class Maze {
public:
	Maze() {
		printf("create a maze\n");
	}
};

class MazeGame {
	public:
		Maze* CreateMaze() {
			
			printf("MazeGame::CreateMaze()\n");
		    Maze* aMaze = MakeMaze();
	    	return aMaze;
		}

		// factory method
		virtual Maze* MakeMaze() const
        { return new Maze; }
};


int main() {

	MazeGame myGame;
    Maze* m1 = myGame.CreateMaze();
    

	return 0;
}