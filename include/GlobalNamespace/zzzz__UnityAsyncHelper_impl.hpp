#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UnityAsyncHelper_def.hpp"
#include "GlobalNamespace/zzzz__UnityAsyncHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Func_5_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::*)()>(
    &::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x1085c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1085e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncTask", ty: "::System::Func_1<::System::Threading::Tasks::Task*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::__UnityAsyncHelper___InvokeSafe_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                        ::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask,
                                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->asyncTask = asyncTask;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__0::__UnityAsyncHelper___InvokeSafe_d__0() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A> constexpr GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename A> inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A> inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncTask", ty: "::System::Func_2<A,::System::Threading::Tasks::Task*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename A>
constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>::__UnityAsyncHelper___InvokeSafe_d__1_1(int32_t __1__state,
                                                                                                               ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                               ::System::Func_2<A, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter,
                                                                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->asyncTask = asyncTask;
  this->firstParameter = firstParameter;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename A> constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__1_1<A>::__UnityAsyncHelper___InvokeSafe_d__1_1() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A, typename B> constexpr GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A, typename B>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename A, typename B> inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B> inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncTask", ty: "::System::Func_3<A,B,::System::Threading::Tasks::Task*>*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "secondParameter", ty: "B", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename A, typename B>
constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>::__UnityAsyncHelper___InvokeSafe_d__2_2(int32_t __1__state,
                                                                                                                  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                  ::System::Func_3<A, B, ::System::Threading::Tasks::Task*>* asyncTask,
                                                                                                                  A firstParameter, B secondParameter,
                                                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->asyncTask = asyncTask;
  this->firstParameter = firstParameter;
  this->secondParameter = secondParameter;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename A, typename B> constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__2_2<A, B>::__UnityAsyncHelper___InvokeSafe_d__2_2() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A, typename B, typename C> constexpr GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A, typename B, typename C>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename A, typename B, typename C> inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C>
inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncTask", ty:
// "::System::Func_4<A,B,C,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "secondParameter", ty: "B", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "thirdParameter", ty: "C", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename A, typename B, typename C>
constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>::__UnityAsyncHelper___InvokeSafe_d__3_3(int32_t __1__state,
                                                                                                                     ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                     ::System::Func_4<A, B, C, ::System::Threading::Tasks::Task*>* asyncTask,
                                                                                                                     A firstParameter, B secondParameter, C thirdParameter,
                                                                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->asyncTask = asyncTask;
  this->firstParameter = firstParameter;
  this->secondParameter = secondParameter;
  this->thirdParameter = thirdParameter;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename A, typename B, typename C> constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__3_3<A, B, C>::__UnityAsyncHelper___InvokeSafe_d__3_3() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A, typename B, typename C, typename D>
constexpr GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename A, typename B, typename C, typename D>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename A, typename B, typename C, typename D> inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename A, typename B, typename C, typename D>
inline void GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "asyncTask", ty:
// "::System::Func_5<A,B,C,D,::System::Threading::Tasks::Task*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "firstParameter", ty: "A", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "secondParameter", ty: "B", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "thirdParameter", ty: "C", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "fourthParameter", ty: "D", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename A, typename B, typename C, typename D>
constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>::__UnityAsyncHelper___InvokeSafe_d__4_4(int32_t __1__state,
                                                                                                                        ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                        ::System::Func_5<A, B, C, D, ::System::Threading::Tasks::Task*>* asyncTask,
                                                                                                                        A firstParameter, B secondParameter, C thirdParameter, D fourthParameter,
                                                                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->asyncTask = asyncTask;
  this->firstParameter = firstParameter;
  this->secondParameter = secondParameter;
  this->thirdParameter = thirdParameter;
  this->fourthParameter = fourthParameter;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename A, typename B, typename C, typename D> constexpr ::GlobalNamespace::__UnityAsyncHelper___InvokeSafe_d__4_4<A, B, C, D>::__UnityAsyncHelper___InvokeSafe_d__4_4() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::*)(
    int32_t)>(&::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1085e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::*)()>(
        &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1085e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
        "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::*)()>(
        &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::MoveNext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1085e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::*)()>(
        &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1085f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
        "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::*)()>(
        &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1085f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
        "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::*)()>(
        &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1085f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
        "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator*
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*&
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*> const&
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::__cordl_internal_set___4__this(
    ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>(__1__state));
}
inline void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
      "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object*
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
      "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
      "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d*>::get(),
      "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d::
    __UnityAsyncHelper____c__DisplayClass5_0____WaitUntilAsync_g__WaitUntilPredicateTrue_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1085b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0._WaitUntilAsync_g__WaitUntilPredicateTrue_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::*)()>(
    &::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::_WaitUntilAsync_g__WaitUntilPredicateTrue_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1085ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*>::get(),
                                                 "<WaitUntilAsync>g__WaitUntilPredicateTrue|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__cordl_internal_get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__cordl_internal_get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___predicate;
}
constexpr void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__cordl_internal_set_predicate(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*& GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__cordl_internal_get_tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<int32_t>*> const&
GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__cordl_internal_get_tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tcs;
}
constexpr void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tcs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0* GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*>());
}
inline void GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::_WaitUntilAsync_g__WaitUntilPredicateTrue_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0*>::get(),
                                               "<WaitUntilAsync>g__WaitUntilPredicateTrue|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__UnityAsyncHelper____c__DisplayClass5_0::__UnityAsyncHelper____c__DisplayClass5_0() {}
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncHelper.InvokeSafe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<::System::Threading::Tasks::Task*>*)>(&::GlobalNamespace::UnityAsyncHelper::InvokeSafe)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1085a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "InvokeSafe", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncHelper.WaitUntilAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::UnityEngine::MonoBehaviour*, ::System::Func_1<bool>*)>(
    &::GlobalNamespace::UnityAsyncHelper::WaitUntilAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1085ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "WaitUntilAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityAsyncHelper::InvokeSafe(::System::Func_1<::System::Threading::Tasks::Task*>* asyncTask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "InvokeSafe", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask);
}
template <typename A> inline void GlobalNamespace::UnityAsyncHelper::InvokeSafe(::System::Func_2<A, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "InvokeSafe",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<A, ::System::Threading::Tasks::Task*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask, firstParameter);
}
template <typename A, typename B> inline void GlobalNamespace::UnityAsyncHelper::InvokeSafe(::System::Func_3<A, B, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "InvokeSafe",
      std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<A, B, ::System::Threading::Tasks::Task*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask, firstParameter, secondParameter);
}
template <typename A, typename B, typename C>
inline void GlobalNamespace::UnityAsyncHelper::InvokeSafe(::System::Func_4<A, B, C, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter, C thirdParameter) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "InvokeSafe",
                                  std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<A, B, C, ::System::Threading::Tasks::Task*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::array<Il2CppClass const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                                                  ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask, firstParameter, secondParameter, thirdParameter);
}
template <typename A, typename B, typename C, typename D>
inline void GlobalNamespace::UnityAsyncHelper::InvokeSafe(::System::Func_5<A, B, C, D, ::System::Threading::Tasks::Task*>* asyncTask, A firstParameter, B secondParameter, C thirdParameter,
                                                          D fourthParameter) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "InvokeSafe",
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get() },
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_5<A, B, C, D, ::System::Threading::Tasks::Task*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<B>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<D>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::array<Il2CppClass const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<A>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<B>::get(),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<C>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<D>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncTask, firstParameter, secondParameter, thirdParameter, fourthParameter);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::UnityAsyncHelper::WaitUntilAsync(::UnityEngine::MonoBehaviour* coroutineStarter, ::System::Func_1<bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::UnityAsyncHelper*>::get(), "WaitUntilAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::MonoBehaviour*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, coroutineStarter, predicate);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityAsyncHelper::UnityAsyncHelper() {}
