#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IntrinsicAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IntrinsicAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IntrinsicAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IntrinsicAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IntrinsicAttribute
class CORDL_TYPE IntrinsicAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::IntrinsicAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d18954, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntrinsicAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntrinsicAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntrinsicAttribute(IntrinsicAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntrinsicAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntrinsicAttribute(IntrinsicAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IntrinsicAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IntrinsicAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IntrinsicAttribute*, "System.Runtime.CompilerServices", "IntrinsicAttribute");
