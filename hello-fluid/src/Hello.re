open FluidMac;
open Fluid.Native;

let str = Fluid.string;

open Fluid.Hooks;

let fontSize = ref(32.);

let set = num => fontSize := num

let%component weveGotHooks = (~initial, hooks) => {
  let%hook (count, setCount) = useState(initial);
  <view>
    <text contents={"Count: " ++ string_of_int(count)} />
    <button title={"Click me"} onPress={() => setCount(count + 1)} />
  </view>
}

print_endline("launch please");
let win = Fluid.Hot.launchWindow(
  ~title="Welcome to Fluid!",
  <view layout={Layout.style(~padding=32., ())} >
    <text contents="Hello Reactathon!!" font={{fontName: "Arial", fontSize: fontSize^}} />
    <view layout={Layout.style(~width=20., ~height=20., ())}  backgroundColor={r: 1., g: 0., b: 0., a: 1.}/>
    // <button title="Hello" onPress={() => ()} />
    // <text contents={"Current directory " ++ Sys.getcwd()} />
    <weveGotHooks initial={10} />
  </view>
);

print_endline(Stdlib.Sys.executable_name);

print_endline("init");
Fluid.Hot.init("./_build/default/src/Hello.cma", () => {
  Fluid.App.setupAppMenu(
    ~title="Welcome to Fluid!",
    ~appItems=[||],
    ~menus=[| Fluid.App.defaultEditMenu() |]
  );
});