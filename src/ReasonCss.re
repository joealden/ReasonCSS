/* ReasonCSS */

/*
  All units use floats instead of ints because there are use cases for have
  floating point measurements. The downside of this is that even integer
  measurements need to be in floating point form.
 */

type measurement =
  /* Absolute Lengths */
  | Cm(float) /* Cm(10.0) == 10cm */
  | Mm(float) /* Mm(10.0) == 10mm */
  | In(float) /* In(10.0) == 10in */
  | Px(float) /* Px(10.0) == 10px */
  | Pt(float) /* Pt(10.0) == 10pt */
  | Pc(float) /* Pc(10.0) == 10pc */
  /* Relative Lengths */
  | Em(float) /* Em(10.0) == 10em */
  | Ex(float) /* Ex(10.0) == 10ex */
  | Ch(float) /* Ch(10.0) == 10ch */
  | Rem(float) /* Rem(10.0) == 10rem */
  | Vw(float) /* Vw(10.0) == 10vw */
  | Vh(float) /* Vh(10.0) == 10vh */
  | Vmin(float) /* Vmin(10.0) == 10vmin */
  | Vmax(float) /* Vmax(10.0) == 10vmax */
  | Percent(float); /* Percent(10.0) == 10% */

type color =
  /* User Defined */
  | Hex(string) /* Hex("FFFFFF") == #FFFFFF  */
  | Rgb(int, int, int) /* Rgb(255, 255, 255) == rgb(255, 255, 255) */
  | Rgba(int, int, int, float) /* Rgba(255, 255, 255, 1) == rgba(255, 255, 255, 1) */
  | Hsl(int, int, int) /* Hsl(360, 100, 100) == hsl(360, 100%, 100%) */
  | Hsla(int, int, int, float) /* Hsla(360, 100, 100, 1) == hsla(360, 100%, 100%, 1) */
  /*
   CSS Colors (All 148 of them)

   When coverted into a string, they will be converted directly into their hex code
   equivalents. This is because named colors have to be coverted by the browser,
   so this removes the run-time performance hit that using named colors has.
   */
  | AliceBlue /* #F0F8FF */
  | AntiqueWhite /* #FAEBD7 */
  | Aqua /* #00FFFF */
  | Aquamarine /* #7FFFD4 */
  | Azure /* #F0FFFF */
  | Beige /* #F5F5DC */
  | Bisque /* #FFE4C4 */
  | Black /* #000000 */
  | BlanchedAlmond /* #FFEBCD */
  | Blue /* #0000FF */
  | BlueViolet /* #8A2BE2 */
  | Brown /* #A52A2A */
  | BurlyWood /* #DEB887 */
  | CadetBlue /* #5F9EA0 */
  | Chartreuse /* #7FFF00 */
  | Chocolate /* #D2691E */
  | Coral /* #FF7F50 */
  | CornflowerBlue /* #6495ED */
  | Cornsilk /* #FFF8DC */
  | Crimson /* #DC143C */
  | Cyan /* #00FFFF */
  | DarkBlue /* #00008B */
  | DarkCyan /* #008B8B */
  | DarkGoldenRod /* #B8860B */
  | DarkGray /* #A9A9A9 */
  | DarkGrey /* #A9A9A9 */
  | DarkGreen /* #006400 */
  | DarkKhaki /* #BDB76B */
  | DarkMagenta /* #8B008B */
  | DarkOliveGreen /* #556B2F */
  | DarkOrange /* #FF8C00 */
  | DarkOrchid /* #9932CC */
  | DarkRed /* #8B0000 */
  | DarkSalmon /* #E9967A */
  | DarkSeaGreen /* #8FBC8F */
  | DarkSlateBlue /* #483D8B */
  | DarkSlateGray /* #2F4F4F */
  | DarkSlateGrey /* #2F4F4F */
  | DarkTurquoise /* #00CED1 */
  | DarkViolet /* #9400D3 */
  | DeepPink /* #FF1493 */
  | DeepSkyBlue /* #00BFFF */
  | DimGray /* #696969 */
  | DimGrey /* #696969 */
  | DodgerBlue /* #1E90FF */
  | FireBrick /* #B22222 */
  | FloralWhite /* #FFFAF0 */
  | ForestGreen /* #228B22 */
  | Fuchsia /* #FF00FF */
  | Gainsboro /* #DCDCDC */
  | GhostWhite /* #F8F8FF */
  | Gold /* #FFD700 */
  | GoldenRod /* #DAA520 */
  | Gray /* #808080 */
  | Grey /* #808080 */
  | Green /* #008000 */
  | GreenYellow /* #ADFF2F */
  | HoneyDew /* #F0FFF0 */
  | HotPink /* #FF69B4 */
  | IndianRed /* #CD5C5C */
  | Indigo /* #4B0082 */
  | Ivory /* #FFFFF0 */
  | Khaki /* #F0E68C */
  | Lavender /* #E6E6FA */
  | LavenderBlush /* #FFF0F5 */
  | LawnGreen /* #7CFC00 */
  | LemonChiffon /* #FFFACD */
  | LightBlue /* #ADD8E6 */
  | LightCoral /* #F08080 */
  | LightCyan /* #E0FFFF */
  | LightGoldenRodYellow /* #FAFAD2 */
  | LightGray /* #D3D3D3 */
  | LightGrey /* #D3D3D3 */
  | LightGreen /* #90EE90 */
  | LightPink /* #FFB6C1 */
  | LightSalmon /* #FFA07A */
  | LightSeaGreen /* #20B2AA */
  | LightSkyBlue /* #87CEFA */
  | LightSlateGray /* #778899 */
  | LightSlateGrey /* #778899 */
  | LightSteelBlue /* #B0C4DE */
  | LightYellow /* #FFFFE0 */
  | Lime /* #00FF00 */
  | LimeGreen /* #32CD32 */
  | Linen /* #FAF0E6 */
  | Magenta /* #FF00FF */
  | Maroon /* #800000 */
  | MediumAquaMarine /* #66CDAA */
  | MediumBlue /* #0000CD */
  | MediumOrchid /* #BA55D3 */
  | MediumPurple /* #9370DB */
  | MediumSeaGreen /* #3CB371 */
  | MediumSlateBlue /* #7B68EE */
  | MediumSpringGreen /* #00FA9A */
  | MediumTurquoise /* #48D1CC */
  | MediumVioletRed /* #C71585 */
  | MidnightBlue /* #191970 */
  | MintCream /* #F5FFFA */
  | MistyRose /* #FFE4E1 */
  | Moccasin /* #FFE4B5 */
  | NavajoWhite /* #FFDEAD */
  | Navy /* #000080 */
  | OldLace /* #FDF5E6 */
  | Olive /* #808000 */
  | OliveDrab /* #6B8E23 */
  | Orange /* #FFA500 */
  | OrangeRed /* #FF4500 */
  | Orchid /* #DA70D6 */
  | PaleGoldenRod /* #EEE8AA */
  | PaleGreen /* #98FB98 */
  | PaleTurquoise /* #AFEEEE */
  | PaleVioletRed /* #DB7093 */
  | PapayaWhip /* #FFEFD5 */
  | PeachPuff /* #FFDAB9 */
  | Peru /* #CD853F */
  | Pink /* #FFC0CB */
  | Plum /* #DDA0DD */
  | PowderBlue /* #B0E0E6 */
  | Purple /* #800080 */
  | RebeccaPurple /* #663399 */
  | Red /* #FF0000 */
  | RosyBrown /* #BC8F8F */
  | RoyalBlue /* #4169E1 */
  | SaddleBrown /* #8B4513 */
  | Salmon /* #FA8072 */
  | SandyBrown /* #F4A460 */
  | SeaGreen /* #2E8B57 */
  | SeaShell /* #FFF5EE */
  | Sienna /* #A0522D */
  | Silver /* #C0C0C0 */
  | SkyBlue /* #87CEEB */
  | SlateBlue /* #6A5ACD */
  | SlateGray /* #708090 */
  | SlateGrey /* #708090 */
  | Snow /* #FFFAFA */
  | SpringGreen /* #00FF7F */
  | SteelBlue /* #4682B4 */
  | Tan /* #D2B48C */
  | Teal /* #008080 */
  | Thistle /* #D8BFD8 */
  | Tomato /* #FF6347 */
  | Turquoise /* #40E0D0 */
  | Violet /* #EE82EE */
  | Wheat /* #F5DEB3 */
  | White /* #FFFFFF */
  | WhiteSmoke /* #F5F5F5 */
  | Yellow /* #FFFF00 */
  | YellowGreen; /* #9ACD32 */

