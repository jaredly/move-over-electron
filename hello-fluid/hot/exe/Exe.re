include Lib;

print_endline("Called back");

try {
  Dynlink.loadfile(Dynlink.adapt_filename("./one.cma"));
} {
  | Dynlink.Error(error) => print_endline(Dynlink.error_message(error))
};

try {
  Dynlink.loadfile(Dynlink.adapt_filename("./two.cma"));
} {
  | Dynlink.Error(error) => print_endline(Dynlink.error_message(error))
};