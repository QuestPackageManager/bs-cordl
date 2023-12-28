#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Numeric2FacetsChecker)
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Object;
}
namespace System {
class Exception;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Xml::Schema {
class Numeric2FacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Numeric2FacetsChecker);
// Type: System.Xml.Schema::Numeric2FacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11686))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11688))
// CS Name: ::System.Xml.Schema::Numeric2FacetsChecker*
class CORDL_TYPE Numeric2FacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Method CheckValueFacets addr 0x28c1828 size 0x60 virtual true final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets addr 0x28c1888 size 0x280 virtual true final false
  inline ::System::Exception* CheckValueFacets(double_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets addr 0x28c1bc0 size 0x10 virtual true final false
  inline ::System::Exception* CheckValueFacets(float_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration addr 0x28c1bd0 size 0x78 virtual true final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration addr 0x28c1b08 size 0xb8 virtual false final false
  inline bool MatchEnumeration(double_t value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter);

  static inline ::System::Xml::Schema::Numeric2FacetsChecker* New_ctor();

  /// @brief Method .ctor addr 0x28c1c48 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Numeric2FacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Numeric2FacetsChecker(Numeric2FacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Numeric2FacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Numeric2FacetsChecker(Numeric2FacetsChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Numeric2FacetsChecker();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Numeric2FacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Numeric2FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Numeric2FacetsChecker*, "System.Xml.Schema", "Numeric2FacetsChecker");
