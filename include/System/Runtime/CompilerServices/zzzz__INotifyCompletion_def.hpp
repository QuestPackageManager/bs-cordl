#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/INotifyCompletion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INotifyCompletion)
namespace System {
class Action;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class INotifyCompletion;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::INotifyCompletion);
// Dependencies
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.INotifyCompletion
class CORDL_TYPE INotifyCompletion {
public:
  // Declarations
  /// @brief Method OnCompleted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCompleted(::System::Action* continuation);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyCompletion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyCompletion(INotifyCompletion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::INotifyCompletion);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::INotifyCompletion*, "System.Runtime.CompilerServices", "INotifyCompletion");
