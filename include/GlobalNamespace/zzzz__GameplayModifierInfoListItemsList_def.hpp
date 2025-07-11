#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierInfoListItemsList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(GameplayModifierInfoListItemsList)
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierInfoListItemsList);
// Dependencies HMUI.UIItemsList`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifierInfoListItemsList
class CORDL_TYPE GameplayModifierInfoListItemsList : public ::HMUI::UIItemsList_1<::UnityW<::GlobalNamespace::GameplayModifierInfoListItem>> {
public:
  // Declarations
  static inline ::GlobalNamespace::GameplayModifierInfoListItemsList* New_ctor();

  /// @brief Method .ctor, addr 0x3bfc4b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierInfoListItemsList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierInfoListItemsList(GameplayModifierInfoListItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierInfoListItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierInfoListItemsList(GameplayModifierInfoListItemsList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierInfoListItemsList, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierInfoListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierInfoListItemsList*, "", "GameplayModifierInfoListItemsList");
