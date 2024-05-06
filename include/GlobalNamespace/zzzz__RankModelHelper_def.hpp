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
struct __RankModel__Rank;
}
// Forward declare root types
namespace GlobalNamespace {
class RankModelHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RankModelHelper);
// Type: ::RankModelHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RankModelHelper*
class CORDL_TYPE RankModelHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method MaxRankForGameplayModifiers, addr 0x14ee2b0, size 0x68, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__RankModel__Rank MaxRankForGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers,
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RankModelHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RankModelHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RankModelHelper*, "", "RankModelHelper");
