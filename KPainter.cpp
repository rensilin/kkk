#include "KPainter.h"

KPainter::KPainter(KWidget *widget)
{
	win=widget->win;
	wclear(win);
}

KPainter::~KPainter()
{
	wrefresh(win);
}

int KPainter::getXY(int &x,int &y)
{
	return getyx(win,x,y);
}

int KPainter::box()
{
	return ::box(win,ACS_VLINE,ACS_HLINE);
}

int KPainter::addCh(int ch)
{
	return waddch(win, ch);
}

int KPainter::mvAddCh(int x,int y,int ch)
{
	return mvwaddch(win, x, y, ch);
}

int KPainter::addStr(char* s)
{
	return waddstr(win, s);
}

int KPainter::move(int x,int y)
{
	return ::wmove(win,x,y);
}

int KPainter::mvAddStr(int x,int y,char *s)
{
	return mvwaddstr(win, x, y, s);
}

int KPainter::setFont(KFont *font)
{
	return wattrset(win,font->getStyle()|COLOR_PAIR(font->getColorNumber()));
}

