#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SettingValidations.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::BeatSaber::Settings::SettingValidations*);
DEFINE_IL2CPP_CLASS(::BeatSaber::Settings::SettingValidations*, "BeatSaber.Settings", "SettingValidations");
// Dependencies System.Object
namespace BeatSaber::Settings {
// Is value type: false
// CS Name: BeatSaber.Settings.SettingValidations
class CORDL_TYPE SettingValidations : public ::System::Object {
public:
  // Declarations
  /// @brief Method AdjustAudioSettings, addr 0x3575950, size 0x8c, virtual false, abstract: false, final false
  static inline void AdjustAudioSettings(::by_ref<::BeatSaber::Settings::AudioSettings> settings, float_t presetLatency);

  /// @brief Method AdjustControllerSettings, addr 0x357585c, size 0xac, virtual false, abstract: false, final false
  static inline void AdjustControllerSettings(::by_ref<::BeatSaber::Settings::ControllerSettings> settings);

  /// @brief Method AdjustQuest1, addr 0x35750f4, size 0xc4, virtual false, abstract: false, final false
  static inline void AdjustQuest1(::by_ref<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustQuest2, addr 0x357522c, size 0xc8, virtual false, abstract: false, final false
  static inline void AdjustQuest2(::by_ref<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustQuest3, addr 0x35752f4, size 0x10c, virtual false, abstract: false, final false
  static inline void AdjustQuest3(::by_ref<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustQuestPro, addr 0x35755e4, size 0xc8, virtual false, abstract: false, final false
  static inline void AdjustQuestPro(::by_ref<::BeatSaber::Settings::Settings> settings);

  /// @brief Method AdjustRoomSettings, addr 0x3575800, size 0x5c, virtual false, abstract: false, final false
  static inline void AdjustRoomSettings(::by_ref<::BeatSaber::Settings::RoomSettings> settings);

  /// @brief Method AdjustSettings, addr 0x35751b8, size 0x74, virtual false, abstract: false, final false
  static inline void AdjustSettings(::by_ref<::BeatSaber::Settings::Settings> settings, float_t presetLatency);

  /// @brief Method AdjustSmoothCameraSettings, addr 0x3575908, size 0x48, virtual false, abstract: false, final false
  static inline void AdjustSmoothCameraSettings(::by_ref<::BeatSaber::Settings::SmoothCameraSettings> settings);

  /// @brief Method AdjustStandalone, addr 0x35756ac, size 0xc8, virtual false, abstract: false, final false
  static inline void AdjustStandalone(::by_ref<::BeatSaber::Settings::Settings> settings, bool forceApplyQualityAll);

  /// @brief Method AdjustStandaloneMobileGPU, addr 0x3575774, size 0x8c, virtual false, abstract: false, final false
  static inline void AdjustStandaloneMobileGPU(::by_ref<::BeatSaber::Settings::Settings> settings);

  /// @brief Method Clamp, addr 0x35759dc, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Clamp(::Unity::Mathematics::float3 value, float_t min, float_t max);

  /// @brief Method Pick, addr 0x3575400, size 0x1e4, virtual false, abstract: false, final false
  static inline int32_t Pick(int32_t value, int32_t min, int32_t max);

  /// @brief Method Wrap, addr 0x3575a70, size 0x6c, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 Wrap(::Unity::Mathematics::float3 value, float_t min, float_t max);

  /// @brief Method Wrap, addr 0x3575a48, size 0x28, virtual false, abstract: false, final false
  static inline float_t Wrap(float_t value, float_t min, float_t max);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingValidations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingValidations", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingValidations(SettingValidations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingValidations", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingValidations(SettingValidations const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::Settings::SettingValidations) == 0x10, "Size mismatch!");

} // namespace BeatSaber::Settings
