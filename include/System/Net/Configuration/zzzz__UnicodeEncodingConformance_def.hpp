#pragma once
// IWYU pragma private; include "System/Net/Configuration/UnicodeEncodingConformance.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnicodeEncodingConformance)
// Forward declare root types
namespace System::Net::Configuration {
struct UnicodeEncodingConformance;
}
// Write type traits
MARK_VAL_T(::System::Net::Configuration::UnicodeEncodingConformance);
// Dependencies
namespace System::Net::Configuration {
// Is value type: true
// CS Name: System.Net.Configuration.UnicodeEncodingConformance
struct CORDL_TYPE UnicodeEncodingConformance {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnicodeEncodingConformance_Unwrapped
  enum struct __UnicodeEncodingConformance_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Strict = static_cast<int32_t>(0x1),
    __E_Compat = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnicodeEncodingConformance_Unwrapped() const noexcept {
    return static_cast<__UnicodeEncodingConformance_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeEncodingConformance();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnicodeEncodingConformance(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::System::Net::Configuration::UnicodeEncodingConformance const Auto;

  /// @brief Field Compat value: I32(2)
  static ::System::Net::Configuration::UnicodeEncodingConformance const Compat;

  /// @brief Field Strict value: I32(1)
  static ::System::Net::Configuration::UnicodeEncodingConformance const Strict;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Configuration::UnicodeEncodingConformance, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::UnicodeEncodingConformance, 0x4>, "Size mismatch!");

} // namespace System::Net::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::UnicodeEncodingConformance, "System.Net.Configuration", "UnicodeEncodingConformance");
