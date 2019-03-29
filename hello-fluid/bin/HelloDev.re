

print_endline("Trying");
try {
  Dynlink.loadfile(Dynlink.adapt_filename("./_build/default/plugin/Plugin.cma"));
} {
  | Dynlink.Error(error) => print_endline(Dynlink.error_message(error))
};

Hello.main();