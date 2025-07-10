#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaComplexContentExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContent_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaComplexContentExtension)
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaComplexContentExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaComplexContentExtension);
// Dependencies System.Xml.Schema.XmlSchemaContent
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaComplexContentExtension
class CORDL_TYPE XmlSchemaComplexContentExtension : public ::System::Xml::Schema::XmlSchemaContent {
public:
  // Declarations
  __declspec(property(get = get_AnyAttribute, put = set_AnyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_Attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* Attributes;

  __declspec(property(get = get_BaseTypeName, put = set_BaseTypeName)) ::System::Xml::XmlQualifiedName* BaseTypeName;

  __declspec(property(get = get_Particle, put = set_Particle)) ::System::Xml::Schema::XmlSchemaParticle* Particle;

  /// @brief Field anyAttribute, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field attributes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;

  /// @brief Field baseTypeName, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_baseTypeName, put = __cordl_internal_set_baseTypeName)) ::System::Xml::XmlQualifiedName* baseTypeName;

  /// @brief Field particle, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_particle, put = __cordl_internal_set_particle)) ::System::Xml::Schema::XmlSchemaParticle* particle;

  static inline ::System::Xml::Schema::XmlSchemaComplexContentExtension* New_ctor();

  /// @brief Method SetAttributes, addr 0x42bb5e8, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_attributes();

  constexpr ::System::Xml::XmlQualifiedName* const& __cordl_internal_get_baseTypeName() const;

  constexpr ::System::Xml::XmlQualifiedName*& __cordl_internal_get_baseTypeName();

  constexpr ::System::Xml::Schema::XmlSchemaParticle* const& __cordl_internal_get_particle() const;

  constexpr ::System::Xml::Schema::XmlSchemaParticle*& __cordl_internal_get_particle();

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_baseTypeName(::System::Xml::XmlQualifiedName* value);

  constexpr void __cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaParticle* value);

  /// @brief Method .ctor, addr 0x42bb5f0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AnyAttribute, addr 0x42bb5d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();

  /// @brief Method get_Attributes, addr 0x42bb5d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();

  /// @brief Method get_BaseTypeName, addr 0x42bb520, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* get_BaseTypeName();

  /// @brief Method get_Particle, addr 0x42bb5c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* get_Particle();

  /// @brief Method set_AnyAttribute, addr 0x42bb5e0, size 0x8, virtual false, abstract: false, final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_BaseTypeName, addr 0x42bb528, size 0x98, virtual false, abstract: false, final false
  inline void set_BaseTypeName(::System::Xml::XmlQualifiedName* value);

  /// @brief Method set_Particle, addr 0x42bb5c8, size 0x8, virtual false, abstract: false, final false
  inline void set_Particle(::System::Xml::Schema::XmlSchemaParticle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaComplexContentExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexContentExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaComplexContentExtension(XmlSchemaComplexContentExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexContentExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaComplexContentExtension(XmlSchemaComplexContentExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7665 };

  /// @brief Field particle, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaParticle* ___particle;

  /// @brief Field attributes, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___attributes;

  /// @brief Field anyAttribute, offset: 0x60, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  /// @brief Field baseTypeName, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___baseTypeName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContentExtension, ___particle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContentExtension, ___attributes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContentExtension, ___anyAttribute) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexContentExtension, ___baseTypeName) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaComplexContentExtension, 0x70>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexContentExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexContentExtension*, "System.Xml.Schema", "XmlSchemaComplexContentExtension");
