# sbzada

repositório com o fim de fazer a JVM 8.

### Oracle Documentation

[Java SE 8](https://docs.oracle.com/javase/specs/jvms/se8/html/index.html)

### Usage

##### Linux:
`make clean && make`

`./jvm -p ./.javasrc/ -f ./.javasrc/Caixa.class -v`

##### Windows:
`mingw32-make.exe clean`

`mingw32-make.exe`

`.\jvm.exe -p .\.javasrc\ -f .\.javasrc\Anon.class -v -json`

### Debugging

Make sure you have GDB installed.

Compile the program normally with `make clean && make` in Linux or for windows users
```
mingw32-make.exe clean
mingw32-make.exe
```
then `gdb --args ./jvm -p ./.javasrc/ -f ./.javasrc/Caixa.class` for debugging or
```make && valgrind -v --leak-check=full --track-origins=yes --show-leak-kinds=all ./jvm -p ./.javasrc/ -f ./.javasrc/LookAtMe.class -v -json```
for dynamic analysis (only on Linux).

##### Basic commands
consult the commands: [GDB Command Line Arguments](http://www.yolinux.com/TUTORIALS/GDB-Commands.html)
 
## Code style reference
[Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

#### Running Static Code Checker
Make sure that you have Python and pip installed.

- installing: `pip install cpplint`
- running: `cpplint --recursive ./[src|include]`

#### Running Code Formatter
Works only on Linux.
Make sure that you have clang and clang-format installed

- installing: `sudo apt install clang clang-format`
- running: `./formatter ./[src|include]`

## TODO
 - [ ] Ler o arquivo e atribuir os valores as devidas variáveis.  
 - [ ] Visualizar de forma estruturada os valores lidos.