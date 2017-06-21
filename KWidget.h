#ifndef KWIDGET_H
#define KWIDGET_H

#include "KObject.h"
#include "KApplication.h"
#include "KEvent.h"
#include "KKeyEvent.h"
#include "KPaintEvent.h"
#include <curses.h>

class KWidget : public KObject {
private:
	int x;
	int y;
	int height;
	int weight;
	WINDOW *win;
	bool available;
protected:
	virtual void keyEvent(KKeyEvent *);
	virtual void paintEvent(KPaintEvent *);
public:
	int getX();
	int getY();
	int getHeight();
	int getWeight();
	bool isAvailable();
	void show();
	void hide();
	void setWindow(int x,int y,int height,int weight);
	KWidget(int x=0,int y=0,int height=0,int weight=0,KObject *parent=nullptr);
	~KWidget()override;
	void repaint();
	void event(KEvent *)override;
};

#endif //KWIDGET_H
