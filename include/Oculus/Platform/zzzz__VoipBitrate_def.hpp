#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipBitrate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoipBitrate)
// Forward declare root types
namespace Oculus::Platform {
struct VoipBitrate;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::VoipBitrate);
// Dependencies
namespace Oculus::Platform {
// Is value type: true
// CS Name: Oculus.Platform.VoipBitrate
struct CORDL_TYPE VoipBitrate {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VoipBitrate_Unwrapped
  enum struct __VoipBitrate_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_B16000 = static_cast<int32_t>(0x1),
    __E_B24000 = static_cast<int32_t>(0x2),
    __E_B32000 = static_cast<int32_t>(0x3),
    __E_B64000 = static_cast<int32_t>(0x4),
    __E_B96000 = static_cast<int32_t>(0x5),
    __E_B128000 = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VoipBitrate_Unwrapped() const noexcept {
    return static_cast<__VoipBitrate_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VoipBitrate();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VoipBitrate(int32_t value__) noexcept;

  /// @brief Field B128000 value: I32(6)
  static ::Oculus::Platform::VoipBitrate const B128000;

  /// @brief Field B16000 value: I32(1)
  static ::Oculus::Platform::VoipBitrate const B16000;

  /// @brief Field B24000 value: I32(2)
  static ::Oculus::Platform::VoipBitrate const B24000;

  /// @brief Field B32000 value: I32(3)
  static ::Oculus::Platform::VoipBitrate const B32000;

  /// @brief Field B64000 value: I32(4)
  static ::Oculus::Platform::VoipBitrate const B64000;

  /// @brief Field B96000 value: I32(5)
  static ::Oculus::Platform::VoipBitrate const B96000;

  /// @brief Field Unknown value: I32(0)
  static ::Oculus::Platform::VoipBitrate const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15487 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::VoipBitrate, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Oculus::Platform::VoipBitrate, 0x4>, "Size mismatch!");

} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipBitrate, "Oculus.Platform", "VoipBitrate");
