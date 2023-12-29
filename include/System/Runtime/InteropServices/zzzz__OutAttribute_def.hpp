#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OutAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class OutAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::OutAttribute);
// Type: System.Runtime.InteropServices::OutAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3323))
// CS Name: ::System.Runtime.InteropServices::OutAttribute*
class CORDL_TYPE OutAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::InteropServices::OutAttribute* New_ctor();

  /// @brief Method .ctor addr 0x237e3f0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OutAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OutAttribute(OutAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OutAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OutAttribute(OutAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OutAttribute();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OutAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::OutAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OutAttribute*, "System.Runtime.InteropServices", "OutAttribute");
