#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSaveDataConvertor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlayerSaveDataConvertor)
namespace GlobalNamespace {
struct ArcVisibilityType;
}
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
namespace GlobalNamespace {
struct NoteJumpDurationTypeSettings;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSaveDataConvertor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataConvertor);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerSaveDataConvertor
class CORDL_TYPE PlayerSaveDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRuntimeData, addr 0x26f40c8, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ArcVisibilityType GetRuntimeData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData saveData);

  /// @brief Method GetRuntimeData, addr 0x26f40d8, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentEffectsFilterPreset GetRuntimeData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData saveData);

  /// @brief Method GetRuntimeData, addr 0x26f40bc, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteJumpDurationTypeSettings GetRuntimeData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData saveData);

  /// @brief Method GetSaveData, addr 0x26f1f0c, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData GetSaveData(::GlobalNamespace::ArcVisibilityType data);

  /// @brief Method GetSaveData, addr 0x26f1f1c, size 0x14, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData GetSaveData(::GlobalNamespace::EnvironmentEffectsFilterPreset data);

  /// @brief Method GetSaveData, addr 0x26f1f00, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData GetSaveData(::GlobalNamespace::NoteJumpDurationTypeSettings data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerSaveDataConvertor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataConvertor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerSaveDataConvertor(PlayerSaveDataConvertor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerSaveDataConvertor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerSaveDataConvertor(PlayerSaveDataConvertor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataConvertor*, "", "PlayerSaveDataConvertor");
