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
  | Percent(float) /* Percent(10.0) == 10% */
  | Zero; /* Zero == 0 */

let measurementToString =
  fun
  | Cm(value) => string_of_float(value) ++ "cm"
  | Mm(value) => string_of_float(value) ++ "mm"
  | In(value) => string_of_float(value) ++ "in"
  | Px(value) => string_of_float(value) ++ "px"
  | Pt(value) => string_of_float(value) ++ "pt"
  | Pc(value) => string_of_float(value) ++ "pc"
  | Em(value) => string_of_float(value) ++ "em"
  | Ex(value) => string_of_float(value) ++ "ex"
  | Ch(value) => string_of_float(value) ++ "ch"
  | Rem(value) => string_of_float(value) ++ "rem"
  | Vw(value) => string_of_float(value) ++ "vw"
  | Vh(value) => string_of_float(value) ++ "vh"
  | Vmin(value) => string_of_float(value) ++ "vmin"
  | Vmax(value) => string_of_float(value) ++ "vmax"
  | Percent(value) => string_of_float(value) ++ "%"
  | Zero => "0";

type color =
  /* User Defined */
  | Hex(string) /* Hex("FFFFFF") == #FFFFFF  */
  | Rgb(int, int, int) /* Rgb(255, 255, 255) == rgb(255, 255, 255) */
  | Rgba(int, int, int, float) /* Rgba(255, 255, 255, 1) == rgba(255, 255, 255, 1) */
  | Hsl(int, int, int) /* Hsl(360, 100, 100) == hsl(360, 100%, 100%) */
  | Hsla(int, int, int, float) /* Hsla(360, 100, 100, 1) == hsla(360, 100%, 100%, 1) */
  /*
   CSS Colors (All 148 of them)
   ----------------------------
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
  | YellowGreen /* #9ACD32 */
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

