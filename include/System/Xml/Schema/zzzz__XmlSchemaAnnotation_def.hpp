#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAnnotation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAnnotation)
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml {
class XmlAttribute;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAnnotation);
// Dependencies System.Xml.Schema.XmlSchemaObject
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaAnnotation
class CORDL_TYPE XmlSchemaAnnotation : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  __declspec(property(get = get_IdAttribute, put = set_IdAttribute)) ::StringW IdAttribute;

  __declspec(property(get = get_Items)) ::System::Xml::Schema::XmlSchemaObjectCollection* Items;

  /// @brief Field id, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field items, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_items, put = __cordl_internal_set_items)) ::System::Xml::Schema::XmlSchemaObjectCollection* items;

  /// @brief Field moreAttributes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_moreAttributes, put = __cordl_internal_set_moreAttributes)) ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>
      moreAttributes;

  static inline ::System::Xml::Schema::XmlSchemaAnnotation* New_ctor();

  /// @brief Method SetUnhandledAttributes, addr 0x42b97f0, size 0x8, virtual true, abstract: false, final false
  inline void SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes);

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection* const& __cordl_internal_get_items() const;

  constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& __cordl_internal_get_items();

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> const& __cordl_internal_get_moreAttributes() const;

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>& __cordl_internal_get_moreAttributes();

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_items(::System::Xml::Schema::XmlSchemaObjectCollection* value);

  constexpr void __cordl_internal_set_moreAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> value);

  /// @brief Method .ctor, addr 0x42b97f8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Id, addr 0x42b97c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_IdAttribute, addr 0x42b97e0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_IdAttribute();

  /// @brief Method get_Items, addr 0x42b97d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();

  /// @brief Method set_Id, addr 0x42b97d0, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_IdAttribute, addr 0x42b97e8, size 0x8, virtual true, abstract: false, final false
  inline void set_IdAttribute(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAnnotation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAnnotation(XmlSchemaAnnotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAnnotation(XmlSchemaAnnotation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7652 };

  /// @brief Field id, offset: 0x38, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field items, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaObjectCollection* ___items;

  /// @brief Field moreAttributes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> ___moreAttributes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnnotation, ___id) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnnotation, ___items) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnnotation, ___moreAttributes) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAnnotation, 0x50>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnnotation*, "System.Xml.Schema", "XmlSchemaAnnotation");
