#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlSingle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlSingle)
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
namespace System::Data::SqlTypes {
struct SqlMoney;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml::Schema {
class XmlSchema;
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
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlSingle;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlSingle);
// Dependencies System.Data.SqlTypes.INullable, System.IComparable, System.Xml.Serialization.IXmlSerializable
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlSingle
struct CORDL_TYPE SqlSingle {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlSingle MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::Data::SqlTypes::SqlSingle MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlSingle Null;

  __declspec(property(get = get_Value)) float_t Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Data::SqlTypes::SqlSingle Zero;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x41d3818, size 0x14c, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlSingle value);

  /// @brief Method CompareTo, addr 0x41d3714, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x41d3964, size 0x13c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x41d3aa0, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x41d3d94, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x41d3650, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method LessThan, addr 0x41d35e4, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x41d3b30, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41d3b38, size 0x120, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x41d3c58, size 0x13c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToSqlDouble, addr 0x41d36bc, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToString, addr 0x41d28c4, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x41d27c4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x41d2844, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(double_t value);

  /// @brief Method .ctor, addr 0x41d27d0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  static inline ::System::Data::SqlTypes::SqlSingle getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlSingle getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlSingle getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlSingle getStaticF_Zero();

  /// @brief Method get_IsNull, addr 0x41cb064, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x41cb074, size 0x48, virtual false, abstract: false, final false
  inline float_t get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x41d29d8, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Addition(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_Division, addr 0x41d2d2c, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Division(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_Equality, addr 0x41d3338, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_Explicit, addr 0x41cb638, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Explicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlDouble x);

  /// @brief Method op_GreaterThan, addr 0x41d3500, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_Implicit, addr 0x41d2e80, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlByte x);

  /// @brief Method op_Implicit, addr 0x41d3274, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlDecimal x);

  /// @brief Method op_Implicit, addr 0x41d2f54, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlInt16 x);

  /// @brief Method op_Implicit, addr 0x41d3020, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlInt32 x);

  /// @brief Method op_Implicit, addr 0x41d30e8, size 0xc8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_Implicit, addr 0x41d31b0, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(::System::Data::SqlTypes::SqlMoney x);

  /// @brief Method op_Implicit, addr 0x41d28a8, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Implicit___System__Data__SqlTypes__SqlSingle(float_t x);

  /// @brief Method op_LessThan, addr 0x41d341c, size 0xe4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_Multiply, addr 0x41d2c10, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Multiply(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_Subtraction, addr 0x41d2af4, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_Subtraction(::System::Data::SqlTypes::SqlSingle x, ::System::Data::SqlTypes::SqlSingle y);

  /// @brief Method op_UnaryNegation, addr 0x41d2938, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlSingle op_UnaryNegation(::System::Data::SqlTypes::SqlSingle x);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlSingle value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlSingle value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlSingle value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlSingle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlSingle();

  // Ctor Parameters [CppParam { name: "_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "float_t", modifiers: "", def_value: None }]
  constexpr SqlSingle(bool _fNotNull, float_t _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11511 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _fNotNull, offset: 0x0, size: 0x1, def value: None
  bool _fNotNull;

  /// @brief Field _value, offset: 0x4, size: 0x4, def value: None
  float_t _value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlSingle, _fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlSingle, _value) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlSingle, 0x8>, "Size mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlSingle, "System.Data.SqlTypes", "SqlSingle");
