open FluidMac;
open Fluid.Native;

let str = Fluid.string;

open Fluid.Hooks;

let red = {r: 1., g: 0., b: 0., a: 1.};

let%component weveGotHooks = (~initial, hooks) => {
  let%hook (count, setCount) = useState(initial);
  <view
    layout={Layout.style(
      ~flexDirection=Row,
      ~justifyContent=JustifyCenter,
      (),
    )}>
    <text contents={"Count: " ++ string_of_int(count)} />
    <button title="Click me" onPress={() => setCount(count + 1)} />
  </view>;
};

let spacer =
  <view
    layout={Layout.style(~height=2., ~marginTop=8., ~marginBottom=16., ())}
    backgroundColor=red
  />;

Fluid.Hot.launchWindow(
  ~title="Welcome to Fluid!",
  <view layout={Layout.style(~alignItems=AlignStretch, ~padding=32., ())}>
    <text
      contents="Hello Reactation!"
      font={fontName: "Arial", fontSize: 32.}
    />
    spacer
    <weveGotHooks initial=10 />
    <image
      src=Plain("./electron-tweet.png")
      layout={Layout.style(~width=250., ~height=150., ())}
    />
    <text contents="Hi" onChange={text => {
      print_endline(text);
    }} />
  </view>,
);

Fluid.Hot.init("./_build/default/src/Hello.cma", () => {
  Fluid.App.setupAppMenu(
    ~title="Welcome to Fluid!",
    ~appItems=[||],
    ~menus=[| Fluid.App.defaultEditMenu() |]
  );
});