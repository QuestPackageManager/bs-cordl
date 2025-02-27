#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Linq/JTokenType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JTokenType)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct JTokenType;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::JTokenType);
// Dependencies
namespace Newtonsoft::Json::Linq {
// Is value type: true
// CS Name: Newtonsoft.Json.Linq.JTokenType
struct CORDL_TYPE JTokenType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __JTokenType_Unwrapped
  enum struct __JTokenType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Object = static_cast<int32_t>(0x1),
    __E_Array = static_cast<int32_t>(0x2),
    __E_Constructor = static_cast<int32_t>(0x3),
    __E_Property = static_cast<int32_t>(0x4),
    __E_Comment = static_cast<int32_t>(0x5),
    __E_Integer = static_cast<int32_t>(0x6),
    __E_Float = static_cast<int32_t>(0x7),
    __E_String = static_cast<int32_t>(0x8),
    __E_Boolean = static_cast<int32_t>(0x9),
    __E_Null = static_cast<int32_t>(0xa),
    __E_Undefined = static_cast<int32_t>(0xb),
    __E_Date = static_cast<int32_t>(0xc),
    __E_Raw = static_cast<int32_t>(0xd),
    __E_Bytes = static_cast<int32_t>(0xe),
    __E_Guid = static_cast<int32_t>(0xf),
    __E_Uri = static_cast<int32_t>(0x10),
    __E_TimeSpan = static_cast<int32_t>(0x11),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __JTokenType_Unwrapped() const noexcept {
    return static_cast<__JTokenType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr JTokenType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr JTokenType(int32_t value__) noexcept;

  /// @brief Field Array value: I32(2)
  static ::Newtonsoft::Json::Linq::JTokenType const Array;

  /// @brief Field Boolean value: I32(9)
  static ::Newtonsoft::Json::Linq::JTokenType const Boolean;

  /// @brief Field Bytes value: I32(14)
  static ::Newtonsoft::Json::Linq::JTokenType const Bytes;

  /// @brief Field Comment value: I32(5)
  static ::Newtonsoft::Json::Linq::JTokenType const Comment;

  /// @brief Field Constructor value: I32(3)
  static ::Newtonsoft::Json::Linq::JTokenType const Constructor;

  /// @brief Field Date value: I32(12)
  static ::Newtonsoft::Json::Linq::JTokenType const Date;

  /// @brief Field Float value: I32(7)
  static ::Newtonsoft::Json::Linq::JTokenType const Float;

  /// @brief Field Guid value: I32(15)
  static ::Newtonsoft::Json::Linq::JTokenType const Guid;

  /// @brief Field Integer value: I32(6)
  static ::Newtonsoft::Json::Linq::JTokenType const Integer;

  /// @brief Field None value: I32(0)
  static ::Newtonsoft::Json::Linq::JTokenType const None;

  /// @brief Field Null value: I32(10)
  static ::Newtonsoft::Json::Linq::JTokenType const Null;

  /// @brief Field Object value: I32(1)
  static ::Newtonsoft::Json::Linq::JTokenType const Object;

  /// @brief Field Property value: I32(4)
  static ::Newtonsoft::Json::Linq::JTokenType const Property;

  /// @brief Field Raw value: I32(13)
  static ::Newtonsoft::Json::Linq::JTokenType const Raw;

  /// @brief Field String value: I32(8)
  static ::Newtonsoft::Json::Linq::JTokenType const String;

  /// @brief Field TimeSpan value: I32(17)
  static ::Newtonsoft::Json::Linq::JTokenType const TimeSpan;

  /// @brief Field Undefined value: I32(11)
  static ::Newtonsoft::Json::Linq::JTokenType const Undefined;

  /// @brief Field Uri value: I32(16)
  static ::Newtonsoft::Json::Linq::JTokenType const Uri;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Linq::JTokenType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JTokenType, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenType, "Newtonsoft.Json.Linq", "JTokenType");
