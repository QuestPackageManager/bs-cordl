#pragma once
// IWYU pragma private; include "Newtonsoft/Json/DateParseHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateParseHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct DateParseHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::DateParseHandling);
// Dependencies
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.DateParseHandling
struct CORDL_TYPE DateParseHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DateParseHandling_Unwrapped
  enum struct __DateParseHandling_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DateTime = static_cast<int32_t>(0x1),
    __E_DateTimeOffset = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DateParseHandling_Unwrapped() const noexcept {
    return static_cast<__DateParseHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DateParseHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DateParseHandling(int32_t value__) noexcept;

  /// @brief Field DateTime value: I32(1)
  static ::Newtonsoft::Json::DateParseHandling const DateTime;

  /// @brief Field DateTimeOffset value: I32(2)
  static ::Newtonsoft::Json::DateParseHandling const DateTimeOffset;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::DateParseHandling const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::DateParseHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::DateParseHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::DateParseHandling, "Newtonsoft.Json", "DateParseHandling");
