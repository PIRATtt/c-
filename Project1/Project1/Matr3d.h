#pragma once
#include <iostream>
class Matr3Diag
{
private:
	int n;
	double* elem;
public:
	Matr3Diag();
	Matr3Diag(const Matr3Diag& temp);
	~Matr3Diag();//äĺńňđóęňîđ

	int get_n() { return this->n; }
	double get_elem(int i, int j) const;
	double& get_elem_lin(int i) { return this->elem[i]; }
	Matr3Diag sum(const Matr3Diag& temp);
	Matr3Diag mult(const Matr3Diag& temp); //Добавил умножение
	void print() const;
	void input(int size);

	/*Ďĺđĺăđóçęŕ îďĺđŕňîđîâ
	*	- ęŕę ěĺňîä ęëŕńńŕ 
	*			ěĺí˙ĺňń˙ îáúĺęň ęëŕńńŕ +=, -+, ++, --
	*	- ęŕę äđóćĺńňâĺííŕ˙ ôóíęöč˙
	*			íĺîáőîäčě äîńňóď ę private ÷ëĺíŕě ęëŕńńŕ
	*	- âíĺ ęëŕńńŕ
	*/
	void operator+=(const Matr3Diag& temp);
	void operator*=(const Matr3Diag& temp); //И через перегрузку
	friend std::ostream& operator<<(std::ostream& out, const Matr3Diag& temp);
	friend std::istream& operator>>(std::istream& in, Matr3Diag& temp);
};