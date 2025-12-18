#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerPanel)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerCanvas;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_Panel;
}
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerPanel);
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerPanel
class CORDL_TYPE DebugUIHandlerPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field Canvas, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Canvas, put = __cordl_internal_set_Canvas)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> Canvas;

  /// @brief Field m_ContentTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContentTransform, put = __cordl_internal_set_m_ContentTransform)) ::UnityW<::UnityEngine::RectTransform> m_ContentTransform;

  /// @brief Field m_MaskTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskTransform, put = __cordl_internal_set_m_MaskTransform)) ::UnityW<::UnityEngine::RectTransform> m_MaskTransform;

  /// @brief Field m_Panel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::Rendering::DebugUI_Panel* m_Panel;

  /// @brief Field m_ScrollTarget, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollTarget, put = __cordl_internal_set_m_ScrollTarget)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> m_ScrollTarget;

  /// @brief Field m_ScrollTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollTransform, put = __cordl_internal_set_m_ScrollTransform)) ::UnityW<::UnityEngine::RectTransform> m_ScrollTransform;

  /// @brief Field nameLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field scrollRect, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollRect, put = __cordl_internal_set_scrollRect)) ::UnityW<::UnityEngine::UI::ScrollRect> scrollRect;

  /// @brief Field viewport, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_viewport, put = __cordl_internal_set_viewport)) ::UnityW<::UnityEngine::RectTransform> viewport;

  /// @brief Method GetFirstItem, addr 0x6649bc8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> GetFirstItem();

  /// @brief Method GetPanel, addr 0x664ddcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Panel* GetPanel();

  /// @brief Method GetYPosInScroll, addr 0x664de6c, size 0xe8, virtual false, abstract: false, final false
  inline float_t GetYPosInScroll(::UnityEngine::RectTransform* target);

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerPanel* New_ctor();

  /// @brief Method OnEnable, addr 0x664dd08, size 0xc4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnScrollbarClicked, addr 0x664ddfc, size 0x68, virtual false, abstract: false, final false
  inline void OnScrollbarClicked();

  /// @brief Method ResetDebugManager, addr 0x664df54, size 0x64, virtual false, abstract: false, final false
  inline void ResetDebugManager();

  /// @brief Method SelectNextItem, addr 0x664ddd4, size 0x14, virtual false, abstract: false, final false
  inline void SelectNextItem();

  /// @brief Method SelectPreviousItem, addr 0x664dde8, size 0x14, virtual false, abstract: false, final false
  inline void SelectPreviousItem();

  /// @brief Method SetPanel, addr 0x66493c4, size 0x30, virtual false, abstract: false, final false
  inline void SetPanel(::UnityEngine::Rendering::DebugUI_Panel* panel);

  /// @brief Method SetScrollTarget, addr 0x664de64, size 0x8, virtual false, abstract: false, final false
  inline void SetScrollTarget(::UnityEngine::Rendering::UI::DebugUIHandlerWidget* target);

  /// @brief Method UpdateScroll, addr 0x6648840, size 0x1ac, virtual false, abstract: false, final false
  inline void UpdateScroll();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> const& __cordl_internal_get_Canvas() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas>& __cordl_internal_get_Canvas();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_ContentTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_ContentTransform();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_MaskTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_MaskTransform();

  constexpr ::UnityEngine::Rendering::DebugUI_Panel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Panel*& __cordl_internal_get_m_Panel();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> const& __cordl_internal_get_m_ScrollTarget() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget>& __cordl_internal_get_m_ScrollTarget();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_ScrollTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_ScrollTransform();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get_scrollRect() const;

  constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get_scrollRect();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_viewport() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_viewport();

  constexpr void __cordl_internal_set_Canvas(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> value);

  constexpr void __cordl_internal_set_m_ContentTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_MaskTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::Rendering::DebugUI_Panel* value);

  constexpr void __cordl_internal_set_m_ScrollTarget(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> value);

  constexpr void __cordl_internal_set_m_ScrollTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_scrollRect(::UnityW<::UnityEngine::UI::ScrollRect> value);

  constexpr void __cordl_internal_set_viewport(::UnityW<::UnityEngine::RectTransform> value);

  /// @brief Method .ctor, addr 0x664dfb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerPanel(DebugUIHandlerPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerPanel(DebugUIHandlerPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12506 };

  /// @brief Field nameLabel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field scrollRect, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ScrollRect> ___scrollRect;

  /// @brief Field viewport, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___viewport;

  /// @brief Field Canvas, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerCanvas> ___Canvas;

  /// @brief Field m_ScrollTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_ScrollTransform;

  /// @brief Field m_ContentTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_ContentTransform;

  /// @brief Field m_MaskTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___m_MaskTransform;

  /// @brief Field m_ScrollTarget, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> ___m_ScrollTarget;

  /// @brief Field m_Panel, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Panel* ___m_Panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___nameLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___scrollRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___viewport) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___Canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___m_ScrollTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___m_ContentTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___m_MaskTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___m_ScrollTarget) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerPanel, ___m_Panel) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerPanel, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerPanel*, "UnityEngine.Rendering.UI", "DebugUIHandlerPanel");
