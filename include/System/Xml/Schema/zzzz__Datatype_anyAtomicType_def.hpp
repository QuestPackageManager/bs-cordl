#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
CORDL_MODULE_EXPORT(Datatype_anyAtomicType)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_anyAtomicType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_anyAtomicType);
// Type: System.Xml.Schema::Datatype_anyAtomicType
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11624))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11625))
// CS Name: ::System.Xml.Schema::Datatype_anyAtomicType*
class CORDL_TYPE Datatype_anyAtomicType : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  /// @brief Method CreateValueConverter, addr 0x28b7848, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x28b78a0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_TypeCode, addr 0x28b78a8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  static inline ::System::Xml::Schema::Datatype_anyAtomicType* New_ctor();

  /// @brief Method .ctor, addr 0x28b78b0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_anyAtomicType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_anyAtomicType(Datatype_anyAtomicType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_anyAtomicType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_anyAtomicType(Datatype_anyAtomicType const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_anyAtomicType();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_anyAtomicType, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_anyAtomicType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_anyAtomicType*, "System.Xml.Schema", "Datatype_anyAtomicType");
