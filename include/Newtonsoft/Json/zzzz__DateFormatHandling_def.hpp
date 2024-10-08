#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DateFormatHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateFormatHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::DateFormatHandling);
// Type: Newtonsoft.Json::DateFormatHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: ::Newtonsoft.Json::DateFormatHandling
struct CORDL_TYPE DateFormatHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateFormatHandling_Unwrapped
  enum struct __DateFormatHandling_Unwrapped : int32_t {
    __E_IsoDateFormat = static_cast<int32_t>(0x0),
    __E_MicrosoftDateFormat = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateFormatHandling_Unwrapped() const noexcept {
    return static_cast<__DateFormatHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateFormatHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateFormatHandling(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IsoDateFormat value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::DateFormatHandling const IsoDateFormat;

  /// @brief Field MicrosoftDateFormat value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::DateFormatHandling const MicrosoftDateFormat;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10014 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DateFormatHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::DateFormatHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateFormatHandling, "Newtonsoft.Json", "DateFormatHandling");
