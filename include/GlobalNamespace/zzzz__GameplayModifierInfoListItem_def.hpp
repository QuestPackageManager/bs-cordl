#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierInfoListItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GameplayModifierInfoListItem)
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace HMUI {
class HoverHint;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierInfoListItem);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifierInfoListItem
class CORDL_TYPE GameplayModifierInfoListItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hoverHint, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__hoverHint, put = __cordl_internal_set__hoverHint)) ::UnityW<::HMUI::HoverHint> _hoverHint;

  /// @brief Field _iconImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__iconImage, put = __cordl_internal_set__iconImage)) ::UnityW<::UnityEngine::UI::Image> _iconImage;

  static inline ::GlobalNamespace::GameplayModifierInfoListItem* New_ctor();

  /// @brief Method SetModifier, addr 0x3c36400, size 0x190, virtual false, abstract: false, final false
  inline void SetModifier(::GlobalNamespace::GameplayModifierParamsSO* modifierParam, bool showName);

  constexpr ::UnityW<::HMUI::HoverHint> const& __cordl_internal_get__hoverHint() const;

  constexpr ::UnityW<::HMUI::HoverHint>& __cordl_internal_get__hoverHint();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__iconImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__iconImage();

  constexpr void __cordl_internal_set__hoverHint(::UnityW<::HMUI::HoverHint> value);

  constexpr void __cordl_internal_set__iconImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x3c36590, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierInfoListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierInfoListItem(GameplayModifierInfoListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierInfoListItem(GameplayModifierInfoListItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19201 };

  /// @brief Field _hoverHint, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::HoverHint> ____hoverHint;

  /// @brief Field _iconImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____iconImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameplayModifierInfoListItem, ____hoverHint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifierInfoListItem, ____iconImage) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierInfoListItem, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierInfoListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
