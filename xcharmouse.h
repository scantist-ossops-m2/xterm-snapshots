/*
 * $XFree86$
 */

/************************************************************

Copyright 1998 by Jason Bacon <acadix@execpc.com>

                        All Rights Reserved

Permission to use, copy, modify, and distribute this software and its
documentation for any purpose and without fee is hereby granted,
provided that the above copyright notice appear in all copies and that
both that copyright notice and this permission notice appear in
supporting documentation, and that the name of the above listed
copyright holder(s) not be used in advertising or publicity pertaining
to distribution of the software without specific, written prior
permission.

THE ABOVE LISTED COPYRIGHT HOLDER(S) DISCLAIM ALL WARRANTIES WITH REGARD
TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
AND FITNESS, IN NO EVENT SHALL THE ABOVE LISTED COPYRIGHT HOLDER(S) BE
LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

********************************************************/


#ifndef included_xcharmouse_h
#define included_xcharmouse_h

/*
 * Macros for dpmodes
 * J. Bacon, acadix@execpc.com, June 1998
 */

/* DECSET arguments for turning on mouse reporting modes */
#define SET_X10_MOUSE               9
#define SET_VT200_MOUSE             1000
#define SET_VT200_HIGHLIGHT_MOUSE   1001
#define SET_BTN_EVENT_MOUSE         1002
#define SET_ANY_EVENT_MOUSE         1003

/* Values for screen->send_mouse_pos */
enum {
	MOUSE_OFF,
	X10_MOUSE,
	VT200_MOUSE,
	VT200_HIGHLIGHT_MOUSE,
	BTN_EVENT_MOUSE,
	ANY_EVENT_MOUSE
};

#endif /* included_xcharmouse_h */
