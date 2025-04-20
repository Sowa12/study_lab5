#include <controller.h>

namespace editor {
    Controller::Controller(editor::GraphicDocument& model_, editor::MainView& view_) :
            model{model_}, view{view_} {

    }

    void Controller::import_document(const std::string& path) {
        model.load_document(path);
        view.redraw();
    }

    void Controller::export_document(const std::string& path) {
        model.save_document(path);
    }

    void Controller::add_primitive(std::shared_ptr<IFigure>& primitive) {
        model.add_primitive_to_document(primitive);
        view.redraw(); // notify view to update canvas
    }

    void Controller::remove_primitive(std::shared_ptr<IFigure>& primitive) {
        model.remove_primitive_from_document(primitive);
        view.redraw(); // notify view to update canvas
    }

}
