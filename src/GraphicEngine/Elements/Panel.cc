#include "Panel.hh"

namespace Graphic {
    namespace GUI {

        Panel::Panel() {
        }

        Panel::~Panel() {
        }

        void Panel::draw(sf::RenderWindow* window) {
            sf::RectangleShape rectangle(sf::Vector2f(
                this->__size.getX(), this->__size.getY()
            ));
            
            rectangle.setPosition(this->__position.getX(), this->__position.getY());
            rectangle.setFillColor(this->__backgroundColor);
            rectangle.setOutlineThickness(2.f);
            rectangle.setOutlineColor(this->__outlineColor);
            
            window->draw(rectangle);
            for (Component* c : this->__components) {
                c->draw(window);
            }
        }

        void Panel::update(sf::RenderWindow* window) {
            for (Component* c : this->__components) {
                c->update(window);
            }
        }
        
        void Panel::addComponent(Component* component) {
            this->__components.push_front(component);
        }
        
        std::list<Component*> Panel::getComponents() const {
            return __components;
        }

        void Panel::setSize(Tools::Position __size) {
            this->__size.setX(__size.getX());
            this->__size.setY(__size.getY());
        }

        Tools::Position Panel::getSize() const {
            return __size;
        }

        void Panel::setPosition(Tools::Position __position) {
            this->__position.setX(__position.getX());
            this->__position.setY(__position.getY());
        }

        Tools::Position Panel::getPosition() const {
            return __position;
        }

        void Panel::setBackgroundColor(sf::Color __backgroundColor) {
            this->__backgroundColor = __backgroundColor;
        }

        sf::Color Panel::getBackgroundColor() const {
            return __backgroundColor;
        }
        
        void Panel::setOutlineColor(sf::Color __outlineColor) {
            this->__outlineColor = __outlineColor;
        }
        
        sf::Color Panel::getOutlineColor() const {
            return __outlineColor;
        }
    }
}