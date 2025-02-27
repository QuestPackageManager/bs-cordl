#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/OptionalAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OptionalAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class OptionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::OptionalAttribute);
// Dependencies System.Attribute
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.OptionalAttribute
class CORDL_TYPE OptionalAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::InteropServices::OptionalAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d222d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OptionalAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OptionalAttribute(OptionalAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OptionalAttribute(OptionalAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OptionalAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::OptionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OptionalAttribute*, "System.Runtime.InteropServices", "OptionalAttribute");
