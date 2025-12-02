#pragma once
// IWYU pragma private; include "Meta/XR/EnvironmentDepth/OcclusionShadersMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionShadersMode)
// Forward declare root types
namespace Meta::XR::EnvironmentDepth {
struct OcclusionShadersMode;
}
// Write type traits
MARK_VAL_T(::Meta::XR::EnvironmentDepth::OcclusionShadersMode);
// Dependencies
namespace Meta::XR::EnvironmentDepth {
// Is value type: true
// CS Name: Meta.XR.EnvironmentDepth.OcclusionShadersMode
struct CORDL_TYPE OcclusionShadersMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OcclusionShadersMode_Unwrapped
  enum struct __OcclusionShadersMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_HardOcclusion = static_cast<int32_t>(0x1),
    __E_SoftOcclusion = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OcclusionShadersMode_Unwrapped() const noexcept {
    return static_cast<__OcclusionShadersMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionShadersMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OcclusionShadersMode(int32_t value__) noexcept;

  /// @brief Field HardOcclusion value: I32(1)
  static ::Meta::XR::EnvironmentDepth::OcclusionShadersMode const HardOcclusion;

  /// @brief Field None value: I32(0)
  static ::Meta::XR::EnvironmentDepth::OcclusionShadersMode const None;

  /// @brief Field SoftOcclusion value: I32(2)
  static ::Meta::XR::EnvironmentDepth::OcclusionShadersMode const SoftOcclusion;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::EnvironmentDepth::OcclusionShadersMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::EnvironmentDepth::OcclusionShadersMode, 0x4>, "Size mismatch!");

} // namespace Meta::XR::EnvironmentDepth
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::EnvironmentDepth::OcclusionShadersMode, "Meta.XR.EnvironmentDepth", "OcclusionShadersMode");
