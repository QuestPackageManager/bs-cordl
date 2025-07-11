#pragma once
// IWYU pragma private; include "GlobalNamespace/RankModelHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RankModelHelper)
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
struct RankModel_Rank;
}
// Forward declare root types
namespace GlobalNamespace {
class RankModelHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RankModelHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RankModelHelper
class CORDL_TYPE RankModelHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method MaxRankForGameplayModifiers, addr 0x26fe4b0, size 0x68, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::RankModel_Rank MaxRankForGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                              ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel, float_t energy);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RankModelHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RankModelHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RankModelHelper(RankModelHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RankModelHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RankModelHelper(RankModelHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RankModelHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RankModelHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModelHelper*, "", "RankModelHelper");
