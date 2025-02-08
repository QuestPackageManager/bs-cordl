#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBoolean)
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
struct SqlBoolean;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlBoolean);
// Dependencies System.Data.SqlTypes.INullable, System.IComparable, System.Xml.Serialization.IXmlSerializable
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

  /// @brief Method And, addr 0x41c3d0c, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean And(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method CompareTo, addr 0x41c3ee8, size 0x104, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlBoolean value);

  /// @brief Method CompareTo, addr 0x41c3de4, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x41c3fec, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x41c40f8, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x41c43f8, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method Or, addr 0x41c3d78, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean Or(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x41c41b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41c41bc, size 0x124, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x41c42e0, size 0x118, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x41c3b78, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x41c2d94, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool value);

  /// @brief Method .ctor, addr 0x41c38ac, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x41c3918, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, bool fNull);

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_False();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_Null();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_One();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_True();

  static inline ::System::Data::SqlTypes::SqlBoolean getStaticF_Zero();

  /// @brief Method get_ByteValue, addr 0x41c3ae4, size 0x94, virtual false, abstract: false, final false
  inline uint8_t get_ByteValue();

  /// @brief Method get_IsFalse, addr 0x41c3954, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsFalse();

  /// @brief Method get_IsNull, addr 0x41c3934, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_IsTrue, addr 0x41c3944, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsTrue();

  /// @brief Method get_Value, addr 0x41c3380, size 0x58, virtual false, abstract: false, final false
  inline bool get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_BitwiseAnd, addr 0x41c3974, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_BitwiseAnd(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method op_BitwiseOr, addr 0x41c3a2c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_BitwiseOr(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method op_Equality, addr 0x41c3c5c, size 0xb0, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlBoolean x, ::System::Data::SqlTypes::SqlBoolean y);

  /// @brief Method op_Implicit, addr 0x41c3964, size 0x10, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Implicit___System__Data__SqlTypes__SqlBoolean(bool x);

  /// @brief Method op_True, addr 0x41c31f0, size 0x5c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11497 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field m_value, offset: 0x0, size: 0x1, def value: None
  uint8_t m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlBoolean, m_value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlBoolean, 0x1>, "Size mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBoolean, "System.Data.SqlTypes", "SqlBoolean");
