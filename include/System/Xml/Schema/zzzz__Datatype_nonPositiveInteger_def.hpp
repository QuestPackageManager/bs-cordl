#pragma once
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
// Type: System.Xml.Schema::Datatype_nonPositiveInteger
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11665))
// CS Name: ::System.Xml.Schema::Datatype_nonPositiveInteger*
class CORDL_TYPE Datatype_nonPositiveInteger : public ::System::Xml::Schema::Datatype_integer {
public:
  // Declarations
  /// @brief Field numeric10FacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_numeric10FacetsChecker, put = setStaticF_numeric10FacetsChecker))::System::Xml::Schema::FacetsChecker* numeric10FacetsChecker;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline void setStaticF_numeric10FacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_numeric10FacetsChecker();

  /// @brief Method get_FacetsChecker addr 0x28bbe10 size 0x58 virtual true final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_TypeCode addr 0x28bbe68 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  static inline ::System::Xml::Schema::Datatype_nonPositiveInteger* New_ctor();

  /// @brief Method .ctor addr 0x28bbe70 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_nonPositiveInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_nonPositiveInteger(Datatype_nonPositiveInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_nonPositiveInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_nonPositiveInteger(Datatype_nonPositiveInteger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_nonPositiveInteger();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_nonPositiveInteger, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_nonPositiveInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_nonPositiveInteger*, "System.Xml.Schema", "Datatype_nonPositiveInteger");
