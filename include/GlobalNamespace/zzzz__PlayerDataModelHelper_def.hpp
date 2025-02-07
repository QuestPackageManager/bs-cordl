#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataModelHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerDataModelHelper)
namespace GlobalNamespace {
class PlayerAllOverallStatsData_PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveDataV1_0_1_PlayerOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerSaveData_PlayerOverallStatsData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerDataModelHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerDataModelHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerDataModelHelper
class CORDL_TYPE PlayerDataModelHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToPlayerAllOverallStatsData, addr 0x26f7ab8, size 0xdc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerAllOverallStatsData, addr 0x26f7408, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerAllOverallStatsData, addr 0x26f5138, size 0xc4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerOverallStats, addr 0x26f8938, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* ToPlayerOverallStats(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerOverallStats, addr 0x26f886c, size 0xcc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* ToPlayerOverallStats(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* playerAllOverallStatsData);

  /// @brief Method ToPlayerOverallStatsData, addr 0x26f8ab0, size 0xe8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* ToPlayerOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* playerOverallStatsData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerDataModelHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModelHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerDataModelHelper(PlayerDataModelHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerDataModelHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerDataModelHelper(PlayerDataModelHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13233 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerDataModelHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerDataModelHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerDataModelHelper*, "", "PlayerDataModelHelper");
