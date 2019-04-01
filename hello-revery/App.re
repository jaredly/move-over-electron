open Revery;
open Revery.UI;

print_endline(Unix.getcwd());

let init = app => {
  let win = App.createWindow(
    ~createOptions={
      ...Window.defaultCreateOptions,
      width: 400,
      height: 200,
    },
    app, "Welcome to Revery!");

  let containerStyle =
    Style.[
      justifyContent(`Center),
      backgroundColor(Colors.white),
      alignItems(`Center),
      flexGrow(1),
    ];

  // let innerStyle = Style.[alignItems(`FlexEnd)];
  print_endline("Hello");

  let textStyle = Style.[
            fontFamily("Roboto-Regular.ttf"),
            fontSize(32),
            margin(4),
            color(Colors.black)
            ];
  
  let smallStyle = textStyle @ [Style.fontSize(12)];

  let render = () =>
    <View style=containerStyle>
      <View >
        <Text text="Hello" style=textStyle />
        <Text text={"Current directory " ++ Sys.getcwd()} style=smallStyle />
      </View>
    </View>;

  UI.start(win, render);
};

App.start(init);