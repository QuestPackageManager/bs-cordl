#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBinary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/SqlTypes/zzzz__INullable_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBinary)
namespace System::Data::SqlTypes {
struct EComparison;
}
namespace System::Data::SqlTypes {
struct SqlBoolean;
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
struct SqlBinary;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlBinary);
// Dependencies System.Data.SqlTypes.INullable, System.IComparable, System.Xml.Serialization.IXmlSerializable
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: System.Data.SqlTypes.SqlBinary
struct CORDL_TYPE SqlBinary {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::System::Data::SqlTypes::SqlBinary Null;

  __declspec(property(get = get_Value)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Value;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method CompareTo, addr 0x41be830, size 0x144, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlBinary value);

  /// @brief Method CompareTo, addr 0x41be72c, size 0x104, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x41be9d0, size 0x134, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x41bebc4, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x41bef5c, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method HashByteArray, addr 0x41beb5c, size 0x68, virtual false, abstract: false, final false
  static inline int32_t HashByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbValue, int32_t length);

  /// @brief Method PerformCompareByte, addr 0x41be31c, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::EComparison PerformCompareByte(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x41bec88, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x41bec90, size 0x1a0, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x41bee30, size 0x12c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x41be208, size 0x114, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x41be084, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x41be08c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Data::SqlTypes::SqlBinary getStaticF_Null();

  /// @brief Method get_IsNull, addr 0x41be104, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x41be114, size 0xd4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Equality, addr 0x41be418, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y);

  /// @brief Method op_GreaterThan, addr 0x41be62c, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y);

  /// @brief Method op_Implicit, addr 0x41be1e8, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBinary op_Implicit___System__Data__SqlTypes__SqlBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method op_LessThan, addr 0x41be52c, size 0x100, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlBinary value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBinary();

  // Ctor Parameters [CppParam { name: "_value", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr SqlBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11497 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _value, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> _value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Data::SqlTypes::SqlBinary, _value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlBinary, 0x8>, "Size mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlBinary, "System.Data.SqlTypes", "SqlBinary");
