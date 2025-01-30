#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/JsonSchemaType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSchemaType)
// Forward declare root types
namespace Newtonsoft::Json::Schema {
struct JsonSchemaType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Schema::JsonSchemaType);
// Dependencies
namespace Newtonsoft::Json::Schema {
// Is value type: true
// CS Name: Newtonsoft.Json.Schema.JsonSchemaType
struct CORDL_TYPE JsonSchemaType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonSchemaType_Unwrapped
  enum struct __JsonSchemaType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_String = static_cast<int32_t>(0x1),
    __E_Float = static_cast<int32_t>(0x2),
    __E_Integer = static_cast<int32_t>(0x4),
    __E_Boolean = static_cast<int32_t>(0x8),
    __E_Object = static_cast<int32_t>(0x10),
    __E_Array = static_cast<int32_t>(0x20),
    __E_Null = static_cast<int32_t>(0x40),
    __E_Any = static_cast<int32_t>(0x7f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JsonSchemaType_Unwrapped() const noexcept {
    return static_cast<__JsonSchemaType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonSchemaType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonSchemaType(int32_t value__) noexcept;

  /// @brief Field Any value: I32(127)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Any;

  /// @brief Field Array value: I32(32)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Array;

  /// @brief Field Boolean value: I32(8)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Boolean;

  /// @brief Field Float value: I32(2)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Float;

  /// @brief Field Integer value: I32(4)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Integer;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const None;

  /// @brief Field Null value: I32(64)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Null;

  /// @brief Field Object value: I32(16)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const Object;

  /// @brief Field String value: I32(1)
  static ::Newtonsoft::Json::Schema::JsonSchemaType const String;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::JsonSchemaType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::JsonSchemaType, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::JsonSchemaType, "Newtonsoft.Json.Schema", "JsonSchemaType");
