#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlInt16)
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
struct SqlDouble;
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
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlInt16;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlInt16);
// Type: System.Data.SqlTypes::SqlInt16
// SizeInfo { instance_size: 4, native_size: 8, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlInt16
struct CORDL_TYPE SqlInt16 {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue))::System::Data::SqlTypes::SqlInt16 MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue))::System::Data::SqlTypes::SqlInt16 MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::Data::SqlTypes::SqlInt16 Null;

  __declspec(property(get = get_Value)) int16_t Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::System::Data::SqlTypes::SqlInt16 Zero;

  /// @brief Field s_MASKI2, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_MASKI2, put = setStaticF_s_MASKI2)) int32_t s_MASKI2;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x2d43014, size 0x120, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlInt16 value);

  /// @brief Method CompareTo, addr 0x2d42f2c, size 0xe8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x2d43134, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2d431fc, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x2d43458, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x2d42d84, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method LessThan, addr 0x2d42d18, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x2d43230, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x2d43238, size 0x120, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x2d43358, size 0x100, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToSqlDouble, addr 0x2d42df0, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToSqlInt64, addr 0x2d42e48, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlInt64 ToSqlInt64();

  /// @brief Method ToString, addr 0x2d424b8, size 0x20, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2d4248c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x2d42498, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int16_t value);

  static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlInt16 getStaticF_Zero();

  static inline int32_t getStaticF_s_MASKI2();

  /// @brief Method get_IsNull, addr 0x2d3e544, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x2d3e554, size 0x50, virtual false, abstract: false, final false
  inline int16_t get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x2d42564, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Addition(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_Division, addr 0x2d42870, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Division(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_Equality, addr 0x2d42b38, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_Explicit, addr 0x2d42a4c, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Explicit___System__Data__SqlTypes__SqlInt16(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_GreaterThan, addr 0x2d42c78, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_Implicit, addr 0x2d429b0, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Implicit___System__Data__SqlTypes__SqlInt16(::System::Data::SqlTypes::SqlByte x);

  /// @brief Method op_Implicit, addr 0x2d424a8, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Implicit___System__Data__SqlTypes__SqlInt16(int16_t x);

  /// @brief Method op_LessThan, addr 0x2d42bd8, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_Multiply, addr 0x2d42744, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Multiply(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_Subtraction, addr 0x2d42654, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_Subtraction(::System::Data::SqlTypes::SqlInt16 x, ::System::Data::SqlTypes::SqlInt16 y);

  /// @brief Method op_UnaryNegation, addr 0x2d424d8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt16 op_UnaryNegation(::System::Data::SqlTypes::SqlInt16 x);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt16 value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlInt16 value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlInt16 value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlInt16 value);

  static inline void setStaticF_s_MASKI2(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlInt16();

  // Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr SqlInt16(bool m_fNotNull, int16_t m_value) noexcept;

  /// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
  bool m_fNotNull;

  /// @brief Field m_value, offset: 0x2, size: 0x2, def value: None
  int16_t m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlInt16, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt16, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt16, m_value) == 0x2, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlInt16, "System.Data.SqlTypes", "SqlInt16");