let colorToString =
  fun
  | Hex(value) => "#" ++ value
  | Rgb(r, g, b) =>
    "rgb("
    ++ string_of_int(r)
    ++ ", "
    ++ string_of_int(g)
    ++ ", "
    ++ string_of_int(b)
    ++ ")"
  | Rgba(r, g, b, a) =>
    "rgb("
    ++ string_of_int(r)
    ++ ", "
    ++ string_of_int(g)
    ++ ", "
    ++ string_of_int(b)
    ++ ", "
    ++ string_of_float(a)
    ++ ")"
  | Hsl(h, s, l) =>
    "hsl("
    ++ string_of_int(h)
    ++ ", "
    ++ string_of_int(s)
    ++ "%, "
    ++ string_of_int(l)
    ++ "%)"
  | Hsla(h, s, l, a) =>
    "hsl("
    ++ string_of_int(h)
    ++ ", "
    ++ string_of_int(s)
    ++ "%, "
    ++ string_of_int(l)
    ++ "%,"
    ++ string_of_float(a)
    ++ ")"
  | AliceBlue => "#F0F8FF"
  | AntiqueWhite => "#FAEBD7"
  | Aqua => "#00FFFF"
  | Aquamarine => "#7FFFD4"
  | Azure => "#F0FFFF"
  | Beige => "#F5F5DC"
  | Bisque => "#FFE4C4"
  | Black => "#000000"
  | BlanchedAlmond => "#FFEBCD"
  | Blue => "#0000FF"
  | BlueViolet => "#8A2BE2"
  | Brown => "#A52A2A"
  | BurlyWood => "#DEB887"
  | CadetBlue => "#5F9EA0"
  | Chartreuse => "#7FFF00"
  | Chocolate => "#D2691E"
  | Coral => "#FF7F50"
  | CornflowerBlue => "#6495ED"
  | Cornsilk => "#FFF8DC"
  | Crimson => "#DC143C"
  | Cyan => "#00FFFF"
  | DarkBlue => "#00008B"
  | DarkCyan => "#008B8B"
  | DarkGoldenRod => "#B8860B"
  | DarkGray
  | DarkGrey => "#A9A9A9"
  | DarkGreen => "#006400"
  | DarkKhaki => "#BDB76B"
  | DarkMagenta => "#8B008B"
  | DarkOliveGreen => "#556B2F"
  | DarkOrange => "#FF8C00"
  | DarkOrchid => "#9932CC"
  | DarkRed => "#8B0000"
  | DarkSalmon => "#E9967A"
  | DarkSeaGreen => "#8FBC8F"
  | DarkSlateBlue => "#483D8B"
  | DarkSlateGray => "#2F4F4F"
  | DarkSlateGrey => "#2F4F4F"
  | DarkTurquoise => "#00CED1"
  | DarkViolet => "#9400D3"
  | DeepPink => "#FF1493"
  | DeepSkyBlue => "#00BFFF"
  | DimGray
  | DimGrey => "#696969"
  | DodgerBlue => "#1E90FF"
  | FireBrick => "#B22222"
  | FloralWhite => "#FFFAF0"
  | ForestGreen => "#228B22"
  | Fuchsia => "#FF00FF"
  | Gainsboro => "#DCDCDC"
  | GhostWhite => "#F8F8FF"
  | Gold => "#FFD700"
  | GoldenRod => "#DAA520"
  | Gray
  | Grey => "#808080"
  | Green => "#008000"
  | GreenYellow => "#ADFF2F"
  | HoneyDew => "#F0FFF0"
  | HotPink => "#FF69B4"
  | IndianRed => "#CD5C5C"
  | Indigo => "#4B0082"
  | Ivory => "#FFFFF0"
  | Khaki => "#F0E68C"
  | Lavender => "#E6E6FA"
  | LavenderBlush => "#FFF0F5"
  | LawnGreen => "#7CFC00"
  | LemonChiffon => "#FFFACD"
  | LightBlue => "#ADD8E6"
  | LightCoral => "#F08080"
  | LightCyan => "#E0FFFF"
  | LightGoldenRodYellow => "#FAFAD2"
  | LightGray
  | LightGrey => "#D3D3D3"
  | LightGreen => "#90EE90"
  | LightPink => "#FFB6C1"
  | LightSalmon => "#FFA07A"
  | LightSeaGreen => "#20B2AA"
  | LightSkyBlue => "#87CEFA"
  | LightSlateGray
  | LightSlateGrey => "#778899"
  | LightSteelBlue => "#B0C4DE"
  | LightYellow => "#FFFFE0"
  | Lime => "#00FF00"
  | LimeGreen => "#32CD32"
  | Linen => "#FAF0E6"
  | Magenta => "#FF00FF"
  | Maroon => "#800000"
  | MediumAquaMarine => "#66CDAA"
  | MediumBlue => "#0000CD"
  | MediumOrchid => "#BA55D3"
  | MediumPurple => "#9370DB"
  | MediumSeaGreen => "#3CB371"
  | MediumSlateBlue => "#7B68EE"
  | MediumSpringGreen => "#00FA9A"
  | MediumTurquoise => "#48D1CC"
  | MediumVioletRed => "#C71585"
  | MidnightBlue => "#191970"
  | MintCream => "#F5FFFA"
  | MistyRose => "#FFE4E1"
  | Moccasin => "#FFE4B5"
  | NavajoWhite => "#FFDEAD"
  | Navy => "#000080"
  | OldLace => "#FDF5E6"
  | Olive => "#808000"
  | OliveDrab => "#6B8E23"
  | Orange => "#FFA500"
  | OrangeRed => "#FF4500"
  | Orchid => "#DA70D6"
  | PaleGoldenRod => "#EEE8AA"
  | PaleGreen => "#98FB98"
  | PaleTurquoise => "#AFEEEE"
  | PaleVioletRed => "#DB7093"
  | PapayaWhip => "#FFEFD5"
  | PeachPuff => "#FFDAB9"
  | Peru => "#CD853F"
  | Pink => "#FFC0CB"
  | Plum => "#DDA0DD"
  | PowderBlue => "#B0E0E6"
  | Purple => "#800080"
  | RebeccaPurple => "#663399"
  | Red => "#FF0000"
  | RosyBrown => "#BC8F8F"
  | RoyalBlue => "#4169E1"
  | SaddleBrown => "#8B4513"
  | Salmon => "#FA8072"
  | SandyBrown => "#F4A460"
  | SeaGreen => "#2E8B57"
  | SeaShell => "#FFF5EE"
  | Sienna => "#A0522D"
  | Silver => "#C0C0C0"
  | SkyBlue => "#87CEEB"
  | SlateBlue => "#6A5ACD"
  | SlateGray
  | SlateGrey => "#708090"
  | Snow => "#FFFAFA"
  | SpringGreen => "#00FF7F"
  | SteelBlue => "#4682B4"
  | Tan => "#D2B48C"
  | Teal => "#008080"
  | Thistle => "#D8BFD8"
  | Tomato => "#FF6347"
  | Turquoise => "#40E0D0"
  | Violet => "#EE82EE"
  | Wheat => "#F5DEB3"
  | White => "#FFFFFF"
  | WhiteSmoke => "#F5F5F5"
  | Yellow => "#FFFF00"
  | YellowGreen => "#9ACD32"
  | Initial => "initial"
  | Inherit => "inherit";

