#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaAnnotated.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaAnnotated)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
namespace System::Xml {
class XmlAttribute;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaAnnotated;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaAnnotated);
// Type: System.Xml.Schema::XmlSchemaAnnotated
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaAnnotated*
class CORDL_TYPE XmlSchemaAnnotated : public ::System::Xml::Schema::XmlSchemaObject {
public:
  // Declarations
  __declspec(property(get = get_Annotation, put = set_Annotation)) ::System::Xml::Schema::XmlSchemaAnnotation* Annotation;

  __declspec(property(get = get_Id, put = set_Id)) ::StringW Id;

  __declspec(property(get = get_IdAttribute, put = set_IdAttribute)) ::StringW IdAttribute;

  __declspec(property(get = get_UnhandledAttributes, put = set_UnhandledAttributes)) ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> UnhandledAttributes;

  /// @brief Field annotation, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_annotation, put = __cordl_internal_set_annotation)) ::System::Xml::Schema::XmlSchemaAnnotation* annotation;

  /// @brief Field id, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  /// @brief Field moreAttributes, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_moreAttributes, put = __cordl_internal_set_moreAttributes)) ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>
      moreAttributes;

  /// @brief Method AddAnnotation, addr 0x4256a84, size 0x8, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  static inline ::System::Xml::Schema::XmlSchemaAnnotated* New_ctor();

  /// @brief Method SetUnhandledAttributes, addr 0x4256a7c, size 0x8, virtual true, abstract: false, final false
  inline void SetUnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> moreAttributes);

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& __cordl_internal_get_annotation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnnotation*> const& __cordl_internal_get_annotation() const;

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> const& __cordl_internal_get_moreAttributes() const;

  constexpr ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*>& __cordl_internal_get_moreAttributes();

  constexpr void __cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_moreAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> value);

  /// @brief Method .ctor, addr 0x4256a8c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Annotation, addr 0x4256a4c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaAnnotation* get_Annotation();

  /// @brief Method get_Id, addr 0x4256a3c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Id();

  /// @brief Method get_IdAttribute, addr 0x4256a6c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_IdAttribute();

  /// @brief Method get_UnhandledAttributes, addr 0x4256a5c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> get_UnhandledAttributes();

  /// @brief Method set_Annotation, addr 0x4256a54, size 0x8, virtual false, abstract: false, final false
  inline void set_Annotation(::System::Xml::Schema::XmlSchemaAnnotation* value);

  /// @brief Method set_Id, addr 0x4256a44, size 0x8, virtual false, abstract: false, final false
  inline void set_Id(::StringW value);

  /// @brief Method set_IdAttribute, addr 0x4256a74, size 0x8, virtual true, abstract: false, final false
  inline void set_IdAttribute(::StringW value);

  /// @brief Method set_UnhandledAttributes, addr 0x4256a64, size 0x8, virtual false, abstract: false, final false
  inline void set_UnhandledAttributes(::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaAnnotated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaAnnotated(XmlSchemaAnnotated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaAnnotated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaAnnotated(XmlSchemaAnnotated const&) = delete;

  /// @brief Field id, offset: 0x38, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field annotation, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnnotation* ___annotation;

  /// @brief Field moreAttributes, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlAttribute*, ::Array<::System::Xml::XmlAttribute*>*> ___moreAttributes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7621 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaAnnotated, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnnotated, ___id) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnnotated, ___annotation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaAnnotated, ___moreAttributes) == 0x48, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaAnnotated);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaAnnotated*, "System.Xml.Schema", "XmlSchemaAnnotated");
