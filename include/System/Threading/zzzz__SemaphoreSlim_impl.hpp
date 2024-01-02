#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Threading/zzzz__SemaphoreSlim_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__ThreadAbortException_def.hpp"
#include "System/Threading/zzzz__IThreadPoolWorkItem_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim__TaskNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim__TaskNode::*)()>(&::System::Threading::__SemaphoreSlim__TaskNode::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2614edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim__TaskNode.System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim__TaskNode::*)()>(
    &::System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x26155fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                                                 "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim__TaskNode.System_Threading_IThreadPoolWorkItem_MarkAborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim__TaskNode::*)(::System::Threading::ThreadAbortException*)>(
    &::System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2615648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr System::Threading::__SemaphoreSlim__TaskNode::operator ::System::Threading::IThreadPoolWorkItem*() noexcept {
  return static_cast<::System::Threading::IThreadPoolWorkItem*>(static_cast<void*>(this));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& System::Threading::__SemaphoreSlim__TaskNode::__get_Prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& System::Threading::__SemaphoreSlim__TaskNode::__get_Prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Prev;
}
constexpr void System::Threading::__SemaphoreSlim__TaskNode::__set_Prev(::System::Threading::__SemaphoreSlim__TaskNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& System::Threading::__SemaphoreSlim__TaskNode::__get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& System::Threading::__SemaphoreSlim__TaskNode::__get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void System::Threading::__SemaphoreSlim__TaskNode::__set_Next(::System::Threading::__SemaphoreSlim__TaskNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::__SemaphoreSlim__TaskNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__SemaphoreSlim__TaskNode*>());
}
inline void System::Threading::__SemaphoreSlim__TaskNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                                                                             "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::__SemaphoreSlim__TaskNode::System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim__TaskNode*>::get(), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ThreadAbortException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tae);
}
// Ctor Parameters []
constexpr ::System::Threading::__SemaphoreSlim__TaskNode::__SemaphoreSlim__TaskNode() {}
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::*)()>(
    &::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x76c;
  constexpr static std::size_t addrs = 0x261564c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2615db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncWaiter", ty: "::System::Threading::__SemaphoreSlim__TaskNode*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "millisecondsTimeout", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::System::Threading::CancellationToken cancellationToken,
    ::System::Threading::__SemaphoreSlim__TaskNode* asyncWaiter, int32_t millisecondsTimeout, ::System::Threading::SemaphoreSlim* __4__this, ::System::Threading::CancellationTokenSource* _cts_5__2,
    ::System::Object* __7__wrap2, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*> __u__1,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->cancellationToken = cancellationToken;
  this->asyncWaiter = asyncWaiter;
  this->millisecondsTimeout = millisecondsTimeout;
  this->__4__this = __4__this;
  this->_cts_5__2 = _cts_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::System::Threading::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32::__SemaphoreSlim___WaitUntilCountOrTimeoutAsync_d__32() {}
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.get_CurrentCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::get_CurrentCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2614218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "get_CurrentCount",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(int32_t, int32_t)>(&::System::Threading::SemaphoreSlim::_ctor)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2614238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26143d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Wait",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26148b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Wait", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Wait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t, ::System::Threading::CancellationToken)>(
    &::System::Threading::SemaphoreSlim::Wait)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x26143e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Wait", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitUntilCountOrTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(int32_t, uint32_t, ::System::Threading::CancellationToken)>(
    &::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2614c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitUntilCountOrTimeout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::SemaphoreSlim::*)()>(
    &::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2614d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitAsync",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Threading::SemaphoreSlim::*)(::System::Threading::CancellationToken)>(
    &::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2614d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Threading::SemaphoreSlim::*)(int32_t, ::System::Threading::CancellationToken)>(&::System::Threading::SemaphoreSlim::WaitAsync)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2614944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CreateAndAddAsyncWaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::__SemaphoreSlim__TaskNode* (::System::Threading::SemaphoreSlim::*)()>(
    &::System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2614d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                                                                               "CreateAndAddAsyncWaiter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.RemoveAsyncWaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SemaphoreSlim::*)(::System::Threading::__SemaphoreSlim__TaskNode*)>(
    &::System::Threading::SemaphoreSlim::RemoveAsyncWaiter)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2614f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "RemoveAsyncWaiter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.WaitUntilCountOrTimeoutAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::System::Threading::SemaphoreSlim::*)(::System::Threading::__SemaphoreSlim__TaskNode*, int32_t, ::System::Threading::CancellationToken)>(
        &::System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2614db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitUntilCountOrTimeoutAsync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Release)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2614fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Release",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SemaphoreSlim::*)(int32_t)>(&::System::Threading::SemaphoreSlim::Release)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x2614fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Release", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.QueueWaiterTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::__SemaphoreSlim__TaskNode*)>(&::System::Threading::SemaphoreSlim::QueueWaiterTask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x26152e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "QueueWaiterTask", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x26152f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)(bool)>(&::System::Threading::SemaphoreSlim::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2615360;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CancellationTokenCanceledEventHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x26153bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "CancellationTokenCanceledEventHandler",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.CheckDispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SemaphoreSlim::*)()>(&::System::Threading::SemaphoreSlim::CheckDispose)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x26148c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "CheckDispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SemaphoreSlim.GetResourceString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Threading::SemaphoreSlim::GetResourceString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26143cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "GetResourceString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::SemaphoreSlim::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& System::Threading::SemaphoreSlim::__get_m_currentCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentCount;
}
constexpr int32_t const& System::Threading::SemaphoreSlim::__get_m_currentCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_currentCount;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_currentCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_currentCount = value;
}
constexpr int32_t& System::Threading::SemaphoreSlim::__get_m_maxCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCount;
}
constexpr int32_t const& System::Threading::SemaphoreSlim::__get_m_maxCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_maxCount;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_maxCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_maxCount = value;
}
constexpr int32_t& System::Threading::SemaphoreSlim::__get_m_waitCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_waitCount;
}
constexpr int32_t const& System::Threading::SemaphoreSlim::__get_m_waitCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_waitCount;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_waitCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_waitCount = value;
}
constexpr ::System::Object*& System::Threading::SemaphoreSlim::__get_m_lockObj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lockObj;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::SemaphoreSlim::__get_m_lockObj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_lockObj;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_lockObj(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_lockObj)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ManualResetEvent*& System::Threading::SemaphoreSlim::__get_m_waitHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_waitHandle;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& System::Threading::SemaphoreSlim::__get_m_waitHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_waitHandle;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_waitHandle(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_waitHandle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& System::Threading::SemaphoreSlim::__get_m_asyncHead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_asyncHead;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& System::Threading::SemaphoreSlim::__get_m_asyncHead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_asyncHead;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_asyncHead(::System::Threading::__SemaphoreSlim__TaskNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_asyncHead)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::__SemaphoreSlim__TaskNode*& System::Threading::SemaphoreSlim::__get_m_asyncTail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_asyncTail;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::__SemaphoreSlim__TaskNode*> const& System::Threading::SemaphoreSlim::__get_m_asyncTail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_asyncTail;
}
constexpr void System::Threading::SemaphoreSlim::__set_m_asyncTail(::System::Threading::__SemaphoreSlim__TaskNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_asyncTail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::SemaphoreSlim::setStaticF_s_trueTask(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_trueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>(
      std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::getStaticF_s_trueTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_trueTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>();
}
inline void System::Threading::SemaphoreSlim::setStaticF_s_falseTask(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_falseTask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>(
      std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::getStaticF_s_falseTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "s_falseTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>();
}
inline void System::Threading::SemaphoreSlim::setStaticF_s_cancellationTokenCanceledEventHandler(::System::Action_1<::System::Object*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "s_cancellationTokenCanceledEventHandler",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
inline ::System::Action_1<::System::Object*>* System::Threading::SemaphoreSlim::getStaticF_s_cancellationTokenCanceledEventHandler() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "s_cancellationTokenCanceledEventHandler",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get>();
}
inline int32_t System::Threading::SemaphoreSlim::get_CurrentCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "get_CurrentCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Threading::SemaphoreSlim* System::Threading::SemaphoreSlim::New_ctor(int32_t initialCount) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SemaphoreSlim*>(initialCount));
}
inline void System::Threading::SemaphoreSlim::_ctor(int32_t initialCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialCount);
}
inline ::System::Threading::SemaphoreSlim* System::Threading::SemaphoreSlim::New_ctor(int32_t initialCount, int32_t maxCount) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::SemaphoreSlim*>(initialCount, maxCount));
}
inline void System::Threading::SemaphoreSlim::_ctor(int32_t initialCount, int32_t maxCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialCount, maxCount);
}
inline void System::Threading::SemaphoreSlim::Wait() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Wait",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::SemaphoreSlim::Wait(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Wait", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::SemaphoreSlim::Wait(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Wait", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline bool System::Threading::SemaphoreSlim::WaitUntilCountOrTimeout(int32_t millisecondsTimeout, uint32_t startTime, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitUntilCountOrTimeout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout, startTime, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Threading::SemaphoreSlim::WaitAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitAsync",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Threading::SemaphoreSlim::WaitAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::WaitAsync(int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, millisecondsTimeout, cancellationToken);
}
inline ::System::Threading::__SemaphoreSlim__TaskNode* System::Threading::SemaphoreSlim::CreateAndAddAsyncWaiter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(),
                                                                             "CreateAndAddAsyncWaiter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::__SemaphoreSlim__TaskNode*, false>(this, ___internal_method);
}
inline bool System::Threading::SemaphoreSlim::RemoveAsyncWaiter(::System::Threading::__SemaphoreSlim__TaskNode* task) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "RemoveAsyncWaiter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, task);
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Threading::SemaphoreSlim::WaitUntilCountOrTimeoutAsync(::System::Threading::__SemaphoreSlim__TaskNode* asyncWaiter,
                                                                                                                int32_t millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "WaitUntilCountOrTimeoutAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, asyncWaiter, millisecondsTimeout, cancellationToken);
}
inline int32_t System::Threading::SemaphoreSlim::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Threading::SemaphoreSlim::Release(int32_t releaseCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Release", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, releaseCount);
}
inline void System::Threading::SemaphoreSlim::QueueWaiterTask(::System::Threading::__SemaphoreSlim__TaskNode* waiterTask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "QueueWaiterTask", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::__SemaphoreSlim__TaskNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, waiterTask);
}
inline void System::Threading::SemaphoreSlim::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::SemaphoreSlim::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Threading::SemaphoreSlim::CancellationTokenCanceledEventHandler(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "CancellationTokenCanceledEventHandler",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
inline void System::Threading::SemaphoreSlim::CheckDispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "CheckDispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Threading::SemaphoreSlim::GetResourceString(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SemaphoreSlim*>::get(), "GetResourceString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
// Ctor Parameters []
constexpr ::System::Threading::SemaphoreSlim::SemaphoreSlim() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
