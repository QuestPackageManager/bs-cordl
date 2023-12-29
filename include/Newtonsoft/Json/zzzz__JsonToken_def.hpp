#pragma once
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
// Type: Newtonsoft.Json::JsonToken
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11769))
// CS Name: ::Newtonsoft.Json::JsonToken
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JsonToken(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonToken();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::JsonToken const None;

  /// @brief Field StartObject value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::JsonToken const StartObject;

  /// @brief Field StartArray value: static_cast<int32_t>(0x2)
  static ::Newtonsoft::Json::JsonToken const StartArray;

  /// @brief Field StartConstructor value: static_cast<int32_t>(0x3)
  static ::Newtonsoft::Json::JsonToken const StartConstructor;

  /// @brief Field PropertyName value: static_cast<int32_t>(0x4)
  static ::Newtonsoft::Json::JsonToken const PropertyName;

  /// @brief Field Comment value: static_cast<int32_t>(0x5)
  static ::Newtonsoft::Json::JsonToken const Comment;

  /// @brief Field Raw value: static_cast<int32_t>(0x6)
  static ::Newtonsoft::Json::JsonToken const Raw;

  /// @brief Field Integer value: static_cast<int32_t>(0x7)
  static ::Newtonsoft::Json::JsonToken const Integer;

  /// @brief Field Float value: static_cast<int32_t>(0x8)
  static ::Newtonsoft::Json::JsonToken const Float;

  /// @brief Field String value: static_cast<int32_t>(0x9)
  static ::Newtonsoft::Json::JsonToken const String;

  /// @brief Field Boolean value: static_cast<int32_t>(0xa)
  static ::Newtonsoft::Json::JsonToken const Boolean;

  /// @brief Field Null value: static_cast<int32_t>(0xb)
  static ::Newtonsoft::Json::JsonToken const Null;

  /// @brief Field Undefined value: static_cast<int32_t>(0xc)
  static ::Newtonsoft::Json::JsonToken const Undefined;

  /// @brief Field EndObject value: static_cast<int32_t>(0xd)
  static ::Newtonsoft::Json::JsonToken const EndObject;

  /// @brief Field EndArray value: static_cast<int32_t>(0xe)
  static ::Newtonsoft::Json::JsonToken const EndArray;

  /// @brief Field EndConstructor value: static_cast<int32_t>(0xf)
  static ::Newtonsoft::Json::JsonToken const EndConstructor;

  /// @brief Field Date value: static_cast<int32_t>(0x10)
  static ::Newtonsoft::Json::JsonToken const Date;

  /// @brief Field Bytes value: static_cast<int32_t>(0x11)
  static ::Newtonsoft::Json::JsonToken const Bytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonToken, 0x4>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::JsonToken, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonToken, "Newtonsoft.Json", "JsonToken");
