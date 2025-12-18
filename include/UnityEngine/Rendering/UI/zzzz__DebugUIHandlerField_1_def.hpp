#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerField_1)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
template <typename T> class DebugUIHandlerField_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerField_1);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerField`1<T>
class CORDL_TYPE DebugUIHandlerField_1 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Field, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) T m_Field;

  /// @brief Field nameLabel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field nextButtonText, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nextButtonText, put = __cordl_internal_set_nextButtonText)) ::UnityW<::UnityEngine::UI::Text> nextButtonText;

  /// @brief Field previousButtonText, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_previousButtonText, put = __cordl_internal_set_previousButtonText)) ::UnityW<::UnityEngine::UI::Text> previousButtonText;

  /// @brief Field valueLabel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_valueLabel, put = __cordl_internal_set_valueLabel)) ::UnityW<::UnityEngine::UI::Text> valueLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>* New_ctor();

  /// @brief Method OnAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDeselection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnSelection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetLabelText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetLabelText(::StringW text);

  /// @brief Method SetWidget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr T const& __cordl_internal_get_m_Field() const;

  constexpr T& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nextButtonText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nextButtonText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_previousButtonText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_previousButtonText();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_valueLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_valueLabel();

  constexpr void __cordl_internal_set_m_Field(T value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_nextButtonText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_previousButtonText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerField_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerField_1(DebugUIHandlerField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerField_1(DebugUIHandlerField_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12494 };

  /// @brief Field nextButtonText, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nextButtonText;

  /// @brief Field previousButtonText, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___previousButtonText;

  /// @brief Field nameLabel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueLabel, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___valueLabel;

  /// @brief Field m_Field, offset: 0x80, size: 0x8, def value: None
  T ___m_Field;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::UI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::UI::DebugUIHandlerField_1, "UnityEngine.Rendering.UI", "DebugUIHandlerField`1");
