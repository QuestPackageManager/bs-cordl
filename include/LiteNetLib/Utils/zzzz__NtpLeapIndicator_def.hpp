#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NtpLeapIndicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtpLeapIndicator)
// Forward declare root types
namespace LiteNetLib::Utils {
struct NtpLeapIndicator;
}
// Write type traits
MARK_VAL_T(::LiteNetLib::Utils::NtpLeapIndicator);
// Dependencies
namespace LiteNetLib::Utils {
// Is value type: true
// CS Name: LiteNetLib.Utils.NtpLeapIndicator
struct CORDL_TYPE NtpLeapIndicator {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NtpLeapIndicator_Unwrapped
  enum struct __NtpLeapIndicator_Unwrapped : int32_t {
    __E_NoWarning = static_cast<int32_t>(0x0),
    __E_LastMinuteHas61Seconds = static_cast<int32_t>(0x1),
    __E_LastMinuteHas59Seconds = static_cast<int32_t>(0x2),
    __E_AlarmCondition = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NtpLeapIndicator_Unwrapped() const noexcept {
    return static_cast<__NtpLeapIndicator_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NtpLeapIndicator();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NtpLeapIndicator(int32_t value__) noexcept;

  /// @brief Field AlarmCondition value: I32(3)
  static ::LiteNetLib::Utils::NtpLeapIndicator const AlarmCondition;

  /// @brief Field LastMinuteHas59Seconds value: I32(2)
  static ::LiteNetLib::Utils::NtpLeapIndicator const LastMinuteHas59Seconds;

  /// @brief Field LastMinuteHas61Seconds value: I32(1)
  static ::LiteNetLib::Utils::NtpLeapIndicator const LastMinuteHas61Seconds;

  /// @brief Field NoWarning value: I32(0)
  static ::LiteNetLib::Utils::NtpLeapIndicator const NoWarning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Utils::NtpLeapIndicator, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::NtpLeapIndicator, 0x4>, "Size mismatch!");

} // namespace LiteNetLib::Utils
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpLeapIndicator, "LiteNetLib.Utils", "NtpLeapIndicator");
