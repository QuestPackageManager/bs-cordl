#pragma once
// IWYU pragma private; include "BeatSaber/FeatureFlags/Feature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Feature)
// Forward declare root types
namespace BeatSaber::FeatureFlags {
struct Feature;
}
// Write type traits
MARK_VAL_T(::BeatSaber::FeatureFlags::Feature);
// Dependencies
namespace BeatSaber::FeatureFlags {
// Is value type: true
// CS Name: BeatSaber.FeatureFlags.Feature
struct CORDL_TYPE Feature {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Feature_Unwrapped
  enum struct __Feature_Unwrapped : int32_t {
    __E_BlockLevelAnalytics = static_cast<int32_t>(0x0),
    __E_GameplayAnalytics = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Feature_Unwrapped() const noexcept {
    return static_cast<__Feature_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Feature();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Feature(int32_t value__) noexcept;

  /// @brief Field BlockLevelAnalytics value: I32(0)
  static ::BeatSaber::FeatureFlags::Feature const BlockLevelAnalytics;

  /// @brief Field GameplayAnalytics value: I32(1)
  static ::BeatSaber::FeatureFlags::Feature const GameplayAnalytics;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22634 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::FeatureFlags::Feature, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::FeatureFlags::Feature, 0x4>, "Size mismatch!");

} // namespace BeatSaber::FeatureFlags
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::FeatureFlags::Feature, "BeatSaber.FeatureFlags", "Feature");
