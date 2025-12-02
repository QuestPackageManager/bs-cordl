#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsRuntimeUtilityNative.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UIElementsRuntimeUtilityNative)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtilityNative;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIElementsRuntimeUtilityNative
class CORDL_TYPE UIElementsRuntimeUtilityNative : public ::System::Object {
public:
  // Declarations
  /// @brief Field RenderOffscreenPanelsCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RenderOffscreenPanelsCallback, put = setStaticF_RenderOffscreenPanelsCallback)) ::System::Action* RenderOffscreenPanelsCallback;

  /// @brief Field RepaintPanelsCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_RepaintPanelsCallback, put = setStaticF_RepaintPanelsCallback)) ::System::Action_1<bool>* RepaintPanelsCallback;

  /// @brief Field UpdatePanelsCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UpdatePanelsCallback, put = setStaticF_UpdatePanelsCallback)) ::System::Action* UpdatePanelsCallback;

  /// @brief Method RegisterPlayerloopCallback, addr 0x6b82e44, size 0x28, virtual false, abstract: false, final false
  static inline void RegisterPlayerloopCallback();

  /// @brief Method RenderOffscreenPanels, addr 0x6b82ddc, size 0x68, virtual false, abstract: false, final false
  static inline void RenderOffscreenPanels();

  /// @brief Method RepaintPanels, addr 0x6b82d6c, size 0x70, virtual false, abstract: false, final false
  static inline void RepaintPanels(bool onlyOffscreen);

  /// @brief Method UnregisterPlayerloopCallback, addr 0x6b82e6c, size 0x28, virtual false, abstract: false, final false
  static inline void UnregisterPlayerloopCallback();

  /// @brief Method UpdatePanels, addr 0x6b82d04, size 0x68, virtual false, abstract: false, final false
  static inline void UpdatePanels();

  /// @brief Method VisualElementCreation, addr 0x6b82e94, size 0x28, virtual false, abstract: false, final false
  static inline void VisualElementCreation();

  static inline ::System::Action* getStaticF_RenderOffscreenPanelsCallback();

  static inline ::System::Action_1<bool>* getStaticF_RepaintPanelsCallback();

  static inline ::System::Action* getStaticF_UpdatePanelsCallback();

  static inline void setStaticF_RenderOffscreenPanelsCallback(::System::Action* value);

  static inline void setStaticF_RepaintPanelsCallback(::System::Action_1<bool>* value);

  static inline void setStaticF_UpdatePanelsCallback(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIElementsRuntimeUtilityNative();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtilityNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIElementsRuntimeUtilityNative(UIElementsRuntimeUtilityNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIElementsRuntimeUtilityNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIElementsRuntimeUtilityNative(UIElementsRuntimeUtilityNative const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*, "UnityEngine.UIElements", "UIElementsRuntimeUtilityNative");
