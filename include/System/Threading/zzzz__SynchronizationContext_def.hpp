#pragma once
// IWYU pragma private; include "System/Threading/SynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContextProperties_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SynchronizationContext)
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class SynchronizationContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::SynchronizationContext);
// Dependencies System.Object, System.Threading.SynchronizationContextProperties
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SynchronizationContext
class CORDL_TYPE SynchronizationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _props, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__props, put = __cordl_internal_set__props)) ::System::Threading::SynchronizationContextProperties _props;

  /// @brief Method CreateCopy, addr 0x5b020e4, size 0x44, virtual true, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method GetThreadLocalContext, addr 0x5b01fc0, size 0x50, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* GetThreadLocalContext();

  /// @brief Method IsWaitNotificationRequired, addr 0x5b01de4, size 0xc, virtual false, abstract: false, final false
  inline bool IsWaitNotificationRequired();

  static inline ::System::Threading::SynchronizationContext* New_ctor();

  /// @brief Method OperationCompleted, addr 0x5b01ea8, size 0x4, virtual true, abstract: false, final false
  inline void OperationCompleted();

  /// @brief Method OperationStarted, addr 0x5b01ea4, size 0x4, virtual true, abstract: false, final false
  inline void OperationStarted();

  /// @brief Method Post, addr 0x5b01e14, size 0x90, virtual true, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method Send, addr 0x5b01df0, size 0x24, virtual true, abstract: false, final false
  inline void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method SetSynchronizationContext, addr 0x5b01f98, size 0x28, virtual false, abstract: false, final false
  static inline void SetSynchronizationContext(::System::Threading::SynchronizationContext* syncContext);

  /// @brief Method Wait, addr 0x5b01eac, size 0x60, virtual true, abstract: false, final false
  inline int32_t Wait(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> waitHandles, bool waitAll, int32_t millisecondsTimeout);

  /// @brief Method WaitHelper, addr 0x5b01f0c, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t WaitHelper(::ArrayW<::System::IntPtr, ::Array<::System::IntPtr>*> waitHandles, bool waitAll, int32_t millisecondsTimeout);

  constexpr ::System::Threading::SynchronizationContextProperties const& __cordl_internal_get__props() const;

  constexpr ::System::Threading::SynchronizationContextProperties& __cordl_internal_get__props();

  constexpr void __cordl_internal_set__props(::System::Threading::SynchronizationContextProperties value);

  /// @brief Method .ctor, addr 0x5b01de0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x5af9838, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_Current();

  /// @brief Method get_CurrentExplicit, addr 0x5b02128, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_CurrentExplicit();

  /// @brief Method get_CurrentNoFlow, addr 0x5b02010, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_CurrentNoFlow();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SynchronizationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SynchronizationContext(SynchronizationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SynchronizationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SynchronizationContext(SynchronizationContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2730 };

  /// @brief Field _props, offset: 0x10, size: 0x4, def value: None
  ::System::Threading::SynchronizationContextProperties ____props;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SynchronizationContext, ____props) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::SynchronizationContext, 0x18>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SynchronizationContext*, "System.Threading", "SynchronizationContext");
