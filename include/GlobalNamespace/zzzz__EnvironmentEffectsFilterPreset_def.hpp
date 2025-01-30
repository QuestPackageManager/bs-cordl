#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentEffectsFilterPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentEffectsFilterPreset)
// Forward declare root types
namespace GlobalNamespace {
struct EnvironmentEffectsFilterPreset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EnvironmentEffectsFilterPreset);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: EnvironmentEffectsFilterPreset
struct CORDL_TYPE EnvironmentEffectsFilterPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EnvironmentEffectsFilterPreset_Unwrapped
  enum struct __EnvironmentEffectsFilterPreset_Unwrapped : int32_t {
    __E_AllEffects = static_cast<int32_t>(0x0),
    __E_StrobeFilter = static_cast<int32_t>(0x1),
    __E_NoEffects = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EnvironmentEffectsFilterPreset_Unwrapped() const noexcept {
    return static_cast<__EnvironmentEffectsFilterPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentEffectsFilterPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EnvironmentEffectsFilterPreset(int32_t value__) noexcept;

  /// @brief Field AllEffects value: I32(0)
  static ::GlobalNamespace::EnvironmentEffectsFilterPreset const AllEffects;

  /// @brief Field NoEffects value: I32(10)
  static ::GlobalNamespace::EnvironmentEffectsFilterPreset const NoEffects;

  /// @brief Field StrobeFilter value: I32(1)
  static ::GlobalNamespace::EnvironmentEffectsFilterPreset const StrobeFilter;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13218 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EnvironmentEffectsFilterPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentEffectsFilterPreset, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentEffectsFilterPreset, "", "EnvironmentEffectsFilterPreset");
