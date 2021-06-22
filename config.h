/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;     /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1; 
                   
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack Nerd Font:size=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	                       /*     fg         bg       */
	[SchemeNorm] =           { "#f1f1f0", "#282a36" },
	[SchemeSel] =            { "#282a36", "#bd9cf9" },
	[SchemeOut] =            { "#000000", "#00ffff" },
	[SchemeSelHighlight] =   { "#000000", "#50fa7b" },
	[SchemeNormHighlight] =  { "#000000", "#8ae9fc" },
	[SchemeMid] =            { "#eeeeee", "#ff5555" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 25;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 22;
static unsigned int min_lineheight = 8;
static unsigned int columns    = 0;
/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
