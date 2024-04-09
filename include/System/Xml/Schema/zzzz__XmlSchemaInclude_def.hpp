#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaExternal_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaInclude)
namespace System::Xml::Schema {
class XmlSchemaAnnotation;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaInclude;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaInclude);
// Type: System.Xml.Schema::XmlSchemaInclude
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaInclude*
class CORDL_TYPE XmlSchemaInclude : public ::System::Xml::Schema::XmlSchemaExternal {
public:
  // Declarations
  /// @brief Field annotation, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_annotation, put = __cordl_internal_set_annotation))::System::Xml::Schema::XmlSchemaAnnotation* annotation;

  /// @brief Method AddAnnotation, addr 0x2d14dbc, size 0x8, virtual true, abstract: false, final false
  inline void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation);

  static inline ::System::Xml::Schema::XmlSchemaInclude* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaAnnotation*& __cordl_internal_get_annotation();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaAnnotation*> const& __cordl_internal_get_annotation() const;

  constexpr void __cordl_internal_set_annotation(::System::Xml::Schema::XmlSchemaAnnotation* value);

  /// @brief Method .ctor, addr 0x2d14d9c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaInclude();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInclude", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaInclude(XmlSchemaInclude&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaInclude", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaInclude(XmlSchemaInclude const&) = delete;

  /// @brief Field annotation, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaAnnotation* ___annotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaInclude, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaInclude, ___annotation) == 0x68, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaInclude);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaInclude*, "System.Xml.Schema", "XmlSchemaInclude");
