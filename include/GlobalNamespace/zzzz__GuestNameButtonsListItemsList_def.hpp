#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(GuestNameButtonsListItemsList)
// Forward declare root types
namespace GlobalNamespace {
class GuestNameButtonsListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GuestNameButtonsListItemsList);
// Type: ::GuestNameButtonsListItemsList
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GuestNameButtonsListItemsList*
class CORDL_TYPE GuestNameButtonsListItemsList : public ::HMUI::UIItemsList_1<::UnityW<::GlobalNamespace::GuestNameButtonsListItem>> {
public:
  // Declarations
  static inline ::GlobalNamespace::GuestNameButtonsListItemsList* New_ctor();

  /// @brief Method .ctor, addr 0x2532088, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GuestNameButtonsListItemsList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GuestNameButtonsListItemsList(GuestNameButtonsListItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GuestNameButtonsListItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GuestNameButtonsListItemsList(GuestNameButtonsListItemsList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GuestNameButtonsListItemsList, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GuestNameButtonsListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GuestNameButtonsListItemsList*, "", "GuestNameButtonsListItemsList");
