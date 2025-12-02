#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlByte)
namespace System::Data::SqlTypes {
class INullable;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
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
struct SqlByte;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlByte);
// Dependencies
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlByte
struct CORDL_TYPE SqlByte {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field MaxValue, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_MaxValue, put = setStaticF_MaxValue)) ::System::Data::SqlTypes::SqlByte MaxValue;

  /// @brief Field MinValue, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_MinValue, put = setStaticF_MinValue)) ::System::Data::SqlTypes::SqlByte MinValue;

  /// @brief Field Null, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlByte Null;

  __declspec(property(get = get_Value)) uint8_t Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x2
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Data::SqlTypes::SqlByte Zero;

  /// @brief Field s_iBitNotByteMax, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_iBitNotByteMax, put = setStaticF_s_iBitNotByteMax)) int32_t s_iBitNotByteMax;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x5e6a07c, size 0x15c, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlByte value);

  /// @brief Method CompareTo, addr 0x5e69f7c, size 0x100, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x5e6a1d8, size 0x130, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x5e6a308, size 0x80, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x5e6a658, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method GreaterThan, addr 0x5e69cc4, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean GreaterThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method LessThan, addr 0x5e69c5c, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean LessThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x5e6a388, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x5e6a390, size 0x13c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x5e6a4cc, size 0x18c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToSqlDouble, addr 0x5e69d2c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlDouble ToSqlDouble();

  /// @brief Method ToSqlInt64, addr 0x5e69e5c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Data::SqlTypes::SqlInt64 ToSqlInt64();

  /// @brief Method ToString, addr 0x5e69348, size 0xa4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5e6926c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x5e69274, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint8_t value);

  static inline ::System::Data::SqlTypes::SqlByte getStaticF_MaxValue();

  static inline ::System::Data::SqlTypes::SqlByte getStaticF_MinValue();

  static inline ::System::Data::SqlTypes::SqlByte getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlByte getStaticF_Zero();

  static inline int32_t getStaticF_s_iBitNotByteMax();

  /// @brief Method get_IsNull, addr 0x5e69284, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x5e69294, size 0x44, virtual false, abstract: false, final false
  inline uint8_t get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Addition, addr 0x5e693ec, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte op_Addition(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method op_Division, addr 0x5e69748, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte op_Division(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method op_Equality, addr 0x5e699f8, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method op_Explicit, addr 0x5e6984c, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte op_Explicit___System__Data__SqlTypes__SqlByte(::System::Data::SqlTypes::SqlInt64 x);

  /// @brief Method op_GreaterThan, addr 0x5e69b90, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method op_Implicit, addr 0x5e6933c, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte op_Implicit___System__Data__SqlTypes__SqlByte(uint8_t x);

  /// @brief Method op_LessThan, addr 0x5e69ac4, size 0xcc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method op_Multiply, addr 0x5e69628, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte op_Multiply(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  /// @brief Method op_Subtraction, addr 0x5e6950c, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlByte op_Subtraction(::System::Data::SqlTypes::SqlByte x, ::System::Data::SqlTypes::SqlByte y);

  static inline void setStaticF_MaxValue(::System::Data::SqlTypes::SqlByte value);

  static inline void setStaticF_MinValue(::System::Data::SqlTypes::SqlByte value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlByte value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlByte value);

  static inline void setStaticF_s_iBitNotByteMax(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlByte();

  // Ctor Parameters [CppParam { name: "m_fNotNull", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr SqlByte(bool m_fNotNull, uint8_t m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13857 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field m_fNotNull, offset: 0x0, size: 0x1, def value: None
  bool m_fNotNull;

  /// @brief Field m_value, offset: 0x1, size: 0x1, def value: None
  uint8_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlByte, m_fNotNull) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlByte, m_value) == 0x1, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlByte, 0x2>, "Size mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlByte, "System.Data.SqlTypes", "SqlByte");
