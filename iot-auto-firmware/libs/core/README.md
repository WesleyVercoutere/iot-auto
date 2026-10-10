# weveCore

Framework-library voor de iot-auto firmware (ESP32).

De library bouwt op twee manieren vanuit dezelfde `CMakeLists.txt`:

- **ESP32**: als ESP-IDF-component (`ESP_PLATFORM` is gezet).
- **Native (pc)**: als gewone static library, met unit tests via GoogleTest.

## Mappenstructuur

```
libs/core/
├── CMakeLists.txt
├── include/weveCore/   Publieke headers (de API van de library)
│   ├── mode/
│   ├── module/
│   ├── service/
│   ├── component/
│   └── event/
├── src/                Implementaties (.cpp) en interne headers
│   └── (zelfde indeling als include/)
└── test/               Unit tests (GoogleTest)
```

Headers include je altijd met het volledige pad:

```cpp
#include "weveCore/mode/ModeService.h"
```

## Lagen

Van hoog naar laag. Een laag mag alleen lagen **eronder** gebruiken, nooit erboven.

| Laag        | Verantwoordelijkheid |
|-------------|----------------------|
| `mode`      | TODO |
| `module`    | TODO |
| `service`   | TODO |
| `component` | TODO |
| `event`     | TODO |

## Nieuwe klasse toevoegen

1. Header in `include/weveCore/<laag>/`, met `#pragma once` en namespace `weveCore`.
2. Implementatie in `src/<laag>/`.
3. Voeg de `.cpp` toe aan **beide** lijsten in `CMakeLists.txt` (`idf_component_register` en `add_library`).
4. Test in `test/<laag>/` en voeg die toe aan `test/CMakeLists.txt`.

## Bouwen en testen (native)

In Visual Studio: open de map `libs/core` (*File → Open → Folder*). De tests verschijnen in de Test Explorer.

Via de command line:

```sh
cmake -S . -B out/build
cmake --build out/build
ctest --test-dir out/build -C Debug
```
