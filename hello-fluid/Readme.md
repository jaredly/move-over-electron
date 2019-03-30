
# Live reloading

Everything's in the plugin.

Ok, so there are things that only happen at the start

```js
// so this is the file that gets loaded probably
Fluid.Hot.init("./_build/src/Hello.cma", () => {

});

// identified by the title if no ID is given
Fluid.Hot.launchWindow(
  ~id?,
  ~title="Welcome to Fluid!",
  <view>
    <text contents="Hello" />
  </view>
);
```


# Hot reloading stuff


