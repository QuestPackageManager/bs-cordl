#pragma once
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
// Type: System.Runtime.CompilerServices::INotifyCompletion
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3373))
// CS Name: ::System.Runtime.CompilerServices::INotifyCompletion*
class CORDL_TYPE INotifyCompletion {
public:
  // Declarations
  /// @brief Method OnCompleted addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnCompleted(::System::Action* continuation);

  // Ctor Parameters [CppParam { name: "", ty: "INotifyCompletion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INotifyCompletion(INotifyCompletion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INotifyCompletion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INotifyCompletion(INotifyCompletion const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::INotifyCompletion);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::INotifyCompletion*, "System.Runtime.CompilerServices", "INotifyCompletion");
