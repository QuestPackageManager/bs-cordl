#pragma once
// IWYU pragma private; include "HMUI/IconSegmentedControlCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IconSegmentedControlCell)
namespace HMUI {
class HoverHint;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconSegmentedControlCell;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconSegmentedControlCell);
// Dependencies HMUI.SegmentedControlCell
namespace HMUI {
// Is value type: false
// CS Name: HMUI.IconSegmentedControlCell
class CORDL_TYPE IconSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
  // Declarations
  /// @brief Field _backgroundGameObject, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundGameObject, put = __cordl_internal_set__backgroundGameObject)) ::UnityW<::UnityEngine::GameObject> _backgroundGameObject;

  /// @brief Field _hoverHint, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHint, put = __cordl_internal_set__hoverHint)) ::UnityW<::HMUI::HoverHint> _hoverHint;

  /// @brief Field _icon, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__icon, put = __cordl_internal_set__icon)) ::UnityW<::UnityEngine::UI::Image> _icon;

  __declspec(property(put = set_hideBackgroundImage)) bool hideBackgroundImage;

  __declspec(property(put = set_hintText)) ::StringW hintText;

  __declspec(property(put = set_iconSize)) float_t iconSize;

  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  static inline ::HMUI::IconSegmentedControlCell* New_ctor();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__backgroundGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__backgroundGameObject();

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__hoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__hoverHint();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__icon() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__icon();

  constexpr void __cordl_internal_set__backgroundGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr void __cordl_internal_set__icon(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x408a3c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sprite, addr 0x408a3a4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method set_hideBackgroundImage, addr 0x408a248, size 0x9c, virtual false, abstract: false, final false
  inline void set_hideBackgroundImage(bool value);

  /// @brief Method set_hintText, addr 0x408a22c, size 0x1c, virtual false, abstract: false, final false
  inline void set_hintText(::StringW value);

  /// @brief Method set_iconSize, addr 0x408a2e4, size 0x3c, virtual false, abstract: false, final false
  inline void set_iconSize(float_t value);

  /// @brief Method set_sprite, addr 0x408a210, size 0x1c, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IconSegmentedControlCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IconSegmentedControlCell(IconSegmentedControlCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IconSegmentedControlCell(IconSegmentedControlCell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18802 };

  /// @brief Field _icon, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____icon;

  /// @brief Field _hoverHint, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____hoverHint;

  /// @brief Field _backgroundGameObject, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____backgroundGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::IconSegmentedControlCell, ____icon) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControlCell, ____hoverHint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControlCell, ____backgroundGameObject) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::IconSegmentedControlCell, 0x88>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::IconSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControlCell*, "HMUI", "IconSegmentedControlCell");
