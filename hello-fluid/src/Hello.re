open FluidMac;
open Fluid.Native;

let str = Fluid.string;

open Fluid.Hooks;

let main = () => {
  Fluid.App.launch(() => {
    Fluid.App.setupAppMenu(
      ~title="Welcome to Fluid!",
      ~appItems=[||],
      ~menus=[| Fluid.App.defaultEditMenu() |]
    );
    let win = Fluid.launchWindow(
      ~title="Welcome to Fluid!",
      <view layout={Layout.style(~padding=32., ())} >
        <text contents="Hello" font={{fontName: "Arial", fontSize: 32.}} />
        <text contents={"Running on " ++ Sys.os_type} />
        <text contents={"Current directory " ++ Sys.getcwd()} />
      </view>
    )
  });
}