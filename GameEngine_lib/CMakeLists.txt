project(GameEngine)

set(HEADER_FILES
        Game.h
        Globals.h
        Entity.h
        Component.h
        CircleComponent.h
        EntityManager.h)

set(SOURCE_FILES
        Game.cpp
        Globals.cpp
        CircleComponent.cpp
        Entity.cpp
        EntityManager.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio)

add_library(GameEngine_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(GameEngine_lib PUBLIC sfml-graphics sfml-audio)