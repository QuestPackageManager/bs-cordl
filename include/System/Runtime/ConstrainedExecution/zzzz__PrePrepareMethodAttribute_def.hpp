#pragma once
// IWYU pragma private; include "System/Runtime/ConstrainedExecution/PrePrepareMethodAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(PrePrepareMethodAttribute)
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class PrePrepareMethodAttribute;
}
// Write type traits
MARK_REF_T(::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*);
DEFINE_IL2CPP_CLASS(::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute*, "System.Runtime.ConstrainedExecution", "PrePrepareMethodAttribute");
// Dependencies System.Attribute
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// CS Name: System.Runtime.ConstrainedExecution.PrePrepareMethodAttribute
class CORDL_TYPE PrePrepareMethodAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5b6d5a0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrePrepareMethodAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrePrepareMethodAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrePrepareMethodAttribute(PrePrepareMethodAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrePrepareMethodAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrePrepareMethodAttribute(PrePrepareMethodAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3366 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute) == 0x10, "Size mismatch!");

} // namespace System::Runtime::ConstrainedExecution
