#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlTypeCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTypeCode)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlTypeCode);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlTypeCode
struct CORDL_TYPE XmlTypeCode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlTypeCode_Unwrapped
  enum struct __XmlTypeCode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Item = static_cast<int32_t>(0x1),
    __E_Node = static_cast<int32_t>(0x2),
    __E_Document = static_cast<int32_t>(0x3),
    __E_Element = static_cast<int32_t>(0x4),
    __E_Attribute = static_cast<int32_t>(0x5),
    __E_Namespace = static_cast<int32_t>(0x6),
    __E_ProcessingInstruction = static_cast<int32_t>(0x7),
    __E_Comment = static_cast<int32_t>(0x8),
    __E_Text = static_cast<int32_t>(0x9),
    __E_AnyAtomicType = static_cast<int32_t>(0xa),
    __E_UntypedAtomic = static_cast<int32_t>(0xb),
    __E_String = static_cast<int32_t>(0xc),
    __E_Boolean = static_cast<int32_t>(0xd),
    __E_Decimal = static_cast<int32_t>(0xe),
    __E_Float = static_cast<int32_t>(0xf),
    __E_Double = static_cast<int32_t>(0x10),
    __E_Duration = static_cast<int32_t>(0x11),
    __E_DateTime = static_cast<int32_t>(0x12),
    __E_Time = static_cast<int32_t>(0x13),
    __E_Date = static_cast<int32_t>(0x14),
    __E_GYearMonth = static_cast<int32_t>(0x15),
    __E_GYear = static_cast<int32_t>(0x16),
    __E_GMonthDay = static_cast<int32_t>(0x17),
    __E_GDay = static_cast<int32_t>(0x18),
    __E_GMonth = static_cast<int32_t>(0x19),
    __E_HexBinary = static_cast<int32_t>(0x1a),
    __E_Base64Binary = static_cast<int32_t>(0x1b),
    __E_AnyUri = static_cast<int32_t>(0x1c),
    __E_QName = static_cast<int32_t>(0x1d),
    __E_Notation = static_cast<int32_t>(0x1e),
    __E_NormalizedString = static_cast<int32_t>(0x1f),
    __E_Token = static_cast<int32_t>(0x20),
    __E_Language = static_cast<int32_t>(0x21),
    __E_NmToken = static_cast<int32_t>(0x22),
    __E_Name = static_cast<int32_t>(0x23),
    __E_NCName = static_cast<int32_t>(0x24),
    __E_Id = static_cast<int32_t>(0x25),
    __E_Idref = static_cast<int32_t>(0x26),
    __E_Entity = static_cast<int32_t>(0x27),
    __E_Integer = static_cast<int32_t>(0x28),
    __E_NonPositiveInteger = static_cast<int32_t>(0x29),
    __E_NegativeInteger = static_cast<int32_t>(0x2a),
    __E_Long = static_cast<int32_t>(0x2b),
    __E_Int = static_cast<int32_t>(0x2c),
    __E_Short = static_cast<int32_t>(0x2d),
    __E_Byte = static_cast<int32_t>(0x2e),
    __E_NonNegativeInteger = static_cast<int32_t>(0x2f),
    __E_UnsignedLong = static_cast<int32_t>(0x30),
    __E_UnsignedInt = static_cast<int32_t>(0x31),
    __E_UnsignedShort = static_cast<int32_t>(0x32),
    __E_UnsignedByte = static_cast<int32_t>(0x33),
    __E_PositiveInteger = static_cast<int32_t>(0x34),
    __E_YearMonthDuration = static_cast<int32_t>(0x35),
    __E_DayTimeDuration = static_cast<int32_t>(0x36),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlTypeCode_Unwrapped() const noexcept {
    return static_cast<__XmlTypeCode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeCode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlTypeCode(int32_t value__) noexcept;

  /// @brief Field AnyAtomicType value: I32(10)
  static ::System::Xml::Schema::XmlTypeCode const AnyAtomicType;

  /// @brief Field AnyUri value: I32(28)
  static ::System::Xml::Schema::XmlTypeCode const AnyUri;

  /// @brief Field Attribute value: I32(5)
  static ::System::Xml::Schema::XmlTypeCode const Attribute;

  /// @brief Field Base64Binary value: I32(27)
  static ::System::Xml::Schema::XmlTypeCode const Base64Binary;

  /// @brief Field Boolean value: I32(13)
  static ::System::Xml::Schema::XmlTypeCode const Boolean;

  /// @brief Field Byte value: I32(46)
  static ::System::Xml::Schema::XmlTypeCode const Byte;

  /// @brief Field Comment value: I32(8)
  static ::System::Xml::Schema::XmlTypeCode const Comment;

  /// @brief Field Date value: I32(20)
  static ::System::Xml::Schema::XmlTypeCode const Date;

  /// @brief Field DateTime value: I32(18)
  static ::System::Xml::Schema::XmlTypeCode const DateTime;

  /// @brief Field DayTimeDuration value: I32(54)
  static ::System::Xml::Schema::XmlTypeCode const DayTimeDuration;

  /// @brief Field Decimal value: I32(14)
  static ::System::Xml::Schema::XmlTypeCode const Decimal;

  /// @brief Field Document value: I32(3)
  static ::System::Xml::Schema::XmlTypeCode const Document;

  /// @brief Field Double value: I32(16)
  static ::System::Xml::Schema::XmlTypeCode const Double;

  /// @brief Field Duration value: I32(17)
  static ::System::Xml::Schema::XmlTypeCode const Duration;

  /// @brief Field Element value: I32(4)
  static ::System::Xml::Schema::XmlTypeCode const Element;

  /// @brief Field Entity value: I32(39)
  static ::System::Xml::Schema::XmlTypeCode const Entity;

  /// @brief Field Float value: I32(15)
  static ::System::Xml::Schema::XmlTypeCode const Float;

  /// @brief Field GDay value: I32(24)
  static ::System::Xml::Schema::XmlTypeCode const GDay;

  /// @brief Field GMonth value: I32(25)
  static ::System::Xml::Schema::XmlTypeCode const GMonth;

  /// @brief Field GMonthDay value: I32(23)
  static ::System::Xml::Schema::XmlTypeCode const GMonthDay;

  /// @brief Field GYear value: I32(22)
  static ::System::Xml::Schema::XmlTypeCode const GYear;

  /// @brief Field GYearMonth value: I32(21)
  static ::System::Xml::Schema::XmlTypeCode const GYearMonth;

  /// @brief Field HexBinary value: I32(26)
  static ::System::Xml::Schema::XmlTypeCode const HexBinary;

  /// @brief Field Id value: I32(37)
  static ::System::Xml::Schema::XmlTypeCode const Id;

  /// @brief Field Idref value: I32(38)
  static ::System::Xml::Schema::XmlTypeCode const Idref;

  /// @brief Field Int value: I32(44)
  static ::System::Xml::Schema::XmlTypeCode const Int;

  /// @brief Field Integer value: I32(40)
  static ::System::Xml::Schema::XmlTypeCode const Integer;

  /// @brief Field Item value: I32(1)
  static ::System::Xml::Schema::XmlTypeCode const Item;

  /// @brief Field Language value: I32(33)
  static ::System::Xml::Schema::XmlTypeCode const Language;

  /// @brief Field Long value: I32(43)
  static ::System::Xml::Schema::XmlTypeCode const Long;

  /// @brief Field NCName value: I32(36)
  static ::System::Xml::Schema::XmlTypeCode const NCName;

  /// @brief Field Name value: I32(35)
  static ::System::Xml::Schema::XmlTypeCode const Name;

  /// @brief Field Namespace value: I32(6)
  static ::System::Xml::Schema::XmlTypeCode const Namespace;

  /// @brief Field NegativeInteger value: I32(42)
  static ::System::Xml::Schema::XmlTypeCode const NegativeInteger;

  /// @brief Field NmToken value: I32(34)
  static ::System::Xml::Schema::XmlTypeCode const NmToken;

  /// @brief Field Node value: I32(2)
  static ::System::Xml::Schema::XmlTypeCode const Node;

  /// @brief Field NonNegativeInteger value: I32(47)
  static ::System::Xml::Schema::XmlTypeCode const NonNegativeInteger;

  /// @brief Field NonPositiveInteger value: I32(41)
  static ::System::Xml::Schema::XmlTypeCode const NonPositiveInteger;

  /// @brief Field None value: I32(0)
  static ::System::Xml::Schema::XmlTypeCode const None;

  /// @brief Field NormalizedString value: I32(31)
  static ::System::Xml::Schema::XmlTypeCode const NormalizedString;

  /// @brief Field Notation value: I32(30)
  static ::System::Xml::Schema::XmlTypeCode const Notation;

  /// @brief Field PositiveInteger value: I32(52)
  static ::System::Xml::Schema::XmlTypeCode const PositiveInteger;

  /// @brief Field ProcessingInstruction value: I32(7)
  static ::System::Xml::Schema::XmlTypeCode const ProcessingInstruction;

  /// @brief Field QName value: I32(29)
  static ::System::Xml::Schema::XmlTypeCode const QName;

  /// @brief Field Short value: I32(45)
  static ::System::Xml::Schema::XmlTypeCode const Short;

  /// @brief Field String value: I32(12)
  static ::System::Xml::Schema::XmlTypeCode const String;

  /// @brief Field Text value: I32(9)
  static ::System::Xml::Schema::XmlTypeCode const Text;

  /// @brief Field Time value: I32(19)
  static ::System::Xml::Schema::XmlTypeCode const Time;

  /// @brief Field Token value: I32(32)
  static ::System::Xml::Schema::XmlTypeCode const Token;

  /// @brief Field UnsignedByte value: I32(51)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedByte;

  /// @brief Field UnsignedInt value: I32(49)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedInt;

  /// @brief Field UnsignedLong value: I32(48)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedLong;

  /// @brief Field UnsignedShort value: I32(50)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedShort;

  /// @brief Field UntypedAtomic value: I32(11)
  static ::System::Xml::Schema::XmlTypeCode const UntypedAtomic;

  /// @brief Field YearMonthDuration value: I32(53)
  static ::System::Xml::Schema::XmlTypeCode const YearMonthDuration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7736 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlTypeCode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlTypeCode, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlTypeCode, "System.Xml.Schema", "XmlTypeCode");
