#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaImport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaImport)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaImport;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaImport);
// Type: System.Xml.Schema::XmlSchemaImport
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaImport*
class CORDL_TYPE XmlSchemaImport : public ::System::Xml::Schema::XmlSchemaExternal {
public:
  // Declarations
  __declspec(property(get = get_Namespace, put = set_Namespace))::StringW Namespace;

  /// @brief Field annotation, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_annotation, put = __cordl_internal_set_annotation))::System::Xml::Schema::XmlSchemaAnnotation* annotation;

  /// @brief Field ns, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::StringW ns;

  /// @brief Method AddAnnotation, addr 0x2e34d80, size 0x8, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  static inline ::System::Xml::Schema::XmlSchemaImport* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& __cordl_internal_get_annotation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnnotation*> const& __cordl_internal_get_annotation() const;

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr void __cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  /// @brief Method .ctor, addr 0x2e34d50, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Namespace, addr 0x2e34d70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method set_Namespace, addr 0x2e34d78, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaImport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaImport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaImport(XmlSchemaImport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaImport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaImport(XmlSchemaImport const&) = delete;

  /// @brief Field ns, offset: 0x68, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field annotation, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnnotation* ___annotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaImport, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaImport, ___ns) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaImport, ___annotation) == 0x70, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaImport);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaImport*, "System.Xml.Schema", "XmlSchemaImport");
