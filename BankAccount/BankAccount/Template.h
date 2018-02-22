#pragma once

template<typename T, typename S>
S average(T tableau[], int size)
{
	S sum(0);
	for (int i(0); i<size; ++i)
		sum += tableau[i];

	return sum / size;
}
