#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseResult)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct ParseResult;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::ParseResult);
// Type: Newtonsoft.Json.Utilities::ParseResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// CS Name: ::Newtonsoft.Json.Utilities::ParseResult
struct CORDL_TYPE ParseResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParseResult_Unwrapped
  enum struct __ParseResult_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Success = static_cast<int32_t>(0x1),
    __E_Overflow = static_cast<int32_t>(0x2),
    __E_Invalid = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParseResult_Unwrapped() const noexcept {
    return static_cast<__ParseResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParseResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Invalid value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::Utilities::ParseResult const Invalid;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Utilities::ParseResult const None;

  /// @brief Field Overflow value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::Utilities::ParseResult const Overflow;

  /// @brief Field Success value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Utilities::ParseResult const Success;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ParseResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::ParseResult, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ParseResult, "Newtonsoft.Json.Utilities", "ParseResult");
