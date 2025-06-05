#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CompilerGeneratedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CompilerGeneratedAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CompilerGeneratedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CompilerGeneratedAttribute);
// Dependencies System.Attribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CompilerGeneratedAttribute
class CORDL_TYPE CompilerGeneratedAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::CompilerGeneratedAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x3d185a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompilerGeneratedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompilerGeneratedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompilerGeneratedAttribute(CompilerGeneratedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompilerGeneratedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompilerGeneratedAttribute(CompilerGeneratedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3360 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CompilerGeneratedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CompilerGeneratedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilerGeneratedAttribute*, "System.Runtime.CompilerServices", "CompilerGeneratedAttribute");
