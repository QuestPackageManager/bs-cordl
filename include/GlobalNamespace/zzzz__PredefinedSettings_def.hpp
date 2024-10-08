#pragma once
// IWYU pragma private; include "GlobalNamespace/PredefinedSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PredefinedSettings)
// Forward declare root types
namespace GlobalNamespace {
class PredefinedSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PredefinedSettings);
// Type: ::PredefinedSettings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PredefinedSettings*
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13266 };

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

  /// @brief Field kQuest120HzFramerate offset 0xffffffff size 0x4
  static constexpr int32_t kQuest120HzFramerate{ static_cast<int32_t>(0x78) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PredefinedSettings, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PredefinedSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PredefinedSettings*, "", "PredefinedSettings");
