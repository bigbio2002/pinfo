/***************************************************************************
 *  Pinfo is a ncurses based lynx style info documentation browser
 *
 *  Copyright (C) 1999  Przemek Borys <pborys@dione.ids.pl>
 *  Copyright (C) 2005  Bas Zoetekouw <bas@debian.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of version 2 of the GNU General Public License as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301
 *  USA
 ***************************************************************************/

#ifndef __MANUAL_H
#define __MANUAL_H

/* passes control to the manual code */
int handlemanual (char *name);

/* check if a char is a hyphen character */
int ishyphen(unsigned char ch);
/* load manual */
void loadmanual(FILE * id);
/* handle keyboard */
int manualwork(void);
/* scan for potential link to select on viewed manual page */
void rescan_selected(void);
/* self explanatory */
void showmanualscreen(void);
/* mvaddstr with bold/italic */
void mvaddstr_manual(int y, int x, char *str);
/* adds highlights to a painted screen */
void add_highlights(void);
/* strips line from formatting characters */
void strip_manual(char *buf);
/*
 * Initialize links in a line.  Links are entries of form reference(section),
 * and are stored in `manuallinks' var, described bellow.
 */
void man_initializelinks(char *line, int carry);
int is_in_manlinks(char *in, char *find);

void printmanual(char **Message, long Lines);

#endif
