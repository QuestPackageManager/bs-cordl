#pragma once
// IWYU pragma private; include "Newtonsoft/Json/FloatFormatHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFormatHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct FloatFormatHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::FloatFormatHandling);
// Dependencies
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.FloatFormatHandling
struct CORDL_TYPE FloatFormatHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatFormatHandling_Unwrapped
  enum struct __FloatFormatHandling_Unwrapped : int32_t {
    __E_String = static_cast<int32_t>(0x0),
    __E_Symbol = static_cast<int32_t>(0x1),
    __E_DefaultValue = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatFormatHandling_Unwrapped() const noexcept {
    return static_cast<__FloatFormatHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatFormatHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatFormatHandling(int32_t value__) noexcept;

  /// @brief Field DefaultValue value: I32(2)
  static ::Newtonsoft::Json::FloatFormatHandling const DefaultValue;

  /// @brief Field String value: I32(0)
  static ::Newtonsoft::Json::FloatFormatHandling const String;

  /// @brief Field Symbol value: I32(1)
  static ::Newtonsoft::Json::FloatFormatHandling const Symbol;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13213 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::FloatFormatHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::FloatFormatHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::FloatFormatHandling, "Newtonsoft.Json", "FloatFormatHandling");
