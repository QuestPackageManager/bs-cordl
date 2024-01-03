#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameplayModifierInfoListItem)
namespace HMUI {
class HoverHint;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierInfoListItem);
// Type: ::GameplayModifierInfoListItem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5419))
// CS Name: ::GameplayModifierInfoListItem*
class CORDL_TYPE GameplayModifierInfoListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hoverHint, offset 0x18, size 0x8
  __declspec(property(get = __get__hoverHint, put = __set__hoverHint))::HMUI::HoverHint* _hoverHint;

  /// @brief Field _iconImage, offset 0x20, size 0x8
  __declspec(property(get = __get__iconImage, put = __set__iconImage))::UnityEngine::UI::Image* _iconImage;

  constexpr ::HMUI::HoverHint*& __get__hoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__hoverHint() const;

  constexpr void __set__hoverHint(::HMUI::HoverHint* value);

  constexpr ::UnityEngine::UI::Image*& __get__iconImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__iconImage() const;

  constexpr void __set__iconImage(::UnityEngine::UI::Image* value);

  /// @brief Method SetModifier, addr 0x2278a9c, size 0x224, virtual false, abstract: false, final false
  /// @param showName: bool (default: false)
  inline void SetModifier(::GlobalNamespace::GameplayModifierParamsSO* modifierParam, bool showName = false);

  static inline ::GlobalNamespace::GameplayModifierInfoListItem* New_ctor();

  /// @brief Method .ctor, addr 0x2278cc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierInfoListItem(GameplayModifierInfoListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierInfoListItem(GameplayModifierInfoListItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierInfoListItem();

public:
  /// @brief Field _hoverHint, offset: 0x18, size: 0x8, def value: None
  ::HMUI::HoverHint* ____hoverHint;

  /// @brief Field _iconImage, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____iconImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierInfoListItem, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierInfoListItem, ____hoverHint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierInfoListItem, ____iconImage) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierInfoListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
