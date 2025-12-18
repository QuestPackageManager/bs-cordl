#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerProgressBar.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerProgressBar)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_ProgressBarValue;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerProgressBar;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerProgressBar
class CORDL_TYPE DebugUIHandlerProgressBar : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Timer, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  /// @brief Field m_Value, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) ::UnityEngine::Rendering::DebugUI_ProgressBarValue* m_Value;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field progressBarRect, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_progressBarRect, put = __cordl_internal_set_progressBarRect)) ::UnityW<::UnityEngine::RectTransform> progressBarRect;

  /// @brief Field valueLabel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueLabel, put = __cordl_internal_set_valueLabel)) ::UnityW<::UnityEngine::UI::Text> valueLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar* New_ctor();

  /// @brief Method OnDeselection, addr 0x664eab4, size 0x2c, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnEnable, addr 0x664e910, size 0x8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnSelection, addr 0x664ea7c, size 0x38, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x664e918, size 0x90, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method Update, addr 0x664eae0, size 0x84, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateValue, addr 0x664e9a8, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateValue();

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr ::UnityEngine::Rendering::DebugUI_ProgressBarValue* const& __cordl_internal_get_m_Value() const;

  constexpr ::UnityEngine::Rendering::DebugUI_ProgressBarValue*& __cordl_internal_get_m_Value();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_progressBarRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_progressBarRect();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_valueLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_valueLabel();

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  constexpr void __cordl_internal_set_m_Value(::UnityEngine::Rendering::DebugUI_ProgressBarValue* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_progressBarRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x664eb64, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerProgressBar();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerProgressBar", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerProgressBar(DebugUIHandlerProgressBar&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerProgressBar", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerProgressBar(DebugUIHandlerProgressBar const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12510 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueLabel, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___valueLabel;

  /// @brief Field progressBarRect, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___progressBarRect;

  /// @brief Field m_Value, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_ProgressBarValue* ___m_Value;

  /// @brief Field m_Timer, offset: 0x80, size: 0x4, def value: None
  float_t ___m_Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar, ___valueLabel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar, ___progressBarRect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar, ___m_Value) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar, ___m_Timer) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerProgressBar*, "UnityEngine.Rendering.UI", "DebugUIHandlerProgressBar");
