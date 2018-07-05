type units =
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
  /* CSS Colors (148) */
  | AliceBlue
  | AntiqueWhite
  | Aqua
  | Aquamarine
  | Azure
  | Beige
  | Bisque
  | Black
  | BlanchedAlmond
  | Blue
  | BlueViolet
  | Brown
  | BurlyWood
  | CadetBlue
  | Chartreuse
  | Chocolate
  | Coral
  | CornflowerBlue
  | Cornsilk
  | Crimson
  | Cyan
  | DarkBlue
  | DarkCyan
  | DarkGoldenRod
  | DarkGray
  | DarkGrey
  | DarkGreen
  | DarkKhaki
  | DarkMagenta
  | DarkOliveGreen
  | DarkOrange
  | DarkOrchid
  | DarkRed
  | DarkSalmon
  | DarkSeaGreen
  | DarkSlateBlue
  | DarkSlateGray
  | DarkSlateGrey
  | DarkTurquoise
  | DarkViolet
  | DeepPink
  | DeepSkyBlue
  | DimGray
  | DimGrey
  | DodgerBlue
  | FireBrick
  | FloralWhite
  | ForestGreen
  | Fuchsia
  | Gainsboro
  | GhostWhite
  | Gold
  | GoldenRod
  | Gray
  | Grey
  | Green
  | GreenYellow
  | HoneyDew
  | HotPink
  | IndianRed
  | Indigo
  | Ivory
  | Khaki
  | Lavender
  | LavenderBlush
  | LawnGreen
  | LemonChiffon
  | LightBlue
  | LightCoral
  | LightCyan
  | LightGoldenRodYellow
  | LightGray
  | LightGrey
  | LightGreen
  | LightPink
  | LightSalmon
  | LightSeaGreen
  | LightSkyBlue
  | LightSlateGray
  | LightSlateGrey
  | LightSteelBlue
  | LightYellow
  | Lime
  | LimeGreen
  | Linen
  | Magenta
  | Maroon
  | MediumAquaMarine
  | MediumBlue
  | MediumOrchid
  | MediumPurple
  | MediumSeaGreen
  | MediumSlateBlue
  | MediumSpringGreen
  | MediumTurquoise
  | MediumVioletRed
  | MidnightBlue
  | MintCream
  | MistyRose
  | Moccasin
  | NavajoWhite
  | Navy
  | OldLace
  | Olive
  | OliveDrab
  | Orange
  | OrangeRed
  | Orchid
  | PaleGoldenRod
  | PaleGreen
  | PaleTurquoise
  | PaleVioletRed
  | PapayaWhip
  | PeachPuff
  | Peru
  | Pink
  | Plum
  | PowderBlue
  | Purple
  | RebeccaPurple
  | Red
  | RosyBrown
  | RoyalBlue
  | SaddleBrown
  | Salmon
  | SandyBrown
  | SeaGreen
  | SeaShell
  | Sienna
  | Silver
  | SkyBlue
  | SlateBlue
  | SlateGray
  | SlateGrey
  | Snow
  | SpringGreen
  | SteelBlue
  | Tan
  | Teal
  | Thistle
  | Tomato
  | Turquoise
  | Violet
  | Wheat
  | White
  | WhiteSmoke
  | Yellow
  | YellowGreen;

type css = {backgroundColor: option(color)};

/* let buildCssRecord = () => {} */