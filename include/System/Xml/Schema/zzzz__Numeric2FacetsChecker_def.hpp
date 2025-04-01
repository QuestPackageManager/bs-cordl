#pragma once
// IWYU pragma private; include "System/Xml/Schema/Numeric2FacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Numeric2FacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class Numeric2FacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Numeric2FacetsChecker);
// Dependencies System.Xml.Schema.FacetsChecker
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Numeric2FacetsChecker
class CORDL_TYPE Numeric2FacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Method CheckValueFacets, addr 0x43b3e14, size 0x60, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x43b3e74, size 0x2b8, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(double_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x43b41f0, size 0x10, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(float_t value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x43b4200, size 0x78, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x43b412c, size 0xc4, virtual false, abstract: false, final false
  inline bool MatchEnumeration(double_t value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlValueConverter* valueConverter);

  static inline ::System::Xml::Schema::Numeric2FacetsChecker* New_ctor();

  /// @brief Method .ctor, addr 0x43a02e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Numeric2FacetsChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Numeric2FacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Numeric2FacetsChecker(Numeric2FacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Numeric2FacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Numeric2FacetsChecker(Numeric2FacetsChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Numeric2FacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Numeric2FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Numeric2FacetsChecker*, "System.Xml.Schema", "Numeric2FacetsChecker");
