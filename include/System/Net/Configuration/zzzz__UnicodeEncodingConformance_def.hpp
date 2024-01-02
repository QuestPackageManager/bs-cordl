#pragma once
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
// Type: System.Net.Configuration::UnicodeEncodingConformance
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Configuration {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9314))
// CS Name: ::System.Net.Configuration::UnicodeEncodingConformance
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnicodeEncodingConformance(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnicodeEncodingConformance();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Auto value: static_cast<int32_t>(0x0)
  static ::System::Net::Configuration::UnicodeEncodingConformance const Auto;

  /// @brief Field Strict value: static_cast<int32_t>(0x1)
  static ::System::Net::Configuration::UnicodeEncodingConformance const Strict;

  /// @brief Field Compat value: static_cast<int32_t>(0x2)
  static ::System::Net::Configuration::UnicodeEncodingConformance const Compat;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::UnicodeEncodingConformance, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Net::Configuration::UnicodeEncodingConformance, value__) == 0x0, "Offset mismatch!");

} // namespace System::Net::Configuration
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::UnicodeEncodingConformance, "System.Net.Configuration", "UnicodeEncodingConformance");
