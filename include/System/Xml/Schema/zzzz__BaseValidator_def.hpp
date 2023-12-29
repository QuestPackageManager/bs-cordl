#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseValidator)
// Forward declare root types
namespace System::Xml::Schema {
class BaseValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::BaseValidator);
// Type: System.Xml.Schema::BaseValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11521))
// CS Name: ::System.Xml.Schema::BaseValidator*
class CORDL_TYPE BaseValidator : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "BaseValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseValidator(BaseValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseValidator(BaseValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseValidator();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::BaseValidator, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::BaseValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BaseValidator*, "System.Xml.Schema", "BaseValidator");
