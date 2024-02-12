#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatParseHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct FloatParseHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::FloatParseHandling);
// Type: Newtonsoft.Json::FloatParseHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11697))
// CS Name: ::Newtonsoft.Json::FloatParseHandling
struct CORDL_TYPE FloatParseHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatParseHandling_Unwrapped
  enum struct __FloatParseHandling_Unwrapped : int32_t {
    __E_Double = static_cast<int32_t>(0x0),
    __E_Decimal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatParseHandling_Unwrapped() const noexcept {
    return static_cast<__FloatParseHandling_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatParseHandling(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatParseHandling();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Double value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::FloatParseHandling const Double;

  /// @brief Field Decimal value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::FloatParseHandling const Decimal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::FloatParseHandling, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::FloatParseHandling, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::FloatParseHandling, "Newtonsoft.Json", "FloatParseHandling");
