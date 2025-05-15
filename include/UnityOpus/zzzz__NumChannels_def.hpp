#pragma once
// IWYU pragma private; include "UnityOpus/NumChannels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NumChannels)
// Forward declare root types
namespace UnityOpus {
struct NumChannels;
}
// Write type traits
MARK_VAL_T(::UnityOpus::NumChannels);
// Dependencies
namespace UnityOpus {
// Is value type: true
// CS Name: UnityOpus.NumChannels
struct CORDL_TYPE NumChannels {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NumChannels_Unwrapped
  enum struct __NumChannels_Unwrapped : int32_t {
    __E_Mono = static_cast<int32_t>(0x1),
    __E_Stereo = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NumChannels_Unwrapped() const noexcept {
    return static_cast<__NumChannels_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NumChannels();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NumChannels(int32_t value__) noexcept;

  /// @brief Field Mono value: I32(1)
  static ::UnityOpus::NumChannels const Mono;

  /// @brief Field Stereo value: I32(2)
  static ::UnityOpus::NumChannels const Stereo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19085 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityOpus::NumChannels, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOpus::NumChannels, 0x4>, "Size mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::NumChannels, "UnityOpus", "NumChannels");
