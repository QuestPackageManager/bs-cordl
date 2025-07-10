#pragma once
// IWYU pragma private; include "System/Threading/Thread.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Thread)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Security::Principal {
class IPrincipal;
}
namespace System::Threading {
template <typename T> struct AsyncLocalValueChangedArgs_1;
}
namespace System::Threading {
template <typename T> class AsyncLocal_1;
}
namespace System::Threading {
struct ExecutionContext_Reader;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class InternalThread;
}
namespace System::Threading {
class ParameterizedThreadStart;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Threading {
struct ThreadPriority;
}
namespace System::Threading {
class ThreadStart;
}
namespace System::Threading {
struct ThreadState;
}
namespace System {
class Delegate;
}
namespace System {
class LocalDataStoreHolder;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class MulticastDelegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Thread;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Thread);
// Dependencies System.Runtime.ConstrainedExecution.CriticalFinalizerObject
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Thread
class CORDL_TYPE Thread : public ::System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
  // Declarations
  __declspec(property(get = get_CurrentCulture, put = set_CurrentCulture)) ::System::Globalization::CultureInfo* CurrentCulture;

  __declspec(property(get = get_CurrentUICulture, put = set_CurrentUICulture)) ::System::Globalization::CultureInfo* CurrentUICulture;

  __declspec(property(get = get_ExecutionContextBelongsToCurrentScope, put = set_ExecutionContextBelongsToCurrentScope)) bool ExecutionContextBelongsToCurrentScope;

  __declspec(property(get = get_Internal)) ::System::Threading::InternalThread* Internal;

  __declspec(property(get = get_IsAlive)) bool IsAlive;

  __declspec(property(put = set_IsBackground)) bool IsBackground;

  __declspec(property(get = get_IsThreadPoolThread)) bool IsThreadPoolThread;

  __declspec(property(get = get_IsThreadPoolThreadInternal)) bool IsThreadPoolThreadInternal;

  __declspec(property(get = get_ManagedThreadId)) int32_t ManagedThreadId;

  __declspec(property(put = set_Name)) ::StringW Name;

  __declspec(property(get = get_Priority, put = set_Priority)) ::System::Threading::ThreadPriority Priority;

  /// @brief Field current_thread, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_current_thread, put = setStaticF_current_thread)) ::System::Threading::Thread* current_thread;

  /// @brief Field internal_thread, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_internal_thread, put = __cordl_internal_set_internal_thread)) ::System::Threading::InternalThread* internal_thread;

  /// @brief Field m_CurrentCulture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CurrentCulture, put = setStaticF_m_CurrentCulture)) ::System::Globalization::CultureInfo* m_CurrentCulture;

  /// @brief Field m_CurrentUICulture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_CurrentUICulture, put = setStaticF_m_CurrentUICulture)) ::System::Globalization::CultureInfo* m_CurrentUICulture;

  /// @brief Field m_Delegate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Delegate, put = __cordl_internal_set_m_Delegate)) ::System::MulticastDelegate* m_Delegate;

  /// @brief Field m_ExecutionContext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExecutionContext, put = __cordl_internal_set_m_ExecutionContext)) ::System::Threading::ExecutionContext* m_ExecutionContext;

  /// @brief Field m_ExecutionContextBelongsToOuterScope, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExecutionContextBelongsToOuterScope, put = __cordl_internal_set_m_ExecutionContextBelongsToOuterScope)) bool m_ExecutionContextBelongsToOuterScope;

  /// @brief Field m_ThreadStartArg, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ThreadStartArg, put = __cordl_internal_set_m_ThreadStartArg)) ::System::Object* m_ThreadStartArg;

  /// @brief Field pending_exception, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pending_exception, put = __cordl_internal_set_pending_exception)) ::System::Object* pending_exception;

  /// @brief Field principal, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_principal, put = __cordl_internal_set_principal)) ::System::Security::Principal::IPrincipal* principal;

  /// @brief Field principal_version, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_principal_version, put = __cordl_internal_set_principal_version)) int32_t principal_version;

