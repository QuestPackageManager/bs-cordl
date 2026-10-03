#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScreenOverlayPanelPicker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenOverlayPanelPicker)
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ScreenOverlayPanelPicker;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ScreenOverlayPanelPicker*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ScreenOverlayPanelPicker*, "UnityEngine.UIElements", "ScreenOverlayPanelPicker");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScreenOverlayPanelPicker
class CORDL_TYPE ScreenOverlayPanelPicker : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetCapturingPanel, addr 0x7243098, size 0x11c, virtual false, abstract: false, final false
  inline bool GetCapturingPanel(int32_t pointerId, ::by_ref<::UnityEngine::UIElements::BaseVisualElementPanel*> capturingPanel);

  static inline ::UnityEngine::UIElements::ScreenOverlayPanelPicker* New_ctor();

  /// @brief Method TryPick, addr 0x7242f48, size 0x150, virtual false, abstract: false, final false
  inline bool TryPick(::UnityEngine::UIElements::BaseRuntimePanel* panel, int32_t pointerId, ::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 delta,
                      ::System::Nullable_1<int32_t> targetDisplay, ::by_ref<bool> captured);

  /// @brief Method .ctor, addr 0x72431b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenOverlayPanelPicker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenOverlayPanelPicker", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenOverlayPanelPicker(ScreenOverlayPanelPicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenOverlayPanelPicker", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenOverlayPanelPicker(ScreenOverlayPanelPicker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4609 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ScreenOverlayPanelPicker) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
