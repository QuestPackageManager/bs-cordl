#pragma once
// IWYU pragma private; include "System/Threading/CancellationCallbackInfo_WithSyncContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
CORDL_MODULE_EXPORT(CancellationCallbackInfo_WithSyncContext)
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CancellationCallbackInfo_WithSyncContext;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CancellationCallbackInfo_WithSyncContext);
// Dependencies System.Threading.CancellationCallbackInfo
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Threading.CancellationCallbackInfo/WithSyncContext
class CORDL_TYPE CancellationCallbackInfo_WithSyncContext : public ::System::Threading::CancellationCallbackInfo {
public:
  // Declarations
  /// @brief Field TargetSyncContext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_TargetSyncContext, put = __cordl_internal_set_TargetSyncContext)) ::System::Threading::SynchronizationContext* TargetSyncContext;

  static inline ::GlobalNamespace::CancellationCallbackInfo_WithSyncContext* New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                                      ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                                      ::System::Threading::CancellationTokenSource* cancellationTokenSource,
                                                                                      ::System::Threading::SynchronizationContext* targetSyncContext);

  constexpr ::System::Threading::SynchronizationContext* const& __cordl_internal_get_TargetSyncContext() const;

  constexpr ::System::Threading::SynchronizationContext*& __cordl_internal_get_TargetSyncContext();

  constexpr void __cordl_internal_set_TargetSyncContext(::System::Threading::SynchronizationContext* value);

  /// @brief Method .ctor, addr 0x3e4f244, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback, ::System::Threading::ExecutionContext* targetExecutionContext,
                    ::System::Threading::CancellationTokenSource* cancellationTokenSource, ::System::Threading::SynchronizationContext* targetSyncContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancellationCallbackInfo_WithSyncContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo_WithSyncContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancellationCallbackInfo_WithSyncContext(CancellationCallbackInfo_WithSyncContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancellationCallbackInfo_WithSyncContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancellationCallbackInfo_WithSyncContext(CancellationCallbackInfo_WithSyncContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2693 };

  /// @brief Field TargetSyncContext, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::SynchronizationContext* ___TargetSyncContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CancellationCallbackInfo_WithSyncContext, ___TargetSyncContext) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CancellationCallbackInfo_WithSyncContext, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CancellationCallbackInfo_WithSyncContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CancellationCallbackInfo_WithSyncContext*, "System.Threading", "CancellationCallbackInfo/WithSyncContext");
