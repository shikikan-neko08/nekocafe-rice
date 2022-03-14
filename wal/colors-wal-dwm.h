static const char norm_fg[] = "#f1ecdf";
static const char norm_bg[] = "#181611";
static const char norm_border[] = "#a8a59c";

static const char sel_fg[] = "#f1ecdf";
static const char sel_bg[] = "#D2A26B";
static const char sel_border[] = "#f1ecdf";

static const char urg_fg[] = "#f1ecdf";
static const char urg_bg[] = "#A99169";
static const char urg_border[] = "#A99169";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
