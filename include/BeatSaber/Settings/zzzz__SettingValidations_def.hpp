#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SettingValidations.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SettingValidations)
namespace BeatSaber::Settings {
struct AudioSettings;
}
namespace BeatSaber::Settings {
struct ControllerSettings;
}
namespace BeatSaber::Settings {
struct RoomSettings;
}
namespace BeatSaber::Settings {
struct Settings;
}
namespace BeatSaber::Settings {
struct SmoothCameraSettings;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace BeatSaber::Settings {
class SettingValidations;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::Settings::SettingValidations);
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.SettingValidations
class CORDL_TYPE SettingValidations : public ::System::Object {
public:
  // Declarations
  /// @brief Method AdjustAudioSettings, addr 0x31c5648, size 0x8c, virtual false, abstract: false, final false
  static inline void AdjustAudioSettings(::ByRef<::BeatSaber::Settings::AudioSettings> settings, float_t presetLatency);

  /// @brief Method AdjustControllerSettings, addr 0x31c5554, size 0xac, virtual false, abstract: false, final false
  static inline void AdjustControllerSettings(::ByRef<::BeatSaber::Settings::ControllerSettings> settings);

  /// @brief Method AdjustQuest1, addr 0x31c4ea0, size 0xbc, virtual false, abstract: false, final false
  static inline void AdjustQuest1(::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustQuest2, addr 0x31c4fd0, size 0xc0, virtual false, abstract: false, final false
  static inline void AdjustQuest2(::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustQuest3, addr 0x31c5090, size 0x104, virtual false, abstract: false, final false
  static inline void AdjustQuest3(::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustQuestPro, addr 0x31c5378, size 0xc0, virtual false, abstract: false, final false
  static inline void AdjustQuestPro(::ByRef<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustRoomSettings, addr 0x31c54f8, size 0x5c, virtual false, abstract: false, final false
  static inline void AdjustRoomSettings(::ByRef<::BeatSaber::Settings::RoomSettings> settings);

  /// @brief Method AdjustSettings, addr 0x31c4f5c, size 0x74, virtual false, abstract: false, final false
  static inline void AdjustSettings(::ByRef<::BeatSaber::Settings::Settings> settings, float_t presetLatency);

  /// @brief Method AdjustSmoothCameraSettings, addr 0x31c5600, size 0x48, virtual false, abstract: false, final false
  static inline void AdjustSmoothCameraSettings(::ByRef<::BeatSaber::Settings::SmoothCameraSettings> settings);

  /// @brief Method AdjustStandalone, addr 0x31c5438, size 0xc0, virtual false, abstract: false, final false
  static inline void AdjustStandalone(::ByRef<::BeatSaber::Settings::Settings> settings, bool forceApplyQualityAll);

  /// @brief Method Clamp, addr 0x31c56d4, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Clamp(::Unity::Mathematics::float3 value, float_t min, float_t max);

  /// @brief Method Pick, addr 0x31c5194, size 0x1e4, virtual false, abstract: false, final false
  static inline int32_t Pick(int32_t value, int32_t min, int32_t max);

  /// @brief Method Wrap, addr 0x31c5768, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Wrap(::Unity::Mathematics::float3 value, float_t min, float_t max);

  /// @brief Method Wrap, addr 0x31c5740, size 0x28, virtual false, abstract: false, final false
  static inline float_t Wrap(float_t value, float_t min, float_t max);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingValidations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingValidations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingValidations(SettingValidations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingValidations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingValidations(SettingValidations const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::SettingValidations, 0x10>, "Size mismatch!");

} // namespace BeatSaber::Settings
NEED_NO_BOX(::BeatSaber::Settings::SettingValidations);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::SettingValidations*, "BeatSaber.Settings", "SettingValidations");
