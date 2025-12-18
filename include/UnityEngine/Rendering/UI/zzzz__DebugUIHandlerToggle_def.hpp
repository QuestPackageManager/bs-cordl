#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerToggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerToggle)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_BoolField;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerToggle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerToggle);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerToggle
class CORDL_TYPE DebugUIHandlerToggle : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field checkmarkImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_checkmarkImage, put = __cordl_internal_set_checkmarkImage)) ::UnityW<::UnityEngine::UI::Image> checkmarkImage;

  /// @brief Field m_Field, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_BoolField* m_Field;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field valueToggle, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle)) ::UnityW<::UnityEngine::UI::Toggle> valueToggle;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerToggle* New_ctor();

  /// @brief Method OnAction, addr 0x664f4b4, size 0x98, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDeselection, addr 0x664f464, size 0x50, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnSelection, addr 0x664f40c, size 0x58, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method OnToggleValueChanged, addr 0x664f3e8, size 0x24, virtual false, abstract: false, final false
  inline void OnToggleValueChanged(bool value);

  /// @brief Method SetWidget, addr 0x664f290, size 0x158, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0x664f54c, size 0xc4, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_checkmarkImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_checkmarkImage();

  constexpr ::UnityEngine::Rendering::DebugUI_BoolField* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_BoolField*& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_checkmarkImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_BoolField* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x664f610, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerToggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerToggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerToggle(DebugUIHandlerToggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerToggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerToggle(DebugUIHandlerToggle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12512 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ___valueToggle;

  /// @brief Field checkmarkImage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___checkmarkImage;

  /// @brief Field m_Field, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_BoolField* ___m_Field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerToggle, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerToggle, ___valueToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerToggle, ___checkmarkImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerToggle, ___m_Field) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerToggle, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerToggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerToggle*, "UnityEngine.Rendering.UI", "DebugUIHandlerToggle");
