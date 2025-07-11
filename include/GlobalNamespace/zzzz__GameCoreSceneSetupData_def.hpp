#pragma once
// IWYU pragma private; include "GlobalNamespace/GameCoreSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(GameCoreSceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameCoreSceneSetupData);
// Dependencies SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameCoreSceneSetupData
class CORDL_TYPE GameCoreSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  static inline ::GlobalNamespace::GameCoreSceneSetupData* New_ctor();

  /// @brief Method .ctor, addr 0x3b39c54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameCoreSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameCoreSceneSetupData(GameCoreSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameCoreSceneSetupData(GameCoreSceneSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5239 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameCoreSceneSetupData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetupData*, "", "GameCoreSceneSetupData");
