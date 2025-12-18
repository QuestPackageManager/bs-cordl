#pragma once
// IWYU pragma private; include "System/Net/Sockets/Socket.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_CachedEventArgs::*)()>(&::System::Net::Sockets::Socket_CachedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b0750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_CachedEventArgs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TaskAccept)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TaskReceive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TaskSend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ValueTaskReceive)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ValueTaskSend)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::Sockets::Socket_CachedEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_CachedEventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_CachedEventArgs* System::Net::Sockets::Socket_CachedEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket_CachedEventArgs*>());
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>
System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::GetCompletionResponsibility(::ByRef<bool> responsibleForReturningToPool) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>*>::get(), "GetCompletionResponsibility",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, false>(this, ___internal_method, responsibleForReturningToPool);
}
template <typename TResult> inline ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>* System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>*>());
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<TResult>::Socket_TaskSocketAsyncEventArgs_1() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b0754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs::Socket_Int32TaskSocketAsyncEventArgs() {}
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)()>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b17c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c._OnCompleted_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_OnCompleted_b__14_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x61b17c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<OnCompleted>b__14_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c._InvokeContinuation_b__20_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_InvokeContinuation_b__20_0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61b1894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<InvokeContinuation>b__20_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c.__cctor_b__27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b1954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<.cctor>b__27_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c.__cctor_b__27_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::*)(::System::Object*)>(
    &::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_1)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b19a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<.cctor>b__27_1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::setStaticF___9(::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get>(
      std::forward<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>(value));
}
inline ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get>();
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::setStaticF___9__14_0(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get>();
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::setStaticF___9__20_0(::System::Threading::SendOrPostCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::SendOrPostCallback*, "<>9__20_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get>(
      std::forward<::System::Threading::SendOrPostCallback*>(value));
}
inline ::System::Threading::SendOrPostCallback* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<::System::Threading::SendOrPostCallback*, "<>9__20_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get>();
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_OnCompleted_b__14_0(::System::Object* runState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<OnCompleted>b__14_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runState);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::_InvokeContinuation_b__20_0(::System::Object* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<InvokeContinuation>b__20_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_0(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<.cctor>b__27_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline void System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::__cctor_b__27_1(::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>::get(), "<.cctor>b__27_1",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c* System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::AwaitableSocketAsyncEventArgs_Socket___c::AwaitableSocketAsyncEventArgs_Socket___c() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61b079c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.get_WrapExceptionsInIOExceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b088c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                                 "get_WrapExceptionsInIOExceptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.set_WrapExceptionsInIOExceptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(bool)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b0894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "set_WrapExceptionsInIOExceptions",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.Reserve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Reserve)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x61b089c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "Reserve",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Release)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61b092c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(
    ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x61b09a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(
    ::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ReceiveAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x61b0eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.SendAsyncForNetworkStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(
    ::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x61b1108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "SendAsyncForNetworkStream",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.GetStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Sources::ValueTaskSourceStatus (
    ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(int16_t)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetStatus)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x61b11e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "GetStatus",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, int16_t, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x61b12d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "OnCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.InvokeContinuation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, bool)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::InvokeContinuation)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x61b0bb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "InvokeContinuation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(int16_t)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetResult)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x61b1538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "GetResult",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.System_Threading_Tasks_Sources_IValueTaskSource_GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(int16_t)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61b15a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "System.Threading.Tasks.Sources.IValueTaskSource.GetResult",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ThrowIncorrectTokenException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b1288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                                 "ThrowIncorrectTokenException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ThrowMultipleContinuationsException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b14ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                                 "ThrowMultipleContinuationsException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.ThrowException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(
    &::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowException)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61b1580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "ThrowException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs.CreateException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (
    ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(&::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::CreateException)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x61b0ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "CreateException", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____executionContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scheduler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*, "Reserved",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get>(
      std::forward<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>(value));
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::getStaticF_Reserved() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*, "Reserved",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get>();
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::setStaticF_s_completedSentinel(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_completedSentinel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::getStaticF_s_completedSentinel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_completedSentinel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get>();
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::setStaticF_s_availableSentinel(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_availableSentinel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get>(
      std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::getStaticF_s_availableSentinel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_availableSentinel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get>();
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::get_WrapExceptionsInIOExceptions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                               "get_WrapExceptionsInIOExceptions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::set_WrapExceptionsInIOExceptions(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "set_WrapExceptionsInIOExceptions",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Reserve() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "Reserve",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* _) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ReceiveAsync(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, socket);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::SendAsyncForNetworkStream(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "SendAsyncForNetworkStream",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, socket);
}
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetStatus(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "GetStatus",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Sources::ValueTaskSourceStatus, false>(this, ___internal_method, token);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, int16_t token,
                                                                                    ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags flags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "OnCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, token, flags);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::InvokeContinuation(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, bool forceAsync) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "InvokeContinuation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation, state, forceAsync);
}
inline int32_t System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::GetResult(int16_t token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "GetResult",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, token);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::System_Threading_Tasks_Sources_IValueTaskSource_GetResult(int16_t token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "System.Threading.Tasks.Sources.IValueTaskSource.GetResult",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowIncorrectTokenException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                               "ThrowIncorrectTokenException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowMultipleContinuationsException() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(),
                                               "ThrowMultipleContinuationsException", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::ThrowException(::System::Net::Sockets::SocketError error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "ThrowException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::System::Exception* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::CreateException(::System::Net::Sockets::SocketError error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>::get(), "CreateException", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(this, ___internal_method, error);
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>());
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)()>(&::System::Net::Sockets::Socket___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b1a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsync_b__14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket_CachedEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61b1a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(),
                                                                               "<ReceiveAsync>b__14_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsync_b__14_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61b1a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(),
                                                                               "<ReceiveAsync>b__14_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsyncApm_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_0)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x61b1adc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<ReceiveAsyncApm>b__15_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._ReceiveAsyncApm_b__15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_1)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x61b1d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<ReceiveAsyncApm>b__15_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncForNetworkStream_b__22_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket_CachedEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61b21dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncForNetworkStream>b__22_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncForNetworkStream_b__22_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* (::System::Net::Sockets::Socket___c::*)()>(
    &::System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61b2220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncForNetworkStream>b__22_1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncApm_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_0)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x61b2274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncApm>b__23_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsyncApm_b__23_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_1)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x61b24cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncApm>b__23_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._SendAsync_b__295_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_SendAsync_b__295_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b2834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsync>b__295_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._BeginSend_b__297_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_BeginSend_b__297_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b28d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<BeginSend>b__297_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c._BeginSendTo_b__310_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::_BeginSendTo_b__310_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61b296c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<BeginSendTo>b__310_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61b2a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61b2b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::Object*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_2)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x61b2bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_3)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x61b2cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_3", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_4)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x61b2f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_4", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_5)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x61b30cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_5", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_6)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x61b3348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_6", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_7)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x61b35f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_7", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_8)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x61b3ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_8", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_9
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_9)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x61b3d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_9", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_10
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_10)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x61b3e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_10", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_11
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_11)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x61b4144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_11", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_12
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_12)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x61b43f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_12", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_13
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_13)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x61b450c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_13", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_14
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_14)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x61b47e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_14", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_15
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_15)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x61b49c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_15", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_16)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x61b4c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_16", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c.__cctor_b__367_17
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket___c::__cctor_b__367_17)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x61b4d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_17", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
inline void System::Net::Sockets::Socket___c::setStaticF___9(::System::Net::Sockets::Socket___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::Net::Sockets::Socket___c*>(value));
}
inline ::System::Net::Sockets::Socket___c* System::Net::Sockets::Socket___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__14_0(::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__14_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__14_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__14_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__14_1(::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__14_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__14_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__14_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__15_0(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__15_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__15_1(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__15_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__22_0(::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__22_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__22_0() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_CachedEventArgs*>*, "<>9__22_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__22_1(::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__22_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*>(value));
}
inline ::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>* System::Net::Sockets::Socket___c::getStaticF___9__22_1() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*>*, "<>9__22_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__23_0(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__23_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__23_1(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "<>9__23_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__295_0(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__295_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__295_0() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__295_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__297_0(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__297_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__297_0() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__297_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::setStaticF___9__310_0(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "<>9__310_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket___c::getStaticF___9__310_0() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "<>9__310_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get>();
}
inline void System::Net::Sockets::Socket___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_CachedEventArgs* System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(),
                                                                             "<ReceiveAsync>b__14_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_CachedEventArgs*, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket___c::_ReceiveAsync_b__14_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(),
                                                                             "<ReceiveAsync>b__14_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_0(::System::IAsyncResult* iar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<ReceiveAsyncApm>b__15_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::Socket___c::_ReceiveAsyncApm_b__15_1(::System::IAsyncResult* iar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<ReceiveAsyncApm>b__15_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline ::System::Net::Sockets::Socket_CachedEventArgs* System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncForNetworkStream>b__22_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_CachedEventArgs*, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs* System::Net::Sockets::Socket___c::_SendAsyncForNetworkStream_b__22_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncForNetworkStream>b__22_1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket_AwaitableSocketAsyncEventArgs*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_0(::System::IAsyncResult* iar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncApm>b__23_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::Socket___c::_SendAsyncApm_b__23_1(::System::IAsyncResult* iar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsyncApm>b__23_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, iar);
}
inline void System::Net::Sockets::Socket___c::_SendAsync_b__295_0(::System::IOAsyncResult* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<SendAsync>b__295_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::Socket___c::_BeginSend_b__297_0(::System::IOAsyncResult* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<BeginSend>b__297_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::Socket___c::_BeginSendTo_b__310_0(::System::IOAsyncResult* s) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<BeginSendTo>b__310_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_0(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_1(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_1", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_2(::System::Object* s, ::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s, e);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_3(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_3", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_4(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_4", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_5(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_5", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_6(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_6", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_7(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_7", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_8(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_8", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_9(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_9", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_10(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_10", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_11(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_11", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_12(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_12", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_13(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_13", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_14(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_14", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_15(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_15", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_16(::System::IOAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_16", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline void System::Net::Sockets::Socket___c::__cctor_b__367_17(::System::IAsyncResult* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c*>::get(), "<.cctor>b__367_17", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ares);
}
inline ::System::Net::Sockets::Socket___c* System::Net::Sockets::Socket___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c::Socket___c() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass240_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass240_0::*)()>(
    &::System::Net::Sockets::Socket___c__DisplayClass240_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b504c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass240_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass240_0._BeginConnect_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass240_0::*)(
    ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>*)>(&::System::Net::Sockets::Socket___c__DisplayClass240_0::_BeginConnect_b__0)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x61b5050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass240_0*>::get(), "<BeginConnect>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sockares)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::Sockets::Socket___c__DisplayClass240_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass240_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass240_0::_BeginConnect_b__0(::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass240_0*>::get(), "<BeginConnect>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*, ::Array<::System::Net::IPAddress*>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass240_0* System::Net::Sockets::Socket___c__DisplayClass240_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket___c__DisplayClass240_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass240_0::Socket___c__DisplayClass240_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass298_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass298_0::*)()>(
    &::System::Net::Sockets::Socket___c__DisplayClass298_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b51b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass298_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass298_0._BeginSendCallback_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass298_0::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass298_0::_BeginSendCallback_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61b51b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass298_0*>::get(), "<BeginSendCallback>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass298_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass298_0::_BeginSendCallback_b__0(::System::IOAsyncResult* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass298_0*>::get(), "<BeginSendCallback>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass298_0* System::Net::Sockets::Socket___c__DisplayClass298_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket___c__DisplayClass298_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass298_0::Socket___c__DisplayClass298_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass311_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass311_0::*)()>(
    &::System::Net::Sockets::Socket___c__DisplayClass311_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b5264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass311_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass311_0._BeginSendToCallback_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass311_0::*)(::System::IOAsyncResult*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass311_0::_BeginSendToCallback_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x61b5268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass311_0*>::get(), "<BeginSendToCallback>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass311_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass311_0::_BeginSendToCallback_b__0(::System::IOAsyncResult* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass311_0*>::get(), "<BeginSendToCallback>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, s);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass311_0* System::Net::Sockets::Socket___c__DisplayClass311_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket___c__DisplayClass311_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass311_0::Socket___c__DisplayClass311_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass355_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass355_0::*)()>(
    &::System::Net::Sockets::Socket___c__DisplayClass355_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61b5314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass355_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket___c__DisplayClass355_0._QueueIOSelectorJob_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket___c__DisplayClass355_0::*)(::System::Threading::Tasks::Task*)>(
    &::System::Net::Sockets::Socket___c__DisplayClass355_0::_QueueIOSelectorJob_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61b5318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass355_0*>::get(), "<QueueIOSelectorJob>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___job)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass355_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket___c__DisplayClass355_0::_QueueIOSelectorJob_b__0(::System::Threading::Tasks::Task* t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket___c__DisplayClass355_0*>::get(), "<QueueIOSelectorJob>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::System::Net::Sockets::Socket___c__DisplayClass355_0* System::Net::Sockets::Socket___c__DisplayClass355_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket___c__DisplayClass355_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::Socket___c__DisplayClass355_0::Socket___c__DisplayClass355_0() {}
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::Socket::*)(
    ::System::Memory_1<uint8_t>, ::System::Net::Sockets::SocketFlags, bool, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x61a58c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsyncApm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::Sockets::Socket::*)(::System::Memory_1<uint8_t>, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::ReceiveAsyncApm)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x61a6948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveAsyncApm", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsyncForNetworkStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::Socket::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::Socket::SendAsyncForNetworkStream)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x61a617c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendAsyncForNetworkStream", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsyncApm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::Sockets::Socket::*)(::System::ReadOnlyMemory_1<uint8_t>, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::SendAsyncApm)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x61a6d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendAsyncApm", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CompleteAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Net::Sockets::Socket*, ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*)>(&::System::Net::Sockets::Socket::CompleteAccept)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x61a7230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "CompleteAccept", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CompleteSendReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::Socket*, ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, bool)>(
    &::System::Net::Sockets::Socket::CompleteSendReceive)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x61a74fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "CompleteSendReceive", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::System::Net::Sockets::SocketError, bool)>(&::System::Net::Sockets::Socket::GetException)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x61a73e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, bool)>(
    &::System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x61a7684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReturnSocketAsyncEventArgs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReturnSocketAsyncEventArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*)>(&::System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x61a73b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReturnSocketAsyncEventArgs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType)>(&::System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x61a76c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_OSSupportsIPv4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::Sockets::Socket::get_OSSupportsIPv4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61a7d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_OSSupportsIPv4",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_OSSupportsIPv6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Net::Sockets::Socket::get_OSSupportsIPv6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x61a7d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_OSSupportsIPv6",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Handle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61a7de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Handle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_AddressFamily
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::Sockets::Socket::*)()>(
    &::System::Net::Sockets::Socket::get_AddressFamily)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a7e00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_AddressFamily",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_SocketType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketType (::System::Net::Sockets::Socket::*)()>(
    &::System::Net::Sockets::Socket::get_SocketType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a7e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_SocketType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_ProtocolType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::ProtocolType (::System::Net::Sockets::Socket::*)()>(
    &::System::Net::Sockets::Socket::get_ProtocolType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a7e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_ProtocolType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ExclusiveAddressUse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_ExclusiveAddressUse)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61a7e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_ExclusiveAddressUse",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ReceiveBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_ReceiveBufferSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a7fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_ReceiveBufferSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_SendBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_SendBufferSize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a8000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_SendBufferSize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_ReceiveTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_ReceiveTimeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61a8060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_ReceiveTimeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_SendTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::set_SendTimeout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61a80c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_SendTimeout", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Ttl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Ttl)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x61a8130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Ttl",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_Ttl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int16_t)>(&::System::Net::Sockets::Socket::set_Ttl)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x61a81e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_Ttl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_DontFragment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_DontFragment)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x61a82bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_DontFragment",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_DualMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_DualMode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x61a8328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_DualMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_DualMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_DualMode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61a83d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_DualMode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_IsDualMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_IsDualMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61a8440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_IsDualMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.CanTryAddressFamily
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::AddressFamily)>(
    &::System::Net::Sockets::Socket::CanTryAddressFamily)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x61a8458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "CanTryAddressFamily", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a8488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a4464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a3d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::IOControlCode, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a9400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IOControlCode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetIPProtectionLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::IPProtectionLevel)>(
    &::System::Net::Sockets::Socket::SetIPProtectionLevel)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x61a7b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetIPProtectionLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IPProtectionLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::System::Net::IPAddress*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x61a957c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61a5268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSend", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a54d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndSend", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61a4ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginReceive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x61a4f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_InternalSyncObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Net::Sockets::Socket::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x61a9ea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_InternalSyncObject",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_CleanedUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_CleanedUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x61a97e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_CleanedUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InitializeSockets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::Sockets::Socket::InitializeSockets)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x61a7908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "InitializeSockets",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x61a9fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x61aa038;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InternalShutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketShutdown)>(
    &::System::Net::Sockets::Socket::InternalShutdown)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x61a48d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "InternalShutdown", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, int32_t, bool)>(&::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x61a6778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::System::Net::Sockets::SafeSocketHandle*)>(
    &::System::Net::Sockets::Socket::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61aa328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SocketDefaults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::SocketDefaults)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x61a7c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SocketDefaults",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Socket_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(
    ::System::Net::Sockets::AddressFamily, ::System::Net::Sockets::SocketType, ::System::Net::Sockets::ProtocolType, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Socket_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61a7b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Socket_icall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Available
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Available)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x61a3894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Available",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Available_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Available_internal)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x61aa4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Available_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Available_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Available_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61aa60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Available_icall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_EnableBroadcast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_EnableBroadcast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61aa610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_EnableBroadcast",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_IsBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_IsBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61aa684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_IsBound",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_LocalEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_LocalEndPoint)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x61aa68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_LocalEndPoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.LocalEndPoint_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::LocalEndPoint_internal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61aa784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "LocalEndPoint_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.LocalEndPoint_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::IntPtr, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::LocalEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61aa8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "LocalEndPoint_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Blocking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Blocking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61aa8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Blocking",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_Blocking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_Blocking)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x61aa8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_Blocking",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Blocking_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, bool, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Blocking_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61aa9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Blocking_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Blocking_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Blocking_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61aaad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Blocking_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_Connected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::get_Connected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61aaadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Connected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.set_NoDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::set_NoDelay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x61aa414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_NoDelay",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_RemoteEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::EndPoint* (::System::Net::Sockets::Socket::*)()>(
    &::System::Net::Sockets::Socket::get_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x61aab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_RemoteEndPoint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemoteEndPoint_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::RemoteEndPoint_internal)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61aac30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "RemoteEndPoint_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemoteEndPoint_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::SocketAddress* (*)(::System::IntPtr, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::RemoteEndPoint_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61aad78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "RemoteEndPoint_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(int32_t, ::System::Net::Sockets::SelectMode)>(
    &::System::Net::Sockets::Socket::Poll)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x61aad7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Poll", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SelectMode, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Poll_internal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x61aaf08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Poll_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Poll_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr, ::System::Net::Sockets::SelectMode, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Poll_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ab05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Poll_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x61ab060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::Socket::Accept)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x61ab2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.AcceptAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket::AcceptAsync)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x61ab3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "AcceptAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::Sockets::Socket::BeginAccept)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x61ab7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginAccept", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x61ab930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndAccept", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndAccept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (
    ::System::Net::Sockets::Socket::*)(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>, ::ByRef<int32_t>, ::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndAccept)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x61ab954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndAccept", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SafeSocketHandle* (*)(::System::Net::Sockets::SafeSocketHandle*, ::ByRef<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Accept_internal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x61ab190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Accept_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Accept_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61abb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::Bind)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x61abb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Bind_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61abdcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Bind_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Bind_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::SocketAddress*, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Bind_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61abf04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Bind_icall", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::Listen)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61abf08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Listen", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Listen_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61abff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Listen_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Listen_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Listen_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ac12c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Listen_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::IPAddress*, int32_t)>(
    &::System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x61ac130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::Connect)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x61ac1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::StringW, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x61ac614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginConnect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x61a97f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginMConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Sockets::SocketAsyncResult*)>(&::System::Net::Sockets::Socket::BeginMConnect)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x61acdfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginMConnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::Sockets::SocketAsyncResult*)>(&::System::Net::Sockets::Socket::BeginSConnect)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x61ac8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSConnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndConnect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61ad010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndConnect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::SocketAddress*, ::ByRef<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Connect_internal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x61ac4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Connect_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::SocketAddress*, ::ByRef<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Connect_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ad0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::Disconnect)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61ad0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndDisconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndDisconnect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x61ad2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndDisconnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, bool, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Disconnect_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61ad1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Disconnect_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Disconnect_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Disconnect_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ad3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Disconnect_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61a8c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x61ad66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0x61a8df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Span_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Receive)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x61a4004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::ReadOnlySpan_1<uint8_t>, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x61a4710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x61ad9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>,
                                       ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginReceive)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x61a9c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginReceive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::ByRef<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::EndReceive)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61a9db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceive", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<int32_t>, bool)>(
        &::System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61ad868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_array_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                              ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_array_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61adbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_array_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                              ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Receive_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61ad51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Receive_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Receive_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61adbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::EndPoint*>)>(&::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61adbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::EndPoint*>, ::ByRef<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x61adcf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::EndPoint*>, ::ByRef<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::ReceiveFrom)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x61adfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginReceiveFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::EndPoint*>, ::System::AsyncCallback*,
                                       ::System::Object*)>(&::System::Net::Sockets::Socket::BeginReceiveFrom)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x61ae228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginReceiveFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceiveFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::ByRef<::System::Net::EndPoint*>)>(
    &::System::Net::Sockets::Socket::EndReceiveFrom)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x61ae408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceiveFrom", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndReceiveFrom_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::SocketAsyncResult*, ::System::Net::Sockets::SocketAsyncEventArgs*)>(&::System::Net::Sockets::Socket::EndReceiveFrom_internal)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x61ae520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceiveFrom_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::SocketAddress*>, ::ByRef<int32_t>, bool)>(
        &::System::Net::Sockets::Socket::ReceiveFrom_internal)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x61ade64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::SocketAddress*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ReceiveFrom_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(
    ::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::SocketAddress*>, ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::ReceiveFrom_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61ae5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::SocketAddress*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(&::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x61a8b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::Send)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x61a84e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::Socket::SendAsync)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x61ae890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<::System::Net::Sockets::SocketError>,
                                       ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginSend)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x61a9928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSend", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncResult*, int32_t)>(&::System::Net::Sockets::Socket::BeginSendCallback)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x61aeb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSendCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::ByRef<::System::Net::Sockets::SocketError>)>(
    &::System::Net::Sockets::Socket::EndSend)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x61a9b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndSend", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<int32_t>, bool)>(
        &::System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61ae740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_array_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, ::System::Net::Sockets::Socket_WSABUF*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                              ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_array_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61aeef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_array_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags,
                                                                                              ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::Send_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61ae5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Send_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::ByRef<int32_t>, bool)>(
    &::System::Net::Sockets::Socket::Send_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61aeefc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::SendTo)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x61aef00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(
    ::System::Memory_1<uint8_t>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*)>(&::System::Net::Sockets::Socket::SendTo)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x61af1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*,
                                                                            ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::Sockets::Socket::BeginSendTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x61af480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSendTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.BeginSendToCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SocketAsyncResult*, int32_t)>(
    &::System::Net::Sockets::Socket::BeginSendToCallback)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x61af680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSendToCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.EndSendTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::Socket::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::Socket::EndSendTo)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61af8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndSendTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*, ::ByRef<int32_t>, bool)>(
        &::System::Net::Sockets::Socket::SendTo_internal)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x61af0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SendTo_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::System::Net::Sockets::SocketFlags, ::System::Net::SocketAddress*,
                                                                                              ::ByRef<int32_t>, bool)>(&::System::Net::Sockets::Socket::SendTo_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61af95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName)>(&::System::Net::Sockets::Socket::GetSocketOption)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x61a3358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetSocketOption", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption_obj_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::ByRef<::System::Object*>, ::ByRef<int32_t>)>(
        &::System::Net::Sockets::Socket::GetSocketOption_obj_internal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x61af960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetSocketOption_obj_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.GetSocketOption_obj_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName,
                                                                                           ::ByRef<::System::Object*>, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::GetSocketOption_obj_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61afab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetSocketOption_obj_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, bool)>(&::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61afab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, int32_t)>(&::System::Net::Sockets::Socket::SetSocketOption)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x61a7e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName, ::System::Object*,
                         ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::SetSocketOption_internal)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x61aa1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SetSocketOption_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketOptionLevel, ::System::Net::Sockets::SocketOptionName,
                                                                                           ::System::Object*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::SetSocketOption_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61afabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::System::Net::Sockets::Socket::*)(int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::System::Net::Sockets::Socket::IOControl)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x61a9404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(::System::Net::Sockets::SafeSocketHandle*, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ByRef<int32_t>)>(
        &::System::Net::Sockets::Socket::IOControl_internal)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x61afac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IOControl_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                                              ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::IOControl_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61afc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl_icall", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61afc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Close",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(int32_t)>(&::System::Net::Sockets::Socket::Close)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61a4958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Close_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<int32_t>)>(&::System::Net::Sockets::Socket::Close_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61afc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Close_icall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::Net::Sockets::SocketShutdown)>(
    &::System::Net::Sockets::Socket::Shutdown)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x61afc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Shutdown", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::Sockets::SafeSocketHandle*, ::System::Net::Sockets::SocketShutdown, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Shutdown_internal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x61aa088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Shutdown_internal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Shutdown_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::System::Net::Sockets::SocketShutdown, ::ByRef<int32_t>)>(
    &::System::Net::Sockets::Socket::Shutdown_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x61afd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Shutdown_icall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(bool)>(&::System::Net::Sockets::Socket::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61afd40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.Linger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::System::IntPtr)>(&::System::Net::Sockets::Socket::Linger)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x61afda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Linger", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfDisposedAndClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::ThrowIfDisposedAndClosed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x61aa454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(),
                                                                               "ThrowIfDisposedAndClosed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfBufferNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Net::Sockets::Socket::ThrowIfBufferNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61ad3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfBufferNull", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfBufferOutOfRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::Sockets::Socket::ThrowIfBufferOutOfRange)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x61ad3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfBufferOutOfRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ThrowIfUdp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)()>(&::System::Net::Sockets::Socket::ThrowIfUdp)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x61aaae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfUdp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.ValidateEndIAsyncResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketAsyncResult* (
    ::System::Net::Sockets::Socket::*)(::System::IAsyncResult*, ::StringW, ::StringW)>(&::System::Net::Sockets::Socket::ValidateEndIAsyncResult)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x61aba50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ValidateEndIAsyncResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.QueueIOSelectorJob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::Sockets::Socket::*)(::System::Threading::SemaphoreSlim*, ::System::IntPtr, ::System::IOSelectorJob*)>(&::System::Net::Sockets::Socket::QueueIOSelectorJob)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x61ab6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "QueueIOSelectorJob", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SemaphoreSlim*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.InitSocketAsyncEventArgs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::SocketAsyncEventArgs*, ::System::AsyncCallback*, ::System::Object*, ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::Socket::InitSocketAsyncEventArgs)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x61ab62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "InitSocketAsyncEventArgs", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.SocketOperationToSocketAsyncOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketAsyncOperation (::System::Net::Sockets::Socket::*)(
    ::System::Net::Sockets::SocketOperation)>(&::System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x61aff10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SocketOperationToSocketAsyncOperation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.RemapIPEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::System::Net::Sockets::Socket::*)(::System::Net::IPEndPoint*)>(
    &::System::Net::Sockets::Socket::RemapIPEndPoint)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x61abd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "RemapIPEndPoint", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.cancel_blocking_socket_operation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Thread*)>(&::System::Net::Sockets::Socket::cancel_blocking_socket_operation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x61affac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "cancel_blocking_socket_operation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.get_FamilyHint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::System::Net::Sockets::Socket::get_FamilyHint)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x61affc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_FamilyHint",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IsProtocolSupported_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::NetworkInformation::NetworkInterfaceComponent)>(
    &::System::Net::Sockets::Socket::IsProtocolSupported_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b004c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IsProtocolSupported_internal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::Socket.IsProtocolSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Net::NetworkInformation::NetworkInterfaceComponent)>(
    &::System::Net::Sockets::Socket::IsProtocolSupported)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x61a9f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IsProtocolSupported", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedTaskEventArgs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Handle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___seed_endpoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ReadSem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___WriteSem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "AcceptCompletedHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_AcceptCompletedHandler() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "AcceptCompletedHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "ReceiveCompletedHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_ReceiveCompletedHandler() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "ReceiveCompletedHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendCompletedHandler(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  ::cordl_internals::setStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "SendCompletedHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>(value));
}
inline ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* System::Net::Sockets::Socket::getStaticF_SendCompletedHandler() {
  return ::cordl_internals::getStaticField<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*, "SendCompletedHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_rentedSocketSentinel(::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*, "s_rentedSocketSentinel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>(value));
}
inline ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* System::Net::Sockets::Socket::getStaticF_s_rentedSocketSentinel() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*, "s_rentedSocketSentinel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_rentedInt32Sentinel(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* value) {
  ::cordl_internals::setStaticField<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, "s_rentedInt32Sentinel",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>(value));
}
inline ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* System::Net::Sockets::Socket::getStaticF_s_rentedInt32Sentinel() {
  return ::cordl_internals::getStaticField<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*, "s_rentedInt32Sentinel",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::getStaticF_s_zeroTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_InternalSyncObject(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Net::Sockets::Socket::getStaticF_s_InternalSyncObject() {
  return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_SupportsIPv4(bool value) {
  ::cordl_internals::setStaticField<bool, "s_SupportsIPv4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_SupportsIPv4() {
  return ::cordl_internals::getStaticField<bool, "s_SupportsIPv4", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_SupportsIPv6(bool value) {
  ::cordl_internals::setStaticField<bool, "s_SupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_SupportsIPv6() {
  return ::cordl_internals::getStaticField<bool, "s_SupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_OSSupportsIPv6(bool value) {
  ::cordl_internals::setStaticField<bool, "s_OSSupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_OSSupportsIPv6() {
  return ::cordl_internals::getStaticField<bool, "s_OSSupportsIPv6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_LoggingEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "s_LoggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_LoggingEnabled() {
  return ::cordl_internals::getStaticField<bool, "s_LoggingEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_s_PerfCountersEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "s_PerfCountersEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::Socket::getStaticF_s_PerfCountersEnabled() {
  return ::cordl_internals::getStaticField<bool, "s_PerfCountersEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_AcceptAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "AcceptAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_AcceptAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "AcceptAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginAcceptCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginAcceptCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginAcceptCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginAcceptCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginAcceptReceiveCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginAcceptReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginAcceptReceiveCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginAcceptReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ConnectAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "ConnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ConnectAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ConnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginConnectCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginConnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginConnectCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginConnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_DisconnectAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "DisconnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_DisconnectAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "DisconnectAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginDisconnectCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginDisconnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginDisconnectCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginDisconnectCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "ReceiveAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ReceiveAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ReceiveAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveGenericCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveGenericCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_ReceiveFromAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "ReceiveFromAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_ReceiveFromAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "ReceiveFromAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginReceiveFromCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginReceiveFromCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginReceiveFromCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginReceiveFromCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "SendAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_SendAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "SendAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_BeginSendGenericCallback(::System::IOAsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::IOAsyncCallback*, "BeginSendGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::IOAsyncCallback*>(value));
}
inline ::System::IOAsyncCallback* System::Net::Sockets::Socket::getStaticF_BeginSendGenericCallback() {
  return ::cordl_internals::getStaticField<::System::IOAsyncCallback*, "BeginSendGenericCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline void System::Net::Sockets::Socket::setStaticF_SendToAsyncCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "SendToAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::Sockets::Socket::getStaticF_SendToAsyncCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "SendToAsyncCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get>();
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::Socket::ReceiveAsync(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                                                   bool fromNetworkStream, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, buffer, socketFlags, fromNetworkStream, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::ReceiveAsyncApm(::System::Memory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveAsyncApm", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, socketFlags);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::Socket::SendAsyncForNetworkStream(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                                                     ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendAsyncForNetworkStream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, socketFlags, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::Socket::SendAsyncApm(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendAsyncApm", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlyMemory_1<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, socketFlags);
}
inline void System::Net::Sockets::Socket::CompleteAccept(::System::Net::Sockets::Socket* s, ::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* saea) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "CompleteAccept", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, saea);
}
inline void System::Net::Sockets::Socket::CompleteSendReceive(::System::Net::Sockets::Socket* s, ::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* saea, bool isReceive) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "CompleteSendReceive", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, s, saea, isReceive);
}
inline ::System::Exception* System::Net::Sockets::Socket::GetException(::System::Net::Sockets::SocketError error, bool wrapExceptionsInIOExceptions) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, error, wrapExceptionsInIOExceptions);
}
inline void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs* saea, bool isReceive) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReturnSocketAsyncEventArgs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_Int32TaskSocketAsyncEventArgs*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saea, isReceive);
}
inline void System::Net::Sockets::Socket::ReturnSocketAsyncEventArgs(::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>* saea) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReturnSocketAsyncEventArgs", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_TaskSocketAsyncEventArgs_1<::System::Net::Sockets::Socket*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saea);
}
inline void System::Net::Sockets::Socket::_ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType, ::System::Net::Sockets::ProtocolType protocolType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, addressFamily, socketType, protocolType);
}
inline bool System::Net::Sockets::Socket::get_OSSupportsIPv4() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_OSSupportsIPv4",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::get_OSSupportsIPv6() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_OSSupportsIPv6",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::IntPtr System::Net::Sockets::Socket::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Handle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::AddressFamily System::Net::Sockets::Socket::get_AddressFamily() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_AddressFamily",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketType System::Net::Sockets::Socket::get_SocketType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_SocketType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketType, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::ProtocolType System::Net::Sockets::Socket::get_ProtocolType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_ProtocolType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::ProtocolType, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_ExclusiveAddressUse(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_ExclusiveAddressUse",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_ReceiveBufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_ReceiveBufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_SendBufferSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_SendBufferSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_ReceiveTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_ReceiveTimeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_SendTimeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_SendTimeout",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int16_t System::Net::Sockets::Socket::get_Ttl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Ttl",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_Ttl(int16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_Ttl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::set_DontFragment(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_DontFragment",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_DualMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_DualMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_DualMode(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_DualMode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_IsDualMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_IsDualMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::Socket::CanTryAddressFamily(::System::Net::Sockets::AddressFamily family) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "CanTryAddressFamily", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, family);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags);
}
inline int32_t System::Net::Sockets::Socket::IOControl(::System::Net::Sockets::IOControlCode ioControlCode, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionInValue,
                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*> optionOutValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IOControlCode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
inline void System::Net::Sockets::Socket::SetIPProtectionLevel(::System::Net::Sockets::IPProtectionLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetIPProtectionLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::IPProtectionLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::System::Net::IPAddress* address, int32_t port, ::System::AsyncCallback* requestCallback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, address, port, requestCallback, state);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                       ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSend", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndSend(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndSend", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                          ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginReceive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceive(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::Object* System::Net::Sockets::Socket::get_InternalSyncObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_InternalSyncObject",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::get_CleanedUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_CleanedUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::InitializeSockets() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "InitializeSockets",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void System::Net::Sockets::Socket::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::InternalShutdown(::System::Net::Sockets::SocketShutdown how) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "InternalShutdown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, how);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue,
                                                          bool silent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionLevel, optionName, optionValue, silent);
}
inline void System::Net::Sockets::Socket::_ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto,
                                                ::System::Net::Sockets::SafeSocketHandle* safe_handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, family, type, proto, safe_handle);
}
inline void System::Net::Sockets::Socket::SocketDefaults() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SocketDefaults",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IntPtr System::Net::Sockets::Socket::Socket_icall(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type, ::System::Net::Sockets::ProtocolType proto,
                                                                   ::ByRef<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Socket_icall", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::AddressFamily>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::ProtocolType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, family, type, proto, error);
}
inline int32_t System::Net::Sockets::Socket::get_Available() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Available",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::Socket::Available_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Available_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, error);
}
inline int32_t System::Net::Sockets::Socket::Available_icall(::System::IntPtr socket, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Available_icall", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, socket, error);
}
inline void System::Net::Sockets::Socket::set_EnableBroadcast(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_EnableBroadcast",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::Socket::get_IsBound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_IsBound",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Net::EndPoint* System::Net::Sockets::Socket::get_LocalEndPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_LocalEndPoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*, false>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::LocalEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "LocalEndPoint_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, safeHandle, family, error);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::LocalEndPoint_icall(::System::IntPtr socket, int32_t family, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "LocalEndPoint_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, socket, family, error);
}
inline bool System::Net::Sockets::Socket::get_Blocking() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Blocking",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_Blocking(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_Blocking", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::Socket::Blocking_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, bool block, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Blocking_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, block, error);
}
inline void System::Net::Sockets::Socket::Blocking_icall(::System::IntPtr socket, bool block, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Blocking_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, block, error);
}
inline bool System::Net::Sockets::Socket::get_Connected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_Connected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::set_NoDelay(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "set_NoDelay", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::EndPoint* System::Net::Sockets::Socket::get_RemoteEndPoint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_RemoteEndPoint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::EndPoint*, false>(this, ___internal_method);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::RemoteEndPoint_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t family, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "RemoteEndPoint_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, safeHandle, family, error);
}
inline ::System::Net::SocketAddress* System::Net::Sockets::Socket::RemoteEndPoint_icall(::System::IntPtr socket, int32_t family, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "RemoteEndPoint_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::SocketAddress*, false>(nullptr, ___internal_method, socket, family, error);
}
inline bool System::Net::Sockets::Socket::Poll(int32_t microSeconds, ::System::Net::Sockets::SelectMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Poll", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, microSeconds, mode);
}
inline bool System::Net::Sockets::Socket::Poll_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Poll_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, safeHandle, mode, timeout, error);
}
inline bool System::Net::Sockets::Socket::Poll_icall(::System::IntPtr socket, ::System::Net::Sockets::SelectMode mode, int32_t timeout, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Poll_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SelectMode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, socket, mode, timeout, error);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::Accept() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Accept(::System::Net::Sockets::Socket* acceptSocket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, acceptSocket);
}
inline bool System::Net::Sockets::Socket::AcceptAsync(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "AcceptAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginAccept(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginAccept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::EndAccept(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndAccept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::EndAccept(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer, ::ByRef<int32_t> bytesTransferred,
                                                                               ::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndAccept", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method, buffer, bytesTransferred, asyncResult);
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::Socket::Accept_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SafeSocketHandle*, false>(nullptr, ___internal_method, safeHandle, error, blocking);
}
inline ::System::IntPtr System::Net::Sockets::Socket::Accept_icall(::System::IntPtr sock, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Accept_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, sock, error, blocking);
}
inline void System::Net::Sockets::Socket::Bind(::System::Net::EndPoint* localEP) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Bind", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localEP);
}
inline void System::Net::Sockets::Socket::Bind_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Bind_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, sa, error);
}
inline void System::Net::Sockets::Socket::Bind_icall(::System::IntPtr sock, ::System::Net::SocketAddress* sa, ::ByRef<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Bind_icall", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, sa, error);
}
inline void System::Net::Sockets::Socket::Listen(int32_t backlog) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Listen", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, backlog);
}
inline void System::Net::Sockets::Socket::Listen_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t backlog, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Listen_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, backlog, error);
}
inline void System::Net::Sockets::Socket::Listen_icall(::System::IntPtr sock, int32_t backlog, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Listen_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, backlog, error);
}
inline void System::Net::Sockets::Socket::Connect(::System::Net::IPAddress* address, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, address, port);
}
inline void System::Net::Sockets::Socket::Connect(::System::Net::EndPoint* remoteEP) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteEP);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::StringW host, int32_t port, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, host, port, callback, state);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginConnect(::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginConnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, remoteEP, callback, state);
}
inline bool System::Net::Sockets::Socket::BeginMConnect(::System::Net::Sockets::SocketAsyncResult* sockares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginMConnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sockares);
}
inline bool System::Net::Sockets::Socket::BeginSConnect(::System::Net::Sockets::SocketAsyncResult* sockares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSConnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sockares);
}
inline void System::Net::Sockets::Socket::EndConnect(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndConnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::Sockets::Socket::Connect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::SocketAddress* sa, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, sa, error, blocking);
}
inline void System::Net::Sockets::Socket::Connect_icall(::System::IntPtr sock, ::System::Net::SocketAddress* sa, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Connect_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, sa, error, blocking);
}
inline void System::Net::Sockets::Socket::Disconnect(bool reuseSocket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reuseSocket);
}
inline void System::Net::Sockets::Socket::EndDisconnect(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndDisconnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::Sockets::Socket::Disconnect_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, bool reuse, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Disconnect_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, reuse, error);
}
inline void System::Net::Sockets::Socket::Disconnect_icall(::System::IntPtr sock, bool reuse, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Disconnect_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sock, reuse, error);
}
inline int32_t System::Net::Sockets::Socket::Receive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                     ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                     ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags,
                                                     ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive(::System::Span_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::ReadOnlySpan_1<uint8_t> buffer, ::System::Net::Sockets::SocketFlags socketFlags, ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, socketFlags, errorCode);
}
inline bool System::Net::Sockets::Socket::ReceiveAsync(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceive(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                          ::ByRef<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginReceive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceive(::System::IAsyncResult* asyncResult, ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceive", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count,
                                                              ::System::Net::Sockets::SocketFlags flags, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_array_icall(::System::IntPtr sock, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                                 ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_array_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                              ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Receive_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Receive_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                         ::ByRef<::System::Net::EndPoint*> remoteEP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                         ::ByRef<::System::Net::EndPoint*> remoteEP, ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                         ::ByRef<::System::Net::EndPoint*> remoteEP, ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, errorCode);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginReceiveFrom(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                              ::System::Net::Sockets::SocketFlags socketFlags, ::ByRef<::System::Net::EndPoint*> remoteEP,
                                                                              ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginReceiveFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, callback, state);
}
inline int32_t System::Net::Sockets::Socket::EndReceiveFrom(::System::IAsyncResult* asyncResult, ::ByRef<::System::Net::EndPoint*> endPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceiveFrom", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::EndPoint*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult, endPoint);
}
inline int32_t System::Net::Sockets::Socket::EndReceiveFrom_internal(::System::Net::Sockets::SocketAsyncResult* sockares, ::System::Net::Sockets::SocketAsyncEventArgs* ares) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndReceiveFrom_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sockares, ares);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                                  ::ByRef<::System::Net::SocketAddress*> sockaddr, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::SocketAddress*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sockaddr, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::ReceiveFrom_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                               ::ByRef<::System::Net::SocketAddress*> sockaddr, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ReceiveFrom_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::SocketAddress*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, sockaddr, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                  ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* buffers, ::System::Net::Sockets::SocketFlags socketFlags,
                                                  ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffers, socketFlags, errorCode);
}
inline bool System::Net::Sockets::Socket::SendAsync(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSend(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                       ::ByRef<::System::Net::Sockets::SocketError> errorCode, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSend", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, errorCode, callback, state);
}
inline void System::Net::Sockets::Socket::BeginSendCallback(::System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSendCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sockares, sent_so_far);
}
inline int32_t System::Net::Sockets::Socket::EndSend(::System::IAsyncResult* asyncResult, ::ByRef<::System::Net::Sockets::SocketError> errorCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndSend", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Net::Sockets::SocketError>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult, errorCode);
}
inline int32_t System::Net::Sockets::Socket::Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count,
                                                           ::System::Net::Sockets::SocketFlags flags, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_array_icall(::System::IntPtr sock, ::System::Net::Sockets::Socket_WSABUF* bufarray, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                              ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_array_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket_WSABUF*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, bufarray, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                           ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::Send_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Send_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::SendTo(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                    ::System::Net::EndPoint* remoteEP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline int32_t System::Net::Sockets::Socket::SendTo(::System::Memory_1<uint8_t> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                    ::System::Net::EndPoint* remoteEP) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP);
}
inline ::System::IAsyncResult* System::Net::Sockets::Socket::BeginSendTo(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::Net::Sockets::SocketFlags socketFlags,
                                                                         ::System::Net::EndPoint* remoteEP, ::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSendTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, socketFlags, remoteEP, callback, state);
}
inline void System::Net::Sockets::Socket::BeginSendToCallback(::System::Net::Sockets::SocketAsyncResult* sockares, int32_t sent_so_far) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "BeginSendToCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncResult*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sockares, sent_so_far);
}
inline int32_t System::Net::Sockets::Socket::EndSendTo(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "EndSendTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline int32_t System::Net::Sockets::Socket::SendTo_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags,
                                                             ::System::Net::SocketAddress* sa, ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, buffer, count, flags, sa, error, blocking);
}
inline int32_t System::Net::Sockets::Socket::SendTo_icall(::System::IntPtr sock, uint8_t* buffer, int32_t count, ::System::Net::Sockets::SocketFlags flags, ::System::Net::SocketAddress* sa,
                                                          ::ByRef<int32_t> error, bool blocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SendTo_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::SocketAddress*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, buffer, count, flags, sa, error, blocking);
}
inline ::System::Object* System::Net::Sockets::Socket::GetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetSocketOption", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, optionLevel, optionName);
}
inline void System::Net::Sockets::Socket::GetSocketOption_obj_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level,
                                                                       ::System::Net::Sockets::SocketOptionName name, ::ByRef<::System::Object*> obj_val, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetSocketOption_obj_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, level, name, obj_val, error);
}
inline void System::Net::Sockets::Socket::GetSocketOption_obj_icall(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name,
                                                                    ::ByRef<::System::Object*> obj_val, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "GetSocketOption_obj_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Object*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, level, name, obj_val, error);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, bool optionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionLevel, optionName, optionValue);
}
inline void System::Net::Sockets::Socket::SetSocketOption(::System::Net::Sockets::SocketOptionLevel optionLevel, ::System::Net::Sockets::SocketOptionName optionName, int32_t optionValue) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, optionLevel, optionName, optionValue);
}
inline void System::Net::Sockets::Socket::SetSocketOption_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketOptionLevel level,
                                                                   ::System::Net::Sockets::SocketOptionName name, ::System::Object* obj_val, ::ArrayW<uint8_t, ::Array<uint8_t>*> byte_val,
                                                                   int32_t int_val, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, level, name, obj_val, byte_val, int_val, error);
}
inline void System::Net::Sockets::Socket::SetSocketOption_icall(::System::IntPtr socket, ::System::Net::Sockets::SocketOptionLevel level, ::System::Net::Sockets::SocketOptionName name,
                                                                ::System::Object* obj_val, ::ArrayW<uint8_t, ::Array<uint8_t>*> byte_val, int32_t int_val, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SetSocketOption_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionLevel>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOptionName>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, level, name, obj_val, byte_val, int_val, error);
}
inline int32_t System::Net::Sockets::Socket::IOControl(int32_t ioControlCode, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionInValue, ::ArrayW<uint8_t, ::Array<uint8_t>*> optionOutValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ioControlCode, optionInValue, optionOutValue);
}
inline int32_t System::Net::Sockets::Socket::IOControl_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, int32_t ioctl_code, ::ArrayW<uint8_t, ::Array<uint8_t>*> input,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, safeHandle, ioctl_code, input, output, error);
}
inline int32_t System::Net::Sockets::Socket::IOControl_icall(::System::IntPtr sock, int32_t ioctl_code, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output,
                                                             ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IOControl_icall", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sock, ioctl_code, input, output, error);
}
inline void System::Net::Sockets::Socket::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Close",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::Close(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
inline void System::Net::Sockets::Socket::Close_icall(::System::IntPtr socket, ::ByRef<int32_t> error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Close_icall", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, error);
}
inline void System::Net::Sockets::Socket::Shutdown(::System::Net::Sockets::SocketShutdown how) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Shutdown", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, how);
}
inline void System::Net::Sockets::Socket::Shutdown_internal(::System::Net::Sockets::SafeSocketHandle* safeHandle, ::System::Net::Sockets::SocketShutdown how, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Shutdown_internal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, safeHandle, how, error);
}
inline void System::Net::Sockets::Socket::Shutdown_icall(::System::IntPtr socket, ::System::Net::Sockets::SocketShutdown how, ::ByRef<int32_t> error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Shutdown_icall", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, socket, how, error);
}
inline void System::Net::Sockets::Socket::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::Socket::Linger(::System::IntPtr handle) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "Linger", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void System::Net::Sockets::Socket::ThrowIfDisposedAndClosed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfDisposedAndClosed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::Socket::ThrowIfBufferNull(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfBufferNull", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void System::Net::Sockets::Socket::ThrowIfBufferOutOfRange(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfBufferOutOfRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::Sockets::Socket::ThrowIfUdp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ThrowIfUdp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SocketAsyncResult* System::Net::Sockets::Socket::ValidateEndIAsyncResult(::System::IAsyncResult* ares, ::StringW methodName, ::StringW argName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "ValidateEndIAsyncResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketAsyncResult*, false>(this, ___internal_method, ares, methodName, argName);
}
inline void System::Net::Sockets::Socket::QueueIOSelectorJob(::System::Threading::SemaphoreSlim* sem, ::System::IntPtr handle, ::System::IOSelectorJob* job) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "QueueIOSelectorJob", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SemaphoreSlim*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IOSelectorJob*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sem, handle, job);
}
inline void System::Net::Sockets::Socket::InitSocketAsyncEventArgs(::System::Net::Sockets::SocketAsyncEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* state,
                                                                   ::System::Net::Sockets::SocketOperation operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "InitSocketAsyncEventArgs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, callback, state, operation);
}
inline ::System::Net::Sockets::SocketAsyncOperation System::Net::Sockets::Socket::SocketOperationToSocketAsyncOperation(::System::Net::Sockets::SocketOperation op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "SocketOperationToSocketAsyncOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketAsyncOperation, false>(this, ___internal_method, op);
}
inline ::System::Net::IPEndPoint* System::Net::Sockets::Socket::RemapIPEndPoint(::System::Net::IPEndPoint* input) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "RemapIPEndPoint", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method, input);
}
inline void System::Net::Sockets::Socket::cancel_blocking_socket_operation(::System::Threading::Thread* thread) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "cancel_blocking_socket_operation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Thread*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, thread);
}
inline int32_t System::Net::Sockets::Socket::get_FamilyHint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "get_FamilyHint",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline bool System::Net::Sockets::Socket::IsProtocolSupported_internal(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IsProtocolSupported_internal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, networkInterface);
}
inline bool System::Net::Sockets::Socket::IsProtocolSupported(::System::Net::NetworkInformation::NetworkInterfaceComponent networkInterface) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::Socket*>::get(), "IsProtocolSupported", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkInformation::NetworkInterfaceComponent>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, networkInterface);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::New_ctor(::System::Net::Sockets::AddressFamily addressFamily, ::System::Net::Sockets::SocketType socketType,
                                                                              ::System::Net::Sockets::ProtocolType protocolType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket*>(addressFamily, socketType, protocolType));
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::Socket::New_ctor(::System::Net::Sockets::AddressFamily family, ::System::Net::Sockets::SocketType type,
                                                                              ::System::Net::Sockets::ProtocolType proto, ::System::Net::Sockets::SafeSocketHandle* safe_handle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::Socket*>(family, type, proto, safe_handle));
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
