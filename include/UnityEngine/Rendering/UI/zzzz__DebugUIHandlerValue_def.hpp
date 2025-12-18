#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerValue)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_Value;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerValue;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerValue);
// Dependencies UnityEngine.Color, UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerValue
class CORDL_TYPE DebugUIHandlerValue : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field k_ZeroColor, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_ZeroColor, put = setStaticF_k_ZeroColor)) ::UnityEngine::Color k_ZeroColor;

  /// @brief Field m_Field, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_Value* m_Field;

  /// @brief Field m_Timer, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field valueLabel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueLabel, put = __cordl_internal_set_valueLabel)) ::UnityW<::UnityEngine::UI::Text> valueLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerValue* New_ctor();

  /// @brief Method OnDeselection, addr 0x66500f4, size 0x50, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnEnable, addr 0x665000c, size 0x8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSelection, addr 0x665009c, size 0x58, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x6650014, size 0x88, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method Update, addr 0x6650144, size 0x184, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityEngine::Rendering::DebugUI_Value* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Value*& __cordl_internal_get_m_Field();

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_valueLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_valueLabel();

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_Value* value);

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x66502c8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Color getStaticF_k_ZeroColor();

  static inline void setStaticF_k_ZeroColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerValue(DebugUIHandlerValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerValue(DebugUIHandlerValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12516 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueLabel, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___valueLabel;

  /// @brief Field m_Field, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Value* ___m_Field;

  /// @brief Field m_Timer, offset: 0x78, size: 0x4, def value: None
  float_t ___m_Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___valueLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___m_Field) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerValue, ___m_Timer) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerValue, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerValue);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerValue*, "UnityEngine.Rendering.UI", "DebugUIHandlerValue");
