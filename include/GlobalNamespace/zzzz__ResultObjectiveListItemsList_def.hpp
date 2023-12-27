#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ResultObjectiveListItem_def.hpp"
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ResultObjectiveListItemsList)
// Forward declare root types
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultObjectiveListItemsList);
// Type: ::ResultObjectiveListItemsList
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5804)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 5220 }),
// TypeDefinitionIndex(TypeDefinitionIndex(13674))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5805)) CS Name: ::ResultObjectiveListItemsList*
class CORDL_TYPE ResultObjectiveListItemsList : public ::HMUI::UIItemsList_1<::GlobalNamespace::ResultObjectiveListItem*> {
public:
  // Declarations
  static inline ::GlobalNamespace::ResultObjectiveListItemsList* New_ctor();

  /// @brief Method .ctor addr 0x22e8100 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultObjectiveListItemsList(ResultObjectiveListItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultObjectiveListItemsList(ResultObjectiveListItemsList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultObjectiveListItemsList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultObjectiveListItemsList, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultObjectiveListItemsList*, "", "ResultObjectiveListItemsList");
