#pragma once
// IWYU pragma private; include "GlobalNamespace/ResultObjectiveListItemsList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__UIItemsList_1_def.hpp"
CORDL_MODULE_EXPORT(ResultObjectiveListItemsList)
namespace GlobalNamespace {
class ResultObjectiveListItem;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultObjectiveListItemsList;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultObjectiveListItemsList);
// Dependencies HMUI.UIItemsList`1<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResultObjectiveListItemsList
class CORDL_TYPE ResultObjectiveListItemsList : public ::HMUI::UIItemsList_1<::UnityW<::GlobalNamespace::ResultObjectiveListItem>> {
public:
  // Declarations
  static inline ::GlobalNamespace::ResultObjectiveListItemsList* New_ctor();

  /// @brief Method .ctor, addr 0x3b012e0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultObjectiveListItemsList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItemsList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultObjectiveListItemsList(ResultObjectiveListItemsList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultObjectiveListItemsList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultObjectiveListItemsList(ResultObjectiveListItemsList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultObjectiveListItemsList, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultObjectiveListItemsList);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultObjectiveListItemsList*, "", "ResultObjectiveListItemsList");
