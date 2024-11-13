#pragma once
// IWYU pragma private; include "BeatSaber/Settings/RoomSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(RoomSettings)
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace BeatSaber::Settings {
struct RoomSettings;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::RoomSettings);
// Type: BeatSaber.Settings::RoomSettings
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: ::BeatSaber.Settings::RoomSettings
struct CORDL_TYPE RoomSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomSettings();

  // Ctor Parameters [CppParam { name: "center", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None }]
  constexpr RoomSettings(::Unity::Mathematics::float3 center, float_t rotation) noexcept;

  /// @brief Field center, offset: 0x0, size: 0xc, def value: None
  ::Unity::Mathematics::float3 center;

  /// @brief Field rotation, offset: 0xc, size: 0x4, def value: None
  float_t rotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17955 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::RoomSettings, 0x10>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::Settings::RoomSettings, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::RoomSettings, rotation) == 0xc, "Offset mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::RoomSettings, "BeatSaber.Settings", "RoomSettings");
