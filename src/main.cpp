#include <model.h>
#include <view.h>
#include <controller.h>
#include <figure.h>
#include <memory>
#include <iostream>

/**
* Entry Point
*/
int main() {
    std::cout << "-- creating new document --" << std::endl;
    editor::GraphicDocument model{}; // create new document
    editor::MainView view{model};
    editor::Controller controller(model, view);

    std::cout << "-- loading document from file --" << std::endl;
    controller.import_document("document.ed");

   
    std::cout << "-- adding line --" << std::endl;
    auto line = std::shared_ptr<editor::IFigure>(
            new editor::Line{editor::Color{255, 255, 0}, editor::Coordinate{0, 0}, editor::Coordinate{1, 1}});
    controller.add_primitive(line);

    std::cout << "-- adding rectangle --" << std::endl;
    auto rectangle = std::shared_ptr<editor::IFigure>(
            new editor::Rectangle{editor::Color{0, 255, 0}, editor::Coordinate{20, 20}, editor::Coordinate{100, 100}});

    controller.add_primitive(rectangle);

    std::cout << "-- removing line --" << std::endl;
    controller.remove_primitive(line);

    std::cout << "-- saving document to file --" << std::endl;
    controller.export_document("document_modified.ed");

    return 0;
}
