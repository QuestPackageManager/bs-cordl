#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAsyncStateMachine)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IAsyncStateMachine);
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.IAsyncStateMachine
class CORDL_TYPE IAsyncStateMachine {
public:
  // Declarations
  /// @brief Method MoveNext, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "", ty: "IAsyncStateMachine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAsyncStateMachine(IAsyncStateMachine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3387 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IAsyncStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IAsyncStateMachine*, "System.Runtime.CompilerServices", "IAsyncStateMachine");
