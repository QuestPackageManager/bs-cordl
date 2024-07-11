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
struct __PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData;
}
namespace GlobalNamespace {
struct __PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSaveDataConvertor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSaveDataConvertor);
// Type: ::PlayerSaveDataConvertor
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSaveDataConvertor*
class CORDL_TYPE PlayerSaveDataConvertor : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetRuntimeData, addr 0x14f9f48, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::ArcVisibilityType GetRuntimeData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData saveData);

  /// @brief Method GetRuntimeData, addr 0x14f9f58, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::EnvironmentEffectsFilterPreset GetRuntimeData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData saveData);

  /// @brief Method GetRuntimeData, addr 0x14f9f3c, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::NoteJumpDurationTypeSettings GetRuntimeData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData saveData);

  /// @brief Method GetSaveData, addr 0x14f7c9c, size 0x10, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData GetSaveData(::GlobalNamespace::ArcVisibilityType data);

  /// @brief Method GetSaveData, addr 0x14f7cac, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData GetSaveData(::GlobalNamespace::EnvironmentEffectsFilterPreset data);

  /// @brief Method GetSaveData, addr 0x14f7c90, size 0xc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData GetSaveData(::GlobalNamespace::NoteJumpDurationTypeSettings data);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSaveDataConvertor, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataConvertor*, "", "PlayerSaveDataConvertor");
