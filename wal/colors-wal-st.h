const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#181611", /* black   */
  [1] = "#A99169", /* red     */
  [2] = "#D2A26B", /* green   */
  [3] = "#D8C266", /* yellow  */
  [4] = "#B0A391", /* blue    */
  [5] = "#D4B397", /* magenta */
  [6] = "#EBD4A9", /* cyan    */
  [7] = "#f1ecdf", /* white   */

  /* 8 bright colors */
  [8]  = "#a8a59c",  /* black   */
  [9]  = "#A99169",  /* red     */
  [10] = "#D2A26B", /* green   */
  [11] = "#D8C266", /* yellow  */
  [12] = "#B0A391", /* blue    */
  [13] = "#D4B397", /* magenta */
  [14] = "#EBD4A9", /* cyan    */
  [15] = "#f1ecdf", /* white   */

  /* special colors */
  [256] = "#181611", /* background */
  [257] = "#f1ecdf", /* foreground */
  [258] = "#f1ecdf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