/* TODO: Think about poly variants with shared variants */

type alignContent =
  | Stretch
  | Center
  | FlexStart
  | FlexEnd
  | SpaceBetween
  | SpaceAround
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type alignItems =
  | Stretch
  | Center
  | FlexStart
  | FlexEnd
  | Baseline
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type alignSelf =
  | Auto
  | Stretch
  | Center
  | FlexStart
  | FlexEnd
  | Baseline
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type all =
  | Initial /* TODO: Poly variant? */
  | Inherit /* TODO: Poly variant? */
  | Unset;

type time =
  | S(float) /* S(1.5) = 1.5s */
  | Ms(float) /* Ms(150.0) = 150ms */
  | Zero /* Zero = 0 */
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type animationDelay = time;
type animationDuration = time;

type animationDirection =
  | Normal
  | Reverse
  | Alternate
  | AlternateReverse
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type animationFillMode =
  | None
  | Forwards
  | Backwards
  | Both
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type animationIterationCount =
  | Count(float)
  | Infinite
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type animationPlayState =
  | Paused
  | Running
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

/* Used in animationTimingFunction type */
type stepsOption =
  | Start
  | End
  | None; /* TODO: Needed as it is optional? */

type animationTimingFunction =
  | Linear
  | Ease
  | EaseIn
  | EaseOut
  | EaseInOut
  | StepStart
  | StepEnd
  | Steps(int, stepsOption)
  | CubicBezier(float, float, float, float)
  | Initial /* TODO: Poly variant? */
  | Inherit; /* TODO: Poly variant? */

