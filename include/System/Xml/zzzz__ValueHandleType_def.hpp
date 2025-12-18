#pragma once
// IWYU pragma private; include "System/Xml/ValueHandleType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueHandleType)
// Forward declare root types
namespace System::Xml {
struct ValueHandleType;
}
// Write type traits
MARK_VAL_T(::System::Xml::ValueHandleType);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.ValueHandleType
struct CORDL_TYPE ValueHandleType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ValueHandleType_Unwrapped
  enum struct __ValueHandleType_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_True = static_cast<int32_t>(0x1),
    __E_False = static_cast<int32_t>(0x2),
    __E_Zero = static_cast<int32_t>(0x3),
    __E_One = static_cast<int32_t>(0x4),
    __E_Int8 = static_cast<int32_t>(0x5),
    __E_Int16 = static_cast<int32_t>(0x6),
    __E_Int32 = static_cast<int32_t>(0x7),
    __E_Int64 = static_cast<int32_t>(0x8),
    __E_UInt64 = static_cast<int32_t>(0x9),
    __E_Single = static_cast<int32_t>(0xa),
    __E_Double = static_cast<int32_t>(0xb),
    __E_Decimal = static_cast<int32_t>(0xc),
    __E_DateTime = static_cast<int32_t>(0xd),
    __E_TimeSpan = static_cast<int32_t>(0xe),
    __E_Guid = static_cast<int32_t>(0xf),
    __E_UniqueId = static_cast<int32_t>(0x10),
    __E_UTF8 = static_cast<int32_t>(0x11),
    __E_EscapedUTF8 = static_cast<int32_t>(0x12),
    __E_Base64 = static_cast<int32_t>(0x13),
    __E_Dictionary = static_cast<int32_t>(0x14),
    __E_List = static_cast<int32_t>(0x15),
    __E_Char = static_cast<int32_t>(0x16),
    __E_Unicode = static_cast<int32_t>(0x17),
    __E_QName = static_cast<int32_t>(0x18),
    __E_ConstString = static_cast<int32_t>(0x19),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ValueHandleType_Unwrapped() const noexcept {
    return static_cast<__ValueHandleType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueHandleType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ValueHandleType(int32_t value__) noexcept;

  /// @brief Field Base64 value: I32(19)
  static ::System::Xml::ValueHandleType const Base64;

  /// @brief Field Char value: I32(22)
  static ::System::Xml::ValueHandleType const Char;

  /// @brief Field ConstString value: I32(25)
  static ::System::Xml::ValueHandleType const ConstString;

  /// @brief Field DateTime value: I32(13)
  static ::System::Xml::ValueHandleType const DateTime;

  /// @brief Field Decimal value: I32(12)
  static ::System::Xml::ValueHandleType const Decimal;

  /// @brief Field Dictionary value: I32(20)
  static ::System::Xml::ValueHandleType const Dictionary;

  /// @brief Field Double value: I32(11)
  static ::System::Xml::ValueHandleType const Double;

  /// @brief Field Empty value: I32(0)
  static ::System::Xml::ValueHandleType const Empty;

  /// @brief Field EscapedUTF8 value: I32(18)
  static ::System::Xml::ValueHandleType const EscapedUTF8;

  /// @brief Field False value: I32(2)
  static ::System::Xml::ValueHandleType const False;

  /// @brief Field Guid value: I32(15)
  static ::System::Xml::ValueHandleType const Guid;

  /// @brief Field Int16 value: I32(6)
  static ::System::Xml::ValueHandleType const Int16;

  /// @brief Field Int32 value: I32(7)
  static ::System::Xml::ValueHandleType const Int32;

  /// @brief Field Int64 value: I32(8)
  static ::System::Xml::ValueHandleType const Int64;

  /// @brief Field Int8 value: I32(5)
  static ::System::Xml::ValueHandleType const Int8;

  /// @brief Field List value: I32(21)
  static ::System::Xml::ValueHandleType const List;

  /// @brief Field One value: I32(4)
  static ::System::Xml::ValueHandleType const One;

  /// @brief Field QName value: I32(24)
  static ::System::Xml::ValueHandleType const QName;

  /// @brief Field Single value: I32(10)
  static ::System::Xml::ValueHandleType const Single;

  /// @brief Field TimeSpan value: I32(14)
  static ::System::Xml::ValueHandleType const TimeSpan;

  /// @brief Field True value: I32(1)
  static ::System::Xml::ValueHandleType const True;

  /// @brief Field UInt64 value: I32(9)
  static ::System::Xml::ValueHandleType const UInt64;

  /// @brief Field UTF8 value: I32(17)
  static ::System::Xml::ValueHandleType const UTF8;

  /// @brief Field Unicode value: I32(23)
  static ::System::Xml::ValueHandleType const Unicode;

  /// @brief Field UniqueId value: I32(16)
  static ::System::Xml::ValueHandleType const UniqueId;

  /// @brief Field Zero value: I32(3)
  static ::System::Xml::ValueHandleType const Zero;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16907 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ValueHandleType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ValueHandleType, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValueHandleType, "System.Xml", "ValueHandleType");
