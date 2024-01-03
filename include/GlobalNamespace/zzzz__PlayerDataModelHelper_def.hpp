#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerDataModelHelper)
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerAllOverallStatsData__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveDataV1_0_1__PlayerOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class __PlayerSaveData__PlayerOverallStatsData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModelHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataModelHelper);
// Type: ::PlayerDataModelHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4631))
// CS Name: ::PlayerDataModelHelper*
class CORDL_TYPE PlayerDataModelHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToPlayerAllOverallStatsData, addr 0x2371f14, size 0xd8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerAllOverallStatsData, addr 0x23720e4, size 0xf4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerAllOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerOverallStats, addr 0x2371fec, size 0xf8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* ToPlayerOverallStats(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerOverallStats, addr 0x23721d8, size 0xf8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData*
  ToPlayerOverallStats(::GlobalNamespace::__PlayerSaveDataV1_0_1__PlayerOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerAllOverallStatsData, addr 0x23722d0, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerOverallStatsData, addr 0x237245c, size 0xec, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* ToPlayerOverallStatsData(::GlobalNamespace::__PlayerAllOverallStatsData__PlayerOverallStatsData* playerOverallStatsData);

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModelHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataModelHelper(PlayerDataModelHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModelHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataModelHelper(PlayerDataModelHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataModelHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModelHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataModelHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModelHelper*, "", "PlayerDataModelHelper");
