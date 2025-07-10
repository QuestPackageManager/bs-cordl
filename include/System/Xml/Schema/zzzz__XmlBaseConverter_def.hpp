#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBaseConverter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Type;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlBaseConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlBaseConverter);
// Dependencies System.Xml.Schema.XmlTypeCode, System.Xml.Schema.XmlValueConverter
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlBaseConverter
class CORDL_TYPE XmlBaseConverter : public ::System::Xml::Schema::XmlValueConverter {
public:
  // Declarations
  /// @brief Field BooleanType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_BooleanType, put = setStaticF_BooleanType)) ::System::Type* BooleanType;

  /// @brief Field ByteArrayType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ByteArrayType, put = setStaticF_ByteArrayType)) ::System::Type* ByteArrayType;

  /// @brief Field ByteType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ByteType, put = setStaticF_ByteType)) ::System::Type* ByteType;

  /// @brief Field DateTimeOffsetType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DateTimeOffsetType, put = setStaticF_DateTimeOffsetType)) ::System::Type* DateTimeOffsetType;

  /// @brief Field DateTimeType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DateTimeType, put = setStaticF_DateTimeType)) ::System::Type* DateTimeType;

  /// @brief Field DecimalType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DecimalType, put = setStaticF_DecimalType)) ::System::Type* DecimalType;

  __declspec(property(get = get_DefaultClrType)) ::System::Type* DefaultClrType;

  /// @brief Field DoubleType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DoubleType, put = setStaticF_DoubleType)) ::System::Type* DoubleType;

  /// @brief Field ICollectionType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ICollectionType, put = setStaticF_ICollectionType)) ::System::Type* ICollectionType;

  /// @brief Field IEnumerableType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IEnumerableType, put = setStaticF_IEnumerableType)) ::System::Type* IEnumerableType;

  /// @brief Field IListType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IListType, put = setStaticF_IListType)) ::System::Type* IListType;

  /// @brief Field Int16Type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Int16Type, put = setStaticF_Int16Type)) ::System::Type* Int16Type;

  /// @brief Field Int32Type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Int32Type, put = setStaticF_Int32Type)) ::System::Type* Int32Type;

  /// @brief Field Int64Type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Int64Type, put = setStaticF_Int64Type)) ::System::Type* Int64Type;

  /// @brief Field ObjectArrayType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ObjectArrayType, put = setStaticF_ObjectArrayType)) ::System::Type* ObjectArrayType;

  /// @brief Field ObjectType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ObjectType, put = setStaticF_ObjectType)) ::System::Type* ObjectType;

  /// @brief Field SByteType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SByteType, put = setStaticF_SByteType)) ::System::Type* SByteType;

  __declspec(property(get = get_SchemaType)) ::System::Xml::Schema::XmlSchemaType* SchemaType;

  /// @brief Field SingleType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SingleType, put = setStaticF_SingleType)) ::System::Type* SingleType;

  /// @brief Field StringArrayType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StringArrayType, put = setStaticF_StringArrayType)) ::System::Type* StringArrayType;

  /// @brief Field StringType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StringType, put = setStaticF_StringType)) ::System::Type* StringType;

  /// @brief Field TimeSpanType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TimeSpanType, put = setStaticF_TimeSpanType)) ::System::Type* TimeSpanType;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  /// @brief Field UInt16Type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UInt16Type, put = setStaticF_UInt16Type)) ::System::Type* UInt16Type;

  /// @brief Field UInt32Type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UInt32Type, put = setStaticF_UInt32Type)) ::System::Type* UInt32Type;

  /// @brief Field UInt64Type, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UInt64Type, put = setStaticF_UInt64Type)) ::System::Type* UInt64Type;

  /// @brief Field UriType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_UriType, put = setStaticF_UriType)) ::System::Type* UriType;

  /// @brief Field XPathItemType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XPathItemType, put = setStaticF_XPathItemType)) ::System::Type* XPathItemType;

  /// @brief Field XPathNavigatorType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XPathNavigatorType, put = setStaticF_XPathNavigatorType)) ::System::Type* XPathNavigatorType;

  /// @brief Field XmlAtomicValueArrayType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XmlAtomicValueArrayType, put = setStaticF_XmlAtomicValueArrayType)) ::System::Type* XmlAtomicValueArrayType;

