#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlMoney.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlMoney)
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
}
namespace System::Data::SqlTypes {
struct SqlByte;
}
namespace System::Data::SqlTypes {
struct SqlDecimal;
}
namespace System::Data::SqlTypes {
struct SqlDouble;
}
namespace System::Data::SqlTypes {
struct SqlInt16;
}
namespace System::Data::SqlTypes {
struct SqlInt32;
}
namespace System::Data::SqlTypes {
struct SqlInt64;
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
struct Decimal;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlMoney;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlMoney);
// Dependencies
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlMoney
struct CORDL_TYPE SqlMoney {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlMoney MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::Data::SqlTypes::SqlMoney MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlMoney Null;

  __declspec(property(get = get_Value)) ::System::Decimal Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Data::SqlTypes::SqlMoney Zero;

  /// @brief Field s_dTickBase, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_dTickBase, put = setStaticF_s_dTickBase)) double_t s_dTickBase;

  /// @brief Field s_iMoneyScale, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_iMoneyScale, put = setStaticF_s_iMoneyScale)) int32_t s_iMoneyScale;

  /// @brief Field s_lTickBase, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_lTickBase, put = setStaticF_s_lTickBase)) int64_t s_lTickBase;

  /// @brief Field s_maxLong, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_maxLong, put = setStaticF_s_maxLong)) int64_t s_maxLong;

  /// @brief Field s_minLong, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_minLong, put = setStaticF_s_minLong)) int64_t s_minLong;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x5e7b8a4, size 0x178, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlMoney value);

  /// @brief Method CompareTo, addr 0x5e7b7a0, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x5e7ba1c, size 0x13c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x5e7bb58, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x5e7bee4, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x5e7b634, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method LessThan, addr 0x5e7b5b4, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x5e7bbc4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x5e7bbcc, size 0x180, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x5e7bd4c, size 0x198, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToDecimal, addr 0x5e71f18, size 0x114, virtual false, abstract: false, final false
  inline ::System::Decimal ToDecimal();

  /// @brief Method ToDouble, addr 0x5e74814, size 0x98, virtual false, abstract: false, final false
  inline double_t ToDouble();

  /// @brief Method ToSqlDecimal, addr 0x5e7b714, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDecimal ToSqlDecimal();

  /// @brief Method ToSqlDouble, addr 0x5e7b6b4, size 0x60, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToString, addr 0x5e7a790, size 0x138, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5e7a3a0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x5e7a53c, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::System::Decimal value);

  /// @brief Method .ctor, addr 0x5e7a3bc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x5e7a43c, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x5e7a3ac, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int64_t value, int32_t ignored);

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlMoney getStaticF_Zero();

  static inline double_t getStaticF_s_dTickBase();

  static inline int32_t getStaticF_s_iMoneyScale();

  static inline int64_t getStaticF_s_lTickBase();

  static inline int64_t getStaticF_s_maxLong();

  static inline int64_t getStaticF_s_minLong();

  /// @brief Method get_IsNull, addr 0x5e71f08, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x5e7a6a0, size 0x90, virtual false, abstract: false, final false
  inline ::System::Decimal get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x5e7a9c4, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Addition(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Division, addr 0x5e7aeb4, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Division(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Equality, addr 0x5e7b338, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Explicit, addr 0x5e72f88, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Explicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlDecimal x);

  /// @brief Method op_GreaterThan, addr 0x5e7b4e0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Implicit, addr 0x5e7aff4, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlByte x);

  /// @brief Method op_Implicit, addr 0x5e7b0c8, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlInt16 x);

  /// @brief Method op_Implicit, addr 0x5e7b198, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlInt32 x);

  /// @brief Method op_Implicit, addr 0x5e7b268, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_Implicit, addr 0x5e7a730, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(::System::Decimal x);

  /// @brief Method op_Implicit, addr 0x5e7a75c, size 0x34, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Implicit___System__Data__SqlTypes__SqlMoney(int64_t x);

  /// @brief Method op_LessThan, addr 0x5e7b40c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Multiply, addr 0x5e7ad74, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Multiply(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_Subtraction, addr 0x5e7ab9c, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_Subtraction(::System::Data::SqlTypes::SqlMoney x, ::System::Data::SqlTypes::SqlMoney y);

  /// @brief Method op_UnaryNegation, addr 0x5e7a8c8, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlMoney op_UnaryNegation(::System::Data::SqlTypes::SqlMoney x);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlMoney value);

  static inline void setStaticF_s_dTickBase(double_t value);

  static inline void setStaticF_s_iMoneyScale(int32_t value);

  static inline void setStaticF_s_lTickBase(int64_t value);

  static inline void setStaticF_s_maxLong(int64_t value);

  static inline void setStaticF_s_minLong(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlMoney();

  // Ctor Parameters [CppParam { name: "_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr SqlMoney(bool _fNotNull, int64_t _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field _fNotNull, offset: 0x0, size: 0x1, def value: None
  bool _fNotNull;

  /// @brief Field _value, offset: 0x8, size: 0x8, def value: None
  int64_t _value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlMoney, _fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlMoney, _value) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlMoney, 0x10>, "Size mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlMoney, "System.Data.SqlTypes", "SqlMoney");
