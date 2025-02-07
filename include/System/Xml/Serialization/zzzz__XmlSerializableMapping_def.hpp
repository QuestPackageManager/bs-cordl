#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlSerializableMapping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSerializableMapping)
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
namespace System::Xml::Schema {
class XmlSchema;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSerializableMapping;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSerializableMapping);
// Dependencies System.Xml.Serialization.XmlTypeMapping
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlSerializableMapping
class CORDL_TYPE XmlSerializableMapping : public ::System::Xml::Serialization::XmlTypeMapping {
public:
  // Declarations
  /// @brief Field _schema, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__schema, put = __cordl_internal_set__schema)) ::System::Xml::Schema::XmlSchema* _schema;

  /// @brief Field _schemaType, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaType, put = __cordl_internal_set__schemaType)) ::System::Xml::Schema::XmlSchemaComplexType* _schemaType;

  /// @brief Field _schemaTypeName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__schemaTypeName, put = __cordl_internal_set__schemaTypeName)) ::System::Xml::XmlQualifiedName* _schemaTypeName;

  static inline ::System::Xml::Serialization::XmlSerializableMapping* New_ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::StringW elementName, ::StringW ns,
                                                                               ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType, ::StringW xmlTypeNamespace);

  constexpr ::System::Xml::Schema::XmlSchema* const& __cordl_internal_get__schema() const;

  constexpr ::System::Xml::Schema::XmlSchema*& __cordl_internal_get__schema();

  constexpr ::System::Xml::Schema::XmlSchemaComplexType* const& __cordl_internal_get__schemaType() const;

  constexpr ::System::Xml::Schema::XmlSchemaComplexType*& __cordl_internal_get__schemaType();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get__schemaTypeName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get__schemaTypeName();

  constexpr void __cordl_internal_set__schema(::System::Xml::Schema::XmlSchema* value);

  constexpr void __cordl_internal_set__schemaType(::System::Xml::Schema::XmlSchemaComplexType* value);

  constexpr void __cordl_internal_set__schemaTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method .ctor, addr 0x439513c, size 0x75c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlRootAttribute* root, ::StringW elementName, ::StringW ns, ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType,
                    ::StringW xmlTypeNamespace);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSerializableMapping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableMapping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSerializableMapping(XmlSerializableMapping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSerializableMapping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSerializableMapping(XmlSerializableMapping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7467 };

  /// @brief Field _schema, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchema* ____schema;

  /// @brief Field _schemaType, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaComplexType* ____schemaType;

  /// @brief Field _schemaTypeName, offset: 0x88, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ____schemaTypeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlSerializableMapping, ____schema) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializableMapping, ____schemaType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlSerializableMapping, ____schemaTypeName) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSerializableMapping, 0x90>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializableMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializableMapping*, "System.Xml.Serialization", "XmlSerializableMapping");
