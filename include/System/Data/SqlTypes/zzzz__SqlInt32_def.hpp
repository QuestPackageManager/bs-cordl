#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlInt32.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlInt32)
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
struct SqlInt16;
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
struct SqlInt32;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlInt32);
// Type: System.Data.SqlTypes::SqlInt32
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlInt32
struct CORDL_TYPE SqlInt32 {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlInt32 MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::Data::SqlTypes::SqlInt32 MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlInt32 Null;

  __declspec(property(get = get_Value)) int32_t Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Data::SqlTypes::SqlInt32 Zero;

  /// @brief Field s_iIntMin, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_iIntMin, put = setStaticF_s_iIntMin)) int64_t s_iIntMin;

  /// @brief Field s_lBitNotIntMax, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lBitNotIntMax, put = setStaticF_s_lBitNotIntMax)) int64_t s_lBitNotIntMax;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x416c288, size 0x14c, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlInt32 value);

  /// @brief Method CompareTo, addr 0x416c184, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x416c3d4, size 0x13c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x416c510, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x416c7f8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x416bfa0, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method LessThan, addr 0x416bf34, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method SameSignInt, addr 0x416b5ec, size 0xc, virtual false, abstract: false, final false
  static inline bool SameSignInt(int32_t x, int32_t y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x416c5a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x416c5a8, size 0x120, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x416c6c8, size 0x130, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToSqlDouble, addr 0x416c00c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToSqlInt64, addr 0x416c064, size 0x58, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlInt64 ToSqlInt64();

  /// @brief Method ToString, addr 0x416b3a4, size 0x74, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x416b378, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x416b384, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  static inline ::System::Data::SqlTypes::SqlInt32 getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlInt32 getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlInt32 getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlInt32 getStaticF_Zero();

  static inline int64_t getStaticF_s_iIntMin();

  static inline int64_t getStaticF_s_lBitNotIntMax();

  /// @brief Method get_IsNull, addr 0x4165818, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x4165828, size 0x8c, virtual false, abstract: false, final false
  inline int32_t get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x416b4b4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Addition(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_Division, addr 0x416b87c, size 0x16c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Division(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_Equality, addr 0x416bca0, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_Explicit, addr 0x416bb88, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Explicit___System__Data__SqlTypes__SqlInt32(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_GreaterThan, addr 0x416be58, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_Implicit, addr 0x416b9e8, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Implicit___System__Data__SqlTypes__SqlInt32(::System::Data::SqlTypes::SqlByte x);

  /// @brief Method op_Implicit, addr 0x416bab8, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Implicit___System__Data__SqlTypes__SqlInt32(::System::Data::SqlTypes::SqlInt16 x);

  /// @brief Method op_Implicit, addr 0x416b394, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Implicit___System__Data__SqlTypes__SqlInt32(int32_t x);

  /// @brief Method op_LessThan, addr 0x416bd7c, size 0xdc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_Multiply, addr 0x416b730, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Multiply(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_Subtraction, addr 0x416b5f8, size 0x138, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_Subtraction(::System::Data::SqlTypes::SqlInt32 x, ::System::Data::SqlTypes::SqlInt32 y);

  /// @brief Method op_UnaryNegation, addr 0x416b418, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlInt32 op_UnaryNegation(::System::Data::SqlTypes::SqlInt32 x);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlInt32 value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlInt32 value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlInt32 value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlInt32 value);

  static inline void setStaticF_s_iIntMin(int64_t value);

  static inline void setStaticF_s_lBitNotIntMax(int64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlInt32();

  // Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SqlInt32(bool m_fNotNull, int32_t m_value) noexcept;

  /// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
  bool m_fNotNull;

  /// @brief Field m_value, offset: 0x4, size: 0x4, def value: None
  int32_t m_value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11470 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlInt32, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt32, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlInt32, m_value) == 0x4, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlInt32, "System.Data.SqlTypes", "SqlInt32");
