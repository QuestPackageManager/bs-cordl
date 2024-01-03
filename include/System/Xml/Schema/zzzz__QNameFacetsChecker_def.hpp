#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
CORDL_MODULE_EXPORT(QNameFacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class QNameFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::QNameFacetsChecker);
// Type: System.Xml.Schema::QNameFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11692))
// CS Name: ::System.Xml.Schema::QNameFacetsChecker*
class CORDL_TYPE QNameFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Method CheckValueFacets, addr 0x28c2d24, size 0x12c, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x28c2e50, size 0x1c4, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x28c3124, size 0x114, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x28c3014, size 0x110, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::System::Xml::XmlQualifiedName* value, ::System::Collections::ArrayList* enumeration);

  static inline ::System::Xml::Schema::QNameFacetsChecker* New_ctor();

  /// @brief Method .ctor, addr 0x28c3238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "QNameFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QNameFacetsChecker(QNameFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QNameFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QNameFacetsChecker(QNameFacetsChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QNameFacetsChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::QNameFacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::QNameFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::QNameFacetsChecker*, "System.Xml.Schema", "QNameFacetsChecker");
