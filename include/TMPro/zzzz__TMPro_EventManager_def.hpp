#pragma once
// IWYU pragma private; include "TMPro/TMPro_EventManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TMPro_EventManager)
namespace System {
class Object;
}
namespace TMPro {
class Compute_DT_EventArgs;
}
namespace TMPro {
template <typename A> class FastAction_1;
}
namespace TMPro {
template <typename A, typename B> class FastAction_2;
}
namespace TMPro {
template <typename A, typename B, typename C> class FastAction_3;
}
namespace TMPro {
class FastAction;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace TMPro {
class TMPro_EventManager;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMPro_EventManager);
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMPro_EventManager
class CORDL_TYPE TMPro_EventManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field COLOR_GRADIENT_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_COLOR_GRADIENT_PROPERTY_EVENT,
                      put = setStaticF_COLOR_GRADIENT_PROPERTY_EVENT)) ::TMPro::FastAction_1<::UnityW<::UnityEngine::Object>>* COLOR_GRADIENT_PROPERTY_EVENT;

  /// @brief Field COMPUTE_DT_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_COMPUTE_DT_EVENT, put = setStaticF_COMPUTE_DT_EVENT)) ::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>* COMPUTE_DT_EVENT;

  /// @brief Field DRAG_AND_DROP_MATERIAL_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DRAG_AND_DROP_MATERIAL_EVENT,
                      put = setStaticF_DRAG_AND_DROP_MATERIAL_EVENT)) ::TMPro::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*
      DRAG_AND_DROP_MATERIAL_EVENT;

  /// @brief Field FONT_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FONT_PROPERTY_EVENT, put = setStaticF_FONT_PROPERTY_EVENT)) ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* FONT_PROPERTY_EVENT;

  /// @brief Field MATERIAL_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MATERIAL_PROPERTY_EVENT, put = setStaticF_MATERIAL_PROPERTY_EVENT)) ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* MATERIAL_PROPERTY_EVENT;

  /// @brief Field RESOURCE_LOAD_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RESOURCE_LOAD_EVENT, put = setStaticF_RESOURCE_LOAD_EVENT)) ::TMPro::FastAction* RESOURCE_LOAD_EVENT;

  /// @brief Field SPRITE_ASSET_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SPRITE_ASSET_PROPERTY_EVENT,
                      put = setStaticF_SPRITE_ASSET_PROPERTY_EVENT)) ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* SPRITE_ASSET_PROPERTY_EVENT;

  /// @brief Field TEXTMESHPRO_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXTMESHPRO_PROPERTY_EVENT,
                      put = setStaticF_TEXTMESHPRO_PROPERTY_EVENT)) ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* TEXTMESHPRO_PROPERTY_EVENT;

  /// @brief Field TEXTMESHPRO_UGUI_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT,
                      put = setStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT)) ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* TEXTMESHPRO_UGUI_PROPERTY_EVENT;

  /// @brief Field TEXT_CHANGED_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXT_CHANGED_EVENT, put = setStaticF_TEXT_CHANGED_EVENT)) ::TMPro::FastAction_1<::UnityW<::UnityEngine::Object>>* TEXT_CHANGED_EVENT;

  /// @brief Field TEXT_STYLE_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXT_STYLE_PROPERTY_EVENT, put = setStaticF_TEXT_STYLE_PROPERTY_EVENT)) ::TMPro::FastAction_1<bool>* TEXT_STYLE_PROPERTY_EVENT;

  /// @brief Field TMP_SETTINGS_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TMP_SETTINGS_PROPERTY_EVENT, put = setStaticF_TMP_SETTINGS_PROPERTY_EVENT)) ::TMPro::FastAction* TMP_SETTINGS_PROPERTY_EVENT;

  /// @brief Method ON_COLOR_GRADIENT_PROPERTY_CHANGED, addr 0x47c4910, size 0x80, virtual false, abstract: false, final false
  static inline void ON_COLOR_GRADIENT_PROPERTY_CHANGED(::UnityEngine::Object* obj);

  /// @brief Method ON_COMPUTE_DT_EVENT, addr 0x47c4b60, size 0x90, virtual false, abstract: false, final false
  static inline void ON_COMPUTE_DT_EVENT(::System::Object* Sender, ::TMPro::Compute_DT_EventArgs* e);

  /// @brief Method ON_DRAG_AND_DROP_MATERIAL_CHANGED, addr 0x47c47f8, size 0x98, virtual false, abstract: false, final false
  static inline void ON_DRAG_AND_DROP_MATERIAL_CHANGED(::UnityEngine::GameObject* sender, ::UnityEngine::Material* currentMaterial, ::UnityEngine::Material* newMaterial);

  /// @brief Method ON_FONT_PROPERTY_CHANGED, addr 0x47c4648, size 0x90, virtual false, abstract: false, final false
  static inline void ON_FONT_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* obj);

  /// @brief Method ON_MATERIAL_PROPERTY_CHANGED, addr 0x47c45b8, size 0x90, virtual false, abstract: false, final false
  static inline void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Material* mat);

  /// @brief Method ON_RESOURCES_LOADED, addr 0x47c4a70, size 0x60, virtual false, abstract: false, final false
  static inline void ON_RESOURCES_LOADED();

  /// @brief Method ON_SPRITE_ASSET_PROPERTY_CHANGED, addr 0x47c46d8, size 0x90, virtual false, abstract: false, final false
  static inline void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* obj);

  /// @brief Method ON_TEXTMESHPRO_PROPERTY_CHANGED, addr 0x47c4768, size 0x90, virtual false, abstract: false, final false
  static inline void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* obj);

  /// @brief Method ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED, addr 0x47c4ad0, size 0x90, virtual false, abstract: false, final false
  static inline void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* obj);

  /// @brief Method ON_TEXT_CHANGED, addr 0x47c4990, size 0x80, virtual false, abstract: false, final false
  static inline void ON_TEXT_CHANGED(::UnityEngine::Object* obj);

  /// @brief Method ON_TEXT_STYLE_PROPERTY_CHANGED, addr 0x47c4890, size 0x80, virtual false, abstract: false, final false
  static inline void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged);

  /// @brief Method ON_TMP_SETTINGS_CHANGED, addr 0x47c4a10, size 0x60, virtual false, abstract: false, final false
  static inline void ON_TMP_SETTINGS_CHANGED();

  static inline ::TMPro::FastAction_1<::UnityW<::UnityEngine::Object>>* getStaticF_COLOR_GRADIENT_PROPERTY_EVENT();

  static inline ::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>* getStaticF_COMPUTE_DT_EVENT();

  static inline ::TMPro::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* getStaticF_DRAG_AND_DROP_MATERIAL_EVENT();

  static inline ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_FONT_PROPERTY_EVENT();

  static inline ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* getStaticF_MATERIAL_PROPERTY_EVENT();

  static inline ::TMPro::FastAction* getStaticF_RESOURCE_LOAD_EVENT();

  static inline ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_SPRITE_ASSET_PROPERTY_EVENT();

  static inline ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_TEXTMESHPRO_PROPERTY_EVENT();

  static inline ::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT();

  static inline ::TMPro::FastAction_1<::UnityW<::UnityEngine::Object>>* getStaticF_TEXT_CHANGED_EVENT();

  static inline ::TMPro::FastAction_1<bool>* getStaticF_TEXT_STYLE_PROPERTY_EVENT();

  static inline ::TMPro::FastAction* getStaticF_TMP_SETTINGS_PROPERTY_EVENT();

  static inline void setStaticF_COLOR_GRADIENT_PROPERTY_EVENT(::TMPro::FastAction_1<::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_COMPUTE_DT_EVENT(::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>* value);

  static inline void setStaticF_DRAG_AND_DROP_MATERIAL_EVENT(::TMPro::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* value);

  static inline void setStaticF_FONT_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_MATERIAL_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* value);

  static inline void setStaticF_RESOURCE_LOAD_EVENT(::TMPro::FastAction* value);

  static inline void setStaticF_SPRITE_ASSET_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXTMESHPRO_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT(::TMPro::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXT_CHANGED_EVENT(::TMPro::FastAction_1<::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXT_STYLE_PROPERTY_EVENT(::TMPro::FastAction_1<bool>* value);

  static inline void setStaticF_TMP_SETTINGS_PROPERTY_EVENT(::TMPro::FastAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMPro_EventManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMPro_EventManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMPro_EventManager(TMPro_EventManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMPro_EventManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMPro_EventManager(TMPro_EventManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMPro_EventManager, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMPro_EventManager);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMPro_EventManager*, "TMPro", "TMPro_EventManager");
