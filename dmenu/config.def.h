/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"3270 Nerd Font Mono:style:regular:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char col_background[]    = "#1a1b26";
static const char col_foreground[]    = "#c0caf5";
static const char col_black[]         = "#15161e";
static const char col_bright_black[]  = "#414868";
static const char col_red[]           = "#f7768e";
static const char col_bright_red[]    = "#f7768e";
static const char col_green[]         = "#9ece6a";
static const char col_bright_green[]  = "#9ece6a";
static const char col_yellow[]        = "#e0af68";
static const char col_bright_yellow[] = "#e0af68";
static const char col_blue[]          = "#7aa2f7";
static const char col_bright_blue[]   = "#7aa2f7";
static const char col_magenta[]       = "#bb9af7";
static const char col_bright_magenta[]= "#bb9af7";
static const char col_cyan[]          = "#7dcfff";
static const char col_bright_cyan[]   = "#7dcfff";
static const char col_white[]         = "#a9b1d6";
static const char col_bright_white[]  = "#a9b1d6";
static const char col_grey[]          = "#565f89";

static const char *colors[SchemeLast][2] = {
  /*                   fg         bg       */
  [SchemeNorm] = { col_foreground , col_background},
  [SchemeSel] = { col_background , col_magenta },
  [SchemeOut] = { col_background, col_bright_yellow },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
