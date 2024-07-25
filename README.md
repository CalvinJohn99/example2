# Debug your program with gdb

Build in debug mode:

```
$ make DEBUG=true
```

Run `gdb`:

```
$ gdb main
```

Run the program in `gdb`:

```
(gdb) run
```

If you want to redirect an input file, you can do

```
(gdb) run < in.txt
```

If you want to pass in additional command-line args:

```
(gdb) run arg1 arg2
```

To view the stacktrace:

```
(gdb) bt
```

To inspect the value of variable `i`:

```
(gdb) print i
```