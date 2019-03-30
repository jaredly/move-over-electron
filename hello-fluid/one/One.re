open FluidMac;
open Fluid.Native;

print_endline("From one two and three");
// so this is the file that gets loaded probably
Fluid.Hot.init("./_build/default/one/One.cma", () => {
    Fluid.App.setupAppMenu(
      ~title="Welcome to Fluid!",
      ~appItems=[||],
      ~menus=[| Fluid.App.defaultEditMenu() |]
    );
});

Fluid.Hot.launchWindow(
  ~title="Welcome to Fluid...",
  <view>
    <text contents="awesome" />
  </view>
);

print_endline("Um yeah")