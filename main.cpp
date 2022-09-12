#include <crow.h>
#include <crow/mustache.h>

int main(){

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([](){
        auto index = crow::mustache::load("index.html");
        return index;
    });

    CROW_ROUTE(app, "/game")([](){
        auto game = crow::mustache::load("game.html");
        return game;
    });

    app.port(18080).multithreaded().run();
    
    return 0;
}