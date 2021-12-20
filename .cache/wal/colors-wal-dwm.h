static const char norm_fg[] = "#f4efde";
static const char norm_bg[] = "#2d241e";
static const char norm_border[] = "#aaa79b";

static const char sel_fg[] = "#f4efde";
static const char sel_bg[] = "#B4A291";
static const char sel_border[] = "#f4efde";

static const char urg_fg[] = "#f4efde";
static const char urg_bg[] = "#8A6F8F";
static const char urg_border[] = "#8A6F8F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
