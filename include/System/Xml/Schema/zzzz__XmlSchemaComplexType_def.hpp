#pragma once
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
struct XmlSchemaContentProcessing;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaComplexType;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaComplexType);
// Type: System.Xml.Schema::XmlSchemaComplexType
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaComplexType*
class CORDL_TYPE XmlSchemaComplexType : public ::System::Xml::Schema::XmlSchemaType {
public:
  // Declarations
  __declspec(property(get = get_ContentTypeParticle))::System::Xml::Schema::XmlSchemaParticle* ContentTypeParticle;

  __declspec(property(put = set_IsMixed)) bool IsMixed;

  /// @brief Field anyTypeLax, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_anyTypeLax, put = setStaticF_anyTypeLax))::System::Xml::Schema::XmlSchemaComplexType* anyTypeLax;

  /// @brief Field anyTypeSkip, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_anyTypeSkip, put = setStaticF_anyTypeSkip))::System::Xml::Schema::XmlSchemaComplexType* anyTypeSkip;

  /// @brief Field attributeWildcard, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeWildcard, put = __cordl_internal_set_attributeWildcard))::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;

  /// @brief Field block, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_block, put = __cordl_internal_set_block))::System::Xml::Schema::XmlSchemaDerivationMethod block;

  /// @brief Field contentTypeParticle, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_contentTypeParticle, put = __cordl_internal_set_contentTypeParticle))::System::Xml::Schema::XmlSchemaParticle* contentTypeParticle;

  /// @brief Field pvFlags, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_pvFlags, put = __cordl_internal_set_pvFlags)) uint8_t pvFlags;

  /// @brief Field untypedAnyType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_untypedAnyType, put = setStaticF_untypedAnyType))::System::Xml::Schema::XmlSchemaComplexType* untypedAnyType;

  /// @brief Method CreateAnyType, addr 0x29b0f94, size 0x2e4, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* CreateAnyType(::System::Xml::Schema::XmlSchemaContentProcessing processContents);

  static inline ::System::Xml::Schema::XmlSchemaComplexType* New_ctor();

  /// @brief Method SetAttributeWildcard, addr 0x29b1858, size 0x8, virtual false, abstract: false, final false
  inline void SetAttributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  /// @brief Method SetContentTypeParticle, addr 0x29b1850, size 0x8, virtual false, abstract: false, final false
  inline void SetContentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr ::System::Xml::Schema::XmlSchemaAnyAttribute*& __cordl_internal_get_attributeWildcard();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnyAttribute*> const& __cordl_internal_get_attributeWildcard() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod const& __cordl_internal_get_block() const;

  constexpr ::System::Xml::Schema::XmlSchemaDerivationMethod& __cordl_internal_get_block();

  constexpr ::System::Xml::Schema::XmlSchemaParticle*& __cordl_internal_get_contentTypeParticle();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaParticle*> const& __cordl_internal_get_contentTypeParticle() const;

  constexpr uint8_t const& __cordl_internal_get_pvFlags() const;

  constexpr uint8_t& __cordl_internal_get_pvFlags();

  constexpr void __cordl_internal_set_attributeWildcard(::System::Xml::Schema::XmlSchemaAnyAttribute* value);

  constexpr void __cordl_internal_set_block(::System::Xml::Schema::XmlSchemaDerivationMethod value);

  constexpr void __cordl_internal_set_contentTypeParticle(::System::Xml::Schema::XmlSchemaParticle* value);

  constexpr void __cordl_internal_set_pvFlags(uint8_t value);

  /// @brief Method .ctor, addr 0x29b1278, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_anyTypeLax();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_anyTypeSkip();

  static inline ::System::Xml::Schema::XmlSchemaComplexType* getStaticF_untypedAnyType();

  /// @brief Method get_AnyType, addr 0x29b17d4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaComplexType* get_AnyType();

  /// @brief Method get_AnyTypeContentValidator, addr 0x29b1344, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::ContentValidator* get_AnyTypeContentValidator();

  /// @brief Method get_ContentTypeParticle, addr 0x29b1848, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaParticle* get_ContentTypeParticle();

  static inline void setStaticF_anyTypeLax(::System::Xml::Schema::XmlSchemaComplexType* value);

  static inline void setStaticF_anyTypeSkip(::System::Xml::Schema::XmlSchemaComplexType* value);

  static inline void setStaticF_untypedAnyType(::System::Xml::Schema::XmlSchemaComplexType* value);

  /// @brief Method set_IsMixed, addr 0x29b182c, size 0x1c, virtual true, abstract: false, final false
  inline void set_IsMixed(bool value);

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

  /// @brief Field block, offset: 0x3c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDerivationMethod ___block;

  /// @brief Field contentTypeParticle, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaParticle* ___contentTypeParticle;

  /// @brief Field attributeWildcard, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnyAttribute* ___attributeWildcard;

  /// @brief Field pvFlags, offset: 0x50, size: 0x1, def value: None
  uint8_t ___pvFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaComplexType, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___block) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___contentTypeParticle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___attributeWildcard) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaComplexType, ___pvFlags) == 0x50, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaComplexType);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaComplexType*, "System.Xml.Schema", "XmlSchemaComplexType");
