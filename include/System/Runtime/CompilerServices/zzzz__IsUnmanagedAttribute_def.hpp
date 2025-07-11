#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IsUnmanagedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IsUnmanagedAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsUnmanagedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IsUnmanagedAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IsUnmanagedAttribute
class CORDL_TYPE IsUnmanagedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::IsUnmanagedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x485f9d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsUnmanagedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsUnmanagedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsUnmanagedAttribute(IsUnmanagedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsUnmanagedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsUnmanagedAttribute(IsUnmanagedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10536 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IsUnmanagedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IsUnmanagedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsUnmanagedAttribute*, "System.Runtime.CompilerServices", "IsUnmanagedAttribute");
