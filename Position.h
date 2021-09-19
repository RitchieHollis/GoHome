#pragma once
#ifndef Position

class Position {

	private:
		int x, y;

	public:
		Position(int, int); //constructor
		~Position(); //destructor
		void getPosition() const;
		void setPosition(int, int);
		friend void Movement(Position&, const Position&);
		friend void Choice(Position&, const Position&); //developped in the main file
		friend void Up(Position&);
		friend void Down(Position&);
		friend void Left(Position&);
		friend void Right(Position&);

};
#endif