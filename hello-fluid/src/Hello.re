open FluidMac;
open Fluid.Native;

let str = Fluid.string;

open Fluid.Hooks;

let fontSize = ref(32.);

let set = num => fontSize := num

let win = Fluid.Hot.launchWindow(
  ~title="Welcome to Fluid!",
  <view layout={Layout.style(~padding=32., ())} >
    <text contents="Hello Reactathon" font={{fontName: "Arial", fontSize: fontSize^}} />
    <text contents={"Running on " ++ Sys.os_type} />
    <text contents={"Current directory " ++ Sys.getcwd()} />
  </view>
);

Fluid.Hot.init("./_build/default/src/Hello.cma", () => {
  Fluid.App.setupAppMenu(
    ~title="Welcome to Fluid!",
    ~appItems=[||],
    ~menus=[| Fluid.App.defaultEditMenu() |]
  );
});