#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
CORDL_MODULE_EXPORT(CancellationCallbackInfo_WithSyncContext)
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class __CancellationCallbackInfo__WithSyncContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::__CancellationCallbackInfo__WithSyncContext);
// Type: ::WithSyncContext
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2690))
// CS Name: ::CancellationCallbackInfo::WithSyncContext*
class CORDL_TYPE __CancellationCallbackInfo__WithSyncContext : public ::System::Threading::CancellationCallbackInfo {
public:
  // Declarations
  /// @brief Field TargetSyncContext, offset 0x30, size 0x8
  __declspec(property(get = __get_TargetSyncContext, put = __set_TargetSyncContext))::System::Threading::SynchronizationContext* TargetSyncContext;

  constexpr ::System::Threading::SynchronizationContext*& __get_TargetSyncContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SynchronizationContext*> const& __get_TargetSyncContext() const;

  constexpr void __set_TargetSyncContext(::System::Threading::SynchronizationContext* value);

  static inline ::System::Threading::__CancellationCallbackInfo__WithSyncContext* New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                                           ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                                           ::System::Threading::CancellationTokenSource* cancellationTokenSource,
                                                                                           ::System::Threading::SynchronizationContext* targetSyncContext);

  /// @brief Method .ctor, addr 0x261304c, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
                    ::System::Threading::CancellationTokenSource* cancellationTokenSource, ::System::Threading::SynchronizationContext* targetSyncContext);

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationCallbackInfo__WithSyncContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CancellationCallbackInfo__WithSyncContext(__CancellationCallbackInfo__WithSyncContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CancellationCallbackInfo__WithSyncContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CancellationCallbackInfo__WithSyncContext(__CancellationCallbackInfo__WithSyncContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CancellationCallbackInfo__WithSyncContext();

public:
  /// @brief Field TargetSyncContext, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ___TargetSyncContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__CancellationCallbackInfo__WithSyncContext, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__CancellationCallbackInfo__WithSyncContext, ___TargetSyncContext) == 0x30, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::__CancellationCallbackInfo__WithSyncContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__CancellationCallbackInfo__WithSyncContext*, "System.Threading", "CancellationCallbackInfo/WithSyncContext");
