#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlBinary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlBinary)
namespace System::Data::SqlTypes {
struct EComparison;
}
namespace System::Data::SqlTypes {
class INullable;
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
struct SqlBinary;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlBinary);
// Dependencies
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

  /// @brief Method CompareTo, addr 0x5ecf8a4, size 0x150, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlBinary value);

  /// @brief Method CompareTo, addr 0x5ecf7a4, size 0x100, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x5ecfa54, size 0x128, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x5ecfc30, size 0xbc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x5ed002c, size 0x90, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method HashByteArray, addr 0x5ecfbd0, size 0x60, virtual false, abstract: false, final false
  static inline int32_t HashByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbValue, int32_t length);

  /// @brief Method PerformCompareByte, addr 0x5ecf364, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::EComparison PerformCompareByte(::ArrayW<uint8_t, ::Array<uint8_t>*> x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x5ecfcec, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x5ecfcf4, size 0x1c4, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x5ecfeb8, size 0x174, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x5ecf230, size 0x134, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x5ecf098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x5ecf0a0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Data::SqlTypes::SqlBinary getStaticF_Null();

  /// @brief Method get_IsNull, addr 0x5ecf128, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x5ecf138, size 0xdc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Equality, addr 0x5ecf484, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y);

  /// @brief Method op_GreaterThan, addr 0x5ecf6a0, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y);

  /// @brief Method op_Implicit, addr 0x5ecf214, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBinary op_Implicit___System__Data__SqlTypes__SqlBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  /// @brief Method op_LessThan, addr 0x5ecf59c, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlBinary x, ::System::Data::SqlTypes::SqlBinary y);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlBinary value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlBinary();

  // Ctor Parameters [CppParam { name: "_value", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr SqlBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> _value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13859 };

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
