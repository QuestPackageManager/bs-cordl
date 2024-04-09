#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UIElementsRuntimeUtilityNative)
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIElementsRuntimeUtilityNative;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative);
// Type: UnityEngine.UIElements::UIElementsRuntimeUtilityNative
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::UIElementsRuntimeUtilityNative*
class CORDL_TYPE UIElementsRuntimeUtilityNative : public ::System::Object {
public:
  // Declarations
  /// @brief Field RepaintOverlayPanelsCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RepaintOverlayPanelsCallback, put = setStaticF_RepaintOverlayPanelsCallback))::System::Action* RepaintOverlayPanelsCallback;

  /// @brief Field UpdateRuntimePanelsCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UpdateRuntimePanelsCallback, put = setStaticF_UpdateRuntimePanelsCallback))::System::Action* UpdateRuntimePanelsCallback;

  /// @brief Method RegisterPlayerloopCallback, addr 0x33f0914, size 0x28, virtual false, abstract: false, final false
  static inline void RegisterPlayerloopCallback();

  /// @brief Method RepaintOverlayPanels, addr 0x33f084c, size 0x64, virtual false, abstract: false, final false
  static inline void RepaintOverlayPanels();

  /// @brief Method UnregisterPlayerloopCallback, addr 0x33f093c, size 0x28, virtual false, abstract: false, final false
  static inline void UnregisterPlayerloopCallback();

  /// @brief Method UpdateRuntimePanels, addr 0x33f08b0, size 0x64, virtual false, abstract: false, final false
  static inline void UpdateRuntimePanels();

  /// @brief Method VisualElementCreation, addr 0x33f0964, size 0x28, virtual false, abstract: false, final false
  static inline void VisualElementCreation();

  static inline ::System::Action* getStaticF_RepaintOverlayPanelsCallback();

  static inline ::System::Action* getStaticF_UpdateRuntimePanelsCallback();

  static inline void setStaticF_RepaintOverlayPanelsCallback(::System::Action* value);

  static inline void setStaticF_UpdateRuntimePanelsCallback(::System::Action* value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIElementsRuntimeUtilityNative, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIElementsRuntimeUtilityNative*, "UnityEngine.UIElements", "UIElementsRuntimeUtilityNative");
