#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/BuildFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuildFlags)
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
struct BuildFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::BuildFlags);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::BuildFlags, "UnityEngine.Rendering.RadeonRays", "BuildFlags");
// [Flags]
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.BuildFlags
struct CORDL_TYPE BuildFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BuildFlags_Unwrapped
  enum struct __BuildFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PreferFastBuild = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BuildFlags_Unwrapped() const noexcept {
    return static_cast<__BuildFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr BuildFlags(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::RadeonRays::BuildFlags const None;

  /// @brief Field PreferFastBuild value: I32(1)
  static ::UnityEngine::Rendering::RadeonRays::BuildFlags const PreferFastBuild;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20433 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::BuildFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::BuildFlags) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
