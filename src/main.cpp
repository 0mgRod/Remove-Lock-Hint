#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/GJGarageLayer.hpp>
class $modify(MyMenuLayer, GJGarageLayer) {
	bool init() {
		if (!GJGarageLayer::init()) {
			return false;
		}

		auto menu = this;
		menu->removeChildByID("tap-more-hint");

		menu->updateLayout();

		return true;
	}
};
