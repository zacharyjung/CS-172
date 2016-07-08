#include "tic.h"
#include <vector>
#include <string>

tBoard::tBoard()
{
	location_[0][0] = BLANK;
	location_[1][0] = BLANK;
	location_[2][0] = BLANK;
	location_[1][1] = BLANK;
	location_[1][2] = BLANK;
	location_[2][1] = BLANK;
	location_[2][2] = BLANK;
	location_[0][1] = BLANK;
	location_[0][2] = BLANK;

	cout << " |  0  |  1  |  2  |" << endl;
	cout << " +-----------------+" << endl;
	cout << "0 |  " << location_[0][0] << "  |  "<<location_[0][1]<<"  |  "<<location_[0][2]<<"  |"<<endl;
	cout << " +-----------------+" << endl;
	cout << "1 |  " << location_[1][0] << "  |  " << location_[1][1] << "  |  " << location_[1][2] << "  |" << endl;
	cout << " +-----------------+" << endl;
	cout << "2 |  " << location_[2][0] << "  |  " << location_[2][1] << "  |  " << location_[2][2] << "  |" << endl;
	cout << " +-----------------+" << endl;


}
bool tBoard::move(symbol m, int x, int y)
{
	if ((x== 0)&&(y==0))
	{
		if(location_[0][0]== BLANK)
		{
			if (m == X)
			{
				location_[0][0]= X;
				return true;
			}
			if (m == O)
			{
				location_[0][0]=O;
				return true;
			}
		}
	}
	if ((x == 0)&&(y==1))
	{
		if (location_[0][1] == BLANK)
		{
			if (m == X)
			{
				location_[0][1]=X;
				return true;
			}
			if (m == O)
			{
				location_[0][1] = O;
				return true;
			}
		}
	}
	if ((x == 0) && (y == 2))
	{
		if (location_[0][2] == BLANK)
		{
			if (m == X)
			{
				location_[0][2] = X;
				return true;
			}
			if (m == O)
			{
				location_[0][2] = O;
				return true;
			}
		}
	}
	if ((x == 1) && (y == 0))
	{
		if (location_[1][0] == BLANK)
		{
			if (m == X)
			{
				location_[1][0] = X;
				return true;
			}
			if (m == O)
			{
				location_[1][0] = O;
				return true;
			}
		}
	}
	if ((x == 1) && (y == 1))
	{
		if (location_[1][1] == BLANK)
		{
			if (m == X)
			{
				location_[1][1] = X;
				return true;
			}
			if (m == O)
			{
				location_[1][1] = O;
				return true;
			}
		}
	}
	if ((x == 1) && (y == 2))
	{
		if (location_[1][2] == BLANK)
		{
			if (m == X)
			{
				location_[1][2] = X;
				return true;
			}
			if (m == O)
			{
				location_[1][2] = O;
				return true;
			}
		}
	}
	if ((x == 2) && (y == 0))
	{
		if (location_[2][0] == BLANK)
		{
			if (m == X)
			{
				location_[2][0] = X;
				return true;
			}
			if (m == O)
			{
				location_[2][0] = O;
				return true;
			}
		}
	}
	if ((x == 2) && (y == 1))
	{
		if (location_[2][1] == BLANK)
		{
			if (m == X)
			{
				location_[2][1] = X;
				return true;
			}
			if (m == O)
			{
				location_[2][1] = O;
				return true;
			}
		}
	}
	if ((x == 2) && (y == 2))
	{
		if (location_[2][2] == BLANK)
		{
			if (m == X)
			{
				location_[2][2] = X;
				return true;
			}
			if (m == O)
			{
				location_[2][2] = O;
				return true;
			}
		}
	}
	else
	{
		return false;
	}

}
bool tBoard::game_over()
{
	if (winner() == X)
	{
		return true;
	}
	else if (winner() == O)
	{
		return true;
	}
	else if (winner() == BLANK)
	{
		if (location_[0][0]!=BLANK&&location_[1][0] != BLANK&&location_[2][0] != BLANK&&location_[1][1] != BLANK&&location_[1][2] != BLANK&&location_[1][0] != BLANK&&location_[2][0] != BLANK&&location_[2][1] != BLANK&&location_[2][2] != BLANK)
		{
			return true;
		}
	}
		return false;
	
}
symbol tBoard::winner()
{
	//Top Row 
	if (((location_[0][0]==O)&&(location_[0][1]==O)&&(location_[0][2]==O)))
	{
		return O;
	}
	else if (((location_[0][0] == X) && (location_[0][1] == X) && (location_[0][2] == X)))
	{
		return X;
	}

	//Middle row
	else if (((location_[1][0] == O) && (location_[1][1] == O) && (location_[1][2] == O)))
	{
		return O;
	}
	else if (((location_[1][0] == X) && (location_[1][1] == X) && (location_[1][2] == X)))
	{
		return X;
	}
	
	//Bottom Row
	else if (((location_[2][0] == O) && (location_[2][1] == O) && (location_[2][2] == O)))
	{
		return O;
	}
	else if (((location_[2][0] == X) && (location_[2][1] == X) && (location_[2][2] == X)))
	{
		return X;
	}
	
	//Left Column
	else if (((location_[0][0] == O) && (location_[1][0] == O) && (location_[2][0] == O)))
	{
		return O;
	}
	else if (((location_[0][0] == X) && (location_[1][0] == X) && (location_[2][0] == X)))
	{
		return X;
	}

	//Middle Column
	else if (((location_[0][1] == O) && (location_[1][1] == O) && (location_[2][1] == O)))
	{
		return O;
	}
	else if (((location_[0][1] == X) && (location_[1][1] == X) && (location_[2][1] == X)))
	{
		return X;
	}

	//Right Column
	else if (((location_[0][2] == O) && (location_[1][2] == O) && (location_[2][2] == O)))
	{
		return O;
	}
	else if (((location_[0][2] == X) && (location_[1][2] == X) && (location_[2][2] == X)))
	{
		return X;
	}

	//Upward right Diagonal
	else if (((location_[2][0] == O) && (location_[1][1] == O) && (location_[0][2] == O)))
	{
		return O;
	}
	else if (((location_[2][0] == X) && (location_[1][1] == X) && (location_[0][2] == X)))
	{
		return X;
	}

	//Upward left Diagonal
	else if (((location_[0][0] == O) && (location_[1][1] == O) && (location_[2][2] == O)))
	{
		return O;
	}
	else if (((location_[0][0] == X) && (location_[1][1] == X) && (location_[2][2] == X)))
	{
		return X;
	}

	else
	{
		return BLANK;
	}
}
ostream & operator<<(ostream& os, const tBoard& myTable)
{
	os << myTable.getMyBoard();
	return os;
}
string tBoard::getMyBoard()const
{
	cout << " |  0  |  1  |  2  |" << endl;
	cout << " +-----------------+" << endl;
	cout << "0 |  " << location_[0][0] << "  |  " << location_[0][1] << "  |  " << location_[0][2] << "  |" << endl;
	cout << " +-----------------+" << endl;
	cout << "1 |  " << location_[1][0] << "  |  " << location_[1][1] << "  |  " << location_[1][2] << "  |" << endl;
	cout << " +-----------------+" << endl;
	cout << "2 |  " << location_[2][0] << "  |  " << location_[2][1] << "  |  " << location_[2][2] << "  |" << endl;
	cout << " +-----------------+" << endl;

	return "";
}