type css = {
  /* Alignment properties */
  alignContent: option(alignContent),
  alignItems: option(alignItems),
  alignSelf: option(alignSelf),
  all: option(all),
  /* Animation properties */
  animation: option(string), /* TODO: Create tuple type of below animation properties */
  animationDelay: option(animationDelay),
  animationDirection: option(animationDirection),
  animationDuration: option(animationDuration),
  animationFillMode: option(animationFillMode),
  animationIterationCount: option(animationIterationCount),
  animationName: option(string), /* TODO: Figure out if user can create own type / use string */
  animationPlayState: option(animationPlayState),
  animationTimingFunction: option(string),
  /* ' */
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
  /* ' */
  bottom: option(string),
  /* Box properties */
  boxDecorationBreak: option(string),
  boxShadow: option(string),
  boxSizing: option(string),
  /* Break properties */
  breakAfter: option(string), /* TODO: Needed? */
  breakBefore: option(string), /* TODO: Needed? */
  breakInside: option(string), /* TODO: Needed? */
  /* ' */
  captionSide: option(string),
  caretColor: option(string),
  charset: option(string), /* TODO: @ RULE */
  clear: option(string),
  clip: option(string),
  color: option(color),
  /* Column properties */
  columnCount: option(string),
  columnFill: option(string),
  columnGap: option(string),
  columnRule: option(string),
  columnRuleColor: option(string),
  columnRuleStyle: option(string),
  columnRuleWidth: option(string),
  columnSpan: option(string),
  columnWidth: option(string),
  columns: option(string),
  /* ' */
  content: option(string),
  counterIncrement: option(string),
  counterReset: option(string),
  cursor: option(string),
  direction: option(string),
  display: option(string),
  emptyCells: option(string),
  filter: option(string),
  /* Flex properties */
  flex: option(string),
  flexBasis: option(string),
  flexDirection: option(string),
  flexFlow: option(string),
  flexGrow: option(string),
  flexShrink: option(string),
  flexWrap: option(string),
  /* ' */
  float: option(string),
  /* Font properties */
  font: option(string),
  fontFace: option(string), /* TODO: @ RULE */
  fontFamily: option(string),
  fontFeatureSettings: option(string), /* TODO: Needed? */
  fontFeatureValues: option(string), /* TODO: Needed?, @ RULE */
  fontKerning: option(string),
  fontLanguageOverride: option(string), /* TODO: Needed? */
  fontSize: option(measurement),
  fontSizeAdjust: option(string),
  fontStretch: option(string),
  fontStyle: option(string),
  fontSynthesis: option(string), /* TODO: Needed? */
  fontVariant: option(string),
  fontVariantAlternates: option(string), /* TODO: Needed? */
  fontVariantCaps: option(string), /* TODO: Needed? */
  fontVariantEastAsian: option(string), /* TODO: Needed? */
  fontVariantLigatures: option(string), /* TODO: Needed? */
  fontVariantNumeric: option(string), /* TODO: Needed? */
  fontVariantPosition: option(string), /* TODO: Needed? */
  fontWeight: option(string),
  /* Grid properties */
  grid: option(string),
  gridArea: option(string),
  gridAutoColumns: option(string),
  gridAutoFlow: option(string),
  gridAutoRows: option(string),
  gridColumn: option(string),
  gridColumnEnd: option(string),
  gridColumnGap: option(string),
  gridColumnStart: option(string),
  gridGap: option(string),
  gridRow: option(string),
  gridRowEnd: option(string),
  gridRowGap: option(string),
  gridRowStart: option(string),
  gridTemplate: option(string),
  gridTemplateAreas: option(string),
  gridTemplateColumns: option(string),
  girdTemplateRows: option(string),
  /* ' */
  hangingPunctuation: option(string),
  height: option(measurement),
  hyphens: option(string),
  imageRendering: option(string), /* TODO: Needed? */
  import: option(string), /* TODO: @ RULE */
  isolation: option(string),
  justifyContent: option(string),
  keyframes: option(string), /* TODO: @ RULE */
  left: option(string),
  letterSpacing: option(string),
  /* Line properties */
  lineBreak: option(string),
  lineHeight: option(string),
  /* List properties */
  listStyle: option(string),
  listStyleImage: option(string),
  listStylePosition: option(string),
  listStyleType: option(string),
  /* Margin properties */
  margin: option(string),
  marginBottom: option(string),
  marginLeft: option(string),
  marginRight: option(string),
  marginTop: option(string),
  maxHeight: option(string),
  maxWidth: option(string),
  media: option(string), /* TODO: @ RULE */
  minHeight: option(string),
  minWidth: option(string),
  mixBlendMode: option(string),
  objectFit: option(string),
  objectPosition: option(string),
  opacity: option(string),
  order: option(string),
  orphans: option(string),
  /* Outline properties */
  outline: option(string),
  outlineColor: option(string),
  outlineOffset: option(string),
  outlineStyle: option(string),
  outlineWidth: option(string),
  /* Overflow properties */
  overflow: option(string),
  overflowWrap: option(string),
  overflowX: option(string),
  overflowY: option(string),
  /* Padding properties */
  padding: option(string),
  paddingBottom: option(string),
  paddingLeft: option(string),
  paddingRight: option(string),
  paddingTop: option(string),
  /* Page properties */
  pageBreakAfter: option(string),
  pageBreakBefore: option(string),
  pageBreakInside: option(string),
  /* Perspective properties */
  perspective: option(string),
  perspectiveOrigin: option(string),
  /* ' */
  pointerEvents: option(string),
  position: option(string),
  quotes: option(string),
  resize: option(string),
  right: option(string),
  tabSize: option(string),
  tableLayout: option(string),
  /* Text properties */
  textAlign: option(string),
  textAlignLast: option(string),
  textCombineUpright: option(string), /* TODO: Needed? */
  textDecoration: option(string),
  textDecorationColor: option(string),
  textDecorationLine: option(string),
  textDecorationStyle: option(string),
  textIndent: option(string),
  textJustify: option(string),
  textOrientation: option(string), /* TODO: Needed? */
  textOverflow: option(string),
  textShadow: option(string),
  textTransform: option(string),
  textUnderlinePosition: option(string), /* TODO: Needed? */
  /* ' */
  top: option(string),
  /* Transform properties */
  transform: option(string),
  transformOrigin: option(string),
  transformStyle: option(string),
  /* Transition properties */
  transition: option(string),
  transitionDelay: option(string),
  transitionDuration: option(string),
  transitionProperty: option(string),
  transitionTimingFunction: option(string),
  /* ' */
  unicodeBidi: option(string),
  userSelect: option(string),
  verticalAlign: option(string),
  visibility: option(string),
  whiteSpace: option(string),
  widows: option(string), /* TODO: Needed? */
  width: option(measurement),
  /* Word properties */
  wordBreak: option(string),
  wordSpacing: option(string),
  wordWrap: option(string),
  /* ' */
  writingMode: option(string),
  zIndex: option(string),
  /* TODO: Add browser prefix options */
};

