#include "register_types.h"

#include "core/object/class_db.h"
#include "observer.h"

void initialize_relativity_engine_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	ClassDB::register_class<relactivity_engine::Observer>();
}

void uninitialize_relativity_engine_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
}
