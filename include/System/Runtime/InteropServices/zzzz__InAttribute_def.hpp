#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/InAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class InAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::InAttribute);
// Type: System.Runtime.InteropServices::InAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: ::System.Runtime.InteropServices::InAttribute*
class CORDL_TYPE InAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::InteropServices::InAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3c9ed00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InAttribute(InAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InAttribute(InAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3325 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::InAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::InAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::InAttribute*, "System.Runtime.InteropServices", "InAttribute");
