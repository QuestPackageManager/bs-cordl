#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerWidget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerWidget)
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerWidget);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerWidget
class CORDL_TYPE DebugUIHandlerWidget : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <nextUIHandler>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__nextUIHandler_k__BackingField,
                      put = __cordl_internal_set__nextUIHandler_k__BackingField)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>
      _nextUIHandler_k__BackingField;

  /// @brief Field <parentUIHandler>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__parentUIHandler_k__BackingField,
                      put = __cordl_internal_set__parentUIHandler_k__BackingField)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>
      _parentUIHandler_k__BackingField;

  /// @brief Field <previousUIHandler>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__previousUIHandler_k__BackingField,
                      put = __cordl_internal_set__previousUIHandler_k__BackingField)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>
      _previousUIHandler_k__BackingField;

  /// @brief Field colorDefault, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_colorDefault, put = __cordl_internal_set_colorDefault)) ::UnityEngine::Color colorDefault;

  /// @brief Field colorSelected, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_colorSelected, put = __cordl_internal_set_colorSelected)) ::UnityEngine::Color colorSelected;

  /// @brief Field m_Widget, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Widget, put = __cordl_internal_set_m_Widget)) ::UnityEngine::Rendering::DebugUI_Widget* m_Widget;

  __declspec(property(get = get_nextUIHandler, put = set_nextUIHandler)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> nextUIHandler;

  __declspec(property(get = get_parentUIHandler, put = set_parentUIHandler)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> parentUIHandler;

  __declspec(property(get = get_previousUIHandler, put = set_previousUIHandler)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> previousUIHandler;

  /// @brief Method CastWidget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CastWidget();

  /// @brief Method GetWidget, addr 0x65eadb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Widget* GetWidget();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* New_ctor();

  /// @brief Method Next, addr 0x65e01e0, size 0x108, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnAction, addr 0x65eadc8, size 0x4, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x65eadd0, size 0x4, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x65eadc4, size 0x4, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnEnable, addr 0x65eada8, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIncrement, addr 0x65eadcc, size 0x4, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x65eadbc, size 0x8, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method Previous, addr 0x65eadd4, size 0xb0, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Previous();

  /// @brief Method SetWidget, addr 0x65eadac, size 0x8, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& __cordl_internal_get__nextUIHandler_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& __cordl_internal_get__nextUIHandler_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& __cordl_internal_get__parentUIHandler_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& __cordl_internal_get__parentUIHandler_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& __cordl_internal_get__previousUIHandler_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& __cordl_internal_get__previousUIHandler_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_colorDefault() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_colorDefault();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_colorSelected() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_colorSelected();

  constexpr ::UnityEngine::Rendering::DebugUI_Widget* const& __cordl_internal_get_m_Widget() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Widget*& __cordl_internal_get_m_Widget();

  constexpr void __cordl_internal_set__nextUIHandler_k__BackingField(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value);

  constexpr void __cordl_internal_set__parentUIHandler_k__BackingField(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value);

  constexpr void __cordl_internal_set__previousUIHandler_k__BackingField(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value);

  constexpr void __cordl_internal_set_colorDefault(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_colorSelected(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_Widget(::UnityEngine::Rendering::DebugUI_Widget* value);

  /// @brief Method .ctor, addr 0x65e039c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_nextUIHandler, addr 0x65ead98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> get_nextUIHandler();

  /// @brief Method get_parentUIHandler, addr 0x65ead78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> get_parentUIHandler();

  /// @brief Method get_previousUIHandler, addr 0x65ead88, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> get_previousUIHandler();

  /// @brief Method set_nextUIHandler, addr 0x65eada0, size 0x8, virtual false, abstract: false, final false
  inline void set_nextUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value);

  /// @brief Method set_parentUIHandler, addr 0x65ead80, size 0x8, virtual false, abstract: false, final false
  inline void set_parentUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value);

  /// @brief Method set_previousUIHandler, addr 0x65ead90, size 0x8, virtual false, abstract: false, final false
  inline void set_previousUIHandler(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerWidget();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerWidget", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerWidget(DebugUIHandlerWidget&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerWidget", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerWidget(DebugUIHandlerWidget const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12518 };

  /// @brief Field colorDefault, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ___colorDefault;

  /// @brief Field colorSelected, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ___colorSelected;

  /// @brief Field <parentUIHandler>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> ____parentUIHandler_k__BackingField;

  /// @brief Field <previousUIHandler>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> ____previousUIHandler_k__BackingField;

  /// @brief Field <nextUIHandler>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> ____nextUIHandler_k__BackingField;

  /// @brief Field m_Widget, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Widget* ___m_Widget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerWidget, ___colorDefault) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerWidget, ___colorSelected) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerWidget, ____parentUIHandler_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerWidget, ____previousUIHandler_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerWidget, ____nextUIHandler_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerWidget, ___m_Widget) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerWidget, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerWidget);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerWidget*, "UnityEngine.Rendering.UI", "DebugUIHandlerWidget");
