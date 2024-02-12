#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BsonType)
// Forward declare root types
namespace Newtonsoft::Json::Bson {
struct BsonType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Bson::BsonType);
// Type: Newtonsoft.Json.Bson::BsonType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Bson {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11980))
// CS Name: ::Newtonsoft.Json.Bson::BsonType
struct CORDL_TYPE BsonType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int8_t;

  /// @brief Nested struct __BsonType_Unwrapped
  enum struct __BsonType_Unwrapped : int8_t {
    __E_Number = static_cast<int8_t>(0x1),
    __E_String = static_cast<int8_t>(0x2),
    __E_Object = static_cast<int8_t>(0x3),
    __E_Array = static_cast<int8_t>(0x4),
    __E_Binary = static_cast<int8_t>(0x5),
    __E_Undefined = static_cast<int8_t>(0x6),
    __E_Oid = static_cast<int8_t>(0x7),
    __E_Boolean = static_cast<int8_t>(0x8),
    __E_Date = static_cast<int8_t>(0x9),
    __E_Null = static_cast<int8_t>(0xa),
    __E_Regex = static_cast<int8_t>(0xb),
    __E_Reference = static_cast<int8_t>(0xc),
    __E_Code = static_cast<int8_t>(0xd),
    __E_Symbol = static_cast<int8_t>(0xe),
    __E_CodeWScope = static_cast<int8_t>(0xf),
    __E_Integer = static_cast<int8_t>(0x10),
    __E_TimeStamp = static_cast<int8_t>(0x11),
    __E_Long = static_cast<int8_t>(0x12),
    __E_MinKey = static_cast<int8_t>(0xff),
    __E_MaxKey = static_cast<int8_t>(0x7f),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BsonType_Unwrapped() const noexcept {
    return static_cast<__BsonType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr BsonType(int8_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonType();

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  int8_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field Number value: static_cast<int8_t>(0x1)
  static ::Newtonsoft::Json::Bson::BsonType const Number;

  /// @brief Field String value: static_cast<int8_t>(0x2)
  static ::Newtonsoft::Json::Bson::BsonType const String;

  /// @brief Field Object value: static_cast<int8_t>(0x3)
  static ::Newtonsoft::Json::Bson::BsonType const Object;

  /// @brief Field Array value: static_cast<int8_t>(0x4)
  static ::Newtonsoft::Json::Bson::BsonType const Array;

  /// @brief Field Binary value: static_cast<int8_t>(0x5)
  static ::Newtonsoft::Json::Bson::BsonType const Binary;

  /// @brief Field Undefined value: static_cast<int8_t>(0x6)
  static ::Newtonsoft::Json::Bson::BsonType const Undefined;

  /// @brief Field Oid value: static_cast<int8_t>(0x7)
  static ::Newtonsoft::Json::Bson::BsonType const Oid;

  /// @brief Field Boolean value: static_cast<int8_t>(0x8)
  static ::Newtonsoft::Json::Bson::BsonType const Boolean;

  /// @brief Field Date value: static_cast<int8_t>(0x9)
  static ::Newtonsoft::Json::Bson::BsonType const Date;

  /// @brief Field Null value: static_cast<int8_t>(0xa)
  static ::Newtonsoft::Json::Bson::BsonType const Null;

  /// @brief Field Regex value: static_cast<int8_t>(0xb)
  static ::Newtonsoft::Json::Bson::BsonType const Regex;

  /// @brief Field Reference value: static_cast<int8_t>(0xc)
  static ::Newtonsoft::Json::Bson::BsonType const Reference;

  /// @brief Field Code value: static_cast<int8_t>(0xd)
  static ::Newtonsoft::Json::Bson::BsonType const Code;

  /// @brief Field Symbol value: static_cast<int8_t>(0xe)
  static ::Newtonsoft::Json::Bson::BsonType const Symbol;

  /// @brief Field CodeWScope value: static_cast<int8_t>(0xf)
  static ::Newtonsoft::Json::Bson::BsonType const CodeWScope;

  /// @brief Field Integer value: static_cast<int8_t>(0x10)
  static ::Newtonsoft::Json::Bson::BsonType const Integer;

  /// @brief Field TimeStamp value: static_cast<int8_t>(0x11)
  static ::Newtonsoft::Json::Bson::BsonType const TimeStamp;

  /// @brief Field Long value: static_cast<int8_t>(0x12)
  static ::Newtonsoft::Json::Bson::BsonType const Long;

  /// @brief Field MinKey value: static_cast<int8_t>(0xff)
  static ::Newtonsoft::Json::Bson::BsonType const MinKey;

  /// @brief Field MaxKey value: static_cast<int8_t>(0x7f)
  static ::Newtonsoft::Json::Bson::BsonType const MaxKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonType, 0x1>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Bson::BsonType, value__) == 0x0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonType, "Newtonsoft.Json.Bson", "BsonType");
