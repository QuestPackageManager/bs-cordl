#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextEventManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextEventManager)
namespace UnityEngine::TextCore::Text {
template <typename A> class FastAction_1;
}
namespace UnityEngine::TextCore::Text {
template <typename A, typename B> class FastAction_2;
}
namespace UnityEngine::TextCore::Text {
template <typename A, typename B, typename C> class FastAction_3;
}
namespace UnityEngine::TextCore::Text {
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
namespace UnityEngine::TextCore::Text {
class TextEventManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextEventManager);
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextEventManager
class CORDL_TYPE TextEventManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field COLOR_GRADIENT_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_COLOR_GRADIENT_PROPERTY_EVENT,
                      put = setStaticF_COLOR_GRADIENT_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* COLOR_GRADIENT_PROPERTY_EVENT;

  /// @brief Field DRAG_AND_DROP_MATERIAL_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DRAG_AND_DROP_MATERIAL_EVENT,
                      put = setStaticF_DRAG_AND_DROP_MATERIAL_EVENT)) ::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>,
                                                                                                                  ::UnityW<::UnityEngine::Material>>* DRAG_AND_DROP_MATERIAL_EVENT;

  /// @brief Field FONT_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_FONT_PROPERTY_EVENT,
                      put = setStaticF_FONT_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* FONT_PROPERTY_EVENT;

  /// @brief Field MATERIAL_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MATERIAL_PROPERTY_EVENT,
                      put = setStaticF_MATERIAL_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* MATERIAL_PROPERTY_EVENT;

  /// @brief Field OnPreRenderObject_Event, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnPreRenderObject_Event, put = setStaticF_OnPreRenderObject_Event)) ::UnityEngine::TextCore::Text::FastAction* OnPreRenderObject_Event;

  /// @brief Field RESOURCE_LOAD_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RESOURCE_LOAD_EVENT, put = setStaticF_RESOURCE_LOAD_EVENT)) ::UnityEngine::TextCore::Text::FastAction* RESOURCE_LOAD_EVENT;

  /// @brief Field SPRITE_ASSET_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SPRITE_ASSET_PROPERTY_EVENT,
                      put = setStaticF_SPRITE_ASSET_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* SPRITE_ASSET_PROPERTY_EVENT;

  /// @brief Field TEXTMESHPRO_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXTMESHPRO_PROPERTY_EVENT,
                      put = setStaticF_TEXTMESHPRO_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* TEXTMESHPRO_PROPERTY_EVENT;

  /// @brief Field TEXTMESHPRO_UGUI_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT,
                      put = setStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* TEXTMESHPRO_UGUI_PROPERTY_EVENT;

  /// @brief Field TEXT_CHANGED_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXT_CHANGED_EVENT, put = setStaticF_TEXT_CHANGED_EVENT)) ::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* TEXT_CHANGED_EVENT;

  /// @brief Field TEXT_STYLE_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TEXT_STYLE_PROPERTY_EVENT, put = setStaticF_TEXT_STYLE_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction_1<bool>* TEXT_STYLE_PROPERTY_EVENT;

  /// @brief Field TMP_SETTINGS_PROPERTY_EVENT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TMP_SETTINGS_PROPERTY_EVENT, put = setStaticF_TMP_SETTINGS_PROPERTY_EVENT)) ::UnityEngine::TextCore::Text::FastAction* TMP_SETTINGS_PROPERTY_EVENT;

  /// @brief Method ON_FONT_PROPERTY_CHANGED, addr 0x69cfb10, size 0x98, virtual false, abstract: false, final false
  static inline void ON_FONT_PROPERTY_CHANGED(bool isChanged, ::UnityEngine::Object* font);

  static inline ::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* getStaticF_COLOR_GRADIENT_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>*
  getStaticF_DRAG_AND_DROP_MATERIAL_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_FONT_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* getStaticF_MATERIAL_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction* getStaticF_OnPreRenderObject_Event();

  static inline ::UnityEngine::TextCore::Text::FastAction* getStaticF_RESOURCE_LOAD_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_SPRITE_ASSET_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_TEXTMESHPRO_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* getStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* getStaticF_TEXT_CHANGED_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction_1<bool>* getStaticF_TEXT_STYLE_PROPERTY_EVENT();

  static inline ::UnityEngine::TextCore::Text::FastAction* getStaticF_TMP_SETTINGS_PROPERTY_EVENT();

  static inline void setStaticF_COLOR_GRADIENT_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_DRAG_AND_DROP_MATERIAL_EVENT(
      ::UnityEngine::TextCore::Text::FastAction_3<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::Material>, ::UnityW<::UnityEngine::Material>>* value);

  static inline void setStaticF_FONT_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_MATERIAL_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Material>>* value);

  static inline void setStaticF_OnPreRenderObject_Event(::UnityEngine::TextCore::Text::FastAction* value);

  static inline void setStaticF_RESOURCE_LOAD_EVENT(::UnityEngine::TextCore::Text::FastAction* value);

  static inline void setStaticF_SPRITE_ASSET_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXTMESHPRO_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXTMESHPRO_UGUI_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_2<bool, ::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXT_CHANGED_EVENT(::UnityEngine::TextCore::Text::FastAction_1<::UnityW<::UnityEngine::Object>>* value);

  static inline void setStaticF_TEXT_STYLE_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction_1<bool>* value);

  static inline void setStaticF_TMP_SETTINGS_PROPERTY_EVENT(::UnityEngine::TextCore::Text::FastAction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEventManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEventManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEventManager(TextEventManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEventManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEventManager(TextEventManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextEventManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextEventManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextEventManager*, "UnityEngine.TextCore.Text", "TextEventManager");
