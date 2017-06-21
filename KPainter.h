#ifndef KPAINTER_H
#define KPAINTER_H

#include "KObject.h"
#include "KWidget.h"
#include "curses.h"

class KWidget;

class KPainter : public KObject{
private:
	WINDOW *win;
public:
	KPainter(KWidget *widget);
	~KPainter()override;
	int addCh(int ch);
	int mvAddCh(int x,int y,int ch);
	int addStr(char* s);
	int mvAddStr(int x,int y,char *s);
	int attrOn(chtype att);
	int attrOff(chtype att);
	int attrSet(chtype att);

};

#endif //KPAINTER_H
