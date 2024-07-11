#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlGuid.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SqlGuid)
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
struct Guid;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Data::SqlTypes {
struct SqlGuid;
}
// Write type traits
MARK_VAL_T(::System::Data::SqlTypes::SqlGuid);
// Type: System.Data.SqlTypes::SqlGuid
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data::SqlTypes {
// Is value type: true
// CS Name: ::System.Data.SqlTypes::SqlGuid
struct CORDL_TYPE SqlGuid {
public:
  // Declarations
  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null))::System::Data::SqlTypes::SqlGuid Null;

  __declspec(property(get = get_Value))::System::Guid Value;

  /// @brief Field s_rgiGuidOrder, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rgiGuidOrder, put = setStaticF_s_rgiGuidOrder))::ArrayW<int32_t, ::Array<int32_t>*> s_rgiGuidOrder;

  /// @brief Field s_sizeOfGuid, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_sizeOfGuid, put = setStaticF_s_sizeOfGuid)) int32_t s_sizeOfGuid;

  /// @brief Convert operator to "::System::Data::SqlTypes::INullable"
  constexpr operator ::System::Data::SqlTypes::INullable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::Xml::Serialization::IXmlSerializable"
  constexpr operator ::System::Xml::Serialization::IXmlSerializable*();

  /// @brief Method Compare, addr 0x2d554f0, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::EComparison Compare(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y);

  /// @brief Method CompareTo, addr 0x2d5591c, size 0x114, virtual false, abstract: false, final false
  inline int32_t CompareTo(::System::Data::SqlTypes::SqlGuid value);

  /// @brief Method CompareTo, addr 0x2d55834, size 0xe8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* value);

  /// @brief Method Equals, addr 0x2d55a30, size 0xc0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* value);

  /// @brief Method GetHashCode, addr 0x2d55af0, size 0x3c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetXsdType, addr 0x2d55d70, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Xml::XmlQualifiedName* GetXsdType(::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.GetSchema, addr 0x2d55b2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Schema::XmlSchema* System_Xml_Serialization_IXmlSerializable_GetSchema();

  /// @brief Method System.Xml.Serialization.IXmlSerializable.ReadXml, addr 0x2d55b34, size 0x120, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_ReadXml(::System::Xml::XmlReader* reader);

  /// @brief Method System.Xml.Serialization.IXmlSerializable.WriteXml, addr 0x2d55c54, size 0x11c, virtual true, abstract: false, final true
  inline void System_Xml_Serialization_IXmlSerializable_WriteXml(::System::Xml::XmlWriter* writer);

  /// @brief Method ToString, addr 0x2d554ac, size 0x44, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x2d553dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool fNull);

  /// @brief Method .ctor, addr 0x2d553e4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Guid g);

  static inline ::System::Data::SqlTypes::SqlGuid getStaticF_Null();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_rgiGuidOrder();

  static inline int32_t getStaticF_s_sizeOfGuid();

  /// @brief Method get_IsNull, addr 0x2d55410, size 0x10, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Value, addr 0x2d55420, size 0x68, virtual false, abstract: false, final false
  inline ::System::Guid get_Value();

  /// @brief Convert to "::System::Data::SqlTypes::INullable"
  constexpr ::System::Data::SqlTypes::INullable* i___System__Data__SqlTypes__INullable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::Xml::Serialization::IXmlSerializable"
  constexpr ::System::Xml::Serialization::IXmlSerializable* i___System__Xml__Serialization__IXmlSerializable();

  /// @brief Method op_Equality, addr 0x2d555e8, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_Equality(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y);

  /// @brief Method op_GreaterThan, addr 0x2d55770, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_GreaterThan(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y);

  /// @brief Method op_Implicit, addr 0x2d55488, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlGuid op_Implicit___System__Data__SqlTypes__SqlGuid(::System::Guid x);

  /// @brief Method op_LessThan, addr 0x2d556ac, size 0xc4, virtual false, abstract: false, final false
  static inline ::System::Data::SqlTypes::SqlBoolean op_LessThan(::System::Data::SqlTypes::SqlGuid x, ::System::Data::SqlTypes::SqlGuid y);

  static inline void setStaticF_Null(::System::Data::SqlTypes::SqlGuid value);

  static inline void setStaticF_s_rgiGuidOrder(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_sizeOfGuid(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SqlGuid();

  // Ctor Parameters [CppParam { name: "m_value", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
  constexpr SqlGuid(::ArrayW<uint8_t, ::Array<uint8_t>*> m_value) noexcept;

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::SqlTypes::SqlGuid, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Data::SqlTypes::SqlGuid, m_value) == 0x0, "Offset mismatch!");

} // namespace System::Data::SqlTypes
DEFINE_IL2CPP_ARG_TYPE(::System::Data::SqlTypes::SqlGuid, "System.Data.SqlTypes", "SqlGuid");
