#pragma once
// IWYU pragma private; include "System\Net\Sockets\Socket.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_impl.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketType_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Net/NetworkInformation/zzzz__NetworkInterfaceComponent_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/Sockets/zzzz__IOControlCode_def.hpp"
#include "System/Net/Sockets/zzzz__IPProtectionLevel_def.hpp"
#include "System/Net/Sockets/zzzz__ProtocolType_def.hpp"
#include "System/Net/Sockets/zzzz__SafeSocketHandle_def.hpp"
#include "System/Net/Sockets/zzzz__SelectMode_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionLevel_def.hpp"
#include "System/Net/Sockets/zzzz__SocketOptionName_def.hpp"
#include "System/Net/Sockets/zzzz__SocketShutdown_def.hpp"
#include "System/Net/Sockets/zzzz__SocketType_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__SocketAddress_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_1_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__IValueTaskSource_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceOnCompletedFlags_def.hpp"
#include "System/Threading/Tasks/Sources/zzzz__ValueTaskSourceStatus_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IOAsyncCallback_def.hpp"
#include "System/zzzz__IOAsyncResult_def.hpp"
#include "System/zzzz__IOSelectorJob_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::Socket_CachedEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_CachedEventArgs::*)()>(&::System::Net::Sockets::Socket_CachedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63652a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_CachedEventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_TaskAccept() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TaskAccept;
}
constexpr ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* const& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_TaskAccept() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TaskAccept;
}
constexpr void System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_set_TaskAccept(::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TaskAccept = value;
}
constexpr ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_TaskReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TaskReceive;
}
constexpr ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* const& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_TaskReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TaskReceive;
}
constexpr void System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_set_TaskReceive(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TaskReceive = value;
}
constexpr ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_TaskSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TaskSend;
}
constexpr ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* const& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_TaskSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TaskSend;
}
constexpr void System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_set_TaskSend(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TaskSend = value;
}
constexpr ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_ValueTaskReceive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueTaskReceive;
}
constexpr ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* const& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_ValueTaskReceive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueTaskReceive;
}
constexpr void System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_set_ValueTaskReceive(::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ValueTaskReceive = value;
}
constexpr ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_ValueTaskSend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueTaskSend;
}
constexpr ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* const& System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_get_ValueTaskSend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueTaskSend;
}
constexpr void System::Net::Sockets::Socket_CachedEventArgs::__cordl_internal_set_ValueTaskSend(::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ValueTaskSend = value;
}
inline void System::Net::Sockets::Socket_CachedEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_CachedEventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_CachedEventArgs* System::Net::Sockets::Socket_CachedEventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket_CachedEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket_CachedEventArgs::Socket_CachedEventArgs() {}
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>& System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
template <typename TResult>
constexpr ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> const& System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
template <typename TResult>
constexpr void System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_set__builder(::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____builder = value;
}
template <typename TResult> constexpr bool& System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__accessed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessed;
}
template <typename TResult> constexpr bool const& System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_get__accessed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____accessed;
}
template <typename TResult> constexpr void System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::__cordl_internal_set__accessed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____accessed = value;
}
template <typename TResult> inline void System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>
System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::GetCompletionResponsibility(::by_ref<bool> responsibleForReturningToPool) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>*>(),
                                                                                         { "GetCompletionResponsibility", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>>(this, ___internal_method, responsibleForReturningToPool);
}
template <typename TResult> inline ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>* System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::Socket_TaskSocketAsyncEventArgs_1() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x63652ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::__cordl_internal_get__wrapExceptionsInIOExceptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapExceptionsInIOExceptions;
}
constexpr bool const& System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::__cordl_internal_get__wrapExceptionsInIOExceptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wrapExceptionsInIOExceptions;
}
constexpr void System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::__cordl_internal_set__wrapExceptionsInIOExceptions(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wrapExceptionsInIOExceptions = value;
}
inline void System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::Socket_Int32TaskSocketAsyncEventArgs() {}
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)()>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x636631c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c._OnCompleted_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_OnCompleted_b__14_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6366320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(),
                                                                                           { "<OnCompleted>b__14_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c._InvokeContinuation_b__20_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_InvokeContinuation_b__20_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63663ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(),
                                                                                           { "<InvokeContinuation>b__20_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c.__cctor_b__27_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63664ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { "<.cctor>b__27_0", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c.__cctor_b__27_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63664f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { "<.cctor>b__27_1", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::setStaticF___9(::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*, "<>9", ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(
      std::forward<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(value));
}
inline ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*, "<>9", ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>();
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::setStaticF___9__14_0(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "<>9__14_0", ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "<>9__14_0", ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>();
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::setStaticF___9__20_0(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__20_0", ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__20_0", ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>();
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_OnCompleted_b__14_0(::System::Object* runState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { "<OnCompleted>b__14_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runState);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_InvokeContinuation_b__20_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(),
                                                                                         { "<InvokeContinuation>b__20_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_0(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { "<.cctor>b__27_0", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_1(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(), { "<.cctor>b__27_1", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::AwaitableSocketAsyncEventArgs_Socket___c() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x63652f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.get_WrapExceptionsInIOExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63653e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "get_WrapExceptionsInIOExceptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.set_WrapExceptionsInIOExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(bool)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63653ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "set_WrapExceptionsInIOExceptions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.Reserve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Reserve)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63653f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "Reserve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6365484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x63654f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                          { ::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ReceiveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(
    ::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ReceiveAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6365a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                           { "ReceiveAsync", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.SendAsyncForNetworkStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6365c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                           { "SendAsyncForNetworkStream", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.GetStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(int16_t)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6365d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "GetStatus", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.OnCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t,
                                                                                                                              ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x6365e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                             { "OnCompleted",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>(),
                                                                 ::i2c::type_of<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.InvokeContinuation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Action_1<::System::Object*>*, ::System::Object*, bool)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::InvokeContinuation)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x636570c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                         { "InvokeContinuation", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(int16_t)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6366090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "GetResult", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.System_Threading_Tasks_Sources_IValueTaskSource_GetResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(int16_t)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x63660fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                           { "System.Threading.Tasks.Sources.IValueTaskSource.GetResult", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ThrowIncorrectTokenException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6365de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "ThrowIncorrectTokenException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ThrowMultipleContinuationsException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6366044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "ThrowMultipleContinuationsException", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ThrowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowException)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x63660d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                           { "ThrowException", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.CreateException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::CreateException)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6365b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                           { "CreateException", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Object*>*& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuation;
}
constexpr ::System::Action_1<::System::Object*>* const& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuation;
}
constexpr void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_set__continuation(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____continuation = value;
}
constexpr ::System::Threading::ExecutionContext*& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__executionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionContext;
}
constexpr ::System::Threading::ExecutionContext* const& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__executionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____executionContext;
}
constexpr void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_set__executionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____executionContext = value;
}
constexpr ::System::Object*& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__scheduler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scheduler;
}
constexpr ::System::Object* const& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__scheduler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scheduler;
}
constexpr void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_set__scheduler(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scheduler = value;
}
constexpr int16_t& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr int16_t const& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_set__token(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
constexpr bool& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WrapExceptionsInIOExceptions_k__BackingField;
}
constexpr bool const& System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_get__WrapExceptionsInIOExceptions_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____WrapExceptionsInIOExceptions_k__BackingField;
}
constexpr void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::__cordl_internal_set__WrapExceptionsInIOExceptions_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____WrapExceptionsInIOExceptions_k__BackingField = value;
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::setStaticF_Reserved(::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*, "Reserved", ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(
      std::forward<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(value));
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::getStaticF_Reserved() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*, "Reserved", ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>();
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::setStaticF_s_completedSentinel(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_completedSentinel", ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::getStaticF_s_completedSentinel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_completedSentinel", ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>();
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::setStaticF_s_availableSentinel(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_availableSentinel", ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::getStaticF_s_availableSentinel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_availableSentinel", ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>();
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "get_WrapExceptionsInIOExceptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "set_WrapExceptionsInIOExceptions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Reserve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "Reserve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* _) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ReceiveAsync(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                         { "ReceiveAsync", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, socket);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                         { "SendAsyncForNetworkStream", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, socket);
}
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetStatus(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "GetStatus", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus>(this, ___internal_method, token);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                    ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                           { "OnCompleted",
                                                             {},
                                                             { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>(),
                                                               ::i2c::type_of<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token, flags);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::InvokeContinuation(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, bool forceAsync) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                       { "InvokeContinuation", {}, { ::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, forceAsync);
}
inline int32_t System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetResult(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "GetResult", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, token);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                         { "System.Threading.Tasks.Sources.IValueTaskSource.GetResult", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "ThrowIncorrectTokenException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(), { "ThrowMultipleContinuationsException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowException(::System::Net::Sockets::SocketError error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                         { "ThrowException", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::Exception* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::CreateException(::System::Net::Sockets::SocketError error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(),
                                                                                         { "CreateException", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(this, ___internal_method, error);
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>());
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::operator ::System::Threading::Tasks::Sources::IValueTaskSource*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::i___System__Threading__Tasks__Sources__IValueTaskSource() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>"
constexpr System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::operator ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*
System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::i___System__Threading__Tasks__Sources__IValueTaskSource_1_int32_t_() noexcept {
  return static_cast<::System::Threading::Tasks::Sources::IValueTaskSource_1<int32_t>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Socket_AwaitableSocketAsyncEventArgs() {}
// Ctor Parameters [CppParam { name: "len", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buf", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::Sockets::Socket_WSABUF::Socket_WSABUF(int32_t len, ::System::IntPtr buf) noexcept {
  this->len = len;
  this->buf = buf;
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket_WSABUF::Socket_WSABUF() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)()>(&::System::Net::Sockets::Socket___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6366598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsync_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket_CachedEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x636659c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsync>b__14_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsync_b__14_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x63665e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsync>b__14_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsyncApm_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_0)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6366634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsyncApm>b__15_0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsyncApm_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_1)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x636688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsyncApm>b__15_1", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncForNetworkStream_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket_CachedEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6366d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncForNetworkStream>b__22_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncForNetworkStream_b__22_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6366d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncForNetworkStream>b__22_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncApm_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_0)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6366dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncApm>b__23_0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncApm_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_1)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x6367024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncApm>b__23_1", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsync_b__295_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::_SendAsync_b__295_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x636738c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsync>b__295_0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._BeginSend_b__297_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::_BeginSend_b__297_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6367428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<BeginSend>b__297_0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._BeginSendTo_b__310_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::_BeginSendTo_b__310_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x63674c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<BeginSendTo>b__310_0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6367560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(),
                                                             { "<.cctor>b__367_0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6367660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(),
                                                             { "<.cctor>b__367_1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_2)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6367748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(),
                                                             { "<.cctor>b__367_2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_3)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x6367830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_3", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_4)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6367ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_4", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_5)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6367c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_5", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_6)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6367ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_6", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_7)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6368150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_7", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_8)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x6368620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_8", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_9)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x63688d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_9", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_10)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x63689d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_10", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_11)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6368c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_11", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_12)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6368f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_12", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_13)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x6369064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_13", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_14)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x636933c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_14", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_15)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6369518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_15", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_16)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x63697d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_16", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_17
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket___c::__cctor_b__367_17)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x63698e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_17", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::Socket___c::setStaticF___9(::System::Net::Sockets::Socket___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket___c*, "<>9", ::System::Net::Sockets::Socket___c*>(std::forward<::System::Net::Sockets::Socket___c*>(value));
}
inline ::System::Net::Sockets::Socket___c* System::Net::Sockets::Socket___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket___c*, "<>9", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__14_0(::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__14_0", ::System::Net::Sockets::Socket___c*>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__14_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__14_1(::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__14_1", ::System::Net::Sockets::Socket___c*>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__14_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__14_1", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__15_0(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__15_0", ::System::Net::Sockets::Socket___c*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__15_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__15_1(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__15_1", ::System::Net::Sockets::Socket___c*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__15_1", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__22_0(::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__22_0", ::System::Net::Sockets::Socket___c*>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__22_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__22_1(::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__22_1", ::System::Net::Sockets::Socket___c*>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__22_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__22_1", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__23_0(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__23_0", ::System::Net::Sockets::Socket___c*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__23_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__23_1(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__23_1", ::System::Net::Sockets::Socket___c*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__23_1", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__295_0(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__295_0", ::System::Net::Sockets::Socket___c*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__295_0() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__295_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__297_0(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__297_0", ::System::Net::Sockets::Socket___c*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__297_0() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__297_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__310_0(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__310_0", ::System::Net::Sockets::Socket___c*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__310_0() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__310_0", ::System::Net::Sockets::Socket___c*>();
}
inline void System::Net::Sockets::Socket___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_CachedEventArgs* System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsync>b__14_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_CachedEventArgs*>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsync>b__14_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_0(::System::IAsyncResult* iar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsyncApm>b__15_0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_1(::System::IAsyncResult* iar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<ReceiveAsyncApm>b__15_1", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iar);
}
inline ::System::Net::Sockets::Socket_CachedEventArgs* System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncForNetworkStream>b__22_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_CachedEventArgs*>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncForNetworkStream>b__22_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_0(::System::IAsyncResult* iar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncApm>b__23_0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_1(::System::IAsyncResult* iar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsyncApm>b__23_1", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::Socket___c::_SendAsync_b__295_0(::System::IOAsyncResult* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<SendAsync>b__295_0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::Sockets::Socket___c::_BeginSend_b__297_0(::System::IOAsyncResult* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<BeginSend>b__297_0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::Sockets::Socket___c::_BeginSendTo_b__310_0(::System::IOAsyncResult* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<BeginSendTo>b__310_0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_0(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(),
                                                           { "<.cctor>b__367_0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_1(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(),
                                                           { "<.cctor>b__367_1", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_2(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(),
                                                           { "<.cctor>b__367_2", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_3(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_3", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_4(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_4", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_5(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_5", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_6(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_6", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_7(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_7", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_8(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_8", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_9(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_9", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_10(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_10", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_11(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_11", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_12(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_12", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_13(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_13", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_14(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_14", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_15(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_15", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_16(::System::IOAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_16", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_17(::System::IAsyncResult* ares) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c*>(), { "<.cctor>b__367_17", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ares);
}
inline ::System::Net::Sockets::Socket___c* System::Net::Sockets::Socket___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c::Socket___c() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass240_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass240_0::*)()>(&::System::Net::Sockets::Socket___c__DisplayClass240_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6369ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass240_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass240_0._BeginConnect_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass240_0::*)(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass240_0::_BeginConnect_b__0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6369ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass240_0*>(),
                                                             { "<BeginConnect>b__0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::SocketAsyncResult*& System::Net::Sockets::Socket___c__DisplayClass240_0::__cordl_internal_get_sockares() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sockares;
}
constexpr ::System::Net::Sockets::SocketAsyncResult* const& System::Net::Sockets::Socket___c__DisplayClass240_0::__cordl_internal_get_sockares() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sockares;
}
constexpr void System::Net::Sockets::Socket___c__DisplayClass240_0::__cordl_internal_set_sockares(::System::Net::Sockets::SocketAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sockares = value;
}
inline void System::Net::Sockets::Socket___c__DisplayClass240_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass240_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass240_0::_BeginConnect_b__0(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass240_0*>(),
                                                           { "<BeginConnect>b__0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass240_0* System::Net::Sockets::Socket___c__DisplayClass240_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket___c__DisplayClass240_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass240_0::Socket___c__DisplayClass240_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass298_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass298_0::*)()>(&::System::Net::Sockets::Socket___c__DisplayClass298_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6369d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass298_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass298_0._BeginSendCallback_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass298_0::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass298_0::_BeginSendCallback_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6369d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass298_0*>(),
                                                                                           { "<BeginSendCallback>b__0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Sockets::Socket___c__DisplayClass298_0::__cordl_internal_get_sent_so_far() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sent_so_far;
}
constexpr int32_t const& System::Net::Sockets::Socket___c__DisplayClass298_0::__cordl_internal_get_sent_so_far() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sent_so_far;
}
constexpr void System::Net::Sockets::Socket___c__DisplayClass298_0::__cordl_internal_set_sent_so_far(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sent_so_far = value;
}
inline void System::Net::Sockets::Socket___c__DisplayClass298_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass298_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass298_0::_BeginSendCallback_b__0(::System::IOAsyncResult* s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass298_0*>(), { "<BeginSendCallback>b__0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass298_0* System::Net::Sockets::Socket___c__DisplayClass298_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket___c__DisplayClass298_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass298_0::Socket___c__DisplayClass298_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass311_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass311_0::*)()>(&::System::Net::Sockets::Socket___c__DisplayClass311_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6369dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass311_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass311_0._BeginSendToCallback_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass311_0::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass311_0::_BeginSendToCallback_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6369dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass311_0*>(),
                                                                                           { "<BeginSendToCallback>b__0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& System::Net::Sockets::Socket___c__DisplayClass311_0::__cordl_internal_get_sent_so_far() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sent_so_far;
}
constexpr int32_t const& System::Net::Sockets::Socket___c__DisplayClass311_0::__cordl_internal_get_sent_so_far() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sent_so_far;
}
constexpr void System::Net::Sockets::Socket___c__DisplayClass311_0::__cordl_internal_set_sent_so_far(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sent_so_far = value;
}
inline void System::Net::Sockets::Socket___c__DisplayClass311_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass311_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass311_0::_BeginSendToCallback_b__0(::System::IOAsyncResult* s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass311_0*>(),
                                                                                         { "<BeginSendToCallback>b__0", {}, { ::i2c::type_of<::System::IOAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass311_0* System::Net::Sockets::Socket___c__DisplayClass311_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket___c__DisplayClass311_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass311_0::Socket___c__DisplayClass311_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass355_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass355_0::*)()>(&::System::Net::Sockets::Socket___c__DisplayClass355_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6369e6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass355_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass355_0._QueueIOSelectorJob_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass355_0::*)(::System::Threading::Tasks::Task*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass355_0::_QueueIOSelectorJob_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6369e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass355_0*>(),
                                                                                           { "<QueueIOSelectorJob>b__0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_set___4__this(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::IOSelectorJob*& System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_get_job() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___job;
}
constexpr ::System::IOSelectorJob* const& System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_get_job() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___job;
}
constexpr void System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_set_job(::System::IOSelectorJob* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___job = value;
}
constexpr ::System::IntPtr& System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr ::System::IntPtr const& System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handle;
}
constexpr void System::Net::Sockets::Socket___c__DisplayClass355_0::__cordl_internal_set_handle(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handle = value;
}
inline void System::Net::Sockets::Socket___c__DisplayClass355_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass355_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass355_0::_QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket___c__DisplayClass355_0*>(),
                                                                                         { "<QueueIOSelectorJob>b__0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass355_0* System::Net::Sockets::Socket___c__DisplayClass355_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket___c__DisplayClass355_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass355_0::Socket___c__DisplayClass355_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::Socket::*)(
    ::System::Memory_1<uint8_t>, ::System::Net::Sockets::SocketFlags, bool, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x635a420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveAsync",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsyncApm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::ReceiveAsyncApm)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x635b4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "ReceiveAsyncApm", {}, { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsyncForNetworkStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::Socket::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::Socket::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x635acd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendAsyncForNetworkStream",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                    ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsyncApm
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::Sockets::Socket::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::SendAsyncApm)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x635b8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "SendAsyncApm", {}, { ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CompleteAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*)>(
    &::System::Net::Sockets::Socket::CompleteAccept)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x635bd88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "CompleteAccept",
                              {},
                              { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CompleteSendReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, bool)>(
    &::System::Net::Sockets::Socket::CompleteSendReceive)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x635c054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "CompleteSendReceive",
                              {},
                              { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Net::Sockets::SocketError, bool)>(&::System::Net::Sockets::Socket::GetException)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x635bf40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                                                           { "GetException", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, bool)>(
    &::System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x635c1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "ReturnSocketAsyncEventArgs", {}, { ::i2c::type_of<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*)>(
    &::System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x635bf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "ReturnSocketAsyncEventArgs", {}, { ::i2c::type_of<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType,
                                                                                                ::System::Net::Sockets::ProtocolType)>(&::System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x635c220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { ".ctor",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::System::Net::Sockets::SocketType>(),
                                                                                    ::i2c::type_of<::System::Net::Sockets::ProtocolType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_OSSupportsIPv4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::Sockets::Socket::get_OSSupportsIPv4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x635c878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_OSSupportsIPv4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_OSSupportsIPv6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Net::Sockets::Socket::get_OSSupportsIPv6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x635c8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_OSSupportsIPv6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Handle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x635c940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_AddressFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_AddressFamily)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635c958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_AddressFamily", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_SocketType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::SocketType (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_SocketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635c960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_SocketType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_ProtocolType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::ProtocolType (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_ProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635c968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_ProtocolType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ExclusiveAddressUse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_ExclusiveAddressUse)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x635c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_ExclusiveAddressUse", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ReceiveBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_ReceiveBufferSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x635caf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_ReceiveBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_SendBufferSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_SendBufferSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x635cb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_SendBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ReceiveTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_ReceiveTimeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x635cbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_ReceiveTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_SendTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_SendTimeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x635cc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_SendTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Ttl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Ttl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x635cc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Ttl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_Ttl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int16_t)>(&::System::Net::Sockets::Socket::set_Ttl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x635cd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_Ttl", {}, { ::i2c::type_of<int16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_DontFragment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_DontFragment)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x635ce14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_DontFragment", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_DualMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_DualMode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x635ce80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_DualMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_DualMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_DualMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x635cf28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_DualMode", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_IsDualMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_IsDualMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x635cf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_IsDualMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CanTryAddressFamily
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily)>(&::System::Net::Sockets::Socket::CanTryAddressFamily)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x635cfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "CanTryAddressFamily", {}, { ::i2c::type_of<::System::Net::Sockets::AddressFamily>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*,
                                                                                                   ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x635cfe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "Send", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags)>(
    &::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6358fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags)>(
    &::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x63588b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "Receive", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*,
                                                                                                   ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x635d8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Net::Sockets::Socket*>(),
                         { "Receive", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::IOControlCode, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(
    &::System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635df58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "IOControl", {}, { ::i2c::type_of<::System::Net::Sockets::IOControlCode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetIPProtectionLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::IPProtectionLevel)>(&::System::Net::Sockets::Socket::SetIPProtectionLevel)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x635c6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SetIPProtectionLevel", {}, { ::i2c::type_of<::System::Net::Sockets::IPProtectionLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::Net::IPAddress*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x635e0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Sockets::Socket*>(),
            { "BeginConnect", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6359dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "BeginSend",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x635a02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndSend", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6359800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "BeginReceive",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6359a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndReceive", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::Net::Sockets::Socket::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x635e9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_InternalSyncObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_CleanedUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_CleanedUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x635e340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_CleanedUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InitializeSockets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::Sockets::Socket::InitializeSockets)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x635c460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "InitializeSockets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x635eb20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x635eb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { ::i2c::class_of<::System::Net::Sockets::Socket*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InternalShutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketShutdown)>(&::System::Net::Sockets::Socket::InternalShutdown)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6359428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "InternalShutdown", {}, { ::i2c::type_of<::System::Net::Sockets::SocketShutdown>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, int32_t, bool)>(
    &::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x635b2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "SetSocketOption",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType,
                                                                                                ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SafeSocketHandle*)>(
    &::System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x635ee80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::System::Net::Sockets::SocketType>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::ProtocolType>(), ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SocketDefaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::SocketDefaults)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x635c7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SocketDefaults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Socket_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType,
                                                                            ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Socket_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635c6c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Socket_icall",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::System::Net::Sockets::SocketType>(),
                                                                                    ::i2c::type_of<::System::Net::Sockets::ProtocolType>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Available
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Available)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x63583ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Available", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Available_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Available_internal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x635f028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Available_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Available_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Available_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635f164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Available_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_EnableBroadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_EnableBroadcast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x635f168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_EnableBroadcast", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_IsBound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_IsBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635f1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_IsBound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_LocalEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x635f1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_LocalEndPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.LocalEndPoint_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SocketAddress* (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::LocalEndPoint_internal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x635f2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "LocalEndPoint_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.LocalEndPoint_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SocketAddress* (*)(::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::LocalEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635f424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "LocalEndPoint_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Blocking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Blocking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635f428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Blocking", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_Blocking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_Blocking)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x635f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_Blocking", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Blocking_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, bool, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Blocking_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x635f4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "Blocking_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Blocking_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Blocking_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635f630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Blocking_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Connected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Connected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635f634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Connected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_NoDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_NoDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x635ef6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_NoDelay", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_RemoteEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x635f688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_RemoteEndPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemoteEndPoint_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SocketAddress* (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::RemoteEndPoint_internal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x635f788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "RemoteEndPoint_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemoteEndPoint_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::SocketAddress* (*)(::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::RemoteEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635f8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "RemoteEndPoint_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)(int32_t, ::System::Net::Sockets::SelectMode)>(&::System::Net::Sockets::Socket::Poll)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x635f8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Poll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SelectMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SelectMode, int32_t, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::Poll_internal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x635fa60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Poll_internal",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SelectMode>(),
                                                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::Net::Sockets::SelectMode, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Poll_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x635fbb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Sockets::Socket*>(),
            { "Poll_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SelectMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x635fbb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Accept", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x635fe4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Accept", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.AcceptAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::AcceptAsync)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x635ff54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "AcceptAsync", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginAccept)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6360344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "BeginAccept", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6360488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndAccept", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)(::by_ref<::ArrayW<uint8_t>>, ::by_ref<int32_t>, ::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x63604ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "EndAccept", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::SafeSocketHandle* (*)(::System::Net::Sockets::SafeSocketHandle*, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Accept_internal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x635fce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "Accept_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<int32_t>, bool)>(&::System::Net::Sockets::Socket::Accept_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63606e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Accept_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::Bind)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x63606e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Bind", {}, { ::i2c::type_of<::System::Net::EndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::Bind_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6360924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Sockets::Socket*>(),
            { "Bind_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Net::SocketAddress*, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Bind_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6360a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "Bind_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::Listen)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6360a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Listen", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Listen_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6360b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "Listen_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Listen_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6360c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Listen_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6360c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Connect", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x6360d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Connect", {}, { ::i2c::type_of<::System::Net::EndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::StringW, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x636116c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "BeginConnect", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x635e350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "BeginConnect", {}, { ::i2c::type_of<::System::Net::EndPoint*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginMConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::SocketAsyncResult*)>(&::System::Net::Sockets::Socket::BeginMConnect)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x6361954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "BeginMConnect", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Sockets::SocketAsyncResult*)>(&::System::Net::Sockets::Socket::BeginSConnect)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x6361448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "BeginSConnect", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndConnect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6361b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndConnect", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Connect_internal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x6361044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Connect_internal",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::SocketAddress*>(),
                                                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Net::SocketAddress*, ::by_ref<int32_t>, bool)>(&::System::Net::Sockets::Socket::Connect_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6361c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Sockets::Socket*>(),
            { "Connect_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::Disconnect)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6361c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Disconnect", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndDisconnect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6361e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndDisconnect", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, bool, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Disconnect_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6361d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "Disconnect_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Disconnect_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6361ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Disconnect_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x635d7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Receive",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x63621c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Receive",
                                                               {},
                                                               { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*,
                                                                                                   ::System::Net::Sockets::SocketFlags, ::by_ref<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x635d950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Receive",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Span_1<uint8_t>, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6358b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Receive",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                                 ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6359268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Send",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                    ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x6362510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveAsync", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<::System::Net::Sockets::SocketError>,
                                                                            ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x635e784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "BeginReceive",
                                           {},
                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                             ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::by_ref<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x635e910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "EndReceive", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                   ::by_ref<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x63623c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "Receive_internal",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_array_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Receive_array_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6362734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Receive_array_icall",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6362074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Receive_internal",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Receive_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6362738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Receive_icall",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::EndPoint*>)>(&::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x636273c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveFrom",
                                                                                  {},
                                                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::EndPoint*>, ::by_ref<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6362848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "ReceiveFrom",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::EndPoint*>, ::by_ref<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x6362b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "ReceiveFrom",
                                           {},
                                           { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                             ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceiveFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                                   ::by_ref<::System::Net::EndPoint*>, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginReceiveFrom)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6362d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "BeginReceiveFrom",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceiveFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::by_ref<::System::Net::EndPoint*>)>(
    &::System::Net::Sockets::Socket::EndReceiveFrom)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6362f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "EndReceiveFrom", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceiveFrom_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncResult*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket::EndReceiveFrom_internal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6363078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "EndReceiveFrom_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                   ::by_ref<::System::Net::SocketAddress*>, ::by_ref<int32_t>, bool)>(&::System::Net::Sockets::Socket::ReceiveFrom_internal)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x63629bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveFrom_internal",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::SocketAddress*>>(),
                                                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<::System::Net::SocketAddress*>, ::by_ref<int32_t>,
                                                                   bool)>(&::System::Net::Sockets::Socket::ReceiveFrom_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6363144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "ReceiveFrom_icall",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::by_ref<::System::Net::SocketAddress*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::by_ref<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x635d698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Send",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*,
                                                                                                   ::System::Net::Sockets::SocketFlags, ::by_ref<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x635d040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Send",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::SendAsync)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x63633e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendAsync", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<::System::Net::Sockets::SocketError>,
                                                                            ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x635e480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "BeginSend",
                                           {},
                                           { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                             ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncResult*, int32_t)>(&::System::Net::Sockets::Socket::BeginSendCallback)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x63636d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "BeginSendCallback", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::by_ref<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x635e698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "EndSend", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                   ::by_ref<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6363298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "Send_internal",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_array_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Send_array_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6363a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Send_array_icall",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6363148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Send_internal",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Send_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6363a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "Send_icall",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*)>(
    &::System::Net::Sockets::Socket::SendTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x6363a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                                                           { "SendTo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::System::Net::EndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                   ::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::SendTo)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x6363d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                                                           { "SendTo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::System::Net::EndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                                                   ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginSendTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x6363fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "BeginSendTo",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::System::Net::EndPoint*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendToCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncResult*, int32_t)>(&::System::Net::Sockets::Socket::BeginSendToCallback)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x63641d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "BeginSendToCallback", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSendTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndSendTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x63643f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndSendTo", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*,
                                                                   ::by_ref<int32_t>, bool)>(&::System::Net::Sockets::Socket::SendTo_internal)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6363bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendTo_internal",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                                                    ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::System::Net::SocketAddress*>(),
                                                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ::by_ref<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::SendTo_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63644b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "SendTo_icall",
                                                  {},
                                                  { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                    ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName)>(
    &::System::Net::Sockets::Socket::GetSocketOption)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6357eb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "GetSocketOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption_obj_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName,
                                                                ::by_ref<::System::Object*>, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::GetSocketOption_obj_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x63644b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "GetSocketOption_obj_internal",
                                           {},
                                           { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                             ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption_obj_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::by_ref<::System::Object*>,
                                                                ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::GetSocketOption_obj_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6364608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                         { "GetSocketOption_obj_icall",
                                           {},
                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                             ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, bool)>(
    &::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636460c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Sockets::Socket*>(),
            { "SetSocketOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, int32_t)>(
    &::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x635c9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::Sockets::Socket*>(),
            { "SetSocketOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName,
                                                                ::System::Object*, ::ArrayW<uint8_t>, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::SetSocketOption_internal)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x635ed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "SetSocketOption_internal",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                                                 ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*,
                                                                ::ArrayW<uint8_t>, int32_t, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::SetSocketOption_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6364614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "SetSocketOption_icall",
                              {},
                              { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(),
                                ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x635df5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "IOControl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::IOControl_internal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6364618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "IOControl_internal",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::IOControl_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6364778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "IOControl_icall",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                                 ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x636477c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Close", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63594b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Close", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Close_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6364784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Close_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketShutdown)>(&::System::Net::Sockets::Socket::Shutdown)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6364788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Shutdown", {}, { ::i2c::type_of<::System::Net::Sockets::SocketShutdown>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketShutdown, ::by_ref<int32_t>)>(
    &::System::Net::Sockets::Socket::Shutdown_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x635ebe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "Shutdown_internal",
                              {},
                              { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SocketShutdown>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown_icall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketShutdown, ::by_ref<int32_t>)>(&::System::Net::Sockets::Socket::Shutdown_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6364894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "Shutdown_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SocketShutdown>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6364898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { ::i2c::class_of<::System::Net::Sockets::Socket*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Linger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IntPtr)>(&::System::Net::Sockets::Socket::Linger)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6364900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Linger", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfDisposedAndClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::ThrowIfDisposedAndClosed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x635efac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ThrowIfDisposedAndClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfBufferNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>)>(&::System::Net::Sockets::Socket::ThrowIfBufferNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6361efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ThrowIfBufferNull", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfBufferOutOfRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Sockets::Socket::ThrowIfBufferOutOfRange)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6361f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "ThrowIfBufferOutOfRange", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfUdp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::ThrowIfUdp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x635f63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ThrowIfUdp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ValidateEndIAsyncResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::SocketAsyncResult* (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::StringW, ::StringW)>(
    &::System::Net::Sockets::Socket::ValidateEndIAsyncResult)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x63605a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                { "ValidateEndIAsyncResult", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.QueueIOSelectorJob
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Threading::SemaphoreSlim*, ::System::IntPtr, ::System::IOSelectorJob*)>(
    &::System::Net::Sockets::Socket::QueueIOSelectorJob)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x63601f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                            { "QueueIOSelectorJob", {}, { ::i2c::type_of<::System::Threading::SemaphoreSlim*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IOSelectorJob*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InitSocketAsyncEventArgs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*, ::System::AsyncCallback*, ::System::Object*,
                                                                                                ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::Socket::InitSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6360184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "InitSocketAsyncEventArgs",
                                                                                  {},
                                                                                  { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                                    ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SocketOperationToSocketAsyncOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::SocketAsyncOperation (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOperation)>(
    &::System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6364a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SocketOperationToSocketAsyncOperation", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemapIPEndPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::System::Net::Sockets::Socket::*)(::System::Net::IPEndPoint*)>(&::System::Net::Sockets::Socket::RemapIPEndPoint)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6360860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "RemapIPEndPoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.cancel_blocking_socket_operation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Threading::Thread*)>(&::System::Net::Sockets::Socket::cancel_blocking_socket_operation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6364b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "cancel_blocking_socket_operation", {}, { ::i2c::type_of<::System::Threading::Thread*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_FamilyHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::System::Net::Sockets::Socket::get_FamilyHint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6364b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_FamilyHint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IsProtocolSupported_internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::NetworkInformation::NetworkInterfaceComponent)>(&::System::Net::Sockets::Socket::IsProtocolSupported_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6364ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                             { "IsProtocolSupported_internal", {}, { ::i2c::type_of<::System::Net::NetworkInformation::NetworkInterfaceComponent>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IsProtocolSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::NetworkInformation::NetworkInterfaceComponent)>(&::System::Net::Sockets::Socket::IsProtocolSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x635eacc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "IsProtocolSupported", {}, { ::i2c::type_of<::System::Net::NetworkInformation::NetworkInterfaceComponent>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket_CachedEventArgs*& System::Net::Sockets::Socket::__cordl_internal_get__cachedTaskEventArgs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedTaskEventArgs;
}
constexpr ::System::Net::Sockets::Socket_CachedEventArgs* const& System::Net::Sockets::Socket::__cordl_internal_get__cachedTaskEventArgs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cachedTaskEventArgs;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set__cachedTaskEventArgs(::System::Net::Sockets::Socket_CachedEventArgs* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cachedTaskEventArgs = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_closed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_closed;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_closed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_closed;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_closed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_closed = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_listening() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_listening;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_listening() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_listening;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_listening(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_listening = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_useOverlappedIO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOverlappedIO;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_useOverlappedIO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOverlappedIO;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_useOverlappedIO(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useOverlappedIO = value;
}
constexpr int32_t& System::Net::Sockets::Socket::__cordl_internal_get_linger_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linger_timeout;
}
constexpr int32_t const& System::Net::Sockets::Socket::__cordl_internal_get_linger_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___linger_timeout;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_linger_timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___linger_timeout = value;
}
constexpr ::System::Net::Sockets::AddressFamily& System::Net::Sockets::Socket::__cordl_internal_get_addressFamily() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressFamily;
}
constexpr ::System::Net::Sockets::AddressFamily const& System::Net::Sockets::Socket::__cordl_internal_get_addressFamily() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___addressFamily;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_addressFamily(::System::Net::Sockets::AddressFamily value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___addressFamily = value;
}
constexpr ::System::Net::Sockets::SocketType& System::Net::Sockets::Socket::__cordl_internal_get_socketType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socketType;
}
constexpr ::System::Net::Sockets::SocketType const& System::Net::Sockets::Socket::__cordl_internal_get_socketType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socketType;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_socketType(::System::Net::Sockets::SocketType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___socketType = value;
}
constexpr ::System::Net::Sockets::ProtocolType& System::Net::Sockets::Socket::__cordl_internal_get_protocolType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolType;
}
constexpr ::System::Net::Sockets::ProtocolType const& System::Net::Sockets::Socket::__cordl_internal_get_protocolType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___protocolType;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_protocolType(::System::Net::Sockets::ProtocolType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___protocolType = value;
}
constexpr ::System::Net::Sockets::SafeSocketHandle*& System::Net::Sockets::Socket::__cordl_internal_get_m_Handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handle;
}
constexpr ::System::Net::Sockets::SafeSocketHandle* const& System::Net::Sockets::Socket::__cordl_internal_get_m_Handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Handle;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_m_Handle(::System::Net::Sockets::SafeSocketHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Handle = value;
}
constexpr ::System::Net::EndPoint*& System::Net::Sockets::Socket::__cordl_internal_get_seed_endpoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed_endpoint;
}
constexpr ::System::Net::EndPoint* const& System::Net::Sockets::Socket::__cordl_internal_get_seed_endpoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed_endpoint;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_seed_endpoint(::System::Net::EndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed_endpoint = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::Net::Sockets::Socket::__cordl_internal_get_ReadSem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReadSem;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::Net::Sockets::Socket::__cordl_internal_get_ReadSem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReadSem;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_ReadSem(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReadSem = value;
}
constexpr ::System::Threading::SemaphoreSlim*& System::Net::Sockets::Socket::__cordl_internal_get_WriteSem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WriteSem;
}
constexpr ::System::Threading::SemaphoreSlim* const& System::Net::Sockets::Socket::__cordl_internal_get_WriteSem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___WriteSem;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_WriteSem(::System::Threading::SemaphoreSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___WriteSem = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_blocking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_blocking;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_blocking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_blocking;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_blocking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_blocking = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_bound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_bound;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_bound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_bound;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_bound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_bound = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_is_connected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_connected;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_is_connected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___is_connected;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_is_connected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___is_connected = value;
}
constexpr int32_t& System::Net::Sockets::Socket::__cordl_internal_get_m_IntCleanedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntCleanedUp;
}
constexpr int32_t const& System::Net::Sockets::Socket::__cordl_internal_get_m_IntCleanedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IntCleanedUp;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_m_IntCleanedUp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IntCleanedUp = value;
}
constexpr bool& System::Net::Sockets::Socket::__cordl_internal_get_connect_in_progress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connect_in_progress;
}
constexpr bool const& System::Net::Sockets::Socket::__cordl_internal_get_connect_in_progress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connect_in_progress;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set_connect_in_progress(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connect_in_progress = value;
}
constexpr int32_t& System::Net::Sockets::Socket::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr int32_t const& System::Net::Sockets::Socket::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void System::Net::Sockets::Socket::__cordl_internal_set__cordl_ID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
inline void System::Net::Sockets::Socket::setStaticF_AcceptCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "AcceptCompletedHandler", ::System::Net::Sockets::Socket*>(
      std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_AcceptCompletedHandler() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "AcceptCompletedHandler", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "ReceiveCompletedHandler", ::System::Net::Sockets::Socket*>(
      std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_ReceiveCompletedHandler() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "ReceiveCompletedHandler", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "SendCompletedHandler", ::System::Net::Sockets::Socket*>(
      std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_SendCompletedHandler() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "SendCompletedHandler", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_rentedSocketSentinel(::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*, "s_rentedSocketSentinel", ::System::Net::Sockets::Socket*>(
      std::forward<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>(value));
}
inline ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* System::Net::Sockets::Socket::getStaticF_s_rentedSocketSentinel() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*, "s_rentedSocketSentinel", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_rentedInt32Sentinel(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, "s_rentedInt32Sentinel", ::System::Net::Sockets::Socket*>(
      std::forward<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(value));
}
inline ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* System::Net::Sockets::Socket::getStaticF_s_rentedInt32Sentinel() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, "s_rentedInt32Sentinel", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::System::Net::Sockets::Socket*>(std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::getStaticF_s_zeroTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::System::Net::Sockets::Socket*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::Sockets::Socket::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_SupportsIPv4(bool value) {
  ::cordl_internals::setStaticField<bool, "s_SupportsIPv4", ::System::Net::Sockets::Socket*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_SupportsIPv4() {
  return ::cordl_internals::getStaticField<bool, "s_SupportsIPv4", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_SupportsIPv6(bool value) {
  ::cordl_internals::setStaticField<bool, "s_SupportsIPv6", ::System::Net::Sockets::Socket*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_SupportsIPv6() {
  return ::cordl_internals::getStaticField<bool, "s_SupportsIPv6", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_OSSupportsIPv6(bool value) {
  ::cordl_internals::setStaticField<bool, "s_OSSupportsIPv6", ::System::Net::Sockets::Socket*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_OSSupportsIPv6() {
  return ::cordl_internals::getStaticField<bool, "s_OSSupportsIPv6", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_Initialized", ::System::Net::Sockets::Socket*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<bool, "s_Initialized", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_LoggingEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "s_LoggingEnabled", ::System::Net::Sockets::Socket*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_LoggingEnabled() {
  return ::cordl_internals::getStaticField<bool, "s_LoggingEnabled", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_PerfCountersEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "s_PerfCountersEnabled", ::System::Net::Sockets::Socket*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_PerfCountersEnabled() {
  return ::cordl_internals::getStaticField<bool, "s_PerfCountersEnabled", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_AcceptAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "AcceptAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_AcceptAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "AcceptAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginAcceptCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginAcceptCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginAcceptCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginAcceptCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginAcceptReceiveCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginAcceptReceiveCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginAcceptReceiveCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginAcceptReceiveCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_ConnectAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "ConnectAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ConnectAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ConnectAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginConnectCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginConnectCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginConnectCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginConnectCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_DisconnectAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "DisconnectAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_DisconnectAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "DisconnectAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginDisconnectCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginDisconnectCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginDisconnectCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginDisconnectCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "ReceiveAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ReceiveAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ReceiveAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveGenericCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveGenericCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveGenericCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveGenericCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveFromAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "ReceiveFromAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ReceiveFromAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ReceiveFromAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveFromCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveFromCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveFromCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveFromCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "SendAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_SendAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "SendAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginSendGenericCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginSendGenericCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginSendGenericCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginSendGenericCallback", ::System::Net::Sockets::Socket*>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendToAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "SendToAsyncCallback", ::System::Net::Sockets::Socket*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_SendToAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "SendToAsyncCallback", ::System::Net::Sockets::Socket*>();
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::Socket::ReceiveAsync(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                                                   bool fromNetworkStream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveAsync",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, socketFlags, fromNetworkStream, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::ReceiveAsyncApm(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "ReceiveAsyncApm", {}, { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, socketFlags);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::Socket::SendAsyncForNetworkStream(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendAsyncForNetworkStream",
                                                                                {},
                                                                                { ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                  ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, socketFlags, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::SendAsyncApm(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "SendAsyncApm", {}, { ::i2c::type_of<::System::ReadOnlyMemory_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, socketFlags);
}
inline void System::Net::Sockets::Socket::CompleteAccept(::System::Net::Sockets::Socket* s, ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* saea) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "CompleteAccept",
                            {},
                            { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, saea);
}
inline void System::Net::Sockets::Socket::CompleteSendReceive(::System::Net::Sockets::Socket* s, ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* saea, bool isReceive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "CompleteSendReceive",
                            {},
                            { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, s, saea, isReceive);
}
inline ::System::Exception* System::Net::Sockets::Socket::GetException(::System::Net::Sockets::SocketError error, bool wrapExceptionsInIOExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "GetException", {}, { ::i2c::type_of<::System::Net::Sockets::SocketError>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, error, wrapExceptionsInIOExceptions);
}
inline void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* saea, bool isReceive) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "ReturnSocketAsyncEventArgs", {}, { ::i2c::type_of<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saea, isReceive);
}
inline void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* saea) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "ReturnSocketAsyncEventArgs", {}, { ::i2c::type_of<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, saea);
}
inline void System::Net::Sockets::Socket::_ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::System::Net::Sockets::SocketType>(), ::i2c::type_of<::System::Net::Sockets::ProtocolType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addressFamily, socketType, protocolType);
}
inline bool System::Net::Sockets::Socket::get_OSSupportsIPv4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_OSSupportsIPv4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::get_OSSupportsIPv6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_OSSupportsIPv6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Net::Sockets::Socket::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::System::Net::Sockets::AddressFamily System::Net::Sockets::Socket::get_AddressFamily() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_AddressFamily", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketType System::Net::Sockets::Socket::get_SocketType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_SocketType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketType>(this, ___internal_method);
}
inline ::System::Net::Sockets::ProtocolType System::Net::Sockets::Socket::get_ProtocolType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_ProtocolType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::ProtocolType>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_ExclusiveAddressUse(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_ExclusiveAddressUse", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_ReceiveBufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_ReceiveBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_SendBufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_SendBufferSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_ReceiveTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_ReceiveTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_SendTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_SendTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int16_t System::Net::Sockets::Socket::get_Ttl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Ttl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int16_t>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_Ttl(int16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_Ttl", {}, { ::i2c::type_of<int16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_DontFragment(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_DontFragment", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_DualMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_DualMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_DualMode(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_DualMode", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_IsDualMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_IsDualMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Sockets::Socket::CanTryAddressFamily(::System::Net::Sockets::AddressFamily family) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "CanTryAddressFamily", {}, { ::i2c::type_of<::System::Net::Sockets::AddressFamily>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, family);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "Send", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffers, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "Receive", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Net::Sockets::Socket*>(),
                       { "Receive", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffers, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::IOControl(::System::Net::Sockets::IOControlCode ioControlCode, ::ArrayW<uint8_t> optionInValue, ::ArrayW<uint8_t> optionOutValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "IOControl", {}, { ::i2c::type_of<::System::Net::Sockets::IOControlCode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
inline void System::Net::Sockets::Socket::SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SetIPProtectionLevel", {}, { ::i2c::type_of<::System::Net::Sockets::IPProtectionLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::System::Net::IPAddress* address, int32_t port, ::System::AsyncCallback* requestCallback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { "BeginConnect", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, address, port, requestCallback, state);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                       ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "BeginSend",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndSend(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndSend", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                          ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "BeginReceive",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceive(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndReceive", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::Object* System::Net::Sockets::Socket::get_InternalSyncObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_InternalSyncObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::get_CleanedUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_CleanedUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::InitializeSockets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "InitializeSockets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Net::Sockets::Socket::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::Socket*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::InternalShutdown(::System::Net::Sockets::SocketShutdown how) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "InternalShutdown", {}, { ::i2c::type_of<::System::Net::Sockets::SocketShutdown>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, how);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue,
                                                          bool silent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SetSocketOption",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                                                                  ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionLevel, optionName, optionValue, silent);
}
inline void System::Net::Sockets::Socket::_ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto,
                                                ::System::Net::Sockets::SafeSocketHandle* safe_handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::System::Net::Sockets::SocketType>(),
                                                               ::i2c::type_of<::System::Net::Sockets::ProtocolType>(), ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, family, type, proto, safe_handle);
}
inline void System::Net::Sockets::Socket::SocketDefaults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SocketDefaults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IntPtr System::Net::Sockets::Socket::Socket_icall(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto,
                                                                   ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Socket_icall",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Net::Sockets::AddressFamily>(), ::i2c::type_of<::System::Net::Sockets::SocketType>(),
                                                                                  ::i2c::type_of<::System::Net::Sockets::ProtocolType>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, family, type, proto, error);
}
inline int32_t System::Net::Sockets::Socket::get_Available() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Available", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::Socket::Available_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Available_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, error);
}
inline int32_t System::Net::Sockets::Socket::Available_icall(::System::IntPtr socket, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Available_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, socket, error);
}
inline void System::Net::Sockets::Socket::set_EnableBroadcast(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_EnableBroadcast", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_IsBound() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_IsBound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::Sockets::Socket::get_LocalEndPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_LocalEndPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "LocalEndPoint_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*>(nullptr, ___internal_method, safeHandle, family, error);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::LocalEndPoint_icall(::System::IntPtr socket, int32_t family, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "LocalEndPoint_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*>(nullptr, ___internal_method, socket, family, error);
}
inline bool System::Net::Sockets::Socket::get_Blocking() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Blocking", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_Blocking(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_Blocking", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::Blocking_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, bool block, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "Blocking_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, block, error);
}
inline void System::Net::Sockets::Socket::Blocking_icall(::System::IntPtr socket, bool block, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Blocking_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, block, error);
}
inline bool System::Net::Sockets::Socket::get_Connected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_Connected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_NoDelay(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "set_NoDelay", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::EndPoint* System::Net::Sockets::Socket::get_RemoteEndPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_RemoteEndPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "RemoteEndPoint_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*>(nullptr, ___internal_method, safeHandle, family, error);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::RemoteEndPoint_icall(::System::IntPtr socket, int32_t family, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "RemoteEndPoint_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*>(nullptr, ___internal_method, socket, family, error);
}
inline bool System::Net::Sockets::Socket::Poll(int32_t microSeconds, ::System::Net::Sockets::SelectMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Poll", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SelectMode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, microSeconds, mode);
}
inline bool System::Net::Sockets::Socket::Poll_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Poll_internal",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SelectMode>(),
                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, safeHandle, mode, timeout, error);
}
inline bool System::Net::Sockets::Socket::Poll_icall(::System::IntPtr socket, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { "Poll_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SelectMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, socket, mode, timeout, error);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::Accept() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Accept", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Accept(::System::Net::Sockets::Socket* acceptSocket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Accept", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, acceptSocket);
}
inline bool System::Net::Sockets::Socket::AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "AcceptAsync", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginAccept(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                                                         { "BeginAccept", {}, { ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::EndAccept(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndAccept", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method, asyncResult);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::EndAccept(::by_ref<::ArrayW<uint8_t>> buffer, ::by_ref<int32_t> bytesTransferred, ::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "EndAccept", {}, { ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method, buffer, bytesTransferred, asyncResult);
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::Socket::Accept_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "Accept_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SafeSocketHandle*>(nullptr, ___internal_method, safeHandle, error, blocking);
}
inline ::System::IntPtr System::Net::Sockets::Socket::Accept_icall(::System::IntPtr sock, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Accept_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, sock, error, blocking);
}
inline void System::Net::Sockets::Socket::Bind(::System::Net::EndPoint* localEP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Bind", {}, { ::i2c::type_of<::System::Net::EndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localEP);
}
inline void System::Net::Sockets::Socket::Bind_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { "Bind_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, sa, error);
}
inline void System::Net::Sockets::Socket::Bind_icall(::System::IntPtr sock, ::System::Net::SocketAddress* sa, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "Bind_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sock, sa, error);
}
inline void System::Net::Sockets::Socket::Listen(int32_t backlog) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Listen", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backlog);
}
inline void System::Net::Sockets::Socket::Listen_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t backlog, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "Listen_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, backlog, error);
}
inline void System::Net::Sockets::Socket::Listen_icall(::System::IntPtr sock, int32_t backlog, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Listen_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sock, backlog, error);
}
inline void System::Net::Sockets::Socket::Connect(::System::Net::IPAddress* address, int32_t port) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Connect", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, port);
}
inline void System::Net::Sockets::Socket::Connect(::System::Net::EndPoint* remoteEP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Connect", {}, { ::i2c::type_of<::System::Net::EndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteEP);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "BeginConnect", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, host, port, callback, state);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "BeginConnect", {}, { ::i2c::type_of<::System::Net::EndPoint*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, remoteEP, callback, state);
}
inline bool System::Net::Sockets::Socket::BeginMConnect(::System::Net::Sockets::SocketAsyncResult* sockares) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "BeginMConnect", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sockares);
}
inline bool System::Net::Sockets::Socket::BeginSConnect(::System::Net::Sockets::SocketAsyncResult* sockares) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "BeginSConnect", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sockares);
}
inline void System::Net::Sockets::Socket::EndConnect(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndConnect", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::Net::Sockets::Socket::Connect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Connect_internal",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::SocketAddress*>(),
                                                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, sa, error, blocking);
}
inline void System::Net::Sockets::Socket::Connect_icall(::System::IntPtr sock, ::System::Net::SocketAddress* sa, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Net::Sockets::Socket*>(),
                       { "Connect_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sock, sa, error, blocking);
}
inline void System::Net::Sockets::Socket::Disconnect(bool reuseSocket) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Disconnect", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reuseSocket);
}
inline void System::Net::Sockets::Socket::EndDisconnect(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndDisconnect", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::Net::Sockets::Socket::Disconnect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, bool reuse, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "Disconnect_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, reuse, error);
}
inline void System::Net::Sockets::Socket::Disconnect_icall(::System::IntPtr sock, bool reuse, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Disconnect_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sock, reuse, error);
}
inline int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                     ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Receive",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                     ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Receive",
                                                             {},
                                                             { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags,
                                                     ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Receive",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffers, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Span_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { "Receive", {}, { ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::ReadOnlySpan_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                                                         { "Send",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                                                             ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, socketFlags, errorCode);
}
inline bool System::Net::Sockets::Socket::ReceiveAsync(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveAsync", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                          ::by_ref<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "BeginReceive",
                                         {},
                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                           ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceive(::System::IAsyncResult* asyncResult, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "EndReceive", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count,
                                                              ::System::Net::Sockets::SocketFlags flags, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "Receive_internal",
                                                {},
                                                { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_array_icall(::System::IntPtr sock, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                                 ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Receive_array_icall",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                              ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Receive_internal",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Receive_icall",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                         ::by_ref<::System::Net::EndPoint*> remoteEP) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ReceiveFrom",
                                                                                {},
                                                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                         ::by_ref<::System::Net::EndPoint*> remoteEP, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "ReceiveFrom",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                         ::by_ref<::System::Net::EndPoint*> remoteEP, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "ReceiveFrom",
                                         {},
                                         { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                           ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceiveFrom(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                              ::by_ref<::System::Net::EndPoint*> remoteEP, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "BeginReceiveFrom",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceiveFrom(::System::IAsyncResult* asyncResult, ::by_ref<::System::Net::EndPoint*> endPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "EndReceiveFrom", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::EndPoint*>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult, endPoint);
}
inline int32_t System::Net::Sockets::Socket::EndReceiveFrom_internal(::System::Net::Sockets::SocketAsyncResult* sockares, ::System::Net::Sockets::SocketAsyncEventArgs* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "EndReceiveFrom_internal", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>(), ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sockares, ares);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                                  ::by_ref<::System::Net::SocketAddress*> sockaddr, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "ReceiveFrom_internal",
                            {},
                            { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                              ::i2c::type_of<::by_ref<::System::Net::SocketAddress*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sockaddr, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                               ::by_ref<::System::Net::SocketAddress*> sockaddr, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "ReceiveFrom_icall",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::by_ref<::System::Net::SocketAddress*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, buffer, count, flags, sockaddr, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                  ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Send",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags,
                                                  ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Send",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffers, socketFlags, errorCode);
}
inline bool System::Net::Sockets::Socket::SendAsync(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendAsync", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                       ::by_ref<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "BeginSend",
                                         {},
                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                           ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
inline void System::Net::Sockets::Socket::BeginSendCallback(::System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "BeginSendCallback", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sockares, sent_so_far);
}
inline int32_t System::Net::Sockets::Socket::EndSend(::System::IAsyncResult* asyncResult, ::by_ref<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "EndSend", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::by_ref<::System::Net::Sockets::SocketError>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count,
                                                           ::System::Net::Sockets::SocketFlags flags, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "Send_internal",
                                                {},
                                                { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_array_icall(::System::IntPtr sock, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                              ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Send_array_icall",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::Socket_WSABUF*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                           ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Send_internal",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "Send_icall",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::SendTo(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags, ::System::Net::EndPoint* remoteEP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendTo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::System::Net::EndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline int32_t System::Net::Sockets::Socket::SendTo(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                    ::System::Net::EndPoint* remoteEP) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SendTo",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Memory_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Net::Sockets::SocketFlags>(), ::i2c::type_of<::System::Net::EndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSendTo(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                         ::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "BeginSendTo",
                                                {},
                                                { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::System::Net::EndPoint*>(), ::i2c::type_of<::System::AsyncCallback*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, callback, state);
}
inline void System::Net::Sockets::Socket::BeginSendToCallback(::System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "BeginSendToCallback", {}, { ::i2c::type_of<::System::Net::Sockets::SocketAsyncResult*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sockares, sent_so_far);
}
inline int32_t System::Net::Sockets::Socket::EndSendTo(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "EndSendTo", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline int32_t System::Net::Sockets::Socket::SendTo_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                             ::System::Net::SocketAddress* sa, ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "SendTo_internal",
                            {},
                            { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                              ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sa, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::SendTo_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress* sa,
                                                          ::by_ref<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "SendTo_icall",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Sockets::SocketFlags>(),
                                                  ::i2c::type_of<::System::Net::SocketAddress*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, buffer, count, flags, sa, error, blocking);
}
inline ::System::Object* System::Net::Sockets::Socket::GetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "GetSocketOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, optionLevel, optionName);
}
inline void System::Net::Sockets::Socket::GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level,
                                                                       ::System::Net::Sockets::SocketOptionName name, ::by_ref<::System::Object*> obj_val, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "GetSocketOption_obj_internal",
                                                {},
                                                { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                                  ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, level, name, obj_val, error);
}
inline void System::Net::Sockets::Socket::GetSocketOption_obj_icall(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name,
                                                                    ::by_ref<::System::Object*> obj_val, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "GetSocketOption_obj_icall",
                                                {},
                                                { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                                  ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<::by_ref<::System::Object*>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, level, name, obj_val, error);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, bool optionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { "SetSocketOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionLevel, optionName, optionValue);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Net::Sockets::Socket*>(),
          { "SetSocketOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionLevel, optionName, optionValue);
}
inline void System::Net::Sockets::Socket::SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level,
                                                                   ::System::Net::Sockets::SocketOptionName name, ::System::Object* obj_val, ::ArrayW<uint8_t> byte_val, int32_t int_val,
                                                                   ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "SetSocketOption_internal",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(),
                                                               ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, level, name, obj_val, byte_val, int_val, error);
}
inline void System::Net::Sockets::Socket::SetSocketOption_icall(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name,
                                                                ::System::Object* obj_val, ::ArrayW<uint8_t> byte_val, int32_t int_val, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                       { "SetSocketOption_icall",
                                         {},
                                         { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionLevel>(), ::i2c::type_of<::System::Net::Sockets::SocketOptionName>(),
                                           ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, level, name, obj_val, byte_val, int_val, error);
}
inline int32_t System::Net::Sockets::Socket::IOControl(int32_t ioControlCode, ::ArrayW<uint8_t> optionInValue, ::ArrayW<uint8_t> optionOutValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "IOControl", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
inline int32_t System::Net::Sockets::Socket::IOControl_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t ioctl_code, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output,
                                                                ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "IOControl_internal",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<int32_t>(),
                                                                                  ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, safeHandle, ioctl_code, input, output, error);
}
inline int32_t System::Net::Sockets::Socket::IOControl_icall(::System::IntPtr sock, int32_t ioctl_code, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output, ::by_ref<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "IOControl_icall",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                                                                               ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sock, ioctl_code, input, output, error);
}
inline void System::Net::Sockets::Socket::Close() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Close", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Close(int32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Close", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline void System::Net::Sockets::Socket::Close_icall(::System::IntPtr socket, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Close_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, error);
}
inline void System::Net::Sockets::Socket::Shutdown(::System::Net::Sockets::SocketShutdown how) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Shutdown", {}, { ::i2c::type_of<::System::Net::Sockets::SocketShutdown>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, how);
}
inline void System::Net::Sockets::Socket::Shutdown_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketShutdown how, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "Shutdown_internal",
                            {},
                            { ::i2c::type_of<::System::Net::Sockets::SafeSocketHandle*>(), ::i2c::type_of<::System::Net::Sockets::SocketShutdown>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, safeHandle, how, error);
}
inline void System::Net::Sockets::Socket::Shutdown_icall(::System::IntPtr socket, ::System::Net::Sockets::SocketShutdown how, ::by_ref<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "Shutdown_icall", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Net::Sockets::SocketShutdown>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, socket, how, error);
}
inline void System::Net::Sockets::Socket::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::Socket*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::Socket::Linger(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "Linger", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handle);
}
inline void System::Net::Sockets::Socket::ThrowIfDisposedAndClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ThrowIfDisposedAndClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::ThrowIfBufferNull(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ThrowIfBufferNull", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::Net::Sockets::Socket::ThrowIfBufferOutOfRange(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "ThrowIfBufferOutOfRange", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::Sockets::Socket::ThrowIfUdp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "ThrowIfUdp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::Socket::ValidateEndIAsyncResult(::System::IAsyncResult* ares, ::StringW methodName, ::StringW argName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                              { "ValidateEndIAsyncResult", {}, { ::i2c::type_of<::System::IAsyncResult*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketAsyncResult*>(this, ___internal_method, ares, methodName, argName);
}
inline void System::Net::Sockets::Socket::QueueIOSelectorJob(::System::Threading::SemaphoreSlim* sem, ::System::IntPtr handle, ::System::IOSelectorJob* job) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                          { "QueueIOSelectorJob", {}, { ::i2c::type_of<::System::Threading::SemaphoreSlim*>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IOSelectorJob*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sem, handle, job);
}
inline void System::Net::Sockets::Socket::InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                   ::System::Net::Sockets::SocketOperation operation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "InitSocketAsyncEventArgs",
                                                                                {},
                                                                                { ::i2c::type_of<::System::Net::Sockets::SocketAsyncEventArgs*>(), ::i2c::type_of<::System::AsyncCallback*>(),
                                                                                  ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, callback, state, operation);
}
inline ::System::Net::Sockets::SocketAsyncOperation System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation op) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "SocketOperationToSocketAsyncOperation", {}, { ::i2c::type_of<::System::Net::Sockets::SocketOperation>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketAsyncOperation>(this, ___internal_method, op);
}
inline ::System::Net::IPEndPoint* System::Net::Sockets::Socket::RemapIPEndPoint(::System::Net::IPEndPoint* input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "RemapIPEndPoint", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method, input);
}
inline void System::Net::Sockets::Socket::cancel_blocking_socket_operation(::System::Threading::Thread* thread) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "cancel_blocking_socket_operation", {}, { ::i2c::type_of<::System::Threading::Thread*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, thread);
}
inline int32_t System::Net::Sockets::Socket::get_FamilyHint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "get_FamilyHint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(),
                                                           { "IsProtocolSupported_internal", {}, { ::i2c::type_of<::System::Net::NetworkInformation::NetworkInterfaceComponent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, networkInterface);
}
inline bool System::Net::Sockets::Socket::IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::Socket*>(), { "IsProtocolSupported", {}, { ::i2c::type_of<::System::Net::NetworkInformation::NetworkInterfaceComponent>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, networkInterface);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::New_ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType,
                                                                              ::System::Net::Sockets::ProtocolType protocolType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket*>(addressFamily, socketType, protocolType));
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::New_ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type,
                                                                              ::System::Net::Sockets::ProtocolType proto, ::System::Net::Sockets::SafeSocketHandle* safe_handle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::Socket*>(family, type, proto, safe_handle));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Sockets::Socket::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Sockets::Socket::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket::Socket() {}
