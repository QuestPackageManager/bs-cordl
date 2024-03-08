#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/Sockets/zzzz__SocketType_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Socket)
namespace GlobalNamespace {
class __Socket__AwaitableSocketAsyncEventArgs____c;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Net::NetworkInformation {
struct NetworkInterfaceComponent;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net::Sockets {
struct IOControlCode;
}
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
namespace System::Net::Sockets {
struct ProtocolType;
}
namespace System::Net::Sockets {
class SafeSocketHandle;
}
namespace System::Net::Sockets {
struct SelectMode;
}
namespace System::Net::Sockets {
class SocketAsyncEventArgs;
}
namespace System::Net::Sockets {
struct SocketAsyncOperation;
}
namespace System::Net::Sockets {
class SocketAsyncResult;
}
namespace System::Net::Sockets {
struct SocketError;
}
namespace System::Net::Sockets {
struct SocketFlags;
}
namespace System::Net::Sockets {
struct SocketOperation;
}
namespace System::Net::Sockets {
struct SocketOptionLevel;
}
namespace System::Net::Sockets {
struct SocketOptionName;
}
namespace System::Net::Sockets {
struct SocketShutdown;
}
namespace System::Net::Sockets {
struct SocketType;
}
namespace System::Net::Sockets {
class __Socket__AwaitableSocketAsyncEventArgs;
}
namespace System::Net::Sockets {
class __Socket__CachedEventArgs;
}
namespace System::Net::Sockets {
class __Socket__Int32TaskSocketAsyncEventArgs;
}
namespace System::Net::Sockets {
template <typename TResult> class __Socket__TaskSocketAsyncEventArgs_1;
}
namespace System::Net::Sockets {
struct __Socket__WSABUF;
}
namespace System::Net::Sockets {
class __Socket____c;
}
namespace System::Net::Sockets {
class __Socket____c__DisplayClass240_0;
}
namespace System::Net::Sockets {
class __Socket____c__DisplayClass298_0;
}
namespace System::Net::Sockets {
class __Socket____c__DisplayClass355_0;
}
namespace System::Net {
class EndPoint;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net {
class SocketAddress;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Threading::Tasks::Sources {
template <typename TResult> class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
class IValueTaskSource;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> struct ValueTask_1;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class ContextCallback;
}
namespace System::Threading {
class ExecutionContext;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System::Threading {
class Thread;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> struct ArraySegment_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class IOAsyncCallback;
}
namespace System {
class IOAsyncResult;
}
namespace System {
class IOSelectorJob;
}
namespace System {
template <typename T> struct Memory_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlyMemory_1;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace GlobalNamespace {
class __Socket__AwaitableSocketAsyncEventArgs____c;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net::Sockets {
class __Socket__AwaitableSocketAsyncEventArgs;
}
namespace System::Net::Sockets {
class __Socket__CachedEventArgs;
}
namespace System::Net::Sockets {
class __Socket__Int32TaskSocketAsyncEventArgs;
}
namespace System::Net::Sockets {
template <typename TResult> class __Socket__TaskSocketAsyncEventArgs_1;
}
namespace System::Net::Sockets {
class __Socket____c;
}
namespace System::Net::Sockets {
class __Socket____c__DisplayClass240_0;
}
namespace System::Net::Sockets {
class __Socket____c__DisplayClass298_0;
}
namespace System::Net::Sockets {
class __Socket____c__DisplayClass355_0;
}
namespace System::Net::Sockets {
struct __Socket__WSABUF;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c);
MARK_REF_PTR_T(::System::Net::Sockets::Socket);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket__CachedEventArgs);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs);
MARK_GEN_REF_PTR_T(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket____c);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket____c__DisplayClass240_0);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket____c__DisplayClass298_0);
MARK_REF_PTR_T(::System::Net::Sockets::__Socket____c__DisplayClass355_0);
MARK_VAL_T(::System::Net::Sockets::__Socket__WSABUF);
// Type: ::CachedEventArgs
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::CachedEventArgs*
class CORDL_TYPE __Socket__CachedEventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field TaskAccept, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TaskAccept,
                      put = __cordl_internal_set_TaskAccept))::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* TaskAccept;

  /// @brief Field TaskReceive, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_TaskReceive, put = __cordl_internal_set_TaskReceive))::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* TaskReceive;

  /// @brief Field TaskSend, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_TaskSend, put = __cordl_internal_set_TaskSend))::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* TaskSend;

  /// @brief Field ValueTaskReceive, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ValueTaskReceive, put = __cordl_internal_set_ValueTaskReceive))::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* ValueTaskReceive;

  /// @brief Field ValueTaskSend, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ValueTaskSend, put = __cordl_internal_set_ValueTaskSend))::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* ValueTaskSend;

  static inline ::System::Net::Sockets::__Socket__CachedEventArgs* New_ctor();

  constexpr ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*& __cordl_internal_get_TaskAccept();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*> const& __cordl_internal_get_TaskAccept() const;

  constexpr ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*& __cordl_internal_get_TaskReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*> const& __cordl_internal_get_TaskReceive() const;

  constexpr ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*& __cordl_internal_get_TaskSend();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*> const& __cordl_internal_get_TaskSend() const;

  constexpr ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*& __cordl_internal_get_ValueTaskReceive();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*> const& __cordl_internal_get_ValueTaskReceive() const;

  constexpr ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*& __cordl_internal_get_ValueTaskSend();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*> const& __cordl_internal_get_ValueTaskSend() const;

  constexpr void __cordl_internal_set_TaskAccept(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* value);

  constexpr void __cordl_internal_set_TaskReceive(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* value);

  constexpr void __cordl_internal_set_TaskSend(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* value);

  constexpr void __cordl_internal_set_ValueTaskReceive(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* value);

  constexpr void __cordl_internal_set_ValueTaskSend(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* value);

  /// @brief Method .ctor, addr 0x2b4a4bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket__CachedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket__CachedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket__CachedEventArgs(__Socket__CachedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket__CachedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket__CachedEventArgs(__Socket__CachedEventArgs const&) = delete;

  /// @brief Field TaskAccept, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* ___TaskAccept;

  /// @brief Field TaskReceive, offset: 0x18, size: 0x8, def value: None
  ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* ___TaskReceive;

  /// @brief Field TaskSend, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* ___TaskSend;

  /// @brief Field ValueTaskReceive, offset: 0x28, size: 0x8, def value: None
  ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* ___ValueTaskReceive;

  /// @brief Field ValueTaskSend, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* ___ValueTaskSend;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket__CachedEventArgs, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__CachedEventArgs, ___TaskAccept) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__CachedEventArgs, ___TaskReceive) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__CachedEventArgs, ___TaskSend) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__CachedEventArgs, ___ValueTaskReceive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__CachedEventArgs, ___ValueTaskSend) == 0x30, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: ::TaskSocketAsyncEventArgs`1
// SizeInfo { instance_size: 216, native_size: 209, calculated_instance_size: 216, calculated_native_size: 209, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// cpp template
template <typename TResult>
// Is value type: false
// CS Name: ::Socket::TaskSocketAsyncEventArgs`1<TResult>*
class CORDL_TYPE __Socket__TaskSocketAsyncEventArgs_1 : public ::System::Net::Sockets::SocketAsyncEventArgs {
public:
  // Declarations
  /// @brief Field _accessed, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get__accessed, put = __cordl_internal_set__accessed)) bool _accessed;

  /// @brief Field _builder, offset 0xb8, size 0x18
  __declspec(property(get = __cordl_internal_get__builder, put = __cordl_internal_set__builder))::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> _builder;

  /// @brief Method GetCompletionResponsibility, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> GetCompletionResponsibility(ByRef<bool> responsibleForReturningToPool);

  static inline ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>* New_ctor();

  constexpr bool const& __cordl_internal_get__accessed() const;

  constexpr bool& __cordl_internal_get__accessed();

  constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> const& __cordl_internal_get__builder() const;

  constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>& __cordl_internal_get__builder();

  constexpr void __cordl_internal_set__accessed(bool value);

