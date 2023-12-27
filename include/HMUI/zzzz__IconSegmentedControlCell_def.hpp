#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IconSegmentedControlCell)
namespace UnityEngine::UI {
class Image;
}
namespace HMUI {
class HoverHint;
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
// Type: HMUI::IconSegmentedControlCell
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13551))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13548))
// CS Name: ::HMUI::IconSegmentedControlCell*
class CORDL_TYPE IconSegmentedControlCell : public ::HMUI::SegmentedControlCell {
public:
  // Declarations
  /// @brief Field _icon, offset 0x50, size 0x8
  __declspec(property(get = __get__icon, put = __set__icon))::UnityEngine::UI::Image* _icon;

  /// @brief Field _hoverHint, offset 0x58, size 0x8
  __declspec(property(get = __get__hoverHint, put = __set__hoverHint))::HMUI::HoverHint* _hoverHint;

  /// @brief Field _backgroundGameObject, offset 0x60, size 0x8
  __declspec(property(get = __get__backgroundGameObject, put = __set__backgroundGameObject))::UnityEngine::GameObject* _backgroundGameObject;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(put = set_hintText))::StringW hintText;

  __declspec(property(put = set_iconSize)) float_t iconSize;

  __declspec(property(put = set_hideBackgroundImage)) bool hideBackgroundImage;

  constexpr ::UnityEngine::UI::Image*& __get__icon();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__icon() const;

  constexpr void __set__icon(::UnityEngine::UI::Image* value);

  constexpr ::HMUI::HoverHint*& __get__hoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__hoverHint() const;

  constexpr void __set__hoverHint(::HMUI::HoverHint* value);

  constexpr ::UnityEngine::GameObject*& __get__backgroundGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__backgroundGameObject() const;

  constexpr void __set__backgroundGameObject(::UnityEngine::GameObject* value);

  /// @brief Method set_sprite addr 0x211f724 size 0x1c virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method get_sprite addr 0x211f99c size 0x1c virtual false final false
  inline ::UnityEngine::Sprite* get_sprite();

  /// @brief Method set_hintText addr 0x211f740 size 0x1c virtual false final false
  inline void set_hintText(::StringW value);

  /// @brief Method set_iconSize addr 0x211f7f8 size 0x3c virtual false final false
  inline void set_iconSize(float_t value);

  /// @brief Method set_hideBackgroundImage addr 0x211f75c size 0x9c virtual false final false
  inline void set_hideBackgroundImage(bool value);

  static inline ::HMUI::IconSegmentedControlCell* New_ctor();

  /// @brief Method .ctor addr 0x211f9b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IconSegmentedControlCell(IconSegmentedControlCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControlCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IconSegmentedControlCell(IconSegmentedControlCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IconSegmentedControlCell();

public:
  /// @brief Field _icon, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____icon;

  /// @brief Field _hoverHint, offset: 0x58, size: 0x8, def value: None
  ::HMUI::HoverHint* ____hoverHint;

  /// @brief Field _backgroundGameObject, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____backgroundGameObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconSegmentedControlCell, 0x68>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::IconSegmentedControlCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControlCell*, "HMUI", "IconSegmentedControlCell");
