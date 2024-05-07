#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipSampleRate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoipSampleRate)
// Forward declare root types
namespace Oculus::Platform {
struct VoipSampleRate;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::VoipSampleRate);
// Type: Oculus.Platform::VoipSampleRate
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::VoipSampleRate
struct CORDL_TYPE VoipSampleRate {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VoipSampleRate_Unwrapped
  enum struct __VoipSampleRate_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_HZ24000 = static_cast<int32_t>(0x1),
    __E_HZ44100 = static_cast<int32_t>(0x2),
    __E_HZ48000 = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VoipSampleRate_Unwrapped() const noexcept {
    return static_cast<__VoipSampleRate_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipSampleRate();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VoipSampleRate(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HZ24000 value: static_cast<int32_t>(0x1)
  static ::Oculus::Platform::VoipSampleRate const HZ24000;

  /// @brief Field HZ44100 value: static_cast<int32_t>(0x2)
  static ::Oculus::Platform::VoipSampleRate const HZ44100;

  /// @brief Field HZ48000 value: static_cast<int32_t>(0x3)
  static ::Oculus::Platform::VoipSampleRate const HZ48000;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::Oculus::Platform::VoipSampleRate const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipSampleRate, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::VoipSampleRate, value__) == 0x0, "Offset mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipSampleRate, "Oculus.Platform", "VoipSampleRate");
