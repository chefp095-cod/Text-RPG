#pragma once

int nShuffle()
{
	int nRand = rand() % 100;

	return nRand;
}

bool nShuffleHalf()
{
	if (nShuffle() < 50)
	{
		return true;
	}

	return false;
}

bool nShuffleQuarter()
{
	if (nShuffle() < 25)
	{
		return true;
	}

	return false;
}

bool nShuffleLow()
{
	if (nShuffle() < 10)
	{
		return true;
	}

	return false;
}

bool nShuffleLegend()
{
	if (nShuffle() < 2)
	{
		return true;
	}

	return false;
}