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
// Type: System.Xml.Schema::XmlTypeCode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::XmlTypeCode
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AnyAtomicType value: static_cast<int32_t>(0xa)
  static ::System::Xml::Schema::XmlTypeCode const AnyAtomicType;

  /// @brief Field AnyUri value: static_cast<int32_t>(0x1c)
  static ::System::Xml::Schema::XmlTypeCode const AnyUri;

  /// @brief Field Attribute value: static_cast<int32_t>(0x5)
  static ::System::Xml::Schema::XmlTypeCode const Attribute;

  /// @brief Field Base64Binary value: static_cast<int32_t>(0x1b)
  static ::System::Xml::Schema::XmlTypeCode const Base64Binary;

  /// @brief Field Boolean value: static_cast<int32_t>(0xd)
  static ::System::Xml::Schema::XmlTypeCode const Boolean;

  /// @brief Field Byte value: static_cast<int32_t>(0x2e)
  static ::System::Xml::Schema::XmlTypeCode const Byte;

  /// @brief Field Comment value: static_cast<int32_t>(0x8)
  static ::System::Xml::Schema::XmlTypeCode const Comment;

  /// @brief Field Date value: static_cast<int32_t>(0x14)
  static ::System::Xml::Schema::XmlTypeCode const Date;

  /// @brief Field DateTime value: static_cast<int32_t>(0x12)
  static ::System::Xml::Schema::XmlTypeCode const DateTime;

  /// @brief Field DayTimeDuration value: static_cast<int32_t>(0x36)
  static ::System::Xml::Schema::XmlTypeCode const DayTimeDuration;

  /// @brief Field Decimal value: static_cast<int32_t>(0xe)
  static ::System::Xml::Schema::XmlTypeCode const Decimal;

  /// @brief Field Document value: static_cast<int32_t>(0x3)
  static ::System::Xml::Schema::XmlTypeCode const Document;

  /// @brief Field Double value: static_cast<int32_t>(0x10)
  static ::System::Xml::Schema::XmlTypeCode const Double;

  /// @brief Field Duration value: static_cast<int32_t>(0x11)
  static ::System::Xml::Schema::XmlTypeCode const Duration;

  /// @brief Field Element value: static_cast<int32_t>(0x4)
  static ::System::Xml::Schema::XmlTypeCode const Element;

  /// @brief Field Entity value: static_cast<int32_t>(0x27)
  static ::System::Xml::Schema::XmlTypeCode const Entity;

  /// @brief Field Float value: static_cast<int32_t>(0xf)
  static ::System::Xml::Schema::XmlTypeCode const Float;

  /// @brief Field GDay value: static_cast<int32_t>(0x18)
  static ::System::Xml::Schema::XmlTypeCode const GDay;

  /// @brief Field GMonth value: static_cast<int32_t>(0x19)
  static ::System::Xml::Schema::XmlTypeCode const GMonth;

  /// @brief Field GMonthDay value: static_cast<int32_t>(0x17)
  static ::System::Xml::Schema::XmlTypeCode const GMonthDay;

  /// @brief Field GYear value: static_cast<int32_t>(0x16)
  static ::System::Xml::Schema::XmlTypeCode const GYear;

  /// @brief Field GYearMonth value: static_cast<int32_t>(0x15)
  static ::System::Xml::Schema::XmlTypeCode const GYearMonth;

  /// @brief Field HexBinary value: static_cast<int32_t>(0x1a)
  static ::System::Xml::Schema::XmlTypeCode const HexBinary;

  /// @brief Field Id value: static_cast<int32_t>(0x25)
  static ::System::Xml::Schema::XmlTypeCode const Id;

  /// @brief Field Idref value: static_cast<int32_t>(0x26)
  static ::System::Xml::Schema::XmlTypeCode const Idref;

  /// @brief Field Int value: static_cast<int32_t>(0x2c)
  static ::System::Xml::Schema::XmlTypeCode const Int;

  /// @brief Field Integer value: static_cast<int32_t>(0x28)
  static ::System::Xml::Schema::XmlTypeCode const Integer;

  /// @brief Field Item value: static_cast<int32_t>(0x1)
  static ::System::Xml::Schema::XmlTypeCode const Item;

  /// @brief Field Language value: static_cast<int32_t>(0x21)
  static ::System::Xml::Schema::XmlTypeCode const Language;

  /// @brief Field Long value: static_cast<int32_t>(0x2b)
  static ::System::Xml::Schema::XmlTypeCode const Long;

  /// @brief Field NCName value: static_cast<int32_t>(0x24)
  static ::System::Xml::Schema::XmlTypeCode const NCName;

  /// @brief Field Name value: static_cast<int32_t>(0x23)
  static ::System::Xml::Schema::XmlTypeCode const Name;

  /// @brief Field Namespace value: static_cast<int32_t>(0x6)
  static ::System::Xml::Schema::XmlTypeCode const Namespace;

  /// @brief Field NegativeInteger value: static_cast<int32_t>(0x2a)
  static ::System::Xml::Schema::XmlTypeCode const NegativeInteger;

  /// @brief Field NmToken value: static_cast<int32_t>(0x22)
  static ::System::Xml::Schema::XmlTypeCode const NmToken;

  /// @brief Field Node value: static_cast<int32_t>(0x2)
  static ::System::Xml::Schema::XmlTypeCode const Node;

  /// @brief Field NonNegativeInteger value: static_cast<int32_t>(0x2f)
  static ::System::Xml::Schema::XmlTypeCode const NonNegativeInteger;

  /// @brief Field NonPositiveInteger value: static_cast<int32_t>(0x29)
  static ::System::Xml::Schema::XmlTypeCode const NonPositiveInteger;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::Schema::XmlTypeCode const None;

  /// @brief Field NormalizedString value: static_cast<int32_t>(0x1f)
  static ::System::Xml::Schema::XmlTypeCode const NormalizedString;

  /// @brief Field Notation value: static_cast<int32_t>(0x1e)
  static ::System::Xml::Schema::XmlTypeCode const Notation;

  /// @brief Field PositiveInteger value: static_cast<int32_t>(0x34)
  static ::System::Xml::Schema::XmlTypeCode const PositiveInteger;

  /// @brief Field ProcessingInstruction value: static_cast<int32_t>(0x7)
  static ::System::Xml::Schema::XmlTypeCode const ProcessingInstruction;

  /// @brief Field QName value: static_cast<int32_t>(0x1d)
  static ::System::Xml::Schema::XmlTypeCode const QName;

  /// @brief Field Short value: static_cast<int32_t>(0x2d)
  static ::System::Xml::Schema::XmlTypeCode const Short;

  /// @brief Field String value: static_cast<int32_t>(0xc)
  static ::System::Xml::Schema::XmlTypeCode const String;

  /// @brief Field Text value: static_cast<int32_t>(0x9)
  static ::System::Xml::Schema::XmlTypeCode const Text;

  /// @brief Field Time value: static_cast<int32_t>(0x13)
  static ::System::Xml::Schema::XmlTypeCode const Time;

  /// @brief Field Token value: static_cast<int32_t>(0x20)
  static ::System::Xml::Schema::XmlTypeCode const Token;

  /// @brief Field UnsignedByte value: static_cast<int32_t>(0x33)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedByte;

  /// @brief Field UnsignedInt value: static_cast<int32_t>(0x31)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedInt;

  /// @brief Field UnsignedLong value: static_cast<int32_t>(0x30)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedLong;

  /// @brief Field UnsignedShort value: static_cast<int32_t>(0x32)
  static ::System::Xml::Schema::XmlTypeCode const UnsignedShort;

  /// @brief Field UntypedAtomic value: static_cast<int32_t>(0xb)
  static ::System::Xml::Schema::XmlTypeCode const UntypedAtomic;

  /// @brief Field YearMonthDuration value: static_cast<int32_t>(0x35)
  static ::System::Xml::Schema::XmlTypeCode const YearMonthDuration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlTypeCode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlTypeCode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlTypeCode, "System.Xml.Schema", "XmlTypeCode");