let buildCssRecord =
    (
      ~alignContent=?,
      ~alignItems=?,
      ~alignSelf=?,
      ~all=?,
      ~animation=?,
      ~animationDelay=?,
      ~animationDirection=?,
      ~animationDuration=?,
      ~animationFillMode=?,
      ~animationIterationCount=?,
      ~animationName=?,
      ~animationPlayState=?,
      ~animationTimingFunction=?,
      ~backfaceVisibility=?,
      ~background=?,
      ~backgroundAttachment=?,
      ~backgroundBlendMode=?,
      ~backgroundClip=?,
      ~backgroundColor=?,
      ~backgroundImage=?,
      ~backgroundOrigin=?,
      ~backgroundPosition=?,
      ~backgroundRepeat=?,
      ~backgroundSize=?,
      ~border=?,
      ~borderBottom=?,
      ~borderBottomColor=?,
      ~borderBottomLeftRadius=?,
      ~borderBottomRightRadius=?,
      ~borderBottomStyle=?,
      ~borderBottomWidth=?,
      ~borderCollapse=?,
      ~borderColor=?,
      ~borderImage=?,
      ~borderImageOutset=?,
      ~borderImageRepeat=?,
      ~borderImageSlice=?,
      ~borderImageSource=?,
      ~borderImageWidth=?,
      ~borderLeft=?,
      ~borderLeftColor=?,
      ~borderLeftStyle=?,
      ~borderLeftWidth=?,
      ~borderRadius=?,
      ~borderRight=?,
      ~borderRightColor=?,
      ~borderRightStyle=?,
      ~borderRightWidth=?,
      ~borderSpacing=?,
      ~borderStyle=?,
      ~borderTop=?,
      ~borderTopColor=?,
      ~borderTopLeftRadius=?,
      ~borderTopRightRadius=?,
      ~borderTopStyle=?,
      ~borderTopWidth=?,
      ~borderWidth=?,
      ~bottom=?,
      ~boxDecorationBreak=?,
      ~boxShadow=?,
      ~boxSizing=?,
      ~breakAfter=?,
      ~breakBefore=?,
      ~breakInside=?,
      ~captionSide=?,
      ~caretColor=?,
      ~charset=?,
      ~clear=?,
      ~clip=?,
      ~color=?,
      ~columnCount=?,
      ~columnFill=?,
      ~columnGap=?,
      ~columnRule=?,
      ~columnRuleColor=?,
      ~columnRuleStyle=?,
      ~columnRuleWidth=?,
      ~columnSpan=?,
      ~columnWidth=?,
      ~columns=?,
      ~content=?,
      ~counterIncrement=?,
      ~counterReset=?,
      ~cursor=?,
      ~direction=?,
      ~display=?,
      ~emptyCells=?,
      ~filter=?,
      ~flex=?,
      ~flexBasis=?,
      ~flexDirection=?,
      ~flexFlow=?,
      ~flexGrow=?,
      ~flexShrink=?,
      ~flexWrap=?,
      ~float=?,
      ~font=?,
      ~fontFace=?,
      ~fontFamily=?,
      ~fontFeatureSettings=?,
      ~fontFeatureValues=?,
      ~fontKerning=?,
      ~fontLanguageOverride=?,
      ~fontSize=?,
      ~fontSizeAdjust=?,
      ~fontStretch=?,
      ~fontStyle=?,
      ~fontSynthesis=?,
      ~fontVariant=?,
      ~fontVariantAlternates=?,
      ~fontVariantCaps=?,
      ~fontVariantEastAsian=?,
      ~fontVariantLigatures=?,
      ~fontVariantNumeric=?,
      ~fontVariantPosition=?,
      ~fontWeight=?,
      ~grid=?,
      ~gridArea=?,
      ~gridAutoColumns=?,
      ~gridAutoFlow=?,
      ~gridAutoRows=?,
      ~gridColumn=?,
      ~gridColumnEnd=?,
      ~gridColumnGap=?,
      ~gridColumnStart=?,
      ~gridGap=?,
      ~gridRow=?,
      ~gridRowEnd=?,
      ~gridRowGap=?,
      ~gridRowStart=?,
      ~gridTemplate=?,
      ~gridTemplateAreas=?,
      ~gridTemplateColumns=?,
      ~girdTemplateRows=?,
      ~hangingPunctuation=?,
      ~height=?,
      ~hyphens=?,
      ~imageRendering=?,
      ~import=?,
      ~isolation=?,
      ~justifyContent=?,
      ~keyframes=?,
      ~left=?,
      ~letterSpacing=?,
      ~lineBreak=?,
      ~lineHeight=?,
      ~listStyle=?,
      ~listStyleImage=?,
      ~listStylePosition=?,
      ~listStyleType=?,
      ~margin=?,
      ~marginBottom=?,
      ~marginLeft=?,
      ~marginRight=?,
      ~marginTop=?,
      ~maxHeight=?,
      ~maxWidth=?,
      ~media=?,
      ~minHeight=?,
      ~minWidth=?,
      ~mixBlendMode=?,
      ~objectFit=?,
      ~objectPosition=?,
      ~opacity=?,
      ~order=?,
      ~orphans=?,
      ~outline=?,
      ~outlineColor=?,
      ~outlineOffset=?,
      ~outlineStyle=?,
      ~outlineWidth=?,
      ~overflow=?,
      ~overflowWrap=?,
      ~overflowX=?,
      ~overflowY=?,
      ~padding=?,
      ~paddingBottom=?,
      ~paddingLeft=?,
      ~paddingRight=?,
      ~paddingTop=?,
      ~pageBreakAfter=?,
      ~pageBreakBefore=?,
      ~pageBreakInside=?,
      ~perspective=?,
      ~perspectiveOrigin=?,
      ~pointerEvents=?,
      ~position=?,
      ~quotes=?,
      ~resize=?,
      ~right=?,
      ~tabSize=?,
      ~tableLayout=?,
      ~textAlign=?,
      ~textAlignLast=?,
      ~textCombineUpright=?,
      ~textDecoration=?,
      ~textDecorationColor=?,
      ~textDecorationLine=?,
      ~textDecorationStyle=?,
      ~textIndent=?,
      ~textJustify=?,
      ~textOrientation=?,
      ~textOverflow=?,
      ~textShadow=?,
      ~textTransform=?,
      ~textUnderlinePosition=?,
      ~top=?,
      ~transform=?,
      ~transformOrigin=?,
      ~transformStyle=?,
      ~transition=?,
      ~transitionDelay=?,
      ~transitionDuration=?,
      ~transitionProperty=?,
      ~transitionTimingFunction=?,
      ~unicodeBidi=?,
      ~userSelect=?,
      ~verticalAlign=?,
      ~visibility=?,
      ~whiteSpace=?,
      ~widows=?,
      ~width=?,
      ~wordBreak=?,
      ~wordSpacing=?,
      ~wordWrap=?,
      ~writingMode=?,
      ~zIndex=?,
      (),
    ) => {
  alignContent,
  alignItems,
  alignSelf,
  all,
  animation,
  animationDelay,
  animationDirection,
  animationDuration,
  animationFillMode,
  animationIterationCount,
  animationName,
  animationPlayState,
  animationTimingFunction,
  backfaceVisibility,
  background,
  backgroundAttachment,
  backgroundBlendMode,
  backgroundClip,
  backgroundColor,
  backgroundImage,
  backgroundOrigin,
  backgroundPosition,
  backgroundRepeat,
  backgroundSize,
  border,
  borderBottom,
  borderBottomColor,
  borderBottomLeftRadius,
  borderBottomRightRadius,
  borderBottomStyle,
  borderBottomWidth,
  borderCollapse,
  borderColor,
  borderImage,
  borderImageOutset,
  borderImageRepeat,
  borderImageSlice,
  borderImageSource,
  borderImageWidth,
  borderLeft,
  borderLeftColor,
  borderLeftStyle,
  borderLeftWidth,
  borderRadius,
  borderRight,
  borderRightColor,
  borderRightStyle,
  borderRightWidth,
  borderSpacing,
  borderStyle,
  borderTop,
  borderTopColor,
  borderTopLeftRadius,
  borderTopRightRadius,
  borderTopStyle,
  borderTopWidth,
  borderWidth,
  bottom,
  boxDecorationBreak,
  boxShadow,
  boxSizing,
  breakAfter,
  breakBefore,
  breakInside,
  captionSide,
  caretColor,
  charset,
  clear,
  clip,
  color,
  columnCount,
  columnFill,
  columnGap,
  columnRule,
  columnRuleColor,
  columnRuleStyle,
  columnRuleWidth,
  columnSpan,
  columnWidth,
  columns,
  content,
  counterIncrement,
  counterReset,
  cursor,
  direction,
  display,
  emptyCells,
  filter,
  flex,
  flexBasis,
  flexDirection,
  flexFlow,
  flexGrow,
  flexShrink,
  flexWrap,
  float,
  font,
  fontFace,
  fontFamily,
  fontFeatureSettings,
  fontFeatureValues,
  fontKerning,
  fontLanguageOverride,
  fontSize,
  fontSizeAdjust,
  fontStretch,
  fontStyle,
  fontSynthesis,
  fontVariant,
  fontVariantAlternates,
  fontVariantCaps,
  fontVariantEastAsian,
  fontVariantLigatures,
  fontVariantNumeric,
  fontVariantPosition,
  fontWeight,
  grid,
  gridArea,
  gridAutoColumns,
  gridAutoFlow,
  gridAutoRows,
  gridColumn,
  gridColumnEnd,
  gridColumnGap,
  gridColumnStart,
  gridGap,
  gridRow,
  gridRowEnd,
  gridRowGap,
  gridRowStart,
  gridTemplate,
  gridTemplateAreas,
  gridTemplateColumns,
  girdTemplateRows,
  hangingPunctuation,
  height,
  hyphens,
  imageRendering,
  import,
  isolation,
  justifyContent,
  keyframes,
  left,
  letterSpacing,
  lineBreak,
  lineHeight,
  listStyle,
  listStyleImage,
  listStylePosition,
  listStyleType,
  margin,
  marginBottom,
  marginLeft,
  marginRight,
  marginTop,
  maxHeight,
  maxWidth,
  media,
  minHeight,
  minWidth,
  mixBlendMode,
  objectFit,
  objectPosition,
  opacity,
  order,
  orphans,
  outline,
  outlineColor,
  outlineOffset,
  outlineStyle,
  outlineWidth,
  overflow,
  overflowWrap,
  overflowX,
  overflowY,
  padding,
  paddingBottom,
  paddingLeft,
  paddingRight,
  paddingTop,
  pageBreakAfter,
  pageBreakBefore,
  pageBreakInside,
  perspective,
  perspectiveOrigin,
  pointerEvents,
  position,
  quotes,
  resize,
  right,
  tabSize,
  tableLayout,
  textAlign,
  textAlignLast,
  textCombineUpright,
  textDecoration,
  textDecorationColor,
  textDecorationLine,
  textDecorationStyle,
  textIndent,
  textJustify,
  textOrientation,
  textOverflow,
  textShadow,
  textTransform,
  textUnderlinePosition,
  top,
  transform,
  transformOrigin,
  transformStyle,
  transition,
  transitionDelay,
  transitionDuration,
  transitionProperty,
  transitionTimingFunction,
  unicodeBidi,
  userSelect,
  verticalAlign,
  visibility,
  whiteSpace,
  widows,
  width,
  wordBreak,
  wordSpacing,
  wordWrap,
  writingMode,
  zIndex,
};