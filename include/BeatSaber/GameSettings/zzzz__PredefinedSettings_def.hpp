#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/PredefinedSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PredefinedSettings)
// Forward declare root types
namespace BeatSaber::GameSettings {
class PredefinedSettings;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::GameSettings::PredefinedSettings);
// Type: BeatSaber.GameSettings::PredefinedSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaber::GameSettings {
// Is value type: false
// CS Name: ::BeatSaber.GameSettings::PredefinedSettings*
class CORDL_TYPE PredefinedSettings : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PredefinedSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PredefinedSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PredefinedSettings(PredefinedSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PredefinedSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PredefinedSettings(PredefinedSettings const&) = delete;

  /// @brief Field kControllersPositionOffsetLimit offset 0xffffffff size 0x4
  static constexpr float_t kControllersPositionOffsetLimit{ 0.1 };

  /// @brief Field kControllersRotationOffsetLimit offset 0xffffffff size 0x4
  static constexpr float_t kControllersRotationOffsetLimit{ 180.0 };

  /// @brief Field kDefaultPlayerHeight offset 0xffffffff size 0x4
  static constexpr float_t kDefaultPlayerHeight{ 1.8 };

  /// @brief Field kHeadPosToPlayerHeightOffset offset 0xffffffff size 0x4
  static constexpr float_t kHeadPosToPlayerHeightOffset{ 0.1 };

  /// @brief Field kMaxRoomDistanceFromCenterPerAxis offset 0xffffffff size 0x4
  static constexpr float_t kMaxRoomDistanceFromCenterPerAxis{ 4.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::GameSettings::PredefinedSettings, 0x10>, "Size mismatch!");

} // namespace BeatSaber::GameSettings
NEED_NO_BOX(::BeatSaber::GameSettings::PredefinedSettings);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::GameSettings::PredefinedSettings*, "BeatSaber.GameSettings", "PredefinedSettings");