  /// @brief Field XmlAtomicValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XmlAtomicValueType, put = setStaticF_XmlAtomicValueType)) ::System::Type* XmlAtomicValueType;

  /// @brief Field XmlQualifiedNameType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_XmlQualifiedNameType, put = setStaticF_XmlQualifiedNameType)) ::System::Type* XmlQualifiedNameType;

  __declspec(property(get = get_XmlTypeName)) ::StringW XmlTypeName;

  /// @brief Field clrTypeDefault, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_clrTypeDefault, put = __cordl_internal_set_clrTypeDefault)) ::System::Type* clrTypeDefault;

  /// @brief Field schemaType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaType, put = __cordl_internal_set_schemaType)) ::System::Xml::Schema::XmlSchemaType* schemaType;

  /// @brief Field typeCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_typeCode, put = __cordl_internal_set_typeCode)) ::System::Xml::Schema::XmlTypeCode typeCode;

  /// @brief Method AnyUriToString, addr 0x42d9154, size 0x14, virtual false, abstract: false, final false
  static inline ::StringW AnyUriToString(::System::Uri* value);

  /// @brief Method Base64BinaryToString, addr 0x42d9168, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW Base64BinaryToString(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method ChangeListType, addr 0x42d83ac, size 0x54, virtual true, abstract: false, final false
  inline ::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x42d7e40, size 0x10, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType, addr 0x42d7b64, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42d7bec, size 0xb4, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42d7e50, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42d7ad8, size 0x8c, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42d7ca0, size 0x90, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42d7d30, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType, addr 0x42d7db8, size 0x88, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method CreateInvalidClrMappingException, addr 0x42d8150, size 0x25c, virtual false, abstract: false, final false
  inline ::System::Exception* CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType);

  /// @brief Method DateOffsetToString, addr 0x42d9638, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW DateOffsetToString(::System::DateTimeOffset value);

  /// @brief Method DateTimeOffsetToDateTime, addr 0x42d9df4, size 0x64, virtual false, abstract: false, final false
  static inline ::System::DateTime DateTimeOffsetToDateTime(::System::DateTimeOffset value);

  /// @brief Method DateTimeOffsetToString, addr 0x42d96d0, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW DateTimeOffsetToString(::System::DateTimeOffset value);

  /// @brief Method DateTimeToString, addr 0x42d9248, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW DateTimeToString(::System::DateTime value);

  /// @brief Method DateToString, addr 0x42d91c0, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW DateToString(::System::DateTime value);

  /// @brief Method DayTimeDurationToString, addr 0x42d92d0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW DayTimeDurationToString(::System::TimeSpan value);

  /// @brief Method DecimalToInt32, addr 0x42d9e58, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t DecimalToInt32(::System::Decimal value);

  /// @brief Method DecimalToInt64, addr 0x42da030, size 0x1d8, virtual false, abstract: false, final false
  static inline int64_t DecimalToInt64(::System::Decimal value);

  /// @brief Method DecimalToUInt64, addr 0x42da208, size 0x1cc, virtual false, abstract: false, final false
  static inline uint64_t DecimalToUInt64(::System::Decimal value);

  /// @brief Method DurationToString, addr 0x42d9330, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW DurationToString(::System::TimeSpan value);

  /// @brief Method GDayOffsetToString, addr 0x42d9768, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GDayOffsetToString(::System::DateTimeOffset value);

  /// @brief Method GDayToString, addr 0x42d9390, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GDayToString(::System::DateTime value);

  /// @brief Method GMonthDayOffsetToString, addr 0x42d9898, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GMonthDayOffsetToString(::System::DateTimeOffset value);

  /// @brief Method GMonthDayToString, addr 0x42d94a0, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GMonthDayToString(::System::DateTime value);

  /// @brief Method GMonthOffsetToString, addr 0x42d9800, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GMonthOffsetToString(::System::DateTimeOffset value);

  /// @brief Method GMonthToString, addr 0x42d9418, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GMonthToString(::System::DateTime value);

  /// @brief Method GYearMonthOffsetToString, addr 0x42d99c8, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GYearMonthOffsetToString(::System::DateTimeOffset value);

  /// @brief Method GYearMonthToString, addr 0x42d95b0, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GYearMonthToString(::System::DateTime value);

  /// @brief Method GYearOffsetToString, addr 0x42d9930, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW GYearOffsetToString(::System::DateTimeOffset value);

  /// @brief Method GYearToString, addr 0x42d9528, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW GYearToString(::System::DateTime value);

  /// @brief Method Int32ToByte, addr 0x42da3d4, size 0xe4, virtual false, abstract: false, final false
  static inline uint8_t Int32ToByte(int32_t value);

  /// @brief Method Int32ToInt16, addr 0x42da4b8, size 0xe4, virtual false, abstract: false, final false
  static inline int16_t Int32ToInt16(int32_t value);

  /// @brief Method Int32ToSByte, addr 0x42da59c, size 0xe4, virtual false, abstract: false, final false
  static inline int8_t Int32ToSByte(int32_t value);

  /// @brief Method Int32ToUInt16, addr 0x42da680, size 0xe4, virtual false, abstract: false, final false
  static inline uint16_t Int32ToUInt16(int32_t value);

  /// @brief Method Int64ToInt32, addr 0x42da764, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t Int64ToInt32(int64_t value);

  /// @brief Method Int64ToUInt32, addr 0x42da848, size 0xe4, virtual false, abstract: false, final false
  static inline uint32_t Int64ToUInt32(int64_t value);

  /// @brief Method IsDerivedFrom, addr 0x42d8090, size 0xc0, virtual false, abstract: false, final false
  static inline bool IsDerivedFrom(::System::Type* derivedType, ::System::Type* baseType);

  static inline ::System::Xml::Schema::XmlBaseConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic);

  static inline ::System::Xml::Schema::XmlBaseConverter* New_ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic, ::System::Type* clrTypeDefault);

  static inline ::System::Xml::Schema::XmlBaseConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::XmlBaseConverter* New_ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method QNameToString, addr 0x42d7f68, size 0x120, virtual false, abstract: false, final false
  static inline ::StringW QNameToString(::System::Xml::XmlQualifiedName* name);

  /// @brief Method QNameToString, addr 0x42d9a60, size 0x214, virtual false, abstract: false, final false
  static inline ::StringW QNameToString(::System::Xml::XmlQualifiedName* qname, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method StringToBase64Binary, addr 0x42d8400, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StringToBase64Binary(::StringW value);

  /// @brief Method StringToDate, addr 0x42d8490, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToDate(::StringW value);

  /// @brief Method StringToDateOffset, addr 0x42d88b4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToDateOffset(::StringW value);

  /// @brief Method StringToDateTime, addr 0x42d850c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToDateTime(::StringW value);

  /// @brief Method StringToDateTimeOffset, addr 0x42d8930, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToDateTimeOffset(::StringW value);

  /// @brief Method StringToDayTimeDuration, addr 0x42d8588, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan StringToDayTimeDuration(::StringW value);

  /// @brief Method StringToDuration, addr 0x42d85e8, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan StringToDuration(::StringW value);

  /// @brief Method StringToGDay, addr 0x42d8648, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToGDay(::StringW value);

  /// @brief Method StringToGDayOffset, addr 0x42d89ac, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToGDayOffset(::StringW value);

  /// @brief Method StringToGMonth, addr 0x42d86c4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToGMonth(::StringW value);

  /// @brief Method StringToGMonthDay, addr 0x42d8740, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToGMonthDay(::StringW value);

  /// @brief Method StringToGMonthDayOffset, addr 0x42d8aa4, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToGMonthDayOffset(::StringW value);

  /// @brief Method StringToGMonthOffset, addr 0x42d8a28, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToGMonthOffset(::StringW value);

  /// @brief Method StringToGYear, addr 0x42d87bc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToGYear(::StringW value);

  /// @brief Method StringToGYearMonth, addr 0x42d8838, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToGYearMonth(::StringW value);

  /// @brief Method StringToGYearMonthOffset, addr 0x42d8b9c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToGYearMonthOffset(::StringW value);

  /// @brief Method StringToGYearOffset, addr 0x42d8b20, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToGYearOffset(::StringW value);

  /// @brief Method StringToHexBinary, addr 0x42d8c18, size 0x134, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> StringToHexBinary(::StringW value);

  /// @brief Method StringToQName, addr 0x42d8d4c, size 0x2b0, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* StringToQName(::StringW value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method StringToTime, addr 0x42d8ffc, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime StringToTime(::StringW value);

  /// @brief Method StringToTimeOffset, addr 0x42d9078, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset StringToTimeOffset(::StringW value);

  /// @brief Method StringToYearMonthDuration, addr 0x42d90f4, size 0x60, virtual false, abstract: false, final false
  static inline ::System::TimeSpan StringToYearMonthDuration(::StringW value);

  /// @brief Method TimeOffsetToString, addr 0x42d9cfc, size 0x98, virtual false, abstract: false, final false
  static inline ::StringW TimeOffsetToString(::System::DateTimeOffset value);

  /// @brief Method TimeToString, addr 0x42d9c74, size 0x88, virtual false, abstract: false, final false
  static inline ::StringW TimeToString(::System::DateTime value);

  /// @brief Method ToBoolean, addr 0x42d53ac, size 0xc4, virtual true, abstract: false, final false
  inline bool ToBoolean(::StringW value);

  /// @brief Method ToBoolean, addr 0x42d4fc4, size 0xf8, virtual true, abstract: false, final false
  inline bool ToBoolean(::System::DateTime value);

  /// @brief Method ToBoolean, addr 0x42d5470, size 0xc4, virtual true, abstract: false, final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToBoolean, addr 0x42d50bc, size 0x100, virtual true, abstract: false, final false
  inline bool ToBoolean(double_t value);

  /// @brief Method ToBoolean, addr 0x42d51bc, size 0xf8, virtual true, abstract: false, final false
  inline bool ToBoolean(int32_t value);

  /// @brief Method ToBoolean, addr 0x42d52b4, size 0xf8, virtual true, abstract: false, final false
  inline bool ToBoolean(int64_t value);

  /// @brief Method ToDateTime, addr 0x42d5a24, size 0xc4, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::StringW value);

  /// @brief Method ToDateTime, addr 0x42d5630, size 0x104, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::DateTimeOffset value);

  /// @brief Method ToDateTime, addr 0x42d5ae8, size 0xc4, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTime, addr 0x42d5534, size 0xfc, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(bool value);

  /// @brief Method ToDateTime, addr 0x42d5734, size 0x100, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(double_t value);

  /// @brief Method ToDateTime, addr 0x42d5834, size 0xf8, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int32_t value);

  /// @brief Method ToDateTime, addr 0x42d592c, size 0xf8, virtual true, abstract: false, final false
  inline ::System::DateTime ToDateTime(int64_t value);

  /// @brief Method ToDateTimeOffset, addr 0x42d5ca8, size 0xc8, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::StringW value);

  /// @brief Method ToDateTimeOffset, addr 0x42d5bac, size 0xfc, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value);

  /// @brief Method ToDateTimeOffset, addr 0x42d5d70, size 0xc8, virtual true, abstract: false, final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal, addr 0x42d5e38, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::StringW value);

  /// @brief Method ToDecimal, addr 0x42d5f00, size 0xc8, virtual true, abstract: false, final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble, addr 0x42d63ac, size 0xc4, virtual true, abstract: false, final false
  inline double_t ToDouble(::StringW value);

  /// @brief Method ToDouble, addr 0x42d60c4, size 0xf8, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::DateTime value);

  /// @brief Method ToDouble, addr 0x42d6470, size 0xc4, virtual true, abstract: false, final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToDouble, addr 0x42d5fc8, size 0xfc, virtual true, abstract: false, final false
  inline double_t ToDouble(bool value);

  /// @brief Method ToDouble, addr 0x42d61bc, size 0xf8, virtual true, abstract: false, final false
  inline double_t ToDouble(int32_t value);

  /// @brief Method ToDouble, addr 0x42d62b4, size 0xf8, virtual true, abstract: false, final false
  inline double_t ToDouble(int64_t value);

  /// @brief Method ToInt32, addr 0x42d6920, size 0xc4, virtual true, abstract: false, final false
  inline int32_t ToInt32(::StringW value);

  /// @brief Method ToInt32, addr 0x42d6630, size 0xf8, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::DateTime value);

  /// @brief Method ToInt32, addr 0x42d69e4, size 0xc4, virtual true, abstract: false, final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt32, addr 0x42d6534, size 0xfc, virtual true, abstract: false, final false
  inline int32_t ToInt32(bool value);

  /// @brief Method ToInt32, addr 0x42d6728, size 0x100, virtual true, abstract: false, final false
  inline int32_t ToInt32(double_t value);

  /// @brief Method ToInt32, addr 0x42d6828, size 0xf8, virtual true, abstract: false, final false
  inline int32_t ToInt32(int64_t value);

  /// @brief Method ToInt64, addr 0x42d6e94, size 0xc4, virtual true, abstract: false, final false
  inline int64_t ToInt64(::StringW value);

  /// @brief Method ToInt64, addr 0x42d6ba4, size 0xf8, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::DateTime value);

  /// @brief Method ToInt64, addr 0x42d6f58, size 0xc4, virtual true, abstract: false, final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToInt64, addr 0x42d6aa8, size 0xfc, virtual true, abstract: false, final false
  inline int64_t ToInt64(bool value);

  /// @brief Method ToInt64, addr 0x42d6c9c, size 0x100, virtual true, abstract: false, final false
  inline int64_t ToInt64(double_t value);

  /// @brief Method ToInt64, addr 0x42d6d9c, size 0xf8, virtual true, abstract: false, final false
  inline int64_t ToInt64(int32_t value);

  /// @brief Method ToSingle, addr 0x42d711c, size 0xc4, virtual true, abstract: false, final false
  inline float_t ToSingle(::StringW value);

  /// @brief Method ToSingle, addr 0x42d71e0, size 0xc4, virtual true, abstract: false, final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ToSingle, addr 0x42d701c, size 0x100, virtual true, abstract: false, final false
  inline float_t ToSingle(double_t value);

  /// @brief Method ToString, addr 0x42d738c, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTime value);

  /// @brief Method ToString, addr 0x42d7470, size 0xf0, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::DateTimeOffset value);

  /// @brief Method ToString, addr 0x42d7560, size 0x110, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Decimal value);

  /// @brief Method ToString, addr 0x42d7ac4, size 0x14, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value);

  /// @brief Method ToString, addr 0x42d7a10, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToString, addr 0x42d72a4, size 0xe8, virtual true, abstract: false, final false
  inline ::StringW ToString(bool value);

  /// @brief Method ToString, addr 0x42d7670, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString(double_t value);

  /// @brief Method ToString, addr 0x42d7924, size 0xec, virtual true, abstract: false, final false
  inline ::StringW ToString(float_t value);

  /// @brief Method ToString, addr 0x42d775c, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString(int32_t value);

  /// @brief Method ToString, addr 0x42d7840, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString(int64_t value);

  /// @brief Method UntypedAtomicToDateTime, addr 0x42da92c, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTime UntypedAtomicToDateTime(::StringW value);

  /// @brief Method UntypedAtomicToDateTimeOffset, addr 0x42da9a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::DateTimeOffset UntypedAtomicToDateTimeOffset(::StringW value);

  /// @brief Method YearMonthDurationToString, addr 0x42d9d94, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW YearMonthDurationToString(::System::TimeSpan value);

  constexpr ::System::Type* const& __cordl_internal_get_clrTypeDefault() const;

  constexpr ::System::Type*& __cordl_internal_get_clrTypeDefault();

  constexpr ::System::Xml::Schema::XmlSchemaType* const& __cordl_internal_get_schemaType() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_schemaType();

  constexpr ::System::Xml::Schema::XmlTypeCode const& __cordl_internal_get_typeCode() const;

  constexpr ::System::Xml::Schema::XmlTypeCode& __cordl_internal_get_typeCode();

  constexpr void __cordl_internal_set_clrTypeDefault(::System::Type* value);

  constexpr void __cordl_internal_set_schemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_typeCode(::System::Xml::Schema::XmlTypeCode value);

  /// @brief Method .ctor, addr 0x42d4f24, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic);

  /// @brief Method .ctor, addr 0x42d4f80, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlBaseConverter* converterAtomic, ::System::Type* clrTypeDefault);

  /// @brief Method .ctor, addr 0x42d4d70, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method .ctor, addr 0x42d4e4c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  static inline ::System::Type* getStaticF_BooleanType();

  static inline ::System::Type* getStaticF_ByteArrayType();

  static inline ::System::Type* getStaticF_ByteType();

  static inline ::System::Type* getStaticF_DateTimeOffsetType();

  static inline ::System::Type* getStaticF_DateTimeType();

  static inline ::System::Type* getStaticF_DecimalType();

  static inline ::System::Type* getStaticF_DoubleType();

  static inline ::System::Type* getStaticF_ICollectionType();

  static inline ::System::Type* getStaticF_IEnumerableType();

  static inline ::System::Type* getStaticF_IListType();

  static inline ::System::Type* getStaticF_Int16Type();

  static inline ::System::Type* getStaticF_Int32Type();

  static inline ::System::Type* getStaticF_Int64Type();

  static inline ::System::Type* getStaticF_ObjectArrayType();

  static inline ::System::Type* getStaticF_ObjectType();

  static inline ::System::Type* getStaticF_SByteType();

  static inline ::System::Type* getStaticF_SingleType();

  static inline ::System::Type* getStaticF_StringArrayType();

  static inline ::System::Type* getStaticF_StringType();

  static inline ::System::Type* getStaticF_TimeSpanType();

  static inline ::System::Type* getStaticF_UInt16Type();

  static inline ::System::Type* getStaticF_UInt32Type();

  static inline ::System::Type* getStaticF_UInt64Type();

  static inline ::System::Type* getStaticF_UriType();

  static inline ::System::Type* getStaticF_XPathItemType();

  static inline ::System::Type* getStaticF_XPathNavigatorType();

  static inline ::System::Type* getStaticF_XmlAtomicValueArrayType();

  static inline ::System::Type* getStaticF_XmlAtomicValueType();

  static inline ::System::Type* getStaticF_XmlQualifiedNameType();

  /// @brief Method get_DefaultClrType, addr 0x42d8088, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_DefaultClrType();

  /// @brief Method get_SchemaType, addr 0x42d7e64, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_TypeCode, addr 0x42d7e6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_XmlTypeName, addr 0x42d7e74, size 0xf4, virtual false, abstract: false, final false
  inline ::StringW get_XmlTypeName();

  static inline void setStaticF_BooleanType(::System::Type* value);

  static inline void setStaticF_ByteArrayType(::System::Type* value);

  static inline void setStaticF_ByteType(::System::Type* value);

  static inline void setStaticF_DateTimeOffsetType(::System::Type* value);

  static inline void setStaticF_DateTimeType(::System::Type* value);

  static inline void setStaticF_DecimalType(::System::Type* value);

  static inline void setStaticF_DoubleType(::System::Type* value);

  static inline void setStaticF_ICollectionType(::System::Type* value);

  static inline void setStaticF_IEnumerableType(::System::Type* value);

  static inline void setStaticF_IListType(::System::Type* value);

  static inline void setStaticF_Int16Type(::System::Type* value);

  static inline void setStaticF_Int32Type(::System::Type* value);

  static inline void setStaticF_Int64Type(::System::Type* value);

  static inline void setStaticF_ObjectArrayType(::System::Type* value);

  static inline void setStaticF_ObjectType(::System::Type* value);

  static inline void setStaticF_SByteType(::System::Type* value);

  static inline void setStaticF_SingleType(::System::Type* value);

  static inline void setStaticF_StringArrayType(::System::Type* value);

  static inline void setStaticF_StringType(::System::Type* value);

  static inline void setStaticF_TimeSpanType(::System::Type* value);

  static inline void setStaticF_UInt16Type(::System::Type* value);

  static inline void setStaticF_UInt32Type(::System::Type* value);

  static inline void setStaticF_UInt64Type(::System::Type* value);

  static inline void setStaticF_UriType(::System::Type* value);

  static inline void setStaticF_XPathItemType(::System::Type* value);

  static inline void setStaticF_XPathNavigatorType(::System::Type* value);

  static inline void setStaticF_XmlAtomicValueArrayType(::System::Type* value);

  static inline void setStaticF_XmlAtomicValueType(::System::Type* value);

  static inline void setStaticF_XmlQualifiedNameType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseConverter(XmlBaseConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseConverter(XmlBaseConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7743 };

  /// @brief Field schemaType, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___schemaType;

  /// @brief Field typeCode, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlTypeCode ___typeCode;

  /// @brief Field clrTypeDefault, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___clrTypeDefault;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlBaseConverter, ___schemaType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlBaseConverter, ___typeCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlBaseConverter, ___clrTypeDefault) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlBaseConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlBaseConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlBaseConverter*, "System.Xml.Schema", "XmlBaseConverter");
