#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/AsyncStateMachineAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__StateMachineAttribute_def.hpp"
CORDL_MODULE_EXPORT(AsyncStateMachineAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncStateMachineAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncStateMachineAttribute);
// Dependencies System.Runtime.CompilerServices.StateMachineAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.AsyncStateMachineAttribute
class CORDL_TYPE AsyncStateMachineAttribute : public ::System::Runtime::CompilerServices::StateMachineAttribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::AsyncStateMachineAttribute* New_ctor(::System::Type* stateMachineType);

  /// @brief Method .ctor, addr 0x5958fa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* stateMachineType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncStateMachineAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncStateMachineAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncStateMachineAttribute(AsyncStateMachineAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncStateMachineAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncStateMachineAttribute(AsyncStateMachineAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3369 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncStateMachineAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncStateMachineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncStateMachineAttribute*, "System.Runtime.CompilerServices", "AsyncStateMachineAttribute");
