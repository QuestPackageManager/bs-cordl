#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectiveListItemsList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ObjectiveListItemsList)
namespace GlobalNamespace {
class ObjectiveListItem;
}
// Forward declare root types
namespace GlobalNamespace {
class ObjectiveListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObjectiveListItemsList);
// Type: ::ObjectiveListItemsList
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObjectiveListItemsList*
class CORDL_TYPE ObjectiveListItemsList : public ::HMUI::UIItemsList_1<::UnityW<::GlobalNamespace::ObjectiveListItem>> {
public:
  // Declarations
  static inline ::GlobalNamespace::ObjectiveListItemsList* New_ctor();

  /// @brief Method .ctor, addr 0x3aa74c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectiveListItemsList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectiveListItemsList(ObjectiveListItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectiveListItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectiveListItemsList(ObjectiveListItemsList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4973 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObjectiveListItemsList, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObjectiveListItemsList*, "", "ObjectiveListItemsList");