  /// @brief Field s_LocalDataStore, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LocalDataStore, put = setStaticF_s_LocalDataStore)) ::System::LocalDataStoreHolder* s_LocalDataStore;

  /// @brief Field s_LocalDataStoreMgr, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LocalDataStoreMgr, put = setStaticF_s_LocalDataStoreMgr)) ::System::LocalDataStoreMgr* s_LocalDataStoreMgr;

  /// @brief Field s_asyncLocalCurrentCulture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_asyncLocalCurrentCulture,
                      put = setStaticF_s_asyncLocalCurrentCulture)) ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* s_asyncLocalCurrentCulture;

  /// @brief Field s_asyncLocalCurrentUICulture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_asyncLocalCurrentUICulture,
                      put = setStaticF_s_asyncLocalCurrentUICulture)) ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* s_asyncLocalCurrentUICulture;

  /// @brief Method Abort, addr 0x3e57d68, size 0x28, virtual false, abstract: false, final false
  inline void Abort();

  /// @brief Method Abort_internal, addr 0x3e57d64, size 0x4, virtual false, abstract: false, final false
  static inline void Abort_internal(::System::Threading::InternalThread* thread, ::System::Object* stateInfo);

  /// @brief Method AsyncLocalSetCurrentCulture, addr 0x3e56e34, size 0x60, virtual false, abstract: false, final false
  static inline void AsyncLocalSetCurrentCulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args);

  /// @brief Method AsyncLocalSetCurrentUICulture, addr 0x3e56e94, size 0x60, virtual false, abstract: false, final false
  static inline void AsyncLocalSetCurrentUICulture(::System::Threading::AsyncLocalValueChangedArgs_1<::System::Globalization::CultureInfo*> args);

  /// @brief Method BeginCriticalRegion, addr 0x3e536ac, size 0x50, virtual false, abstract: false, final false
  static inline void BeginCriticalRegion();

  /// @brief Method ClrState, addr 0x3e57cec, size 0x4, virtual false, abstract: false, final false
  static inline void ClrState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState clr);

  /// @brief Method ConstructInternalThread, addr 0x3e57b34, size 0x4, virtual false, abstract: false, final false
  inline void ConstructInternalThread();

  /// @brief Method EndCriticalRegion, addr 0x3e53ca0, size 0x50, virtual false, abstract: false, final false
  static inline void EndCriticalRegion();

  /// @brief Method Finalize, addr 0x3e57bb0, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCurrentCultureNoAppX, addr 0x3e578a4, size 0xac, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* GetCurrentCultureNoAppX();

  /// @brief Method GetCurrentThread, addr 0x3e57b68, size 0x1c, virtual false, abstract: false, final false
  static inline ::System::Threading::Thread* GetCurrentThread();

  /// @brief Method GetCurrentThread_icall, addr 0x3e57b64, size 0x4, virtual false, abstract: false, final false
  static inline void GetCurrentThread_icall(::ByRef<::System::Threading::Thread*> thread);

  /// @brief Method GetCurrentUICultureNoAppX, addr 0x3e57520, size 0xac, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* GetCurrentUICultureNoAppX();

  /// @brief Method GetDomainID, addr 0x3e57ba8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetDomainID();

  /// @brief Method GetExecutionContextReader, addr 0x3e546c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext_Reader GetExecutionContextReader();

  /// @brief Method GetHashCode, addr 0x3e57d98, size 0x278, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetMutableExecutionContext, addr 0x3e54f00, size 0x84, virtual false, abstract: false, final false
  inline ::System::Threading::ExecutionContext* GetMutableExecutionContext();

  /// @brief Method GetPriorityNative, addr 0x3e573ec, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetPriorityNative();

  /// @brief Method GetProcessDefaultStackSize, addr 0x3e5740c, size 0xac, virtual false, abstract: false, final false
  static inline int32_t GetProcessDefaultStackSize(int32_t maxStackSize);

  /// @brief Method GetState, addr 0x3e57c2c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Threading::ThreadState GetState(::System::Threading::InternalThread* thread);

  /// @brief Method Join, addr 0x3e573fc, size 0x8, virtual false, abstract: false, final false
  inline void Join();

  /// @brief Method JoinInternal, addr 0x3e573f8, size 0x4, virtual false, abstract: false, final false
  inline bool JoinInternal(int32_t millisecondsTimeout);

  /// @brief Method MemoryBarrier, addr 0x3e57b30, size 0x4, virtual false, abstract: false, final false
  static inline void MemoryBarrier();

  static inline ::System::Threading::Thread* New_ctor(::System::Threading::ParameterizedThreadStart* start);

  static inline ::System::Threading::Thread* New_ctor(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize);

  static inline ::System::Threading::Thread* New_ctor(::System::Threading::ThreadStart* start);

  /// @brief Method SetExecutionContext, addr 0x3e5567c, size 0x14, virtual false, abstract: false, final false
  inline void SetExecutionContext(::System::Threading::ExecutionContext* value, bool belongsToCurrentScope);

  /// @brief Method SetExecutionContext, addr 0x3e546d0, size 0x14, virtual false, abstract: false, final false
  inline void SetExecutionContext(::System::Threading::ExecutionContext_Reader value, bool belongsToCurrentScope);

  /// @brief Method SetName_icall, addr 0x3e57cf0, size 0x4, virtual false, abstract: false, final false
  static inline void SetName_icall(::System::Threading::InternalThread* thread, ::cordl_internals::Ptr<char16_t> name, int32_t nameLength);

  /// @brief Method SetName_internal, addr 0x3e57cf4, size 0x3c, virtual false, abstract: false, final false
  static inline void SetName_internal(::System::Threading::InternalThread* thread, ::StringW name);

  /// @brief Method SetPriorityNative, addr 0x3e573f4, size 0x4, virtual false, abstract: false, final false
  inline void SetPriorityNative(int32_t priority);

  /// @brief Method SetStart, addr 0x3e574b8, size 0x3c, virtual false, abstract: false, final false
  inline void SetStart(::System::MulticastDelegate* start, int32_t maxStackSize);

  /// @brief Method SetStartHelper, addr 0x3e56f70, size 0x118, virtual false, abstract: false, final false
  inline void SetStartHelper(::System::Delegate* start, int32_t maxStackSize);

  /// @brief Method SetState, addr 0x3e57ce8, size 0x4, virtual false, abstract: false, final false
  static inline void SetState(::System::Threading::InternalThread* thread, ::System::Threading::ThreadState set);

  /// @brief Method Sleep, addr 0x3e53f40, size 0x78, virtual false, abstract: false, final false
  static inline void Sleep(int32_t millisecondsTimeout);

  /// @brief Method SleepInternal, addr 0x3e57404, size 0x4, virtual false, abstract: false, final false
  static inline void SleepInternal(int32_t millisecondsTimeout);

  /// @brief Method SpinWait, addr 0x3e53f18, size 0x28, virtual false, abstract: false, final false
  static inline void SpinWait(int32_t iterations);

  /// @brief Method SpinWait_nop, addr 0x3e57d90, size 0x4, virtual false, abstract: false, final false
  static inline void SpinWait_nop();

  /// @brief Method Start, addr 0x3e571ec, size 0x14, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Start, addr 0x3e572bc, size 0xc4, virtual false, abstract: false, final false
  inline void Start(::System::Object* parameter);

  /// @brief Method Start, addr 0x3e57200, size 0xbc, virtual false, abstract: false, final false
  inline void Start(::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method StartInternal, addr 0x3e57380, size 0x68, virtual false, abstract: false, final false
  inline void StartInternal(::System::Object* principal, ::ByRef<::System::Threading::StackCrawlMark> stackMark);

  /// @brief Method SystemMaxStackStize, addr 0x3e57d94, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SystemMaxStackStize();

  /// @brief Method Thread_internal, addr 0x3e57bac, size 0x4, virtual false, abstract: false, final false
  inline bool Thread_internal(::System::MulticastDelegate* start);

  /// @brief Method ValidateThreadState, addr 0x3e57c78, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::ThreadState ValidateThreadState();

  /// @brief Method Yield, addr 0x3e53fb8, size 0x4, virtual false, abstract: false, final false
  static inline bool Yield();

  /// @brief Method YieldInternal, addr 0x3e57408, size 0x4, virtual false, abstract: false, final false
  static inline bool YieldInternal();

  constexpr ::System::Threading::InternalThread* const& __cordl_internal_get_internal_thread() const;

  constexpr ::System::Threading::InternalThread*& __cordl_internal_get_internal_thread();

  constexpr ::System::MulticastDelegate* const& __cordl_internal_get_m_Delegate() const;

  constexpr ::System::MulticastDelegate*& __cordl_internal_get_m_Delegate();

  constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get_m_ExecutionContext() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get_m_ExecutionContext();

  constexpr bool const& __cordl_internal_get_m_ExecutionContextBelongsToOuterScope() const;

  constexpr bool& __cordl_internal_get_m_ExecutionContextBelongsToOuterScope();

  constexpr ::System::Object* const& __cordl_internal_get_m_ThreadStartArg() const;

  constexpr ::System::Object*& __cordl_internal_get_m_ThreadStartArg();

  constexpr ::System::Object* const& __cordl_internal_get_pending_exception() const;

  constexpr ::System::Object*& __cordl_internal_get_pending_exception();

  constexpr ::System::Security::Principal::IPrincipal* const& __cordl_internal_get_principal() const;

  constexpr ::System::Security::Principal::IPrincipal*& __cordl_internal_get_principal();

  constexpr int32_t const& __cordl_internal_get_principal_version() const;

  constexpr int32_t& __cordl_internal_get_principal_version();

  constexpr void __cordl_internal_set_internal_thread(::System::Threading::InternalThread* value);

  constexpr void __cordl_internal_set_m_Delegate(::System::MulticastDelegate* value);

  constexpr void __cordl_internal_set_m_ExecutionContext(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set_m_ExecutionContextBelongsToOuterScope(bool value);

  constexpr void __cordl_internal_set_m_ThreadStartArg(::System::Object* value);

  constexpr void __cordl_internal_set_pending_exception(::System::Object* value);

  constexpr void __cordl_internal_set_principal(::System::Security::Principal::IPrincipal* value);

  constexpr void __cordl_internal_set_principal_version(int32_t value);

  /// @brief Method .ctor, addr 0x3e57088, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ParameterizedThreadStart* start);

  /// @brief Method .ctor, addr 0x3e57104, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ParameterizedThreadStart* start, int32_t maxStackSize);

  /// @brief Method .ctor, addr 0x3e56ef4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::ThreadStart* start);

  static inline ::System::Threading::Thread* getStaticF_current_thread();

  static inline ::System::Globalization::CultureInfo* getStaticF_m_CurrentCulture();

  static inline ::System::Globalization::CultureInfo* getStaticF_m_CurrentUICulture();

  static inline ::System::LocalDataStoreHolder* getStaticF_s_LocalDataStore();

  static inline ::System::LocalDataStoreMgr* getStaticF_s_LocalDataStoreMgr();

  static inline ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* getStaticF_s_asyncLocalCurrentCulture();

  static inline ::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* getStaticF_s_asyncLocalCurrentUICulture();

  /// @brief Method get_CurrentContext, addr 0x3e57b5c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::Runtime::Remoting::Contexts::Context* get_CurrentContext();

  /// @brief Method get_CurrentCulture, addr 0x3e57878, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_CurrentCulture();

  /// @brief Method get_CurrentThread, addr 0x3e53fbc, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Threading::Thread* get_CurrentThread();

  /// @brief Method get_CurrentThreadId, addr 0x3e57b84, size 0x24, virtual false, abstract: false, final false
  static inline int32_t get_CurrentThreadId();

  /// @brief Method get_CurrentUICulture, addr 0x3e574f4, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Globalization::CultureInfo* get_CurrentUICulture();

  /// @brief Method get_ExecutionContextBelongsToCurrentScope, addr 0x3e5562c, size 0x10, virtual false, abstract: false, final false
  inline bool get_ExecutionContextBelongsToCurrentScope();

  /// @brief Method get_Internal, addr 0x3e57b38, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::InternalThread* get_Internal();

  /// @brief Method get_IsAlive, addr 0x3e57be8, size 0x44, virtual false, abstract: false, final false
  inline bool get_IsAlive();

  /// @brief Method get_IsThreadPoolThread, addr 0x3e57bb8, size 0x4, virtual false, abstract: false, final false
  inline bool get_IsThreadPoolThread();

  /// @brief Method get_IsThreadPoolThreadInternal, addr 0x3e57bbc, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsThreadPoolThreadInternal();

  /// @brief Method get_ManagedThreadId, addr 0x3e54018, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_ManagedThreadId();

  /// @brief Method get_Priority, addr 0x3e573e8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Threading::ThreadPriority get_Priority();

  /// @brief Method nativeInitCultureAccessors, addr 0x3e577d4, size 0xa4, virtual false, abstract: false, final false
  static inline void nativeInitCultureAccessors();

  static inline void setStaticF_current_thread(::System::Threading::Thread* value);

  static inline void setStaticF_m_CurrentCulture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_m_CurrentUICulture(::System::Globalization::CultureInfo* value);

  static inline void setStaticF_s_LocalDataStore(::System::LocalDataStoreHolder* value);

  static inline void setStaticF_s_LocalDataStoreMgr(::System::LocalDataStoreMgr* value);

  static inline void setStaticF_s_asyncLocalCurrentCulture(::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* value);

  static inline void setStaticF_s_asyncLocalCurrentUICulture(::System::Threading::AsyncLocal_1<::System::Globalization::CultureInfo*>* value);

  /// @brief Method set_CurrentCulture, addr 0x3e57950, size 0x1e0, virtual false, abstract: false, final false
  inline void set_CurrentCulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_CurrentUICulture, addr 0x3e575cc, size 0x208, virtual false, abstract: false, final false
  inline void set_CurrentUICulture(::System::Globalization::CultureInfo* value);

  /// @brief Method set_ExecutionContextBelongsToCurrentScope, addr 0x3e5563c, size 0x10, virtual false, abstract: false, final false
  inline void set_ExecutionContextBelongsToCurrentScope(bool value);

  /// @brief Method set_IsBackground, addr 0x3e57c30, size 0x48, virtual false, abstract: false, final false
  inline void set_IsBackground(bool value);

  /// @brief Method set_Name, addr 0x3e57d30, size 0x34, virtual false, abstract: false, final false
  inline void set_Name(::StringW value);

  /// @brief Method set_Priority, addr 0x3e573f0, size 0x4, virtual false, abstract: false, final false
  inline void set_Priority(::System::Threading::ThreadPriority value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Thread();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Thread", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Thread(Thread&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Thread", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Thread(Thread const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2726 };

  /// @brief Field internal_thread, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::InternalThread* ___internal_thread;

  /// @brief Field m_ThreadStartArg, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___m_ThreadStartArg;

  /// @brief Field pending_exception, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___pending_exception;

  /// @brief Field m_Delegate, offset: 0x28, size: 0x8, def value: None
  ::System::MulticastDelegate* ___m_Delegate;

  /// @brief Field m_ExecutionContext, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ___m_ExecutionContext;

  /// @brief Field m_ExecutionContextBelongsToOuterScope, offset: 0x38, size: 0x1, def value: None
  bool ___m_ExecutionContextBelongsToOuterScope;

  /// @brief Field principal, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Principal::IPrincipal* ___principal;

  /// @brief Field principal_version, offset: 0x48, size: 0x4, def value: None
  int32_t ___principal_version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Thread, ___internal_thread) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___m_ThreadStartArg) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___pending_exception) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___m_Delegate) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___m_ExecutionContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___m_ExecutionContextBelongsToOuterScope) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___principal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Thread, ___principal_version) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Thread, 0x50>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Thread);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Thread*, "System.Threading", "Thread");
