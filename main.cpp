#include <crow.h>
#include <crow/app.h>

int main() {

    crow::SimpleApp app;
    CROW_ROUTE(app, "/")([](){
        auto index = crow::mustache::load_text("index.html");
        return index;
    });
    app.port(18080).multithreaded().run();

    CROW_ROUTE(app, "/game")([](){
        auto game = crow::mustache::load_text("game.html");
        return game;
    });
      
      return 0;
}