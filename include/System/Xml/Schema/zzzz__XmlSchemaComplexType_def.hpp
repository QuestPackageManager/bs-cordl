#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaComplexType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaDerivationMethod_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaComplexType)
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class XmlSchemaAnyAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaContentModel;
}
namespace System::Xml::Schema {
struct XmlSchemaContentProcessing;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml::Schema {
struct XmlSchemaForm;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
namespace System::Xml::Schema {
class XmlSchema;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaComplexType);
// Dependencies System.Xml.Schema.XmlSchemaDerivationMethod, System.Xml.Schema.XmlSchemaType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaComplexType
class CORDL_TYPE XmlSchemaComplexType : public ::System::Xml::Schema::XmlSchemaType {
public:
  // Declarations
  __declspec(property(get = get_AnyAttribute, put = set_AnyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* AnyAttribute;

  __declspec(property(get = get_AttributeUses)) ::System::Xml::Schema::XmlSchemaObjectTable* AttributeUses;

  __declspec(property(get = get_AttributeWildcard)) ::System::Xml::Schema::XmlSchemaAnyAttribute* AttributeWildcard;

  __declspec(property(get = get_Attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* Attributes;

  __declspec(property(get = get_Block, put = set_Block)) ::System::Xml::Schema::XmlSchemaDerivationMethod Block;

  __declspec(property(get = get_BlockResolved)) ::System::Xml::Schema::XmlSchemaDerivationMethod BlockResolved;

  __declspec(property(get = get_ContentModel, put = set_ContentModel)) ::System::Xml::Schema::XmlSchemaContentModel* ContentModel;

  __declspec(property(get = get_ContentType)) ::System::Xml::Schema::XmlSchemaContentType ContentType;

  __declspec(property(get = get_ContentTypeParticle)) ::System::Xml::Schema::XmlSchemaParticle* ContentTypeParticle;

  __declspec(property(put = set_HasWildCard)) bool HasWildCard;

  __declspec(property(get = get_IsAbstract, put = set_IsAbstract)) bool IsAbstract;

  __declspec(property(get = get_IsMixed, put = set_IsMixed)) bool IsMixed;

  __declspec(property(get = get_LocalElements)) ::System::Xml::Schema::XmlSchemaObjectTable* LocalElements;

  __declspec(property(get = get_Particle, put = set_Particle)) ::System::Xml::Schema::XmlSchemaParticle* Particle;

  /// @brief Field anyAttribute, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_anyAttribute, put = __cordl_internal_set_anyAttribute)) ::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;

  /// @brief Field anyTypeLax, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_anyTypeLax, put = setStaticF_anyTypeLax)) ::System::Xml::Schema::XmlSchemaComplexType* anyTypeLax;

  /// @brief Field anyTypeSkip, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_anyTypeSkip, put = setStaticF_anyTypeSkip)) ::System::Xml::Schema::XmlSchemaComplexType* anyTypeSkip;

  /// @brief Field attributeUses, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeUses, put = __cordl_internal_set_attributeUses)) ::System::Xml::Schema::XmlSchemaObjectTable* attributeUses;

  /// @brief Field attributeWildcard, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeWildcard, put = __cordl_internal_set_attributeWildcard)) ::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;

  /// @brief Field attributes, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes, put = __cordl_internal_set_attributes)) ::System::Xml::Schema::XmlSchemaObjectCollection* attributes;

  /// @brief Field block, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block)) ::System::Xml::Schema::XmlSchemaDerivationMethod block;

  /// @brief Field blockResolved, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_blockResolved, put = __cordl_internal_set_blockResolved)) ::System::Xml::Schema::XmlSchemaDerivationMethod blockResolved;

  /// @brief Field contentModel, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_contentModel, put = __cordl_internal_set_contentModel)) ::System::Xml::Schema::XmlSchemaContentModel* contentModel;

  /// @brief Field contentTypeParticle, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_contentTypeParticle, put = __cordl_internal_set_contentTypeParticle)) ::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle;

  /// @brief Field localElements, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_localElements, put = __cordl_internal_set_localElements)) ::System::Xml::Schema::XmlSchemaObjectTable* localElements;

  /// @brief Field particle, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_particle, put = __cordl_internal_set_particle)) ::System::Xml::Schema::XmlSchemaParticle* particle;

  /// @brief Field pvFlags, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_pvFlags, put = __cordl_internal_set_pvFlags)) uint8_t pvFlags;

  /// @brief Field untypedAnyType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_untypedAnyType, put = setStaticF_untypedAnyType)) ::System::Xml::Schema::XmlSchemaComplexType* untypedAnyType;

  /// @brief Method ClearCompiledState, addr 0x42bb308, size 0x70, virtual false, abstract: false, final false
  inline void ClearCompiledState();

  /// @brief Method Clone, addr 0x42baddc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone();

  /// @brief Method Clone, addr 0x42b6ecc, size 0x66c, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObject* Clone(::System::Xml::Schema::XmlSchema* parentSchema);

  /// @brief Method CloneAttributes, addr 0x42b8f0c, size 0x230, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaObjectCollection* CloneAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* attributes);

  /// @brief Method CloneGroupBaseParticles, addr 0x42bb3f8, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaObjectCollection* CloneGroupBaseParticles(::System::Xml::Schema::XmlSchemaObjectCollection* groupBaseParticles,
                                                                                          ::System::Xml::Schema::XmlSchema* parentSchema);

  /// @brief Method CloneParticle, addr 0x42bb060, size 0x2a8, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaParticle* CloneParticle(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchema* parentSchema);

  /// @brief Method ContainsIdAttribute, addr 0x42baa40, size 0x39c, virtual false, abstract: false, final false
  inline bool ContainsIdAttribute(bool findAll);

  /// @brief Method CreateAnyType, addr 0x42ba38c, size 0x310, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing processContents);

  /// @brief Method GetResolvedElementForm, addr 0x42bb5d0, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaForm GetResolvedElementForm(::System::Xml::Schema::XmlSchema* parentSchema, ::System::Xml::Schema::XmlSchemaElement* element);

  /// @brief Method HasAttributeQNameRef, addr 0x42b8db0, size 0x15c, virtual false, abstract: false, final false
  static inline bool HasAttributeQNameRef(::System::Xml::Schema::XmlSchemaObjectCollection* attributes);

  /// @brief Method HasParticleRef, addr 0x42bade4, size 0x27c, virtual false, abstract: false, final false
  static inline bool HasParticleRef(::System::Xml::Schema::XmlSchemaParticle* particle, ::System::Xml::Schema::XmlSchema* parentSchema);

  static inline ::System::Xml::Schema::XmlSchemaComplexType* New_ctor();

  /// @brief Method SetAttributeWildcard, addr 0x42baa20, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method SetAttributes, addr 0x42baa38, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);

  /// @brief Method SetBlockResolved, addr 0x42baa18, size 0x8, virtual false, abstract: false, final false
  inline void SetBlockResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method SetContentTypeParticle, addr 0x42baa10, size 0x8, virtual false, abstract: false, final false
  inline void SetContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_anyAttribute() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_anyAttribute();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_attributeUses() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_attributeUses();

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute* const& __cordl_internal_get_attributeWildcard() const;

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_attributeWildcard();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_attributes() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_attributes();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_block() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_block();

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_blockResolved() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_blockResolved();

  constexpr ::System::Xml::Schema::XmlSchemaContentModel* const& __cordl_internal_get_contentModel() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentModel*& __cordl_internal_get_contentModel();

  constexpr ::System::Xml::Schema::XmlSchemaParticle* const& __cordl_internal_get_contentTypeParticle() const;

  constexpr ::System::Xml::Schema::XmlSchemaParticle*& __cordl_internal_get_contentTypeParticle();

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable* const& __cordl_internal_get_localElements() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectTable*& __cordl_internal_get_localElements();

  constexpr ::System::Xml::Schema::XmlSchemaParticle* const& __cordl_internal_get_particle() const;

  constexpr ::System::Xml::Schema::XmlSchemaParticle*& __cordl_internal_get_particle();

  constexpr uint8_t const& __cordl_internal_get_pvFlags() const;

  constexpr uint8_t& __cordl_internal_get_pvFlags();

  constexpr void __cordl_internal_set_anyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributeUses(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_attributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_attributes(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_blockResolved(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_contentModel(::System::Xml::Schema::XmlSchemaContentModel* value);

  constexpr void __cordl_internal_set_contentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr void __cordl_internal_set_localElements(::System::Xml::Schema::XmlSchemaObjectTable* value);

  constexpr void __cordl_internal_set_particle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr void __cordl_internal_set_pvFlags(uint8_t value);

  /// @brief Method .ctor, addr 0x42ba69c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_anyTypeLax();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_anyTypeSkip();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_untypedAnyType();

  /// @brief Method get_AnyAttribute, addr 0x42ba918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();

  /// @brief Method get_AnyType, addr 0x42ba77c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* get_AnyType();

  /// @brief Method get_AnyTypeContentValidator, addr 0x42ba70c, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator();

  /// @brief Method get_AttributeUses, addr 0x42ba940, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses();

  /// @brief Method get_AttributeWildcard, addr 0x42ba9a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard();

  /// @brief Method get_Attributes, addr 0x42ba8b4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();

  /// @brief Method get_Block, addr 0x42ba858, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_Block();

  /// @brief Method get_BlockResolved, addr 0x42ba938, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDerivationMethod get_BlockResolved();

  /// @brief Method get_ContentModel, addr 0x42ba894, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentModel* get_ContentModel();

  /// @brief Method get_ContentType, addr 0x42ba928, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType get_ContentType();

  /// @brief Method get_ContentTypeParticle, addr 0x42ba930, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle();

  /// @brief Method get_IsAbstract, addr 0x42ba82c, size 0xc, virtual false, abstract: false, final false
  inline bool get_IsAbstract();

  /// @brief Method get_IsMixed, addr 0x42ba868, size 0xc, virtual true, abstract: false, final false
  inline bool get_IsMixed();

  /// @brief Method get_LocalElements, addr 0x42ba9ac, size 0x64, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectTable* get_LocalElements();

  /// @brief Method get_Particle, addr 0x42ba8a4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* get_Particle();

  /// @brief Method get_UntypedAnyType, addr 0x42ba7d4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* get_UntypedAnyType();

  static inline void setStaticF_anyTypeLax(::System::Xml::Schema::XmlSchemaComplexType* value);

  static inline void setStaticF_anyTypeSkip(::System::Xml::Schema::XmlSchemaComplexType* value);

  static inline void setStaticF_untypedAnyType(::System::Xml::Schema::XmlSchemaComplexType* value);

  /// @brief Method set_AnyAttribute, addr 0x42ba920, size 0x8, virtual false, abstract: false, final false
  inline void set_AnyAttribute(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method set_Block, addr 0x42ba860, size 0x8, virtual false, abstract: false, final false
  inline void set_Block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  /// @brief Method set_ContentModel, addr 0x42ba89c, size 0x8, virtual false, abstract: false, final false
  inline void set_ContentModel(::System::Xml::Schema::XmlSchemaContentModel* value);

  /// @brief Method set_HasWildCard, addr 0x42baa28, size 0x10, virtual false, abstract: false, final false
  inline void set_HasWildCard(bool value);

  /// @brief Method set_IsAbstract, addr 0x42ba838, size 0x20, virtual false, abstract: false, final false
  inline void set_IsAbstract(bool value);

  /// @brief Method set_IsMixed, addr 0x42ba874, size 0x20, virtual true, abstract: false, final false
  inline void set_IsMixed(bool value);

  /// @brief Method set_Particle, addr 0x42ba8ac, size 0x8, virtual false, abstract: false, final false
  inline void set_Particle(::System::Xml::Schema::XmlSchemaParticle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaComplexType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaComplexType(XmlSchemaComplexType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaComplexType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaComplexType(XmlSchemaComplexType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7662 };

  /// @brief Field block, offset: 0x94, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___block;

  /// @brief Field contentModel, offset: 0x98, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaContentModel* ___contentModel;

  /// @brief Field particle, offset: 0xa0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaParticle* ___particle;

  /// @brief Field attributes, offset: 0xa8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___attributes;

  /// @brief Field anyAttribute, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___anyAttribute;

  /// @brief Field contentTypeParticle, offset: 0xb8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaParticle* ___contentTypeParticle;

  /// @brief Field blockResolved, offset: 0xc0, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___blockResolved;

  /// @brief Field localElements, offset: 0xc8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___localElements;

  /// @brief Field attributeUses, offset: 0xd0, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectTable* ___attributeUses;

  /// @brief Field attributeWildcard, offset: 0xd8, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___attributeWildcard;

  /// @brief Field pvFlags, offset: 0xe0, size: 0x1, def value: None
  uint8_t ___pvFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___block) == 0x94, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___contentModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___particle) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___attributes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___anyAttribute) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___contentTypeParticle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___blockResolved) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___localElements) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___attributeUses) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___attributeWildcard) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___pvFlags) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaComplexType, 0xe8>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexType*, "System.Xml.Schema", "XmlSchemaComplexType");