  constexpr void __cordl_internal_set__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket__TaskSocketAsyncEventArgs_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket__TaskSocketAsyncEventArgs_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket__TaskSocketAsyncEventArgs_1(__Socket__TaskSocketAsyncEventArgs_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket__TaskSocketAsyncEventArgs_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket__TaskSocketAsyncEventArgs_1(__Socket__TaskSocketAsyncEventArgs_1 const&) = delete;

  /// @brief Field _builder, offset: 0xb8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> ____builder;

  /// @brief Field _accessed, offset: 0xd0, size: 0x1, def value: None
  bool ____accessed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Sockets
// Type: ::Int32TaskSocketAsyncEventArgs
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 210, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::Int32TaskSocketAsyncEventArgs*
class CORDL_TYPE __Socket__Int32TaskSocketAsyncEventArgs : public ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<int32_t> {
public:
  // Declarations
  /// @brief Field _wrapExceptionsInIOExceptions, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get__wrapExceptionsInIOExceptions, put = __cordl_internal_set__wrapExceptionsInIOExceptions)) bool _wrapExceptionsInIOExceptions;

  static inline ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* New_ctor();

  constexpr bool const& __cordl_internal_get__wrapExceptionsInIOExceptions() const;

  constexpr bool& __cordl_internal_get__wrapExceptionsInIOExceptions();

  constexpr void __cordl_internal_set__wrapExceptionsInIOExceptions(bool value);

  /// @brief Method .ctor, addr 0x2b4a474, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket__Int32TaskSocketAsyncEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket__Int32TaskSocketAsyncEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket__Int32TaskSocketAsyncEventArgs(__Socket__Int32TaskSocketAsyncEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket__Int32TaskSocketAsyncEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket__Int32TaskSocketAsyncEventArgs(__Socket__Int32TaskSocketAsyncEventArgs const&) = delete;

  /// @brief Field _wrapExceptionsInIOExceptions, offset: 0xd1, size: 0x1, def value: None
  bool ____wrapExceptionsInIOExceptions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs, 0xd8>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs, ____wrapExceptionsInIOExceptions) == 0xd1, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Socket::AwaitableSocketAsyncEventArgs::<>c*
class CORDL_TYPE __Socket__AwaitableSocketAsyncEventArgs____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Threading::ContextCallback* __9__14_0;

  /// @brief Field <>9__20_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__20_0, put = setStaticF___9__20_0))::System::Threading::SendOrPostCallback* __9__20_0;

  static inline ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c* New_ctor();

  /// @brief Method <InvokeContinuation>b__20_0, addr 0x2a44158, size 0xac, virtual false, abstract: false, final false
  inline void _InvokeContinuation_b__20_0(::System::Object* s);

  /// @brief Method <OnCompleted>b__14_0, addr 0x2a440a4, size 0xb4, virtual false, abstract: false, final false
  inline void _OnCompleted_b__14_0(::System::Object* runState);

  /// @brief Method <.cctor>b__27_0, addr 0x2a44204, size 0x50, virtual false, abstract: false, final false
  inline void __cctor_b__27_0(::System::Object* state);

  /// @brief Method <.cctor>b__27_1, addr 0x2a44254, size 0x50, virtual false, abstract: false, final false
  inline void __cctor_b__27_1(::System::Object* state);

  /// @brief Method .ctor, addr 0x2a4409c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c* getStaticF___9();

  static inline ::System::Threading::ContextCallback* getStaticF___9__14_0();

  static inline ::System::Threading::SendOrPostCallback* getStaticF___9__20_0();

  static inline void setStaticF___9(::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c* value);

  static inline void setStaticF___9__14_0(::System::Threading::ContextCallback* value);

  static inline void setStaticF___9__20_0(::System::Threading::SendOrPostCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket__AwaitableSocketAsyncEventArgs____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket__AwaitableSocketAsyncEventArgs____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket__AwaitableSocketAsyncEventArgs____c(__Socket__AwaitableSocketAsyncEventArgs____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket__AwaitableSocketAsyncEventArgs____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket__AwaitableSocketAsyncEventArgs____c(__Socket__AwaitableSocketAsyncEventArgs____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::AwaitableSocketAsyncEventArgs
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 211, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::AwaitableSocketAsyncEventArgs*
class CORDL_TYPE __Socket__AwaitableSocketAsyncEventArgs : public ::System::Net::Sockets::SocketAsyncEventArgs {
public:
  // Declarations
  using __c = ::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c;

  /// @brief Field Reserved, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Reserved, put = setStaticF_Reserved))::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* Reserved;

  __declspec(property(get = get_WrapExceptionsInIOExceptions, put = set_WrapExceptionsInIOExceptions)) bool WrapExceptionsInIOExceptions;

  /// @brief Field <WrapExceptionsInIOExceptions>k__BackingField, offset 0xd2, size 0x1
  __declspec(property(get = __cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField,
                      put = __cordl_internal_set__WrapExceptionsInIOExceptions_k__BackingField)) bool _WrapExceptionsInIOExceptions_k__BackingField;

  /// @brief Field _continuation, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__continuation, put = __cordl_internal_set__continuation))::System::Action_1<::System::Object*>* _continuation;

  /// @brief Field _executionContext, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__executionContext, put = __cordl_internal_set__executionContext))::System::Threading::ExecutionContext* _executionContext;

  /// @brief Field _scheduler, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__scheduler, put = __cordl_internal_set__scheduler))::System::Object* _scheduler;

  /// @brief Field _token, offset 0xd0, size 0x2
  __declspec(property(get = __cordl_internal_get__token, put = __cordl_internal_set__token)) int16_t _token;

  /// @brief Field s_availableSentinel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_availableSentinel, put = setStaticF_s_availableSentinel))::System::Action_1<::System::Object*>* s_availableSentinel;

  /// @brief Field s_completedSentinel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_completedSentinel, put = setStaticF_s_completedSentinel))::System::Action_1<::System::Object*>* s_completedSentinel;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept;

  /// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>"
  constexpr operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*() noexcept;

  /// @brief Method CreateException, addr 0x2b4aa94, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Exception* CreateException(::System::Net::Sockets::SocketError error);

  /// @brief Method GetResult, addr 0x2b4aec8, size 0x48, virtual true, abstract: false, final true
  inline int32_t GetResult(int16_t token);

  /// @brief Method GetStatus, addr 0x2b4ab84, size 0x94, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t token);

  /// @brief Method InvokeContinuation, addr 0x2b4a7b4, size 0x2e0, virtual false, abstract: false, final false
  inline void InvokeContinuation(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, bool forceAsync);

  static inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* New_ctor();

  /// @brief Method OnCompleted, addr 0x2b4a5b4, size 0x200, virtual true, abstract: false, final false
  inline void OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* _);

  /// @brief Method OnCompleted, addr 0x2b4ac68, size 0x210, virtual true, abstract: false, final true
  inline void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags);

  /// @brief Method ReceiveAsync, addr 0x2b41484, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReceiveAsync(::System::Net::Sockets::Socket* socket);

  /// @brief Method Release, addr 0x2b4a544, size 0x70, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method Reserve, addr 0x2b41404, size 0x80, virtual false, abstract: false, final false
  inline bool Reserve();

  /// @brief Method SendAsyncForNetworkStream, addr 0x2b418ec, size 0x6c, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask SendAsyncForNetworkStream(::System::Net::Sockets::Socket* socket);

  /// @brief Method System.Threading.Tasks.Sources.IValueTaskSource.GetResult, addr 0x2b4af34, size 0x40, virtual true, abstract: false, final true
  inline void System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token);

  /// @brief Method ThrowException, addr 0x2b4af10, size 0x24, virtual false, abstract: false, final false
  inline void ThrowException(::System::Net::Sockets::SocketError error);

  /// @brief Method ThrowIncorrectTokenException, addr 0x2b4ac18, size 0x50, virtual false, abstract: false, final false
  inline void ThrowIncorrectTokenException();

  /// @brief Method ThrowMultipleContinuationsException, addr 0x2b4ae78, size 0x50, virtual false, abstract: false, final false
  inline void ThrowMultipleContinuationsException();

  constexpr bool const& __cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField() const;

  constexpr bool& __cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField();

  constexpr ::System::Action_1<::System::Object*>*& __cordl_internal_get__continuation();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& __cordl_internal_get__continuation() const;

  constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__executionContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& __cordl_internal_get__executionContext() const;

  constexpr ::System::Object*& __cordl_internal_get__scheduler();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__scheduler() const;

  constexpr int16_t const& __cordl_internal_get__token() const;

  constexpr int16_t& __cordl_internal_get__token();

  constexpr void __cordl_internal_set__WrapExceptionsInIOExceptions_k__BackingField(bool value);

  constexpr void __cordl_internal_set__continuation(::System::Action_1<::System::Object*>* value);

  constexpr void __cordl_internal_set__executionContext(::System::Threading::ExecutionContext* value);

  constexpr void __cordl_internal_set__scheduler(::System::Object* value);

  constexpr void __cordl_internal_set__token(int16_t value);

  /// @brief Method .ctor, addr 0x2b4a4c4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* getStaticF_Reserved();

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_availableSentinel();

  static inline ::System::Action_1<::System::Object*>* getStaticF_s_completedSentinel();

  /// @brief Method get_WrapExceptionsInIOExceptions, addr 0x2b4a530, size 0x8, virtual false, abstract: false, final false
  inline bool get_WrapExceptionsInIOExceptions();

  /// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept;

  /// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>"
  constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_int32_t_() noexcept;

  static inline void setStaticF_Reserved(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* value);

  static inline void setStaticF_s_availableSentinel(::System::Action_1<::System::Object*>* value);

  static inline void setStaticF_s_completedSentinel(::System::Action_1<::System::Object*>* value);

  /// @brief Method set_WrapExceptionsInIOExceptions, addr 0x2b4a538, size 0xc, virtual false, abstract: false, final false
  inline void set_WrapExceptionsInIOExceptions(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket__AwaitableSocketAsyncEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket__AwaitableSocketAsyncEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket__AwaitableSocketAsyncEventArgs(__Socket__AwaitableSocketAsyncEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket__AwaitableSocketAsyncEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket__AwaitableSocketAsyncEventArgs(__Socket__AwaitableSocketAsyncEventArgs const&) = delete;

  /// @brief Field _continuation, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_1<::System::Object*>* ____continuation;

  /// @brief Field _executionContext, offset: 0xc0, size: 0x8, def value: None
  ::System::Threading::ExecutionContext* ____executionContext;

  /// @brief Field _scheduler, offset: 0xc8, size: 0x8, def value: None
  ::System::Object* ____scheduler;

  /// @brief Field _token, offset: 0xd0, size: 0x2, def value: None
  int16_t ____token;

  /// @brief Field <WrapExceptionsInIOExceptions>k__BackingField, offset: 0xd2, size: 0x1, def value: None
  bool ____WrapExceptionsInIOExceptions_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs, 0xd8>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs, ____continuation) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs, ____executionContext) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs, ____scheduler) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs, ____token) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs, ____WrapExceptionsInIOExceptions_k__BackingField) == 0xd2, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: ::WSABUF
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: true
// CS Name: ::Socket::WSABUF
struct CORDL_TYPE __Socket__WSABUF {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket__WSABUF();

  // Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buf", ty: "void*", modifiers: "", def_value: None }]
  constexpr __Socket__WSABUF(int32_t len, void* buf) noexcept;

  /// @brief Field len, offset: 0x0, size: 0x4, def value: None
  int32_t len;

  /// @brief Field buf, offset: 0x8, size: 0x8, def value: None
  void* buf;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket__WSABUF, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__WSABUF, len) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket__WSABUF, buf) == 0x8, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::<>c*
