#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlString.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__SqlCompareOptions_def.hpp"
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlString)
namespace System::Data::SqlTypes {
struct EComparison;
}
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlCompareOptions;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Text {
class UnicodeEncoding;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class IXmlSerializable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlString;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlString);
// Type: System.Data.SqlTypes::SqlString
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlString
struct CORDL_TYPE SqlString {
public:
  // Declarations
  /// @brief Field BinarySort, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BinarySort, put = setStaticF_BinarySort)) int32_t BinarySort;

  /// @brief Field BinarySort2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BinarySort2, put = setStaticF_BinarySort2)) int32_t BinarySort2;

  /// @brief Field IgnoreCase, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_IgnoreCase, put = setStaticF_IgnoreCase)) int32_t IgnoreCase;

  /// @brief Field IgnoreKanaType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_IgnoreKanaType, put = setStaticF_IgnoreKanaType)) int32_t IgnoreKanaType;

  /// @brief Field IgnoreNonSpace, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_IgnoreNonSpace, put = setStaticF_IgnoreNonSpace)) int32_t IgnoreNonSpace;

  /// @brief Field IgnoreWidth, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_IgnoreWidth, put = setStaticF_IgnoreWidth)) int32_t IgnoreWidth;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x20
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::Data::SqlTypes::SqlString Null;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Field s_iDefaultFlag, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_iDefaultFlag, put = setStaticF_s_iDefaultFlag))::System::Data::SqlTypes::SqlCompareOptions s_iDefaultFlag;

  /// @brief Field s_iValidCompareOptionMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_iValidCompareOptionMask, put = setStaticF_s_iValidCompareOptionMask))::System::Globalization::CompareOptions s_iValidCompareOptionMask;

  /// @brief Field s_iValidSqlCompareOptionMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_iValidSqlCompareOptionMask, put = setStaticF_s_iValidSqlCompareOptionMask))::System::Data::SqlTypes::SqlCompareOptions s_iValidSqlCompareOptionMask;

  /// @brief Field s_lcidBinary, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_lcidBinary, put = setStaticF_s_lcidBinary)) int32_t s_lcidBinary;

  /// @brief Field s_lcidUSEnglish, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_lcidUSEnglish, put = setStaticF_s_lcidUSEnglish)) int32_t s_lcidUSEnglish;

  /// @brief Field s_unicodeEncoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_unicodeEncoding, put = setStaticF_s_unicodeEncoding))::System::Text::UnicodeEncoding* s_unicodeEncoding;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method Compare, addr 0x2d28998, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean Compare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y, ::System::Data::SqlTypes::EComparison ecExpectedResult);

  /// @brief Method CompareBinary, addr 0x2d285b8, size 0x1c4, virtual false, abstract: false, final false
  static inline int32_t CompareBinary(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);

  /// @brief Method CompareBinary2, addr 0x2d2877c, size 0x178, virtual false, abstract: false, final false
  static inline int32_t CompareBinary2(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);

  /// @brief Method CompareOptionsFromSqlCompareOptions, addr 0x2d288f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Globalization::CompareOptions CompareOptionsFromSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions);

  /// @brief Method CompareTo, addr 0x2d28d24, size 0xc0, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlString value);

  /// @brief Method CompareTo, addr 0x2d28c28, size 0xfc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x2d28de4, size 0x150, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method FBinarySort, addr 0x2d28c08, size 0x20, virtual false, abstract: false, final false
  inline bool FBinarySort();

  /// @brief Method GetHashCode, addr 0x2d28f34, size 0x20c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x2d29308, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method SetCompareInfo, addr 0x2d281b0, size 0x80, virtual false, abstract: false, final false
  inline void SetCompareInfo();

  /// @brief Method StringCompare, addr 0x2d2838c, size 0x22c, virtual false, abstract: false, final false
  static inline int32_t StringCompare(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x2d29140, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x2d29148, size 0xf4, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x2d2923c, size 0xcc, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x2d28244, size 0x18, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ValidateSqlCompareOptions, addr 0x2d27fb0, size 0xb0, virtual false, abstract: false, final false
  static inline void ValidateSqlCompareOptions(::System::Data::SqlTypes::SqlCompareOptions compareOptions);

  /// @brief Method .ctor, addr 0x2d28060, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW data);

  /// @brief Method .ctor, addr 0x2d27f24, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW data, int32_t lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions);

  /// @brief Method .ctor, addr 0x2d27f14, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x2d2811c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int32_t lcid, ::System::Data::SqlTypes::SqlCompareOptions compareOptions, ::StringW data, ::System::Globalization::CompareInfo* cmpInfo);

  static inline int32_t getStaticF_BinarySort();

  static inline int32_t getStaticF_BinarySort2();

  static inline int32_t getStaticF_IgnoreCase();

  static inline int32_t getStaticF_IgnoreKanaType();

  static inline int32_t getStaticF_IgnoreNonSpace();

  static inline int32_t getStaticF_IgnoreWidth();

  static inline ::System::Data::SqlTypes::SqlString getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlCompareOptions getStaticF_s_iDefaultFlag();

  static inline ::System::Globalization::CompareOptions getStaticF_s_iValidCompareOptionMask();

  static inline ::System::Data::SqlTypes::SqlCompareOptions getStaticF_s_iValidSqlCompareOptionMask();

  static inline int32_t getStaticF_s_lcidBinary();

  static inline int32_t getStaticF_s_lcidUSEnglish();

  static inline ::System::Text::UnicodeEncoding* getStaticF_s_unicodeEncoding();

  /// @brief Method get_IsNull, addr 0x2d17db8, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x2d17dc8, size 0x50, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x2d2825c, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlString op_Addition(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);

  /// @brief Method op_Equality, addr 0x2d28ae0, size 0x98, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlString x, ::System::Data::SqlTypes::SqlString y);

  /// @brief Method op_Implicit, addr 0x2d28230, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlString op_Implicit___System__Data__SqlTypes__SqlString(::StringW x);

  static inline void setStaticF_BinarySort(int32_t value);

  static inline void setStaticF_BinarySort2(int32_t value);

  static inline void setStaticF_IgnoreCase(int32_t value);

  static inline void setStaticF_IgnoreKanaType(int32_t value);

  static inline void setStaticF_IgnoreNonSpace(int32_t value);

  static inline void setStaticF_IgnoreWidth(int32_t value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlString value);

  static inline void setStaticF_s_iDefaultFlag(::System::Data::SqlTypes::SqlCompareOptions value);

  static inline void setStaticF_s_iValidCompareOptionMask(::System::Globalization::CompareOptions value);

  static inline void setStaticF_s_iValidSqlCompareOptionMask(::System::Data::SqlTypes::SqlCompareOptions value);

  static inline void setStaticF_s_lcidBinary(int32_t value);

  static inline void setStaticF_s_lcidUSEnglish(int32_t value);

  static inline void setStaticF_s_unicodeEncoding(::System::Text::UnicodeEncoding* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlString();

  // Ctor Parameters [CppParam { name: "m_value", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_cmpInfo", ty: "::System::Globalization::CompareInfo*", modifiers: "",
  // def_value: None }, CppParam { name: "m_lcid", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_flag", ty: "::System::Data::SqlTypes::SqlCompareOptions", modifiers: "",
  // def_value: None }, CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }]
  constexpr SqlString(::StringW m_value, ::System::Globalization::CompareInfo* m_cmpInfo, int32_t m_lcid, ::System::Data::SqlTypes::SqlCompareOptions m_flag, bool m_fNotNull) noexcept;

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  ::StringW m_value;

  /// @brief Field m_cmpInfo, offset: 0x8, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* m_cmpInfo;

  /// @brief Field m_lcid, offset: 0x10, size: 0x4, def value: None
  int32_t m_lcid;

  /// @brief Field m_flag, offset: 0x14, size: 0x4, def value: None
  ::System::Data::SqlTypes::SqlCompareOptions m_flag;

  /// @brief Field m_fNotNull, offset: 0x18, size: 0x1, def value: None
  bool m_fNotNull;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlString, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlString, m_value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlString, m_cmpInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlString, m_lcid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlString, m_flag) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlString, m_fNotNull) == 0x18, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlString, "System.Data.SqlTypes", "SqlString");
