#pragma once
// IWYU pragma private; include "UnityOpus/SamplingFrequency.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SamplingFrequency)
// Forward declare root types
namespace UnityOpus {
struct SamplingFrequency;
}
// Write type traits
MARK_VAL_T(::UnityOpus::SamplingFrequency);
// Dependencies
namespace UnityOpus {
// Is value type: true
// CS Name: UnityOpus.SamplingFrequency
struct CORDL_TYPE SamplingFrequency {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SamplingFrequency_Unwrapped
  enum struct __SamplingFrequency_Unwrapped : int32_t {
    __E_Frequency_8000 = static_cast<int32_t>(0x1f40),
    __E_Frequency_12000 = static_cast<int32_t>(0x2ee0),
    __E_Frequency_16000 = static_cast<int32_t>(0x3e80),
    __E_Frequency_24000 = static_cast<int32_t>(0x5dc0),
    __E_Frequency_48000 = static_cast<int32_t>(0xbb80),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SamplingFrequency_Unwrapped() const noexcept {
    return static_cast<__SamplingFrequency_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SamplingFrequency();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SamplingFrequency(int32_t value__) noexcept;

  /// @brief Field Frequency_12000 value: I32(12000)
  static ::UnityOpus::SamplingFrequency const Frequency_12000;

  /// @brief Field Frequency_16000 value: I32(16000)
  static ::UnityOpus::SamplingFrequency const Frequency_16000;

  /// @brief Field Frequency_24000 value: I32(24000)
  static ::UnityOpus::SamplingFrequency const Frequency_24000;

  /// @brief Field Frequency_48000 value: I32(48000)
  static ::UnityOpus::SamplingFrequency const Frequency_48000;

  /// @brief Field Frequency_8000 value: I32(8000)
  static ::UnityOpus::SamplingFrequency const Frequency_8000;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23151 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityOpus::SamplingFrequency, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityOpus::SamplingFrequency, 0x4>, "Size mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::SamplingFrequency, "UnityOpus", "SamplingFrequency");
