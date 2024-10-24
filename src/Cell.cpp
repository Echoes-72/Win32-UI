#include"../Include/Cell.hpp"
HDC Cell::Hdc;
ofstream &operator<<(ofstream &Out, const Cell &cell)
{
    Out << cell.Position.x << "\t" << cell.Position.y << "\t"
        << cell.Wealth << "\t" << cell.Color;
    return Out;
}