#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBoolean.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBoolean)
namespace System::Data::SqlTypes {
class INullable;
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
struct SqlBoolean;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlBoolean);
DEFINE_IL2CPP_CLASS(::System::Data::SqlTypes::SqlBoolean, "System.Data.SqlTypes", "SqlBoolean");
// Dependencies
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlBoolean
struct CORDL_TYPE SqlBoolean {
public:
  // Declarations
  __declspec(property(get = get_ByteValue)) uint8_t ByteValue;

  /// @brief Field False, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_False, put = setStaticF_False)) ::System::Data::SqlTypes::SqlBoolean False;

  __declspec(property(get = get_IsFalse)) bool IsFalse;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_IsTrue)) bool IsTrue;

  /// @brief Field Null, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlBoolean Null;

  /// @brief Field One, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_One, put = setStaticF_One)) ::System::Data::SqlTypes::SqlBoolean One;

  /// @brief Field True, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_True, put = setStaticF_True)) ::System::Data::SqlTypes::SqlBoolean True;

  __declspec(property(get = get_Value)) bool Value;

  /// @brief Field Zero, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::Data::SqlTypes::SqlBoolean Zero;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method And, addr 0x607f8e0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean And(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method CompareTo, addr 0x607fab0, size 0x110, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlBoolean value);

  /// @brief Method CompareTo, addr 0x607f9b0, size 0x100, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x607fbc0, size 0xfc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x607fcbc, size 0x9c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x607fffc, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method Or, addr 0x607f948, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean Or(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x607fd58, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x607fd60, size 0x130, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x607fe90, size 0x16c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x607f74c, size 0xe0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x607e8c8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x607f448, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x607f4b8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, bool fNull);

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_False();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_One();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_True();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_Zero();

  /// @brief Method get_ByteValue, addr 0x607f6b4, size 0x98, virtual false, abstract: false, final false
  inline uint8_t get_ByteValue();

  /// @brief Method get_IsFalse, addr 0x607f4f4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsFalse();

  /// @brief Method get_IsNull, addr 0x607f4d4, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_IsTrue, addr 0x607f4e4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsTrue();

  /// @brief Method get_Value, addr 0x607eebc, size 0x54, virtual false, abstract: false, final false
  inline bool get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_BitwiseAnd, addr 0x607f514, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_BitwiseAnd(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method op_BitwiseOr, addr 0x607f5e4, size 0xd0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_BitwiseOr(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method op_Equality, addr 0x607f82c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method op_Implicit, addr 0x607f504, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Implicit___System__Data__SqlTypes__SqlBoolean(bool x);

  /// @brief Method op_True, addr 0x607ed34, size 0x60, virtual false, abstract: false, final false
  static inline bool op_True(::System::Data::SqlTypes::SqlBoolean x);

  static inline void setStaticF_False(::System::Data::SqlTypes::SqlBoolean value);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlBoolean value);

  static inline void setStaticF_One(::System::Data::SqlTypes::SqlBoolean value);

  static inline void setStaticF_True(::System::Data::SqlTypes::SqlBoolean value);

  static inline void setStaticF_Zero(::System::Data::SqlTypes::SqlBoolean value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBoolean();

  // Ctor Parameters [CppParam { name: "m_value", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr SqlBoolean(uint8_t m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13860 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
  uint8_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlBoolean, m_value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::Data::SqlTypes::SqlBoolean) == 0x1, "Size mismatch!");

} // namespace System::Data::SqlTypes
