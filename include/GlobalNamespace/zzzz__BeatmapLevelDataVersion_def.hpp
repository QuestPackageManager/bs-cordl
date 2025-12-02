#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataVersion)
// Forward declare root types
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BeatmapLevelDataVersion);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelDataVersion
struct CORDL_TYPE BeatmapLevelDataVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BeatmapLevelDataVersion_Unwrapped
  enum struct __BeatmapLevelDataVersion_Unwrapped : int32_t {
    __E_Original = static_cast<int32_t>(0x0),
    __E_NoEnvironmentKeywords = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BeatmapLevelDataVersion_Unwrapped() const noexcept {
    return static_cast<__BeatmapLevelDataVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BeatmapLevelDataVersion(int32_t value__) noexcept;

  /// @brief Field NoEnvironmentKeywords value: I32(1)
  static ::GlobalNamespace::BeatmapLevelDataVersion const NoEnvironmentKeywords;

  /// @brief Field Original value: I32(0)
  static ::GlobalNamespace::BeatmapLevelDataVersion const Original;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23281 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataVersion, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataVersion, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataVersion, "", "BeatmapLevelDataVersion");
