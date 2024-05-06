#pragma once
// IWYU pragma private; include "System/Threading/SynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__SynchronizationContextProperties_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SynchronizationContext)
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Threading {
class SynchronizationContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::SynchronizationContext);
// Type: System.Threading::SynchronizationContext
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::SynchronizationContext*
class CORDL_TYPE SynchronizationContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _props, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__props, put = __cordl_internal_set__props))::System::Threading::SynchronizationContextProperties _props;

  /// @brief Field s_cachedPreparedType1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType1, put = setStaticF_s_cachedPreparedType1))::System::Type* s_cachedPreparedType1;

  /// @brief Field s_cachedPreparedType2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType2, put = setStaticF_s_cachedPreparedType2))::System::Type* s_cachedPreparedType2;

  /// @brief Field s_cachedPreparedType3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType3, put = setStaticF_s_cachedPreparedType3))::System::Type* s_cachedPreparedType3;

  /// @brief Field s_cachedPreparedType4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType4, put = setStaticF_s_cachedPreparedType4))::System::Type* s_cachedPreparedType4;

  /// @brief Field s_cachedPreparedType5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cachedPreparedType5, put = setStaticF_s_cachedPreparedType5))::System::Type* s_cachedPreparedType5;

  /// @brief Method CreateCopy, addr 0x29a02dc, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Threading::SynchronizationContext* CreateCopy();

  /// @brief Method GetThreadLocalContext, addr 0x29a0104, size 0x4c, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* GetThreadLocalContext();

  /// @brief Method IsWaitNotificationRequired, addr 0x299ff20, size 0xc, virtual false, abstract: false, final false
  inline bool IsWaitNotificationRequired();

  static inline ::System::Threading::SynchronizationContext* New_ctor();

  /// @brief Method OperationCompleted, addr 0x299ffe8, size 0x4, virtual true, abstract: false, final false
  inline void OperationCompleted();

  /// @brief Method OperationStarted, addr 0x299ffe4, size 0x4, virtual true, abstract: false, final false
  inline void OperationStarted();

  /// @brief Method Post, addr 0x299ff54, size 0x90, virtual true, abstract: false, final false
  inline void Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method Send, addr 0x299ff2c, size 0x28, virtual true, abstract: false, final false
  inline void Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state);

  /// @brief Method SetSynchronizationContext, addr 0x29a00dc, size 0x28, virtual false, abstract: false, final false
  static inline void SetSynchronizationContext(::System::Threading::SynchronizationContext* syncContext);

  /// @brief Method Wait, addr 0x299ffec, size 0x64, virtual true, abstract: false, final false
  inline int32_t Wait(::ArrayW<void*, ::Array<void*>*> waitHandles, bool waitAll, int32_t millisecondsTimeout);

  /// @brief Method WaitHelper, addr 0x29a0050, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t WaitHelper(::ArrayW<void*, ::Array<void*>*> waitHandles, bool waitAll, int32_t millisecondsTimeout);

  constexpr ::System::Threading::SynchronizationContextProperties const& __cordl_internal_get__props() const;

  constexpr ::System::Threading::SynchronizationContextProperties& __cordl_internal_get__props();

  constexpr void __cordl_internal_set__props(::System::Threading::SynchronizationContextProperties value);

  /// @brief Method .ctor, addr 0x299ff18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_s_cachedPreparedType1();

  static inline ::System::Type* getStaticF_s_cachedPreparedType2();

  static inline ::System::Type* getStaticF_s_cachedPreparedType3();

  static inline ::System::Type* getStaticF_s_cachedPreparedType4();

  static inline ::System::Type* getStaticF_s_cachedPreparedType5();

  /// @brief Method get_Current, addr 0x2997eb8, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_Current();

  /// @brief Method get_CurrentExplicit, addr 0x29a0338, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_CurrentExplicit();

  /// @brief Method get_CurrentNoFlow, addr 0x29a0150, size 0x30, virtual false, abstract: false, final false
  static inline ::System::Threading::SynchronizationContext* get_CurrentNoFlow();

  static inline void setStaticF_s_cachedPreparedType1(::System::Type* value);

  static inline void setStaticF_s_cachedPreparedType2(::System::Type* value);

  static inline void setStaticF_s_cachedPreparedType3(::System::Type* value);

  static inline void setStaticF_s_cachedPreparedType4(::System::Type* value);

  static inline void setStaticF_s_cachedPreparedType5(::System::Type* value);

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

  /// @brief Field _props, offset: 0x10, size: 0x4, def value: None
  ::System::Threading::SynchronizationContextProperties ____props;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::SynchronizationContext, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Threading::SynchronizationContext, ____props) == 0x10, "Offset mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::SynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SynchronizationContext*, "System.Threading", "SynchronizationContext");
