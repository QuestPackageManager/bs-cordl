#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerButton)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_Button;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerButton;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerButton);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerButton
class CORDL_TYPE DebugUIHandlerButton : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Field, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_Button* m_Field;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerButton* New_ctor();

  /// @brief Method OnAction, addr 0x664802c, size 0x2c, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDeselection, addr 0x6648000, size 0x2c, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnSelection, addr 0x6647fc8, size 0x38, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x6647f40, size 0x88, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  constexpr ::UnityEngine::Rendering::DebugUI_Button* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Button*& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_Button* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x6648058, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerButton();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerButton", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerButton(DebugUIHandlerButton&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerButton", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerButton(DebugUIHandlerButton const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12483 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field m_Field, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Button* ___m_Field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerButton, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerButton, ___m_Field) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerButton, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerButton);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerButton*, "UnityEngine.Rendering.UI", "DebugUIHandlerButton");
