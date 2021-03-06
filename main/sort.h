/*
*   Copyright (c) 1998-2002, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License version 2 or (at your option) any later version.
*
*   External interface to sort.c
*/
#ifndef CTAGS_MAIN_SORT_H
#define CTAGS_MAIN_SORT_H

/*
*   INCLUDE FILES
*/
#include "general.h"  /* must always come first */
#include <stdio.h>

/*
*   FUNCTION PROTOTYPES
*/
extern void catFile (FILE *fp);

#ifdef EXTERNAL_SORT
extern void externalSortTags (const boolean toStdout, FILE *tagFile);
#else
extern void internalSortTags (const boolean toStdout,
			      FILE *fp,
			      size_t numTags);
#endif

/* fp is closed in this function. */
extern void failedSort (FILE *const fp, const char* msg);

#endif  /* CTAGS_MAIN_SORT_H */

/* vi:set tabstop=4 shiftwidth=4: */
