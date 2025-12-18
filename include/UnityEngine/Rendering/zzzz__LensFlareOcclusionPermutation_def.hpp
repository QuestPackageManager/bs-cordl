#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareOcclusionPermutation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LensFlareOcclusionPermutation)
// Forward declare root types
namespace UnityEngine::Rendering {
struct LensFlareOcclusionPermutation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LensFlareOcclusionPermutation);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.LensFlareOcclusionPermutation
struct CORDL_TYPE LensFlareOcclusionPermutation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LensFlareOcclusionPermutation_Unwrapped
  enum struct __LensFlareOcclusionPermutation_Unwrapped : int32_t {
    __E_Depth = static_cast<int32_t>(0x1),
    __E_FogOpacity = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LensFlareOcclusionPermutation_Unwrapped() const noexcept {
    return static_cast<__LensFlareOcclusionPermutation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LensFlareOcclusionPermutation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LensFlareOcclusionPermutation(int32_t value__) noexcept;

  /// @brief Field Depth value: I32(1)
  static ::UnityEngine::Rendering::LensFlareOcclusionPermutation const Depth;

  /// @brief Field FogOpacity value: I32(4)
  static ::UnityEngine::Rendering::LensFlareOcclusionPermutation const FogOpacity;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12155 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::LensFlareOcclusionPermutation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LensFlareOcclusionPermutation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LensFlareOcclusionPermutation, "UnityEngine.Rendering", "LensFlareOcclusionPermutation");