class CORDL_TYPE __Socket____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Net::Sockets::__Socket____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* __9__14_0;

  /// @brief Field <>9__14_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_1, put = setStaticF___9__14_1))::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* __9__14_1;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::AsyncCallback* __9__15_0;

  /// @brief Field <>9__15_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_1, put = setStaticF___9__15_1))::System::AsyncCallback* __9__15_1;

  /// @brief Field <>9__22_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_0, put = setStaticF___9__22_0))::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* __9__22_0;

  /// @brief Field <>9__22_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__22_1, put = setStaticF___9__22_1))::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* __9__22_1;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0))::System::AsyncCallback* __9__23_0;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__23_1, put = setStaticF___9__23_1))::System::AsyncCallback* __9__23_1;

  /// @brief Field <>9__295_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__295_0, put = setStaticF___9__295_0))::System::IOAsyncCallback* __9__295_0;

  /// @brief Field <>9__297_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__297_0, put = setStaticF___9__297_0))::System::IOAsyncCallback* __9__297_0;

  static inline ::System::Net::Sockets::__Socket____c* New_ctor();

  /// @brief Method <BeginSend>b__297_0, addr 0x2a450bc, size 0x94, virtual false, abstract: false, final false
  inline void _BeginSend_b__297_0(::System::IOAsyncResult* s);

  /// @brief Method <ReceiveAsyncApm>b__15_0, addr 0x2a443c8, size 0x238, virtual false, abstract: false, final false
  inline void _ReceiveAsyncApm_b__15_0(::System::IAsyncResult* iar);

  /// @brief Method <ReceiveAsyncApm>b__15_1, addr 0x2a44600, size 0x434, virtual false, abstract: false, final false
  inline void _ReceiveAsyncApm_b__15_1(::System::IAsyncResult* iar);

  /// @brief Method <ReceiveAsync>b__14_0, addr 0x2a44310, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::__Socket__CachedEventArgs* _ReceiveAsync_b__14_0();

  /// @brief Method <ReceiveAsync>b__14_1, addr 0x2a4436c, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* _ReceiveAsync_b__14_1();

  /// @brief Method <SendAsyncApm>b__23_0, addr 0x2a44aec, size 0x238, virtual false, abstract: false, final false
  inline void _SendAsyncApm_b__23_0(::System::IAsyncResult* iar);

  /// @brief Method <SendAsyncApm>b__23_1, addr 0x2a44d24, size 0x304, virtual false, abstract: false, final false
  inline void _SendAsyncApm_b__23_1(::System::IAsyncResult* iar);

  /// @brief Method <SendAsyncForNetworkStream>b__22_0, addr 0x2a44a34, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::__Socket__CachedEventArgs* _SendAsyncForNetworkStream_b__22_0();

  /// @brief Method <SendAsyncForNetworkStream>b__22_1, addr 0x2a44a90, size 0x5c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs* _SendAsyncForNetworkStream_b__22_1();

  /// @brief Method <SendAsync>b__295_0, addr 0x2a45028, size 0x94, virtual false, abstract: false, final false
  inline void _SendAsync_b__295_0(::System::IOAsyncResult* s);

  /// @brief Method <.cctor>b__367_0, addr 0x2a45150, size 0xf8, virtual false, abstract: false, final false
  inline void __cctor_b__367_0(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method <.cctor>b__367_1, addr 0x2a45248, size 0xe0, virtual false, abstract: false, final false
  inline void __cctor_b__367_1(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method <.cctor>b__367_10, addr 0x2a464c8, size 0x290, virtual false, abstract: false, final false
  inline void __cctor_b__367_10(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_11, addr 0x2a46760, size 0x2a8, virtual false, abstract: false, final false
  inline void __cctor_b__367_11(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_12, addr 0x2a46a10, size 0x10c, virtual false, abstract: false, final false
  inline void __cctor_b__367_12(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_13, addr 0x2a46b1c, size 0x2b4, virtual false, abstract: false, final false
  inline void __cctor_b__367_13(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_14, addr 0x2a46dd0, size 0x17c, virtual false, abstract: false, final false
  inline void __cctor_b__367_14(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_15, addr 0x2a46f54, size 0x290, virtual false, abstract: false, final false
  inline void __cctor_b__367_15(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_16, addr 0x2a471e4, size 0x10c, virtual false, abstract: false, final false
  inline void __cctor_b__367_16(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_17, addr 0x2a472f0, size 0x290, virtual false, abstract: false, final false
  inline void __cctor_b__367_17(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_2, addr 0x2a45328, size 0xe0, virtual false, abstract: false, final false
  inline void __cctor_b__367_2(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method <.cctor>b__367_3, addr 0x2a45408, size 0x284, virtual false, abstract: false, final false
  inline void __cctor_b__367_3(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_4, addr 0x2a45694, size 0x12c, virtual false, abstract: false, final false
  inline void __cctor_b__367_4(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_5, addr 0x2a457d0, size 0x238, virtual false, abstract: false, final false
  inline void __cctor_b__367_5(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_6, addr 0x2a45a1c, size 0x290, virtual false, abstract: false, final false
  inline void __cctor_b__367_6(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_7, addr 0x2a45cac, size 0x29c, virtual false, abstract: false, final false
  inline void __cctor_b__367_7(::System::IOAsyncResult* ares);

  /// @brief Method <.cctor>b__367_8, addr 0x2a46138, size 0x290, virtual false, abstract: false, final false
  inline void __cctor_b__367_8(::System::IAsyncResult* ares);

  /// @brief Method <.cctor>b__367_9, addr 0x2a463c8, size 0x100, virtual false, abstract: false, final false
  inline void __cctor_b__367_9(::System::IOAsyncResult* ares);

  /// @brief Method .ctor, addr 0x2a44308, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Sockets::__Socket____c* getStaticF___9();

  static inline ::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* getStaticF___9__14_0();

  static inline ::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* getStaticF___9__14_1();

  static inline ::System::AsyncCallback* getStaticF___9__15_0();

  static inline ::System::AsyncCallback* getStaticF___9__15_1();

  static inline ::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* getStaticF___9__22_0();

  static inline ::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* getStaticF___9__22_1();

  static inline ::System::AsyncCallback* getStaticF___9__23_0();

  static inline ::System::AsyncCallback* getStaticF___9__23_1();

  static inline ::System::IOAsyncCallback* getStaticF___9__295_0();

  static inline ::System::IOAsyncCallback* getStaticF___9__297_0();

  static inline void setStaticF___9(::System::Net::Sockets::__Socket____c* value);

  static inline void setStaticF___9__14_0(::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* value);

  static inline void setStaticF___9__14_1(::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* value);

  static inline void setStaticF___9__15_0(::System::AsyncCallback* value);

  static inline void setStaticF___9__15_1(::System::AsyncCallback* value);

  static inline void setStaticF___9__22_0(::System::Func_1<::System::Net::Sockets::__Socket__CachedEventArgs*>* value);

  static inline void setStaticF___9__22_1(::System::Func_1<::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*>* value);

  static inline void setStaticF___9__23_0(::System::AsyncCallback* value);

  static inline void setStaticF___9__23_1(::System::AsyncCallback* value);

  static inline void setStaticF___9__295_0(::System::IOAsyncCallback* value);

  static inline void setStaticF___9__297_0(::System::IOAsyncCallback* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket____c(__Socket____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket____c(__Socket____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket____c, 0x10>, "Size mismatch!");

} // namespace System::Net::Sockets
// Type: ::<>c__DisplayClass240_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::<>c__DisplayClass240_0*
class CORDL_TYPE __Socket____c__DisplayClass240_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field sockares, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sockares, put = __cordl_internal_set_sockares))::System::Net::Sockets::SocketAsyncResult* sockares;

  static inline ::System::Net::Sockets::__Socket____c__DisplayClass240_0* New_ctor();

  /// @brief Method <BeginConnect>b__0, addr 0x2a47588, size 0x120, virtual false, abstract: false, final false
  inline void _BeginConnect_b__0(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* t);

  constexpr ::System::Net::Sockets::SocketAsyncResult*& __cordl_internal_get_sockares();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::SocketAsyncResult*> const& __cordl_internal_get_sockares() const;

  constexpr void __cordl_internal_set_sockares(::System::Net::Sockets::SocketAsyncResult* value);

  /// @brief Method .ctor, addr 0x2a47580, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket____c__DisplayClass240_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c__DisplayClass240_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket____c__DisplayClass240_0(__Socket____c__DisplayClass240_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c__DisplayClass240_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket____c__DisplayClass240_0(__Socket____c__DisplayClass240_0 const&) = delete;

  /// @brief Field sockares, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::SocketAsyncResult* ___sockares;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket____c__DisplayClass240_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket____c__DisplayClass240_0, ___sockares) == 0x10, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: ::<>c__DisplayClass298_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::<>c__DisplayClass298_0*
class CORDL_TYPE __Socket____c__DisplayClass298_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field sent_so_far, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sent_so_far, put = __cordl_internal_set_sent_so_far)) int32_t sent_so_far;

  static inline ::System::Net::Sockets::__Socket____c__DisplayClass298_0* New_ctor();

  /// @brief Method <BeginSendCallback>b__0, addr 0x2a476b0, size 0xa4, virtual false, abstract: false, final false
  inline void _BeginSendCallback_b__0(::System::IOAsyncResult* s);

  constexpr int32_t const& __cordl_internal_get_sent_so_far() const;

  constexpr int32_t& __cordl_internal_get_sent_so_far();

  constexpr void __cordl_internal_set_sent_so_far(int32_t value);

  /// @brief Method .ctor, addr 0x2a476a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket____c__DisplayClass298_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c__DisplayClass298_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket____c__DisplayClass298_0(__Socket____c__DisplayClass298_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c__DisplayClass298_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket____c__DisplayClass298_0(__Socket____c__DisplayClass298_0 const&) = delete;

  /// @brief Field sent_so_far, offset: 0x10, size: 0x4, def value: None
  int32_t ___sent_so_far;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket____c__DisplayClass298_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket____c__DisplayClass298_0, ___sent_so_far) == 0x10, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: ::<>c__DisplayClass355_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::Socket::<>c__DisplayClass355_0*
class CORDL_TYPE __Socket____c__DisplayClass355_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Net::Sockets::Socket* __4__this;

  /// @brief Field handle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) void* handle;

  /// @brief Field job, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_job, put = __cordl_internal_set_job))::System::IOSelectorJob* job;

  static inline ::System::Net::Sockets::__Socket____c__DisplayClass355_0* New_ctor();

  /// @brief Method <QueueIOSelectorJob>b__0, addr 0x2a4775c, size 0x44, virtual false, abstract: false, final false
  inline void _QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task* t);

  constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& __cordl_internal_get___4__this() const;

  constexpr void* const& __cordl_internal_get_handle() const;

  constexpr void*& __cordl_internal_get_handle();

  constexpr ::System::IOSelectorJob*& __cordl_internal_get_job();

  constexpr ::cordl_internals::to_const_pointer<::System::IOSelectorJob*> const& __cordl_internal_get_job() const;

  constexpr void __cordl_internal_set___4__this(::System::Net::Sockets::Socket* value);

  constexpr void __cordl_internal_set_handle(void* value);

  constexpr void __cordl_internal_set_job(::System::IOSelectorJob* value);

  /// @brief Method .ctor, addr 0x2a47754, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Socket____c__DisplayClass355_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c__DisplayClass355_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Socket____c__DisplayClass355_0(__Socket____c__DisplayClass355_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Socket____c__DisplayClass355_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Socket____c__DisplayClass355_0(__Socket____c__DisplayClass355_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::Socket* _____4__this;

  /// @brief Field job, offset: 0x18, size: 0x8, def value: None
  ::System::IOSelectorJob* ___job;

  /// @brief Field handle, offset: 0x20, size: 0x8, def value: None
  void* ___handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::__Socket____c__DisplayClass355_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket____c__DisplayClass355_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket____c__DisplayClass355_0, ___job) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::__Socket____c__DisplayClass355_0, ___handle) == 0x20, "Offset mismatch!");

} // namespace System::Net::Sockets
// Type: System.Net.Sockets::Socket
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Sockets {
// Is value type: false
// CS Name: ::System.Net.Sockets::Socket*
class CORDL_TYPE Socket : public ::System::Object {
public:
  // Declarations
  using AwaitableSocketAsyncEventArgs = ::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs;

  using CachedEventArgs = ::System::Net::Sockets::__Socket__CachedEventArgs;

  using Int32TaskSocketAsyncEventArgs = ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs;

  template <typename TResult> using TaskSocketAsyncEventArgs_1 = ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<TResult>;

  using WSABUF = ::System::Net::Sockets::__Socket__WSABUF;

  using __c = ::System::Net::Sockets::__Socket____c;

  using __c__DisplayClass240_0 = ::System::Net::Sockets::__Socket____c__DisplayClass240_0;

  using __c__DisplayClass298_0 = ::System::Net::Sockets::__Socket____c__DisplayClass298_0;

  using __c__DisplayClass355_0 = ::System::Net::Sockets::__Socket____c__DisplayClass355_0;

  /// @brief Field AcceptAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AcceptAsyncCallback, put = setStaticF_AcceptAsyncCallback))::System::AsyncCallback* AcceptAsyncCallback;

  /// @brief Field AcceptCompletedHandler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AcceptCompletedHandler,
                             put = setStaticF_AcceptCompletedHandler))::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* AcceptCompletedHandler;

  __declspec(property(get = get_AddressFamily))::System::Net::Sockets::AddressFamily AddressFamily;

  __declspec(property(get = get_Available)) int32_t Available;

  /// @brief Field BeginAcceptCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginAcceptCallback, put = setStaticF_BeginAcceptCallback))::System::IOAsyncCallback* BeginAcceptCallback;

  /// @brief Field BeginAcceptReceiveCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginAcceptReceiveCallback, put = setStaticF_BeginAcceptReceiveCallback))::System::IOAsyncCallback* BeginAcceptReceiveCallback;

  /// @brief Field BeginConnectCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginConnectCallback, put = setStaticF_BeginConnectCallback))::System::IOAsyncCallback* BeginConnectCallback;

  /// @brief Field BeginDisconnectCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginDisconnectCallback, put = setStaticF_BeginDisconnectCallback))::System::IOAsyncCallback* BeginDisconnectCallback;

  /// @brief Field BeginReceiveCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginReceiveCallback, put = setStaticF_BeginReceiveCallback))::System::IOAsyncCallback* BeginReceiveCallback;

  /// @brief Field BeginReceiveFromCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginReceiveFromCallback, put = setStaticF_BeginReceiveFromCallback))::System::IOAsyncCallback* BeginReceiveFromCallback;

  /// @brief Field BeginReceiveGenericCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginReceiveGenericCallback, put = setStaticF_BeginReceiveGenericCallback))::System::IOAsyncCallback* BeginReceiveGenericCallback;

  /// @brief Field BeginSendGenericCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BeginSendGenericCallback, put = setStaticF_BeginSendGenericCallback))::System::IOAsyncCallback* BeginSendGenericCallback;

  __declspec(property(get = get_Blocking, put = set_Blocking)) bool Blocking;

  __declspec(property(get = get_CleanedUp)) bool CleanedUp;

  /// @brief Field ConnectAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ConnectAsyncCallback, put = setStaticF_ConnectAsyncCallback))::System::AsyncCallback* ConnectAsyncCallback;

  __declspec(property(get = get_Connected)) bool Connected;

  /// @brief Field DisconnectAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DisconnectAsyncCallback, put = setStaticF_DisconnectAsyncCallback))::System::AsyncCallback* DisconnectAsyncCallback;

  __declspec(property(put = set_DontFragment)) bool DontFragment;

  __declspec(property(get = get_DualMode, put = set_DualMode)) bool DualMode;

  __declspec(property(put = set_EnableBroadcast)) bool EnableBroadcast;

  __declspec(property(put = set_ExclusiveAddressUse)) bool ExclusiveAddressUse;

  __declspec(property(get = get_Handle)) void* Handle;

  __declspec(property(get = get_IsBound)) bool IsBound;

  __declspec(property(get = get_IsDualMode)) bool IsDualMode;

  __declspec(property(get = get_LocalEndPoint))::System::Net::EndPoint* LocalEndPoint;

  __declspec(property(put = set_NoDelay)) bool NoDelay;

  __declspec(property(get = get_ProtocolType))::System::Net::Sockets::ProtocolType ProtocolType;

  /// @brief Field ReadSem, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_ReadSem, put = __cordl_internal_set_ReadSem))::System::Threading::SemaphoreSlim* ReadSem;

  /// @brief Field ReceiveAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReceiveAsyncCallback, put = setStaticF_ReceiveAsyncCallback))::System::AsyncCallback* ReceiveAsyncCallback;

  __declspec(property(put = set_ReceiveBufferSize)) int32_t ReceiveBufferSize;

  /// @brief Field ReceiveCompletedHandler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReceiveCompletedHandler,
                             put = setStaticF_ReceiveCompletedHandler))::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* ReceiveCompletedHandler;

  /// @brief Field ReceiveFromAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ReceiveFromAsyncCallback, put = setStaticF_ReceiveFromAsyncCallback))::System::AsyncCallback* ReceiveFromAsyncCallback;

  __declspec(property(put = set_ReceiveTimeout)) int32_t ReceiveTimeout;

  __declspec(property(get = get_RemoteEndPoint))::System::Net::EndPoint* RemoteEndPoint;

  /// @brief Field SendAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendAsyncCallback, put = setStaticF_SendAsyncCallback))::System::AsyncCallback* SendAsyncCallback;

  __declspec(property(put = set_SendBufferSize)) int32_t SendBufferSize;

  /// @brief Field SendCompletedHandler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendCompletedHandler,
                             put = setStaticF_SendCompletedHandler))::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* SendCompletedHandler;

  __declspec(property(put = set_SendTimeout)) int32_t SendTimeout;

  /// @brief Field SendToAsyncCallback, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SendToAsyncCallback, put = setStaticF_SendToAsyncCallback))::System::AsyncCallback* SendToAsyncCallback;

  __declspec(property(get = get_SocketType))::System::Net::Sockets::SocketType SocketType;

  __declspec(property(get = get_Ttl, put = set_Ttl)) int16_t Ttl;

  /// @brief Field WriteSem, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_WriteSem, put = __cordl_internal_set_WriteSem))::System::Threading::SemaphoreSlim* WriteSem;

  /// @brief Field _cachedTaskEventArgs, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedTaskEventArgs, put = __cordl_internal_set__cachedTaskEventArgs))::System::Net::Sockets::__Socket__CachedEventArgs* _cachedTaskEventArgs;

  /// @brief Field ID, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__cordl_ID, put = __cordl_internal_set__cordl_ID)) int32_t _cordl_ID;

  /// @brief Field addressFamily, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_addressFamily, put = __cordl_internal_set_addressFamily))::System::Net::Sockets::AddressFamily addressFamily;

  /// @brief Field connect_in_progress, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_connect_in_progress, put = __cordl_internal_set_connect_in_progress)) bool connect_in_progress;

  /// @brief Field is_blocking, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_is_blocking, put = __cordl_internal_set_is_blocking)) bool is_blocking;

  /// @brief Field is_bound, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_is_bound, put = __cordl_internal_set_is_bound)) bool is_bound;

  /// @brief Field is_closed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_is_closed, put = __cordl_internal_set_is_closed)) bool is_closed;

  /// @brief Field is_connected, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get_is_connected, put = __cordl_internal_set_is_connected)) bool is_connected;

  /// @brief Field is_listening, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_is_listening, put = __cordl_internal_set_is_listening)) bool is_listening;

  /// @brief Field linger_timeout, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_linger_timeout, put = __cordl_internal_set_linger_timeout)) int32_t linger_timeout;

  /// @brief Field m_Handle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Handle, put = __cordl_internal_set_m_Handle))::System::Net::Sockets::SafeSocketHandle* m_Handle;

  /// @brief Field m_IntCleanedUp, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntCleanedUp, put = __cordl_internal_set_m_IntCleanedUp)) int32_t m_IntCleanedUp;

  /// @brief Field protocolType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_protocolType, put = __cordl_internal_set_protocolType))::System::Net::Sockets::ProtocolType protocolType;

  /// @brief Field s_Initialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_Initialized, put = setStaticF_s_Initialized)) bool s_Initialized;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject))::System::Object* s_InternalSyncObject;

  /// @brief Field s_LoggingEnabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_LoggingEnabled, put = setStaticF_s_LoggingEnabled)) bool s_LoggingEnabled;

  /// @brief Field s_OSSupportsIPv6, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_OSSupportsIPv6, put = setStaticF_s_OSSupportsIPv6)) bool s_OSSupportsIPv6;

  /// @brief Field s_PerfCountersEnabled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_PerfCountersEnabled, put = setStaticF_s_PerfCountersEnabled)) bool s_PerfCountersEnabled;

  /// @brief Field s_SupportsIPv4, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_SupportsIPv4, put = setStaticF_s_SupportsIPv4)) bool s_SupportsIPv4;

  /// @brief Field s_SupportsIPv6, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_s_SupportsIPv6, put = setStaticF_s_SupportsIPv6)) bool s_SupportsIPv6;

  /// @brief Field s_rentedInt32Sentinel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rentedInt32Sentinel, put = setStaticF_s_rentedInt32Sentinel))::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* s_rentedInt32Sentinel;

  /// @brief Field s_rentedSocketSentinel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_rentedSocketSentinel,
                             put = setStaticF_s_rentedSocketSentinel))::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* s_rentedSocketSentinel;

  /// @brief Field s_zeroTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_zeroTask, put = setStaticF_s_zeroTask))::System::Threading::Tasks::Task_1<int32_t>* s_zeroTask;

  /// @brief Field seed_endpoint, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_seed_endpoint, put = __cordl_internal_set_seed_endpoint))::System::Net::EndPoint* seed_endpoint;

  /// @brief Field socketType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_socketType, put = __cordl_internal_set_socketType))::System::Net::Sockets::SocketType socketType;

  /// @brief Field useOverlappedIO, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_useOverlappedIO, put = __cordl_internal_set_useOverlappedIO)) bool useOverlappedIO;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Accept, addr 0x2b45668, size 0x134, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* Accept();

  /// @brief Method Accept, addr 0x2b458fc, size 0x11c, virtual false, abstract: false, final false
  inline void Accept(::System::Net::Sockets::Socket* acceptSocket);

  /// @brief Method AcceptAsync, addr 0x2b45a18, size 0x24c, virtual false, abstract: false, final false
  inline bool AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method Accept_icall, addr 0x2b461f8, size 0x8, virtual false, abstract: false, final false
  static inline void* Accept_icall(void* sock, ByRef<int32_t> error, bool blocking);

  /// @brief Method Accept_internal, addr 0x2b4579c, size 0x160, virtual false, abstract: false, final false
  static inline ::System::Net::Sockets::SafeSocketHandle* Accept_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ByRef<int32_t> error, bool blocking);

  /// @brief Method Available_icall, addr 0x2b44c44, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Available_icall(void* socket, ByRef<int32_t> error);

  /// @brief Method Available_internal, addr 0x2b44b1c, size 0x128, virtual false, abstract: false, final false
  static inline int32_t Available_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ByRef<int32_t> error);

  /// @brief Method BeginAccept, addr 0x2b45e20, size 0x170, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginAccept(::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginConnect, addr 0x2b46c78, size 0x2e0, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginConnect, addr 0x2b46f58, size 0x144, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginConnect(::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginMConnect, addr 0x2b474f8, size 0x208, virtual false, abstract: false, final false
  static inline bool BeginMConnect(::System::Net::Sockets::SocketAsyncResult* sockares);

  /// @brief Method BeginReceive, addr 0x2b3f6b8, size 0x80, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginReceive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                              ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginReceive, addr 0x2b44220, size 0x190, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginReceive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                              ByRef<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginSConnect, addr 0x2b4709c, size 0x45c, virtual false, abstract: false, final false
  static inline bool BeginSConnect(::System::Net::Sockets::SocketAsyncResult* sockares);

  /// @brief Method BeginSend, addr 0x2b3fce0, size 0x80, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginSend(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                           ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginSend, addr 0x2b43f14, size 0x21c, virtual false, abstract: false, final false
  inline ::System::IAsyncResult* BeginSend(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                           ByRef<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method BeginSendCallback, addr 0x2b48f70, size 0x39c, virtual false, abstract: false, final false
  static inline void BeginSendCallback(::System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far);

  /// @brief Method Bind, addr 0x2b46200, size 0x17c, virtual false, abstract: false, final false
  inline void Bind(::System::Net::EndPoint* localEP);

  /// @brief Method Bind_icall, addr 0x2b46558, size 0x4, virtual false, abstract: false, final false
  static inline void Bind_icall(void* sock, ::System::Net::SocketAddress* sa, ByRef<int32_t> error);

  /// @brief Method Bind_internal, addr 0x2b46438, size 0x120, virtual false, abstract: false, final false
  static inline void Bind_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ByRef<int32_t> error);

  /// @brief Method Blocking_icall, addr 0x2b450ec, size 0x8, virtual false, abstract: false, final false
  static inline void Blocking_icall(void* socket, bool block, ByRef<int32_t> error);

  /// @brief Method Blocking_internal, addr 0x2b44fcc, size 0x120, virtual false, abstract: false, final false
  static inline void Blocking_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, bool block, ByRef<int32_t> error);

  /// @brief Method CanTryAddressFamily, addr 0x2b4300c, size 0x38, virtual false, abstract: false, final false
  inline bool CanTryAddressFamily(::System::Net::Sockets::AddressFamily family);

  /// @brief Method Close, addr 0x2b4996c, size 0x8, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Close, addr 0x2b3f2e8, size 0x8, virtual false, abstract: false, final false
  inline void Close(int32_t timeout);

  /// @brief Method Close_icall, addr 0x2b49974, size 0x4, virtual false, abstract: false, final false
  static inline void Close_icall(void* socket, ByRef<int32_t> error);

  /// @brief Method CompleteAccept, addr 0x2b41d78, size 0x11c, virtual false, abstract: false, final false
  static inline void CompleteAccept(::System::Net::Sockets::Socket* s, ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* saea);

  /// @brief Method CompleteSendReceive, addr 0x2b41fc0, size 0x144, virtual false, abstract: false, final false
  static inline void CompleteSendReceive(::System::Net::Sockets::Socket* s, ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* saea, bool isReceive);

  /// @brief Method Connect, addr 0x2b46778, size 0x7c, virtual false, abstract: false, final false
  inline void Connect(::System::Net::IPAddress* address, int32_t port);

  /// @brief Method Connect, addr 0x2b467f4, size 0x360, virtual false, abstract: false, final false
  inline void Connect(::System::Net::EndPoint* remoteEP);

  /// @brief Method Connect_icall, addr 0x2b477b0, size 0x8, virtual false, abstract: false, final false
  static inline void Connect_icall(void* sock, ::System::Net::SocketAddress* sa, ByRef<int32_t> error, bool blocking);

  /// @brief Method Connect_internal, addr 0x2b46b54, size 0x124, virtual false, abstract: false, final false
  static inline void Connect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ByRef<int32_t> error, bool blocking);

  /// @brief Method Disconnect, addr 0x2b477b8, size 0xf8, virtual false, abstract: false, final false
  inline void Disconnect(bool reuseSocket);

  /// @brief Method Disconnect_icall, addr 0x2b47a80, size 0x8, virtual false, abstract: false, final false
  static inline void Disconnect_icall(void* sock, bool reuse, ByRef<int32_t> error);

  /// @brief Method Disconnect_internal, addr 0x2b478b0, size 0x120, virtual false, abstract: false, final false
  static inline void Disconnect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, bool reuse, ByRef<int32_t> error);

  /// @brief Method Dispose, addr 0x2b445d8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2b49a94, size 0x60, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EndAccept, addr 0x2b45f90, size 0x28, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* EndAccept(::System::IAsyncResult* asyncResult);

  /// @brief Method EndAccept, addr 0x2b45fb8, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::Socket* EndAccept(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, ByRef<int32_t> bytesTransferred, ::System::IAsyncResult* asyncResult);

  /// @brief Method EndConnect, addr 0x2b47700, size 0xb0, virtual false, abstract: false, final false
  inline void EndConnect(::System::IAsyncResult* asyncResult);

  /// @brief Method EndDisconnect, addr 0x2b479d0, size 0xb0, virtual false, abstract: false, final false
  inline void EndDisconnect(::System::IAsyncResult* asyncResult);

  /// @brief Method EndReceive, addr 0x2b3f954, size 0x68, virtual false, abstract: false, final false
  inline int32_t EndReceive(::System::IAsyncResult* asyncResult);

  /// @brief Method EndReceive, addr 0x2b443b0, size 0xf0, virtual false, abstract: false, final false
  inline int32_t EndReceive(::System::IAsyncResult* asyncResult, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method EndReceiveFrom_internal, addr 0x2b48930, size 0xd0, virtual false, abstract: false, final false
  inline int32_t EndReceiveFrom_internal(::System::Net::Sockets::SocketAsyncResult* sockares, ::System::Net::Sockets::SocketAsyncEventArgs* ares);

  /// @brief Method EndSend, addr 0x2b3ff7c, size 0x68, virtual false, abstract: false, final false
  inline int32_t EndSend(::System::IAsyncResult* asyncResult);

  /// @brief Method EndSend, addr 0x2b44130, size 0xf0, virtual false, abstract: false, final false
  inline int32_t EndSend(::System::IAsyncResult* asyncResult, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method EndSendTo, addr 0x2b49618, size 0xb8, virtual false, abstract: false, final false
  inline int32_t EndSendTo(::System::IAsyncResult* asyncResult);

  /// @brief Method Finalize, addr 0x2b44644, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetException, addr 0x2b41ed4, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Exception* GetException(::System::Net::Sockets::SocketError error, bool wrapExceptionsInIOExceptions);

  /// @brief Method GetSocketOption, addr 0x2b3db8c, size 0x1a4, virtual false, abstract: false, final false
  inline ::System::Object* GetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName);

  /// @brief Method GetSocketOption_obj_icall, addr 0x2b49810, size 0x4, virtual false, abstract: false, final false
  static inline void GetSocketOption_obj_icall(void* socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ByRef<::System::Object*> obj_val,
                                               ByRef<int32_t> error);

  /// @brief Method GetSocketOption_obj_internal, addr 0x2b496d8, size 0x138, virtual false, abstract: false, final false
  static inline void GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name,
                                                  ByRef<::System::Object*> obj_val, ByRef<int32_t> error);

  /// @brief Method IOControl, addr 0x2b43d80, size 0x4, virtual false, abstract: false, final false
  inline int32_t IOControl(::System::Net::Sockets::IOControlCode ioControlCode, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionInValue, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionOutValue);

  /// @brief Method IOControl, addr 0x2b43d84, size 0x190, virtual false, abstract: false, final false
  inline int32_t IOControl(int32_t ioControlCode, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionInValue, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionOutValue);

  /// @brief Method IOControl_icall, addr 0x2b49968, size 0x4, virtual false, abstract: false, final false
  static inline int32_t IOControl_icall(void* sock, int32_t ioctl_code, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, ByRef<int32_t> error);

  /// @brief Method IOControl_internal, addr 0x2b49820, size 0x148, virtual false, abstract: false, final false
  static inline int32_t IOControl_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t ioctl_code, ::ArrayW<uint8_t, ::Array<uint8_t>*> input,
                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> output, ByRef<int32_t> error);

  /// @brief Method InitSocketAsyncEventArgs, addr 0x2b45c64, size 0x7c, virtual false, abstract: false, final false
  inline void InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* state, ::System::Net::Sockets::SocketOperation operation);

  /// @brief Method InitializeSockets, addr 0x2b423a4, size 0x264, virtual false, abstract: false, final false
  static inline void InitializeSockets();

  /// @brief Method InternalShutdown, addr 0x2b3f260, size 0x88, virtual false, abstract: false, final false
  inline void InternalShutdown(::System::Net::Sockets::SocketShutdown how);

  /// @brief Method IsProtocolSupported, addr 0x2b44584, size 0x54, virtual false, abstract: false, final false
  static inline bool IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface);

  /// @brief Method IsProtocolSupported_internal, addr 0x2b49d98, size 0x4, virtual false, abstract: false, final false
  static inline bool IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface);

  /// @brief Method Linger, addr 0x2b49af4, size 0x16c, virtual false, abstract: false, final false
  inline void Linger(void* handle);

  /// @brief Method Listen, addr 0x2b4655c, size 0xf8, virtual false, abstract: false, final false
  inline void Listen(int32_t backlog);

  /// @brief Method Listen_icall, addr 0x2b46774, size 0x4, virtual false, abstract: false, final false
  static inline void Listen_icall(void* sock, int32_t backlog, ByRef<int32_t> error);

  /// @brief Method Listen_internal, addr 0x2b46654, size 0x120, virtual false, abstract: false, final false
  static inline void Listen_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t backlog, ByRef<int32_t> error);

  /// @brief Method LocalEndPoint_icall, addr 0x2b44ef0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::SocketAddress* LocalEndPoint_icall(void* socket, int32_t family, ByRef<int32_t> error);

  /// @brief Method LocalEndPoint_internal, addr 0x2b44dc0, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Net::SocketAddress* LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, ByRef<int32_t> error);

  static inline ::System::Net::Sockets::Socket* New_ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType,
                                                         ::System::Net::Sockets::ProtocolType protocolType);

  static inline ::System::Net::Sockets::Socket* New_ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto,
                                                         ::System::Net::Sockets::SafeSocketHandle* safe_handle);

  /// @brief Method Poll, addr 0x2b45384, size 0x1a0, virtual false, abstract: false, final false
  inline bool Poll(int32_t microSeconds, ::System::Net::Sockets::SelectMode mode);

  /// @brief Method Poll_icall, addr 0x2b45664, size 0x4, virtual false, abstract: false, final false
  static inline bool Poll_icall(void* socket, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ByRef<int32_t> error);

  /// @brief Method Poll_internal, addr 0x2b45524, size 0x140, virtual false, abstract: false, final false
  static inline bool Poll_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ByRef<int32_t> error);

  /// @brief Method QueueIOSelectorJob, addr 0x2b45ce0, size 0x140, virtual false, abstract: false, final false
  inline void QueueIOSelectorJob(::System::Threading::SemaphoreSlim* sem, void* handle, ::System::IOSelectorJob* job);

  /// @brief Method Receive, addr 0x2b3e644, size 0x68, virtual false, abstract: false, final false
  inline int32_t Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags);

  /// @brief Method Receive, addr 0x2b43724, size 0x10c, virtual false, abstract: false, final false
  inline int32_t Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                         ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method Receive, addr 0x2b47d58, size 0x210, virtual false, abstract: false, final false
  inline int32_t Receive(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method Receive, addr 0x2b3e920, size 0xf0, virtual false, abstract: false, final false
  inline int32_t Receive(::System::Span_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method Receive, addr 0x2b43830, size 0x68, virtual false, abstract: false, final false
  inline int32_t Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags);

  /// @brief Method Receive, addr 0x2b43898, size 0x4e8, virtual false, abstract: false, final false
  inline int32_t Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags,
                         ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method ReceiveAsync, addr 0x2b403a4, size 0x2bc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReceiveAsync(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, bool fromNetworkStream,
                                                                       ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReceiveAsync, addr 0x2b480ac, size 0x204, virtual false, abstract: false, final false
  inline bool ReceiveAsync(::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method ReceiveAsyncApm, addr 0x2b41524, size 0x3c8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* ReceiveAsyncApm(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags);

  /// @brief Method ReceiveFrom, addr 0x2b482c0, size 0x118, virtual false, abstract: false, final false
  inline int32_t ReceiveFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::EndPoint*> remoteEP);

  /// @brief Method ReceiveFrom, addr 0x2b483d8, size 0x17c, virtual false, abstract: false, final false
  inline int32_t ReceiveFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::EndPoint*> remoteEP,
                             ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method ReceiveFrom, addr 0x2b486a8, size 0x288, virtual false, abstract: false, final false
  inline int32_t ReceiveFrom(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::EndPoint*> remoteEP,
                             ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method ReceiveFrom_icall, addr 0x2b48a00, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ReceiveFrom_icall(void* sock, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<::System::Net::SocketAddress*> sockaddr,
                                          ByRef<int32_t> error, bool blocking);

  /// @brief Method ReceiveFrom_internal, addr 0x2b48554, size 0x154, virtual false, abstract: false, final false
  static inline int32_t ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                             ByRef<::System::Net::SocketAddress*> sockaddr, ByRef<int32_t> error, bool blocking);

  /// @brief Method Receive_array_icall, addr 0x2b482b0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Receive_array_icall(void* sock, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF> bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                            ByRef<int32_t> error, bool blocking);

  /// @brief Method Receive_icall, addr 0x2b482b8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Receive_icall(void* sock, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking);

  /// @brief Method Receive_internal, addr 0x2b47f68, size 0x144, virtual false, abstract: false, final false
  static inline int32_t Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF> bufarray, int32_t count,
                                         ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking);

  /// @brief Method Receive_internal, addr 0x2b47c14, size 0x144, virtual false, abstract: false, final false
  static inline int32_t Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                         ByRef<int32_t> error, bool blocking);

  /// @brief Method RemapIPEndPoint, addr 0x2b4637c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Net::IPEndPoint* RemapIPEndPoint(::System::Net::IPEndPoint* input);

  /// @brief Method RemoteEndPoint_icall, addr 0x2b45380, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Net::SocketAddress* RemoteEndPoint_icall(void* socket, int32_t family, ByRef<int32_t> error);

  /// @brief Method RemoteEndPoint_internal, addr 0x2b45250, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Net::SocketAddress* RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, ByRef<int32_t> error);

  /// @brief Method ReturnSocketAsyncEventArgs, addr 0x2b42104, size 0x4c, virtual false, abstract: false, final false
  inline void ReturnSocketAsyncEventArgs(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* saea, bool isReceive);

  /// @brief Method ReturnSocketAsyncEventArgs, addr 0x2b41e94, size 0x40, virtual false, abstract: false, final false
  inline void ReturnSocketAsyncEventArgs(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* saea);

  /// @brief Method Send, addr 0x2b3eda0, size 0x68, virtual false, abstract: false, final false
  inline int32_t Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags);

  /// @brief Method Send, addr 0x2b435e0, size 0x144, virtual false, abstract: false, final false
  inline int32_t Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method Send, addr 0x2b3f07c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t Send(::System::ReadOnlySpan_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method Send, addr 0x2b43044, size 0x68, virtual false, abstract: false, final false
  inline int32_t Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags);

  /// @brief Method Send, addr 0x2b430ac, size 0x534, virtual false, abstract: false, final false
  inline int32_t Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags,
                      ByRef<::System::Net::Sockets::SocketError> errorCode);

  /// @brief Method SendAsync, addr 0x2b48c90, size 0x2e0, virtual false, abstract: false, final false
  inline bool SendAsync(::System::Net::Sockets::SocketAsyncEventArgs* e);

  /// @brief Method SendAsyncApm, addr 0x2b41958, size 0x420, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<int32_t>* SendAsyncApm(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags);

  /// @brief Method SendAsyncForNetworkStream, addr 0x2b40c2c, size 0x2bc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::ValueTask SendAsyncForNetworkStream(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                         ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method SendTo, addr 0x2b4931c, size 0x1a8, virtual false, abstract: false, final false
  inline int32_t SendTo(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP);

  /// @brief Method SendTo_icall, addr 0x2b496d0, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SendTo_icall(void* sock, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress* sa,
                                     ByRef<int32_t> error, bool blocking);

  /// @brief Method SendTo_internal, addr 0x2b494c4, size 0x154, virtual false, abstract: false, final false
  static inline int32_t SendTo_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                        ::System::Net::SocketAddress* sa, ByRef<int32_t> error, bool blocking);

  /// @brief Method Send_array_icall, addr 0x2b4930c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Send_array_icall(void* sock, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF> bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                         ByRef<int32_t> error, bool blocking);

  /// @brief Method Send_icall, addr 0x2b49314, size 0x8, virtual false, abstract: false, final false
  static inline int32_t Send_icall(void* sock, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking);

  /// @brief Method Send_internal, addr 0x2b48b4c, size 0x144, virtual false, abstract: false, final false
  static inline int32_t Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::cordl_internals::Ptr<::System::Net::Sockets::__Socket__WSABUF> bufarray, int32_t count,
                                      ::System::Net::Sockets::SocketFlags flags, ByRef<int32_t> error, bool blocking);

  /// @brief Method Send_internal, addr 0x2b48a08, size 0x144, virtual false, abstract: false, final false
  static inline int32_t Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::cordl_internals::Ptr<uint8_t> buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                      ByRef<int32_t> error, bool blocking);

  /// @brief Method SetIPProtectionLevel, addr 0x2b4260c, size 0xf0, virtual false, abstract: false, final false
  inline void SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel level);

  /// @brief Method SetSocketOption, addr 0x2b49814, size 0x8, virtual false, abstract: false, final false
  inline void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, bool optionValue);

  /// @brief Method SetSocketOption, addr 0x2b4294c, size 0x12c, virtual false, abstract: false, final false
  inline void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue);

  /// @brief Method SetSocketOption, addr 0x2b41218, size 0x150, virtual false, abstract: false, final false
  inline void SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue, bool silent);

  /// @brief Method SetSocketOption_icall, addr 0x2b4981c, size 0x4, virtual false, abstract: false, final false
  static inline void SetSocketOption_icall(void* socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name, ::System::Object* obj_val,
                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> byte_val, int32_t int_val, ByRef<int32_t> error);

  /// @brief Method SetSocketOption_internal, addr 0x2b44804, size 0x150, virtual false, abstract: false, final false
  static inline void SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name,
                                              ::System::Object* obj_val, ::ArrayW<uint8_t, ::Array<uint8_t>*> byte_val, int32_t int_val, ByRef<int32_t> error);

  /// @brief Method Shutdown, addr 0x2b49978, size 0x118, virtual false, abstract: false, final false
  inline void Shutdown(::System::Net::Sockets::SocketShutdown how);

  /// @brief Method Shutdown_icall, addr 0x2b49a90, size 0x4, virtual false, abstract: false, final false
  static inline void Shutdown_icall(void* socket, ::System::Net::Sockets::SocketShutdown how, ByRef<int32_t> error);

  /// @brief Method Shutdown_internal, addr 0x2b446e4, size 0x120, virtual false, abstract: false, final false
  static inline void Shutdown_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketShutdown how, ByRef<int32_t> error);

  /// @brief Method SocketDefaults, addr 0x2b426fc, size 0xd4, virtual false, abstract: false, final false
  inline void SocketDefaults();

  /// @brief Method SocketOperationToSocketAsyncOperation, addr 0x2b49c60, size 0xac, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketAsyncOperation SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation op);

  /// @brief Method Socket_icall, addr 0x2b42608, size 0x4, virtual false, abstract: false, final false
  static inline void* Socket_icall(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto, ByRef<int32_t> error);

  /// @brief Method ThrowIfBufferNull, addr 0x2b47a88, size 0x58, virtual false, abstract: false, final false
  inline void ThrowIfBufferNull(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ThrowIfBufferOutOfRange, addr 0x2b47ae0, size 0x134, virtual false, abstract: false, final false
  inline void ThrowIfBufferOutOfRange(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ThrowIfDisposedAndClosed, addr 0x2b44a90, size 0x8c, virtual false, abstract: false, final false
  inline void ThrowIfDisposedAndClosed();

  /// @brief Method ThrowIfUdp, addr 0x2b450fc, size 0x58, virtual false, abstract: false, final false
  inline void ThrowIfUdp();

  /// @brief Method ValidateEndIAsyncResult, addr 0x2b460ac, size 0x14c, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketAsyncResult* ValidateEndIAsyncResult(::System::IAsyncResult* ares, ::StringW methodName, ::StringW argName);

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get_ReadSem();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get_ReadSem() const;

  constexpr ::System::Threading::SemaphoreSlim*& __cordl_internal_get_WriteSem();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::SemaphoreSlim*> const& __cordl_internal_get_WriteSem() const;

  constexpr ::System::Net::Sockets::__Socket__CachedEventArgs*& __cordl_internal_get__cachedTaskEventArgs();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::__Socket__CachedEventArgs*> const& __cordl_internal_get__cachedTaskEventArgs() const;

  constexpr int32_t const& __cordl_internal_get__cordl_ID() const;

  constexpr int32_t& __cordl_internal_get__cordl_ID();

  constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get_addressFamily() const;

  constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get_addressFamily();

  constexpr bool const& __cordl_internal_get_connect_in_progress() const;

  constexpr bool& __cordl_internal_get_connect_in_progress();

  constexpr bool const& __cordl_internal_get_is_blocking() const;

  constexpr bool& __cordl_internal_get_is_blocking();

  constexpr bool const& __cordl_internal_get_is_bound() const;

  constexpr bool& __cordl_internal_get_is_bound();

  constexpr bool const& __cordl_internal_get_is_closed() const;

  constexpr bool& __cordl_internal_get_is_closed();

  constexpr bool const& __cordl_internal_get_is_connected() const;

  constexpr bool& __cordl_internal_get_is_connected();

  constexpr bool const& __cordl_internal_get_is_listening() const;

  constexpr bool& __cordl_internal_get_is_listening();

  constexpr int32_t const& __cordl_internal_get_linger_timeout() const;

  constexpr int32_t& __cordl_internal_get_linger_timeout();

  constexpr ::System::Net::Sockets::SafeSocketHandle*& __cordl_internal_get_m_Handle();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::SafeSocketHandle*> const& __cordl_internal_get_m_Handle() const;

  constexpr int32_t const& __cordl_internal_get_m_IntCleanedUp() const;

  constexpr int32_t& __cordl_internal_get_m_IntCleanedUp();

  constexpr ::System::Net::Sockets::ProtocolType const& __cordl_internal_get_protocolType() const;

  constexpr ::System::Net::Sockets::ProtocolType& __cordl_internal_get_protocolType();

  constexpr ::System::Net::EndPoint*& __cordl_internal_get_seed_endpoint();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::EndPoint*> const& __cordl_internal_get_seed_endpoint() const;

  constexpr ::System::Net::Sockets::SocketType const& __cordl_internal_get_socketType() const;

  constexpr ::System::Net::Sockets::SocketType& __cordl_internal_get_socketType();

  constexpr bool const& __cordl_internal_get_useOverlappedIO() const;

  constexpr bool& __cordl_internal_get_useOverlappedIO();

  constexpr void __cordl_internal_set_ReadSem(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set_WriteSem(::System::Threading::SemaphoreSlim* value);

  constexpr void __cordl_internal_set__cachedTaskEventArgs(::System::Net::Sockets::__Socket__CachedEventArgs* value);

  constexpr void __cordl_internal_set__cordl_ID(int32_t value);

  constexpr void __cordl_internal_set_addressFamily(::System::Net::Sockets::AddressFamily value);

  constexpr void __cordl_internal_set_connect_in_progress(bool value);

  constexpr void __cordl_internal_set_is_blocking(bool value);

  constexpr void __cordl_internal_set_is_bound(bool value);

  constexpr void __cordl_internal_set_is_closed(bool value);

  constexpr void __cordl_internal_set_is_connected(bool value);

  constexpr void __cordl_internal_set_is_listening(bool value);

  constexpr void __cordl_internal_set_linger_timeout(int32_t value);

  constexpr void __cordl_internal_set_m_Handle(::System::Net::Sockets::SafeSocketHandle* value);

  constexpr void __cordl_internal_set_m_IntCleanedUp(int32_t value);

  constexpr void __cordl_internal_set_protocolType(::System::Net::Sockets::ProtocolType value);

  constexpr void __cordl_internal_set_seed_endpoint(::System::Net::EndPoint* value);

  constexpr void __cordl_internal_set_socketType(::System::Net::Sockets::SocketType value);

  constexpr void __cordl_internal_set_useOverlappedIO(bool value);

  /// @brief Method .ctor, addr 0x2b42150, size 0x254, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType);

  /// @brief Method .ctor, addr 0x2b44954, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto,
                    ::System::Net::Sockets::SafeSocketHandle* safe_handle);

  /// @brief Method cancel_blocking_socket_operation, addr 0x2b49d0c, size 0x4, virtual false, abstract: false, final false
  static inline void cancel_blocking_socket_operation(::System::Threading::Thread* thread);

  static inline ::System::AsyncCallback* getStaticF_AcceptAsyncCallback();

  static inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* getStaticF_AcceptCompletedHandler();

  static inline ::System::IOAsyncCallback* getStaticF_BeginAcceptCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginAcceptReceiveCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginConnectCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginDisconnectCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginReceiveCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginReceiveFromCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginReceiveGenericCallback();

  static inline ::System::IOAsyncCallback* getStaticF_BeginSendGenericCallback();

  static inline ::System::AsyncCallback* getStaticF_ConnectAsyncCallback();

  static inline ::System::AsyncCallback* getStaticF_DisconnectAsyncCallback();

  static inline ::System::AsyncCallback* getStaticF_ReceiveAsyncCallback();

  static inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* getStaticF_ReceiveCompletedHandler();

  static inline ::System::AsyncCallback* getStaticF_ReceiveFromAsyncCallback();

  static inline ::System::AsyncCallback* getStaticF_SendAsyncCallback();

  static inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* getStaticF_SendCompletedHandler();

  static inline ::System::AsyncCallback* getStaticF_SendToAsyncCallback();

  static inline bool getStaticF_s_Initialized();

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  static inline bool getStaticF_s_LoggingEnabled();

  static inline bool getStaticF_s_OSSupportsIPv6();

  static inline bool getStaticF_s_PerfCountersEnabled();

  static inline bool getStaticF_s_SupportsIPv4();

  static inline bool getStaticF_s_SupportsIPv6();

  static inline ::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* getStaticF_s_rentedInt32Sentinel();

  static inline ::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* getStaticF_s_rentedSocketSentinel();

  static inline ::System::Threading::Tasks::Task_1<int32_t>* getStaticF_s_zeroTask();

  /// @brief Method get_AddressFamily, addr 0x2b428b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::AddressFamily get_AddressFamily();

  /// @brief Method get_Available, addr 0x2b3e13c, size 0xbc, virtual false, abstract: false, final false
  inline int32_t get_Available();

  /// @brief Method get_Blocking, addr 0x2b44ef4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Blocking();

  /// @brief Method get_CleanedUp, addr 0x2b44574, size 0x10, virtual false, abstract: false, final false
  inline bool get_CleanedUp();

  /// @brief Method get_Connected, addr 0x2b450f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Connected();

  /// @brief Method get_DualMode, addr 0x2b42e84, size 0xe8, virtual false, abstract: false, final false
  inline bool get_DualMode();

  /// @brief Method get_FamilyHint, addr 0x2b49d10, size 0x88, virtual false, abstract: false, final false
  static inline int32_t get_FamilyHint();

  /// @brief Method get_Handle, addr 0x2b42898, size 0x1c, virtual false, abstract: false, final false
  inline void* get_Handle();

  /// @brief Method get_InternalSyncObject, addr 0x2b444a0, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_IsBound, addr 0x2b44cc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsBound();

  /// @brief Method get_IsDualMode, addr 0x2b42ff4, size 0x18, virtual false, abstract: false, final false
  inline bool get_IsDualMode();

  /// @brief Method get_LocalEndPoint, addr 0x2b44ccc, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Net::EndPoint* get_LocalEndPoint();

  /// @brief Method get_OSSupportsIPv4, addr 0x2b427d0, size 0x64, virtual false, abstract: false, final false
  static inline bool get_OSSupportsIPv4();

  /// @brief Method get_OSSupportsIPv6, addr 0x2b42834, size 0x64, virtual false, abstract: false, final false
  static inline bool get_OSSupportsIPv6();

  /// @brief Method get_ProtocolType, addr 0x2b428c4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::ProtocolType get_ProtocolType();

  /// @brief Method get_RemoteEndPoint, addr 0x2b45154, size 0xfc, virtual false, abstract: false, final false
  inline ::System::Net::EndPoint* get_RemoteEndPoint();

  /// @brief Method get_SocketType, addr 0x2b428bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Net::Sockets::SocketType get_SocketType();

  /// @brief Method get_Ttl, addr 0x2b42c18, size 0xf8, virtual false, abstract: false, final false
  inline int16_t get_Ttl();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_AcceptAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_AcceptCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);

  static inline void setStaticF_BeginAcceptCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginAcceptReceiveCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginConnectCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginDisconnectCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginReceiveCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginReceiveFromCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginReceiveGenericCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_BeginSendGenericCallback(::System::IOAsyncCallback* value);

  static inline void setStaticF_ConnectAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_DisconnectAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_ReceiveAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_ReceiveCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);

  static inline void setStaticF_ReceiveFromAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_SendAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_SendCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value);

  static inline void setStaticF_SendToAsyncCallback(::System::AsyncCallback* value);

  static inline void setStaticF_s_Initialized(bool value);

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline void setStaticF_s_LoggingEnabled(bool value);

  static inline void setStaticF_s_OSSupportsIPv6(bool value);

  static inline void setStaticF_s_PerfCountersEnabled(bool value);

  static inline void setStaticF_s_SupportsIPv4(bool value);

  static inline void setStaticF_s_SupportsIPv6(bool value);

  static inline void setStaticF_s_rentedInt32Sentinel(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs* value);

  static inline void setStaticF_s_rentedSocketSentinel(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* value);

  static inline void setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>* value);

  /// @brief Method set_Blocking, addr 0x2b44efc, size 0xd0, virtual false, abstract: false, final false
  inline void set_Blocking(bool value);

  /// @brief Method set_DontFragment, addr 0x2b42e00, size 0x84, virtual false, abstract: false, final false
  inline void set_DontFragment(bool value);

  /// @brief Method set_DualMode, addr 0x2b42f6c, size 0x88, virtual false, abstract: false, final false
  inline void set_DualMode(bool value);

  /// @brief Method set_EnableBroadcast, addr 0x2b44c48, size 0x7c, virtual false, abstract: false, final false
  inline void set_EnableBroadcast(bool value);

  /// @brief Method set_ExclusiveAddressUse, addr 0x2b428cc, size 0x80, virtual false, abstract: false, final false
  inline void set_ExclusiveAddressUse(bool value);

  /// @brief Method set_NoDelay, addr 0x2b44a50, size 0x40, virtual false, abstract: false, final false
  inline void set_NoDelay(bool value);

  /// @brief Method set_ReceiveBufferSize, addr 0x2b42a78, size 0x64, virtual false, abstract: false, final false
  inline void set_ReceiveBufferSize(int32_t value);

  /// @brief Method set_ReceiveTimeout, addr 0x2b42b40, size 0x6c, virtual false, abstract: false, final false
  inline void set_ReceiveTimeout(int32_t value);

  /// @brief Method set_SendBufferSize, addr 0x2b42adc, size 0x64, virtual false, abstract: false, final false
  inline void set_SendBufferSize(int32_t value);

  /// @brief Method set_SendTimeout, addr 0x2b42bac, size 0x6c, virtual false, abstract: false, final false
  inline void set_SendTimeout(int32_t value);

  /// @brief Method set_Ttl, addr 0x2b42d10, size 0xf0, virtual false, abstract: false, final false
  inline void set_Ttl(int16_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Socket();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Socket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Socket(Socket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Socket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Socket(Socket const&) = delete;

  /// @brief Field _cachedTaskEventArgs, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Sockets::__Socket__CachedEventArgs* ____cachedTaskEventArgs;

  /// @brief Field is_closed, offset: 0x18, size: 0x1, def value: None
  bool ___is_closed;

  /// @brief Field is_listening, offset: 0x19, size: 0x1, def value: None
  bool ___is_listening;

  /// @brief Field useOverlappedIO, offset: 0x1a, size: 0x1, def value: None
  bool ___useOverlappedIO;

  /// @brief Field linger_timeout, offset: 0x1c, size: 0x4, def value: None
  int32_t ___linger_timeout;

  /// @brief Field addressFamily, offset: 0x20, size: 0x4, def value: None
  ::System::Net::Sockets::AddressFamily ___addressFamily;

  /// @brief Field socketType, offset: 0x24, size: 0x4, def value: None
  ::System::Net::Sockets::SocketType ___socketType;

  /// @brief Field protocolType, offset: 0x28, size: 0x4, def value: None
  ::System::Net::Sockets::ProtocolType ___protocolType;

  /// @brief Field m_Handle, offset: 0x30, size: 0x8, def value: None
  ::System::Net::Sockets::SafeSocketHandle* ___m_Handle;

  /// @brief Field seed_endpoint, offset: 0x38, size: 0x8, def value: None
  ::System::Net::EndPoint* ___seed_endpoint;

  /// @brief Field ReadSem, offset: 0x40, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ___ReadSem;

  /// @brief Field WriteSem, offset: 0x48, size: 0x8, def value: None
  ::System::Threading::SemaphoreSlim* ___WriteSem;

  /// @brief Field is_blocking, offset: 0x50, size: 0x1, def value: None
  bool ___is_blocking;

  /// @brief Field is_bound, offset: 0x51, size: 0x1, def value: None
  bool ___is_bound;

  /// @brief Field is_connected, offset: 0x52, size: 0x1, def value: None
  bool ___is_connected;

  /// @brief Field m_IntCleanedUp, offset: 0x54, size: 0x4, def value: None
  int32_t ___m_IntCleanedUp;

  /// @brief Field connect_in_progress, offset: 0x58, size: 0x1, def value: None
  bool ___connect_in_progress;

  /// @brief Field ID, offset: 0x5c, size: 0x4, def value: None
  int32_t ____cordl_ID;

  /// @brief Field DefaultCloseTimeout offset 0xffffffff size 0x4
  static constexpr int32_t DefaultCloseTimeout{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field SOCKET_CLOSED_CODE offset 0xffffffff size 0x4
  static constexpr int32_t SOCKET_CLOSED_CODE{ static_cast<int32_t>(0x2714) };

  /// @brief Field TIMEOUT_EXCEPTION_MSG offset 0xffffffff size 0x8
  static constexpr ::ConstString TIMEOUT_EXCEPTION_MSG{
    u"A connection attempt failed because the connected party did not properly respondafter a period of time, or established connection failed because connected host has failed to respond"
  };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::Socket, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ____cachedTaskEventArgs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___is_closed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___is_listening) == 0x19, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___useOverlappedIO) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___linger_timeout) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___addressFamily) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___socketType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___protocolType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___m_Handle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___seed_endpoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___ReadSem) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___WriteSem) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___is_blocking) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___is_bound) == 0x51, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___is_connected) == 0x52, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___m_IntCleanedUp) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ___connect_in_progress) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::Socket, ____cordl_ID) == 0x5c, "Offset mismatch!");

} // namespace System::Net::Sockets
NEED_NO_BOX(::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Socket__AwaitableSocketAsyncEventArgs____c*, "System.Net.Sockets", "Socket/AwaitableSocketAsyncEventArgs/<>c");
NEED_NO_BOX(::System::Net::Sockets::Socket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::Socket*, "System.Net.Sockets", "Socket");
NEED_NO_BOX(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket__AwaitableSocketAsyncEventArgs*, "System.Net.Sockets", "Socket/AwaitableSocketAsyncEventArgs");
NEED_NO_BOX(::System::Net::Sockets::__Socket__CachedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket__CachedEventArgs*, "System.Net.Sockets", "Socket/CachedEventArgs");
NEED_NO_BOX(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket__Int32TaskSocketAsyncEventArgs*, "System.Net.Sockets", "Socket/Int32TaskSocketAsyncEventArgs");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Sockets::__Socket__TaskSocketAsyncEventArgs_1, "System.Net.Sockets", "Socket/TaskSocketAsyncEventArgs`1");
NEED_NO_BOX(::System::Net::Sockets::__Socket____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket____c*, "System.Net.Sockets", "Socket/<>c");
NEED_NO_BOX(::System::Net::Sockets::__Socket____c__DisplayClass240_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket____c__DisplayClass240_0*, "System.Net.Sockets", "Socket/<>c__DisplayClass240_0");
NEED_NO_BOX(::System::Net::Sockets::__Socket____c__DisplayClass298_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket____c__DisplayClass298_0*, "System.Net.Sockets", "Socket/<>c__DisplayClass298_0");
NEED_NO_BOX(::System::Net::Sockets::__Socket____c__DisplayClass355_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket____c__DisplayClass355_0*, "System.Net.Sockets", "Socket/<>c__DisplayClass355_0");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::__Socket__WSABUF, "System.Net.Sockets", "Socket/WSABUF");
