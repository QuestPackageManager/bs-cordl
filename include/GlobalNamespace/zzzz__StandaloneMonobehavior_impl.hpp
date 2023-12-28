#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneThreadRunner_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xe58d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe58f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandaloneMonobehavior*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::__StandaloneMonobehavior___Dispatch_d__20(int32_t __1__state,
                                                                                                                  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                  ::GlobalNamespace::StandaloneMonobehavior* __4__this, ::System::Action* action,
                                                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->action = action;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandaloneMonobehavior___Dispatch_d__20::__StandaloneMonobehavior___Dispatch_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xe58f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe591d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::StandaloneMonobehavior*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "action", ty: "::System::Func_1<::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::__StandaloneMonobehavior___DispatchAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::StandaloneMonobehavior* __4__this,
    ::System::Func_1<::System::Threading::Tasks::Task*>* action, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->action = action;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandaloneMonobehavior___DispatchAsync_d__21::__StandaloneMonobehavior___DispatchAsync_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)(int32_t)>(
    &::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe58cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe591e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xe591e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5935c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe59364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::*)()>(
    &::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe593a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StandaloneMonobehavior*& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandaloneMonobehavior*> const& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set___4__this(::GlobalNamespace::StandaloneMonobehavior* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationToken& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get_cancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get_cancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancellationToken;
}
constexpr void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set_cancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancellationToken = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25* GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>(__1__state));
}
inline void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandaloneMonobehavior___RunAsyncCoroutine_d__25::__StandaloneMonobehavior___RunAsyncCoroutine_d__25() {}
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.get_objectLifeTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandaloneMonobehavior::*)()>(
    &::GlobalNamespace::StandaloneMonobehavior::get_objectLifeTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe588a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                               "get_objectLifeTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.get_deltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandaloneMonobehavior::*)()>(
    &::GlobalNamespace::StandaloneMonobehavior::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe588c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                               "get_deltaTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.get_lastFrameTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandaloneMonobehavior::*)()>(
    &::GlobalNamespace::StandaloneMonobehavior::get_lastFrameTime)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe588cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                               "get_lastFrameTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.get_frameCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::StandaloneMonobehavior::*)()>(
    &::GlobalNamespace::StandaloneMonobehavior::get_frameCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4ad1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                               "get_frameCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.get_isReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::get_isReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe58940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "get_isReady",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe58990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe589ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe589b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe589b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)(bool)>(
    &::GlobalNamespace::StandaloneMonobehavior::OnApplicationPause)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe589b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)(::System::Action*)>(
    &::GlobalNamespace::StandaloneMonobehavior::Dispatch)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe589bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Dispatch", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.DispatchAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandaloneMonobehavior::*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::StandaloneMonobehavior::DispatchAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xe58a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "DispatchAsync", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.RunAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::StandaloneMonobehavior::*)(::GlobalNamespace::IStandaloneThreadRunner*, ::System::Threading::CancellationToken)>(&::GlobalNamespace::StandaloneMonobehavior::RunAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xe58b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "RunAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneThreadRunner*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::Stop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe58cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Stop",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.RunAsyncCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::StandaloneMonobehavior::*)(::System::Threading::Tasks::TaskCompletionSource_1<bool>*, ::System::Threading::CancellationToken)>(
        &::GlobalNamespace::StandaloneMonobehavior::RunAsyncCoroutine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xe58c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "RunAsyncCoroutine", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior.GetLastFrameTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::StandaloneMonobehavior::*)()>(
    &::GlobalNamespace::StandaloneMonobehavior::GetLastFrameTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe588d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                               "GetLastFrameTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehavior._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandaloneMonobehavior::*)()>(&::GlobalNamespace::StandaloneMonobehavior::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe4cbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IStandaloneMonobehavior"
constexpr GlobalNamespace::StandaloneMonobehavior::operator ::GlobalNamespace::IStandaloneMonobehavior*() noexcept {
  return static_cast<::GlobalNamespace::IStandaloneMonobehavior*>(static_cast<void*>(this));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::StandaloneMonobehavior::__get__readyTcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyTcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const& GlobalNamespace::StandaloneMonobehavior::__get__readyTcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readyTcs;
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__readyTcs(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readyTcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::StandaloneMonobehavior::__get__isRunning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRunning;
}
constexpr bool const& GlobalNamespace::StandaloneMonobehavior::__get__isRunning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isRunning;
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__isRunning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isRunning = value;
}
constexpr float_t& GlobalNamespace::StandaloneMonobehavior::__get__startTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr float_t const& GlobalNamespace::StandaloneMonobehavior::__get__startTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTime;
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__startTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTime = value;
}
constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>& GlobalNamespace::StandaloneMonobehavior::__get__lastFrameTimings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameTimings;
}
constexpr ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> const& GlobalNamespace::StandaloneMonobehavior::__get__lastFrameTimings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameTimings;
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__lastFrameTimings(::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastFrameTimings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::StandaloneMonobehavior::__get__lastFrameTimeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameTimeCount;
}
constexpr int32_t const& GlobalNamespace::StandaloneMonobehavior::__get__lastFrameTimeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastFrameTimeCount;
}
constexpr void GlobalNamespace::StandaloneMonobehavior::__set__lastFrameTimeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastFrameTimeCount = value;
}
inline float_t GlobalNamespace::StandaloneMonobehavior::get_objectLifeTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                             "get_objectLifeTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandaloneMonobehavior::get_deltaTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "get_deltaTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::StandaloneMonobehavior::get_lastFrameTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                             "get_lastFrameTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::StandaloneMonobehavior::get_frameCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                             "get_frameCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::StandaloneMonobehavior::get_isReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "get_isReady",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneMonobehavior::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneMonobehavior::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneMonobehavior::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneMonobehavior::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandaloneMonobehavior::OnApplicationPause(bool pauseStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "OnApplicationPause",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::StandaloneMonobehavior::Dispatch(::System::Action* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Dispatch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandaloneMonobehavior::DispatchAsync(::System::Func_1<::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "DispatchAsync", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, action);
}
template <typename T> inline T GlobalNamespace::StandaloneMonobehavior::Create() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Create",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandaloneMonobehavior::RunAsync(::GlobalNamespace::IStandaloneThreadRunner* runner,
                                                                                           ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "RunAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneThreadRunner*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, runner, cancellationToken);
}
inline void GlobalNamespace::StandaloneMonobehavior::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "Stop",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::StandaloneMonobehavior::RunAsyncCoroutine(::System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs,
                                                                                                      ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), "RunAsyncCoroutine", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, tcs, cancellationToken);
}
inline float_t GlobalNamespace::StandaloneMonobehavior::GetLastFrameTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(),
                                                                             "GetLastFrameTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandaloneMonobehavior* GlobalNamespace::StandaloneMonobehavior::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandaloneMonobehavior*>());
}
inline void GlobalNamespace::StandaloneMonobehavior::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehavior*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneMonobehavior::StandaloneMonobehavior() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
