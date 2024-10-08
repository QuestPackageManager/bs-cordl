#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DateTimeZoneHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeZoneHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::DateTimeZoneHandling);
// Type: Newtonsoft.Json::DateTimeZoneHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::DateTimeZoneHandling
struct CORDL_TYPE DateTimeZoneHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateTimeZoneHandling_Unwrapped
  enum struct __DateTimeZoneHandling_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_Utc = static_cast<int32_t>(0x1),
    __E_Unspecified = static_cast<int32_t>(0x2),
    __E_RoundtripKind = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateTimeZoneHandling_Unwrapped() const noexcept {
    return static_cast<__DateTimeZoneHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeZoneHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateTimeZoneHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Local value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::DateTimeZoneHandling const Local;

  /// @brief Field RoundtripKind value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::DateTimeZoneHandling const RoundtripKind;

  /// @brief Field Unspecified value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::DateTimeZoneHandling const Unspecified;

  /// @brief Field Utc value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::DateTimeZoneHandling const Utc;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DateTimeZoneHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::DateTimeZoneHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateTimeZoneHandling, "Newtonsoft.Json", "DateTimeZoneHandling");
