#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_nonPositiveInteger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_integer_def.hpp"
CORDL_MODULE_EXPORT(Datatype_nonPositiveInteger)
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_nonPositiveInteger;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_nonPositiveInteger);
// Dependencies System.Xml.Schema.Datatype_integer
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_nonPositiveInteger
class CORDL_TYPE Datatype_nonPositiveInteger : public ::System::Xml::Schema::Datatype_integer {
public:
  // Declarations
  __declspec(property(get = get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_HasValueFacets)) bool HasValueFacets;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  /// @brief Field numeric10FacetsChecker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_numeric10FacetsChecker, put = setStaticF_numeric10FacetsChecker)) ::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker;

  static inline ::System::Xml::Schema::Datatype_nonPositiveInteger* New_ctor();

  /// @brief Method .ctor, addr 0x43b30e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_numeric10FacetsChecker();

  /// @brief Method get_FacetsChecker, addr 0x43bb554, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_HasValueFacets, addr 0x43bb5b4, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasValueFacets();

  /// @brief Method get_TypeCode, addr 0x43bb5ac, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  static inline void setStaticF_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_nonPositiveInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_nonPositiveInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_nonPositiveInteger(Datatype_nonPositiveInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_nonPositiveInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_nonPositiveInteger(Datatype_nonPositiveInteger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7567 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_nonPositiveInteger, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_nonPositiveInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_nonPositiveInteger*, "System.Xml.Schema", "Datatype_nonPositiveInteger");
