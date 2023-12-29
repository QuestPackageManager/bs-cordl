#pragma once
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
// Type: UnityOpus::SamplingFrequency
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityOpus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6156))
// CS Name: ::UnityOpus::SamplingFrequency
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SamplingFrequency(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SamplingFrequency();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Frequency_8000 value: static_cast<int32_t>(0x1f40)
  static ::UnityOpus::SamplingFrequency const Frequency_8000;

  /// @brief Field Frequency_12000 value: static_cast<int32_t>(0x2ee0)
  static ::UnityOpus::SamplingFrequency const Frequency_12000;

  /// @brief Field Frequency_16000 value: static_cast<int32_t>(0x3e80)
  static ::UnityOpus::SamplingFrequency const Frequency_16000;

  /// @brief Field Frequency_24000 value: static_cast<int32_t>(0x5dc0)
  static ::UnityOpus::SamplingFrequency const Frequency_24000;

  /// @brief Field Frequency_48000 value: static_cast<int32_t>(0xbb80)
  static ::UnityOpus::SamplingFrequency const Frequency_48000;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::SamplingFrequency, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityOpus::SamplingFrequency, value__) == 0x0, "Offset mismatch!");

} // namespace UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::SamplingFrequency, "UnityOpus", "SamplingFrequency");
