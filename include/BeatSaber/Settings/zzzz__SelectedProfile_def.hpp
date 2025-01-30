#pragma once
// IWYU pragma private; include "BeatSaber/Settings/SelectedProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectedProfile)
// Forward declare root types
namespace BeatSaber::Settings {
struct SelectedProfile;
}
// Write type traits
MARK_VAL_T(::BeatSaber::Settings::SelectedProfile);
// Dependencies
namespace BeatSaber::Settings {
// Is value type: true
// CS Name: BeatSaber.Settings.SelectedProfile
struct CORDL_TYPE SelectedProfile {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectedProfile();

  // Ctor Parameters [CppParam { name: "builtIn", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SelectedProfile(bool builtIn, int32_t index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field builtIn, offset: 0x0, size: 0x1, def value: None
  bool builtIn;

  /// @brief Field index, offset: 0x4, size: 0x4, def value: None
  int32_t index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::Settings::SelectedProfile, builtIn) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::Settings::SelectedProfile, index) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::Settings::SelectedProfile, 0x8>, "Size mismatch!");

} // namespace BeatSaber::Settings
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::Settings::SelectedProfile, "BeatSaber.Settings", "SelectedProfile");
