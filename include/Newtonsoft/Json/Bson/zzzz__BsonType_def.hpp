#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Bson/BsonType.hpp"
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
// Dependencies
namespace Newtonsoft::Json::Bson {
// Is value type: true
// CS Name: Newtonsoft.Json.Bson.BsonType
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int8_t() const noexcept {
    return static_cast<int8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None }]
  constexpr BsonType(int8_t value__) noexcept;

  /// @brief Field Array value: I8(4)
  static ::Newtonsoft::Json::Bson::BsonType const Array;

  /// @brief Field Binary value: I8(5)
  static ::Newtonsoft::Json::Bson::BsonType const Binary;

  /// @brief Field Boolean value: I8(8)
  static ::Newtonsoft::Json::Bson::BsonType const Boolean;

  /// @brief Field Code value: I8(13)
  static ::Newtonsoft::Json::Bson::BsonType const Code;

  /// @brief Field CodeWScope value: I8(15)
  static ::Newtonsoft::Json::Bson::BsonType const CodeWScope;

  /// @brief Field Date value: I8(9)
  static ::Newtonsoft::Json::Bson::BsonType const Date;

  /// @brief Field Integer value: I8(16)
  static ::Newtonsoft::Json::Bson::BsonType const Integer;

  /// @brief Field Long value: I8(18)
  static ::Newtonsoft::Json::Bson::BsonType const Long;

  /// @brief Field MaxKey value: I8(127)
  static ::Newtonsoft::Json::Bson::BsonType const MaxKey;

  /// @brief Field MinKey value: I8(-1)
  static ::Newtonsoft::Json::Bson::BsonType const MinKey;

  /// @brief Field Null value: I8(10)
  static ::Newtonsoft::Json::Bson::BsonType const Null;

  /// @brief Field Number value: I8(1)
  static ::Newtonsoft::Json::Bson::BsonType const Number;

  /// @brief Field Object value: I8(3)
  static ::Newtonsoft::Json::Bson::BsonType const Object;

  /// @brief Field Oid value: I8(7)
  static ::Newtonsoft::Json::Bson::BsonType const Oid;

  /// @brief Field Reference value: I8(12)
  static ::Newtonsoft::Json::Bson::BsonType const Reference;

  /// @brief Field Regex value: I8(11)
  static ::Newtonsoft::Json::Bson::BsonType const Regex;

  /// @brief Field String value: I8(2)
  static ::Newtonsoft::Json::Bson::BsonType const String;

  /// @brief Field Symbol value: I8(14)
  static ::Newtonsoft::Json::Bson::BsonType const Symbol;

  /// @brief Field TimeStamp value: I8(17)
  static ::Newtonsoft::Json::Bson::BsonType const TimeStamp;

  /// @brief Field Undefined value: I8(6)
  static ::Newtonsoft::Json::Bson::BsonType const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10516 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  int8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Bson::BsonType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Bson::BsonType, 0x1>, "Size mismatch!");

} // namespace Newtonsoft::Json::Bson
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonType, "Newtonsoft.Json.Bson", "BsonType");
