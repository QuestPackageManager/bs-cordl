#pragma once
// IWYU pragma private; include "HMUI/HoverHintPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoverHintPanel)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace HMUI {
class HoverHintPanel;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::HoverHintPanel);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace HMUI {
// Is value type: false
// CS Name: HMUI.HoverHintPanel
class CORDL_TYPE HoverHintPanel : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _containerPadding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__containerPadding, put = __cordl_internal_set__containerPadding)) ::UnityEngine::Vector2 _containerPadding;

  /// @brief Field <isShown>k__BackingField, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__isShown_k__BackingField, put = __cordl_internal_set__isShown_k__BackingField)) bool _isShown_k__BackingField;

  /// @brief Field _padding, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__padding, put = __cordl_internal_set__padding)) ::UnityEngine::Vector2 _padding;

  /// @brief Field _separator, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__separator, put = __cordl_internal_set__separator)) float_t _separator;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshProUGUI> _text;

  /// @brief Field _zOffset, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__zOffset, put = __cordl_internal_set__zOffset)) float_t _zOffset;

  __declspec(property(get = get_isShown, put = set_isShown)) bool isShown;

  /// @brief Method Awake, addr 0x39fc11c, size 0xa8, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculatePanelPosition, addr 0x39fc1c4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalculatePanelPosition(::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect, ::UnityEngine::Vector2 panelSize);

  /// @brief Method Hide, addr 0x39fb810, size 0x28, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::HMUI::HoverHintPanel* New_ctor();

  /// @brief Method Show, addr 0x39fbc60, size 0x258, virtual false, abstract: false, final false
  inline void Show(::StringW text, ::UnityEngine::Transform* parent, ::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect);

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__containerPadding() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__containerPadding();

  constexpr bool const& __cordl_internal_get__isShown_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isShown_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__padding() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__padding();

  constexpr float_t const& __cordl_internal_get__separator() const;

  constexpr float_t& __cordl_internal_get__separator();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__text();

  constexpr float_t const& __cordl_internal_get__zOffset() const;

  constexpr float_t& __cordl_internal_get__zOffset();

  constexpr void __cordl_internal_set__containerPadding(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__isShown_k__BackingField(bool value);

  constexpr void __cordl_internal_set__padding(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__separator(float_t value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__zOffset(float_t value);

  /// @brief Method .ctor, addr 0x39fc244, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isShown, addr 0x39fc108, size 0x8, virtual false, abstract: false, final false
  inline bool get_isShown();

  /// @brief Method set_isShown, addr 0x39fc110, size 0xc, virtual false, abstract: false, final false
  inline void set_isShown(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HoverHintPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HoverHintPanel(HoverHintPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HoverHintPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HoverHintPanel(HoverHintPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16045 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____text;

  /// @brief Field _padding, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____padding;

  /// @brief Field _containerPadding, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____containerPadding;

  /// @brief Field _separator, offset: 0x38, size: 0x4, def value: None
  float_t ____separator;

  /// @brief Field _zOffset, offset: 0x3c, size: 0x4, def value: None
  float_t ____zOffset;

  /// @brief Field <isShown>k__BackingField, offset: 0x40, size: 0x1, def value: None
  bool ____isShown_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::HoverHintPanel, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____padding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____containerPadding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____separator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____zOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HMUI::HoverHintPanel, ____isShown_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::HoverHintPanel, 0x48>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::HoverHintPanel);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::HoverHintPanel*, "HMUI", "HoverHintPanel");
