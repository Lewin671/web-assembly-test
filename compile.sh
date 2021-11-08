# brew install emscripten
emcc calc.c -O2 -s WASM=1 -s EXPORTED_FUNCTIONS="['_calc']"  -g0 --no-entry -o a.out.wasm 