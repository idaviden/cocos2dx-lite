#include "base/ccConfig.h"

#include "scripting/lua-bindings/manual/lua_module_register.h"

#include "scripting/lua-bindings/manual/cocosdenshion/lua_cocos2dx_cocosdenshion_manual.h"
#include "scripting/lua-bindings/manual/network/lua_cocos2dx_network_manual.h"
// #include "scripting/lua-bindings/manual/cocosbuilder/lua_cocos2dx_cocosbuilder_manual.h"

#if CC_USE_CCS > 0
    #include "scripting/lua-bindings/manual/cocostudio/lua_cocos2dx_coco_studio_manual.hpp"
#endif

// #include "scripting/lua-bindings/manual/extension/lua_cocos2dx_extension_manual.h"

#if CC_USE_UI > 0
#include "scripting/lua-bindings/manual/ui/lua_cocos2dx_ui_manual.hpp"
#endif

#include "scripting/lua-bindings/manual/spine/lua_cocos2dx_spine_manual.hpp"
// #include "scripting/lua-bindings/manual/3d/lua_cocos2dx_3d_manual.h"
#include "scripting/lua-bindings/manual/audioengine/lua_cocos2dx_audioengine_manual.h"
// #include "scripting/lua-bindings/manual/physics3d/lua_cocos2dx_physics3d_manual.h"
// #include "scripting/lua-bindings/manual/navmesh/lua_cocos2dx_navmesh_manual.h"


int lua_module_register(lua_State* L)
{
    //Dont' change the module register order unless you know what your are doing
#if CC_USE_SIMPLE_AUDIO > 0
     register_cocosdenshion_module(L);
#endif

#if CC_USE_NETWORK > 0
    register_network_module(L);
#endif

    // register_cocosbuilder_module(L);

#if CC_USE_CCS > 0
    register_cocostudio_module(L);
#endif

#if CC_USE_UI > 0
	register_ui_module(L);
#endif

    // register_extension_module(L);
#if CC_USE_SPINE > 0
    register_spine_module(L);
#endif
    // register_cocos3d_module(L);

#if CC_USE_AUDIO_ENGINE > 0
    register_audioengine_module(L);
#endif

#if CC_USE_3D_PHYSICS && CC_ENABLE_BULLET_INTEGRATION
    register_physics3d_module(L);
#endif
#if CC_USE_NAVMESH
    register_navmesh_module(L);
#endif
    return 1;
}