type css = {
  /* Alignment properties */
  alignContent: option(string),
  alignItems: option(string),
  alignSelf: option(string),
  all: option(string),
  /* Animation properties */
  animation: option(string),
  animationDelay: option(string),
  animationDirection: option(string),
  animationDuration: option(string),
  animationFillMode: option(string),
  animationIterationCount: option(string),
  animationName: option(string),
  animationPlayState: option(string),
  animationTimingFunction: option(string),
  /**/
  backfaceVisibility: option(string),
  /* Background properties */
  background: option(string),
  backgroundAttachment: option(string),
  backgroundBlendMode: option(string),
  backgroundClip: option(string),
  backgroundColor: option(color),
  backgroundImage: option(string),
  backgroundOrigin: option(string),
  backgroundPosition: option(string),
  backgroundRepeat: option(string),
  backgroundSize: option(string),
  /* Border properties */
  border: option(string),
  borderBottom: option(string),
  borderBottomColor: option(string),
  borderBottomLeftRadius: option(string),
  borderBottomRightRadius: option(string),
  borderBottomStyle: option(string),
  borderBottomWidth: option(string),
  borderCollapse: option(string),
  borderColor: option(string),
  borderImage: option(string),
  borderImageOutset: option(string),
  borderImageRepeat: option(string),
  borderImageSlice: option(string),
  borderImageSource: option(string),
  borderImageWidth: option(string),
  borderLeft: option(string),
  borderLeftColor: option(string),
  borderLeftStyle: option(string),
  borderLeftWidth: option(string),
  borderRadius: option(string),
  borderRight: option(string),
  borderRightColor: option(string),
  borderRightStyle: option(string),
  borderRightWidth: option(string),
  borderSpacing: option(string),
  borderStyle: option(string),
  borderTop: option(string),
  borderTopColor: option(string),
  borderTopLeftRadius: option(string),
  borderTopRightRadius: option(string),
  borderTopStyle: option(string),
  borderTopWidth: option(string),
  borderWidth: option(string),
  /**/
  bottom: option(string),
  /* Box properties */
  boxDecorationBreak: option(string),
  boxShadow: option(string),
  boxSizing: option(string),
  /* Break properties - TODO: Needed? */
  breakAfter: option(string),
  breakBefore: option(string),
  breakInside: option(string),
  /* old */
  color: option(color),
  fontSize: option(measurement),
  width: option(measurement),
  height: option(measurement),
};

/* let buildCssRecord = () => {} */