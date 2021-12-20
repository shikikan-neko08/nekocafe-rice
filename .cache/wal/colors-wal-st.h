const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2d241e", /* black   */
  [1] = "#8A6F8F", /* red     */
  [2] = "#B4A291", /* green   */
  [3] = "#D7B292", /* yellow  */
  [4] = "#EFD9A4", /* blue    */
  [5] = "#EED5AE", /* magenta */
  [6] = "#E9D8CC", /* cyan    */
  [7] = "#f4efde", /* white   */

  /* 8 bright colors */
  [8]  = "#aaa79b",  /* black   */
  [9]  = "#8A6F8F",  /* red     */
  [10] = "#B4A291", /* green   */
  [11] = "#D7B292", /* yellow  */
  [12] = "#EFD9A4", /* blue    */
  [13] = "#EED5AE", /* magenta */
  [14] = "#E9D8CC", /* cyan    */
  [15] = "#f4efde", /* white   */

  /* special colors */
  [256] = "#2d241e", /* background */
  [257] = "#f4efde", /* foreground */
  [258] = "#f4efde",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
