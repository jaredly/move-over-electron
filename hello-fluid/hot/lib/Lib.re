

let initialized = ref(false);

let hello = cb => {
  if (!initialized^) {
    print_endline("First time!")
    initialized := true;
  };
  print_endline("Hello");
  cb();
};