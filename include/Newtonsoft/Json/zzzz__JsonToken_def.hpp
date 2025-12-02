#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonToken.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonToken)
// Forward declare root types
namespace Newtonsoft::Json {
struct JsonToken;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::JsonToken);
// Dependencies
namespace Newtonsoft::Json {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonToken
struct CORDL_TYPE JsonToken {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JsonToken_Unwrapped
  enum struct __JsonToken_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_StartObject = static_cast<int32_t>(0x1),
    __E_StartArray = static_cast<int32_t>(0x2),
    __E_StartConstructor = static_cast<int32_t>(0x3),
    __E_PropertyName = static_cast<int32_t>(0x4),
    __E_Comment = static_cast<int32_t>(0x5),
    __E_Raw = static_cast<int32_t>(0x6),
    __E_Integer = static_cast<int32_t>(0x7),
    __E_Float = static_cast<int32_t>(0x8),
    __E_String = static_cast<int32_t>(0x9),
    __E_Boolean = static_cast<int32_t>(0xa),
    __E_Null = static_cast<int32_t>(0xb),
    __E_Undefined = static_cast<int32_t>(0xc),
    __E_EndObject = static_cast<int32_t>(0xd),
    __E_EndArray = static_cast<int32_t>(0xe),
    __E_EndConstructor = static_cast<int32_t>(0xf),
    __E_Date = static_cast<int32_t>(0x10),
    __E_Bytes = static_cast<int32_t>(0x11),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JsonToken_Unwrapped() const noexcept {
    return static_cast<__JsonToken_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonToken();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonToken(int32_t value__) noexcept;

  /// @brief Field Boolean value: I32(10)
  static ::Newtonsoft::Json::JsonToken const Boolean;

  /// @brief Field Bytes value: I32(17)
  static ::Newtonsoft::Json::JsonToken const Bytes;

  /// @brief Field Comment value: I32(5)
  static ::Newtonsoft::Json::JsonToken const Comment;

  /// @brief Field Date value: I32(16)
  static ::Newtonsoft::Json::JsonToken const Date;

  /// @brief Field EndArray value: I32(14)
  static ::Newtonsoft::Json::JsonToken const EndArray;

  /// @brief Field EndConstructor value: I32(15)
  static ::Newtonsoft::Json::JsonToken const EndConstructor;

  /// @brief Field EndObject value: I32(13)
  static ::Newtonsoft::Json::JsonToken const EndObject;

  /// @brief Field Float value: I32(8)
  static ::Newtonsoft::Json::JsonToken const Float;

  /// @brief Field Integer value: I32(7)
  static ::Newtonsoft::Json::JsonToken const Integer;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::JsonToken const None;

  /// @brief Field Null value: I32(11)
  static ::Newtonsoft::Json::JsonToken const Null;

  /// @brief Field PropertyName value: I32(4)
  static ::Newtonsoft::Json::JsonToken const PropertyName;

  /// @brief Field Raw value: I32(6)
  static ::Newtonsoft::Json::JsonToken const Raw;

  /// @brief Field StartArray value: I32(2)
  static ::Newtonsoft::Json::JsonToken const StartArray;

  /// @brief Field StartConstructor value: I32(3)
  static ::Newtonsoft::Json::JsonToken const StartConstructor;

  /// @brief Field StartObject value: I32(1)
  static ::Newtonsoft::Json::JsonToken const StartObject;

  /// @brief Field String value: I32(9)
  static ::Newtonsoft::Json::JsonToken const String;

  /// @brief Field Undefined value: I32(12)
  static ::Newtonsoft::Json::JsonToken const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13305 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::JsonToken, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonToken, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonToken, "Newtonsoft.Json", "JsonToken");
