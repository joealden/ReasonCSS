let newCssRecord =
  ReasonCSS.buildCssRecord(
    ~color=Hsla(20, 20, 20, 0.5),
    ~backgroundColor=White,
    (),
  );

let colorToString = (css: ReasonCSS.css) =>
  switch (css.color) {
  | Some(value) => ReasonCSS.colorToString(value)
  | None => ""
  };

Js.log(colorToString(newCssRecord));