#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "HMUI/zzzz__ScreenSystem_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass39_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass39_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bbf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass39_0._PresentFlowCoordinator_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass39_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass39_0::_PresentFlowCoordinator_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21bd6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>::get(),
                                                                               "<PresentFlowCoordinator>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass39_0._PresentFlowCoordinator_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass39_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass39_0::_PresentFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21bd720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>::get(),
                                                                               "<PresentFlowCoordinator>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_get_flowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_get_flowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass39_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass39_0* HMUI::__FlowCoordinator____c__DisplayClass39_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass39_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass39_0::_PresentFlowCoordinator_b__1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>::get(),
                                                                             "<PresentFlowCoordinator>b__1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass39_0::_PresentFlowCoordinator_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass39_0*>::get(),
                                                                             "<PresentFlowCoordinator>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass39_0::__FlowCoordinator____c__DisplayClass39_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass40_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bc51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass40_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass40_0._DismissFlowCoordinator_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass40_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass40_0::_DismissFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x21bd798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass40_0*>::get(),
                                                                               "<DismissFlowCoordinator>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_flowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_get_flowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass40_0::__cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass40_0* HMUI::__FlowCoordinator____c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass40_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass40_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass40_0::_DismissFlowCoordinator_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass40_0*>::get(),
                                                                             "<DismissFlowCoordinator>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass40_0::__FlowCoordinator____c__DisplayClass40_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::*)()>(
    &::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x21bd834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21bdb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::HMUI::FlowCoordinator> __4__this, bool immediately,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->immediately = immediately;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41::__FlowCoordinator___DismissChildFlowCoordinatorsRecursively_d__41() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::*)()>(
    &::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x21bdb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21bdcfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::__FlowCoordinator___DismissChildViewControllersRecursively_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::HMUI::FlowCoordinator> __4__this, bool immediately,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->immediately = immediately;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator___DismissChildViewControllersRecursively_d__42::__FlowCoordinator___DismissChildViewControllersRecursively_d__42() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass43_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass43_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bc9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass43_0._ReplaceChildFlowCoordinator_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass43_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass43_0::_ReplaceChildFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21bdd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(), "<ReplaceChildFlowCoordinator>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get_flowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get_flowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get_flowCoordinatorToReplace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinatorToReplace;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_get_flowCoordinatorToReplace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinatorToReplace;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass43_0::__cordl_internal_set_flowCoordinatorToReplace(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___flowCoordinatorToReplace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass43_0* HMUI::__FlowCoordinator____c__DisplayClass43_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass43_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass43_0::_ReplaceChildFlowCoordinator_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass43_0*>::get(), "<ReplaceChildFlowCoordinator>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass43_0::__FlowCoordinator____c__DisplayClass43_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass44_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass44_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bc9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass44_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass44_0._PresentViewController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass44_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass44_0::_PresentViewController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21bdda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass44_0*>::get(),
                                                                               "<PresentViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get_topViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_get_topViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topViewController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass44_0::__cordl_internal_set_topViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___topViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass44_0* HMUI::__FlowCoordinator____c__DisplayClass44_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass44_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass44_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass44_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass44_0::_PresentViewController_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass44_0*>::get(),
                                                                             "<PresentViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass44_0::__FlowCoordinator____c__DisplayClass44_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass45_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bcc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass45_0._DismissViewController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass45_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass45_0::_DismissViewController_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x21bde28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                                                                               "<DismissViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_newTopViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newTopViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_newTopViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newTopViewController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_set_newTopViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___newTopViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const&
HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_get_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass45_0::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass45_0* HMUI::__FlowCoordinator____c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass45_0::_DismissViewController_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass45_0*>::get(),
                                                                             "<DismissViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass45_0::__FlowCoordinator____c__DisplayClass45_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass47_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bcd20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass47_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass47_0._ReplaceTopViewController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass47_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass47_0::_ReplaceTopViewController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21bdee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass47_0*>::get(),
                                                                               "<ReplaceTopViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HMUI::__ViewController__AnimationType& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get_animationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationType;
}
constexpr ::HMUI::__ViewController__AnimationType const& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get_animationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationType;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_set_animationType(::HMUI::__ViewController__AnimationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationType = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get_originalTopViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalTopViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_get_originalTopViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalTopViewController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass47_0::__cordl_internal_set_originalTopViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalTopViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass47_0* HMUI::__FlowCoordinator____c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass47_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass47_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass47_0::_ReplaceTopViewController_b__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass47_0*>::get(),
                                                                             "<ReplaceTopViewController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass47_0::__FlowCoordinator____c__DisplayClass47_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass48_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass48_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bce58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass48_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass48_0._PushViewControllerToNavigationController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass48_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass48_0::_PushViewControllerToNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21bdf64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass48_0*>::get(),
                                                 "<PushViewControllerToNavigationController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass48_0::__cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass48_0* HMUI::__FlowCoordinator____c__DisplayClass48_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass48_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass48_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass48_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass48_0::_PushViewControllerToNavigationController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass48_0*>::get(),
                                               "<PushViewControllerToNavigationController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass48_0::__FlowCoordinator____c__DisplayClass48_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass51_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass51_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bcfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass51_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass51_0._PopViewControllerFromNavigationController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass51_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass51_0::_PopViewControllerFromNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21bdfe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass51_0*>::get(),
                                                 "<PopViewControllerFromNavigationController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::NavigationController>& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get_navigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr ::UnityW<::HMUI::NavigationController> const& HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_get_navigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass51_0::__cordl_internal_set_navigationController(::UnityW<::HMUI::NavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___navigationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass51_0* HMUI::__FlowCoordinator____c__DisplayClass51_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass51_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass51_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass51_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass51_0::_PopViewControllerFromNavigationController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass51_0*>::get(),
                                               "<PopViewControllerFromNavigationController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass51_0::__FlowCoordinator____c__DisplayClass51_0() {}
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass52_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass52_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bd0f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass52_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__FlowCoordinator____c__DisplayClass52_0._PopViewControllersFromNavigationController_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__FlowCoordinator____c__DisplayClass52_0::*)()>(
    &::HMUI::__FlowCoordinator____c__DisplayClass52_0::_PopViewControllersFromNavigationController_b__0)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x21be064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass52_0*>::get(),
                                                 "<PopViewControllersFromNavigationController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___finishedCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::NavigationController>& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get_navigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr ::UnityW<::HMUI::NavigationController> const& HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_get_navigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr void HMUI::__FlowCoordinator____c__DisplayClass52_0::__cordl_internal_set_navigationController(::UnityW<::HMUI::NavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___navigationController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__FlowCoordinator____c__DisplayClass52_0* HMUI::__FlowCoordinator____c__DisplayClass52_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__FlowCoordinator____c__DisplayClass52_0*>());
}
inline void HMUI::__FlowCoordinator____c__DisplayClass52_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass52_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__FlowCoordinator____c__DisplayClass52_0::_PopViewControllersFromNavigationController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__FlowCoordinator____c__DisplayClass52_0*>::get(),
                                               "<PopViewControllersFromNavigationController>b__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__FlowCoordinator____c__DisplayClass52_0::__FlowCoordinator____c__DisplayClass52_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_topViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_topViewController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21bb040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_topViewController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_rightScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::FlowCoordinator::*)()>(
    &::HMUI::FlowCoordinator::get_rightScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_rightScreenViewController",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_childFlowCoordinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::FlowCoordinator> (::HMUI::FlowCoordinator::*)()>(
    &::HMUI::FlowCoordinator::get_childFlowCoordinator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_childFlowCoordinator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_isActivated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_isActivated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_isInTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_isInTransition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_title
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb0d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_title",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::StringW, ::HMUI::__ViewController__AnimationType)>(
    &::HMUI::FlowCoordinator::SetTitle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21bb0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetTitle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.set_showBackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::set_showBackButton)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21bb240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "set_showBackButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_showBackButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_showBackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bb24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_showBackButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__StartOnScreenSystem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ScreenSystem*)>(&::HMUI::FlowCoordinator::__StartOnScreenSystem)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21bb254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "__StartOnScreenSystem", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ScreenSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentFlowCoordinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(
    ::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::__ViewController__AnimationDirection, bool, bool)>(&::HMUI::FlowCoordinator::PresentFlowCoordinator)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x21bbb7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PresentFlowCoordinator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissFlowCoordinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::HMUI::__ViewController__AnimationDirection, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::DismissFlowCoordinator)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x21bc210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissFlowCoordinator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissChildFlowCoordinatorsRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(bool)>(
    &::HMUI::FlowCoordinator::DismissChildFlowCoordinatorsRecursively)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21bc544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissChildFlowCoordinatorsRecursively",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissChildViewControllersRecursively
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(bool)>(
    &::HMUI::FlowCoordinator::DismissChildViewControllersRecursively)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21bc620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissChildViewControllersRecursively",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceChildFlowCoordinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(
    ::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::__ViewController__AnimationDirection, bool)>(&::HMUI::FlowCoordinator::ReplaceChildFlowCoordinator)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x21bc6fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ReplaceChildFlowCoordinator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::__ViewController__AnimationDirection, bool)>(&::HMUI::FlowCoordinator::PresentViewController)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x21bb7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PresentViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationDirection, ::System::Action*, bool)>(&::HMUI::FlowCoordinator::DismissViewController)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x21bca04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceTopViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(
    ::HMUI::ViewController*, ::System::Action*, ::HMUI::__ViewController__AnimationType, ::HMUI::__ViewController__AnimationDirection)>(&::HMUI::FlowCoordinator::ReplaceTopViewController)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21bcc44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ReplaceTopViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceTopViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::FlowCoordinator*, ::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::__ViewController__AnimationType, ::HMUI::__ViewController__AnimationDirection)>(
    &::HMUI::FlowCoordinator::ReplaceTopViewController)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x21bbff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ReplaceTopViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PushViewControllerToNavigationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::HMUI::ViewController*, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::PushViewControllerToNavigationController)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21bcd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PushViewControllerToNavigationController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetViewControllersToNavigationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(
    ::HMUI::NavigationController*, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>)>(&::HMUI::FlowCoordinator::SetViewControllersToNavigationController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21bce60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetViewControllersToNavigationController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetViewControllerToNavigationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::HMUI::ViewController*)>(
    &::HMUI::FlowCoordinator::SetViewControllerToNavigationController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21bce78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetViewControllerToNavigationController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PopViewControllerFromNavigationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::PopViewControllerFromNavigationController)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21bce90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PopViewControllerFromNavigationController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PopViewControllersFromNavigationController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, int32_t, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::PopViewControllersFromNavigationController)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21bcfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PopViewControllersFromNavigationController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetLeftScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(
    &::HMUI::FlowCoordinator::SetLeftScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21bb470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetLeftScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetRightScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(
    &::HMUI::FlowCoordinator::SetRightScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21bb548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetRightScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetBottomScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(
    &::HMUI::FlowCoordinator::SetBottomScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21bb620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetBottomScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetTopScreenViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(
    &::HMUI::FlowCoordinator::SetTopScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x21bb6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetTopScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentTitle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::StringW, ::HMUI::__ViewController__AnimationType)>(
    &::HMUI::FlowCoordinator::PresentTitle)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x21bb1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PresentTitle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.IsFlowCoordinatorInHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*)>(
    &::HMUI::FlowCoordinator::IsFlowCoordinatorInHierarchy)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21bb130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "IsFlowCoordinatorInHierarchy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.YoungestChildFlowCoordinatorOrSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::FlowCoordinator> (::HMUI::FlowCoordinator::*)()>(
    &::HMUI::FlowCoordinator::YoungestChildFlowCoordinatorOrSelf)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21bd0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "YoungestChildFlowCoordinatorOrSelf",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ProvideInitialViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::ProvideInitialViewControllers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21bd174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ProvideInitialViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool, bool)>(&::HMUI::FlowCoordinator::Activate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21bb3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "Activate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Deactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool)>(&::HMUI::FlowCoordinator::Deactivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x21bbf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "Deactivate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__ExternalActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::__ExternalActivate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x21bd18c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "__ExternalActivate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__ExternalDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::__ExternalDeactivate)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x21bd384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "__ExternalDeactivate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.HandleScreenSystemBackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::HandleScreenSystemBackButtonWasPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21bd58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "HandleScreenSystemBackButtonWasPressed",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetGlobalUserInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::SetGlobalUserInteraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21bc524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetGlobalUserInteraction",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool, bool)>(&::HMUI::FlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool)>(&::HMUI::FlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21bd5b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TransitionDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21bd5b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TransitionDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21bd5c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::HMUI::FlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21bd5c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.InitialViewControllerWasPresented
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21bd5cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21bd5d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::HMUI::FlowCoordinator::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21bd5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21bd62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule>& HMUI::FlowCoordinator::__cordl_internal_get__baseInputModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseInputModule;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule> const& HMUI::FlowCoordinator::__cordl_internal_get__baseInputModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseInputModule;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__baseInputModule(::UnityW<::UnityEngine::EventSystems::BaseInputModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____baseInputModule)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ScreenSystem>& HMUI::FlowCoordinator::__cordl_internal_get__screenSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenSystem;
}
constexpr ::UnityW<::HMUI::ScreenSystem> const& HMUI::FlowCoordinator::__cordl_internal_get__screenSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenSystem;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__screenSystem(::UnityW<::HMUI::ScreenSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____screenSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator::__cordl_internal_get__parentFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator::__cordl_internal_get__parentFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__parentFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator::__cordl_internal_get__childFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator::__cordl_internal_get__childFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childFlowCoordinator;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__childFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____childFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*& HMUI::FlowCoordinator::__cordl_internal_get__mainScreenViewControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainScreenViewControllers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*> const&
HMUI::FlowCoordinator::__cordl_internal_get__mainScreenViewControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainScreenViewControllers;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__mainScreenViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainScreenViewControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__leftScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__leftScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__leftScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__rightScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__rightScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__rightScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__bottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__bottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__bottomScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bottomScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__topScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__topScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__topScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__wasActivatedBefore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasActivatedBefore;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__wasActivatedBefore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasActivatedBefore;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__wasActivatedBefore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasActivatedBefore = value;
}
constexpr ::StringW& HMUI::FlowCoordinator::__cordl_internal_get__title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr ::StringW const& HMUI::FlowCoordinator::__cordl_internal_get__title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____title)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedMainViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedMainViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedMainViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedMainViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedMainViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providedMainViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedLeftScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedLeftScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedLeftScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedLeftScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedLeftScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providedLeftScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedRightScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedRightScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedRightScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedRightScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedRightScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providedRightScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedBottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedBottomScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedBottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedBottomScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedBottomScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providedBottomScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedTopScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedTopScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedTopScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedTopScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedTopScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____providedTopScreenViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__viewControllersWereProvided() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersWereProvided;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__viewControllersWereProvided() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersWereProvided;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__viewControllersWereProvided(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllersWereProvided = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__isInDidActivatePhase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInDidActivatePhase;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__isInDidActivatePhase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInDidActivatePhase;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__isInDidActivatePhase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInDidActivatePhase = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__isActivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActivated;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__isActivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActivated;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__isActivated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActivated = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__isInTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInTransition;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__isInTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInTransition;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__isInTransition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInTransition = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__showBackButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBackButton;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__showBackButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBackButton;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__showBackButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showBackButton = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& HMUI::FlowCoordinator::__cordl_internal_get__prevEventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevEventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& HMUI::FlowCoordinator::__cordl_internal_get__prevEventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevEventSystem;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__prevEventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prevEventSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::HMUI::ViewController> HMUI::FlowCoordinator::get_topViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_topViewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> HMUI::FlowCoordinator::get_rightScreenViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_rightScreenViewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::FlowCoordinator> HMUI::FlowCoordinator::get_childFlowCoordinator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_childFlowCoordinator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::FlowCoordinator>, false>(this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::get_isActivated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_isActivated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::get_isInTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_isInTransition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW HMUI::FlowCoordinator::get_title() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_title",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
/// @param animationType: ::HMUI::__ViewController__AnimationType (default: static_cast<int32_t>(0x1))
inline void HMUI::FlowCoordinator::SetTitle(::StringW value, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetTitle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, animationType);
}
inline void HMUI::FlowCoordinator::set_showBackButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "set_showBackButton", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HMUI::FlowCoordinator::get_showBackButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "get_showBackButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::__StartOnScreenSystem(::HMUI::ScreenSystem* screenSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "__StartOnScreenSystem", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ScreenSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, screenSystem);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param immediately: bool (default: false)
/// @param replaceTopViewController: bool (default: false)
inline void HMUI::FlowCoordinator::PresentFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationDirection animationDirection,
                                                          bool immediately, bool replaceTopViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PresentFlowCoordinator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, finishedCallback, animationDirection, immediately, replaceTopViewController);
}
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::DismissFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::HMUI::__ViewController__AnimationDirection animationDirection, ::System::Action* finishedCallback,
                                                          bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissFlowCoordinator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, animationDirection, finishedCallback, immediately);
}
/// @param immediately: bool (default: true)
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissChildFlowCoordinatorsRecursively(bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissChildFlowCoordinatorsRecursively",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, immediately);
}
/// @param immediately: bool (default: true)
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissChildViewControllersRecursively(bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissChildViewControllersRecursively",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, immediately);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::ReplaceChildFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::System::Action* finishedCallback,
                                                               ::HMUI::__ViewController__AnimationDirection animationDirection, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ReplaceChildFlowCoordinator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator, finishedCallback, animationDirection, immediately);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationDirection animationDirection,
                                                         bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PresentViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, animationDirection, immediately);
}
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissViewController(::HMUI::ViewController* viewController, ::HMUI::__ViewController__AnimationDirection animationDirection,
                                                                                      ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "DismissViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, viewController, animationDirection, finishedCallback, immediately);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param animationType: ::HMUI::__ViewController__AnimationType (default: static_cast<int32_t>(0x1))
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
inline void HMUI::FlowCoordinator::ReplaceTopViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationType animationType,
                                                            ::HMUI::__ViewController__AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ReplaceTopViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, animationType, animationDirection);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param animationType: ::HMUI::__ViewController__AnimationType (default: static_cast<int32_t>(0x1))
/// @param animationDirection: ::HMUI::__ViewController__AnimationDirection (default: static_cast<int32_t>(0x0))
inline void HMUI::FlowCoordinator::ReplaceTopViewController(::HMUI::ViewController* viewController, ::HMUI::FlowCoordinator* originalOwnerFlowCoordinator,
                                                            ::HMUI::FlowCoordinator* newOwnerFlowCoordinator, ::System::Action* finishedCallback, ::HMUI::__ViewController__AnimationType animationType,
                                                            ::HMUI::__ViewController__AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ReplaceTopViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, originalOwnerFlowCoordinator, newOwnerFlowCoordinator, finishedCallback, animationType,
                                                          animationDirection);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PushViewControllerToNavigationController(::HMUI::NavigationController* navigationController, ::HMUI::ViewController* viewController,
                                                                            ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PushViewControllerToNavigationController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigationController, viewController, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::SetViewControllersToNavigationController(::HMUI::NavigationController* navigationController,
                                                                            ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetViewControllersToNavigationController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigationController, viewControllers);
}
inline void HMUI::FlowCoordinator::SetViewControllerToNavigationController(::HMUI::NavigationController* navigationController, ::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetViewControllerToNavigationController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigationController, viewController);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PopViewControllerFromNavigationController(::HMUI::NavigationController* navigationController, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PopViewControllerFromNavigationController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigationController, finishedCallback, immediately);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline void HMUI::FlowCoordinator::PopViewControllersFromNavigationController(::HMUI::NavigationController* navigationController, int32_t numberOfControllers, ::System::Action* finishedCallback,
                                                                              bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PopViewControllersFromNavigationController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::NavigationController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, navigationController, numberOfControllers, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::SetLeftScreenViewController(::HMUI::ViewController* viewController, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetLeftScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetRightScreenViewController(::HMUI::ViewController* viewController, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetRightScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetBottomScreenViewController(::HMUI::ViewController* viewController, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetBottomScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetTopScreenViewController(::HMUI::ViewController* viewController, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetTopScreenViewController", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::PresentTitle(::StringW title, ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "PresentTitle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, title, animationType);
}
inline bool HMUI::FlowCoordinator::IsFlowCoordinatorInHierarchy(::HMUI::FlowCoordinator* flowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "IsFlowCoordinatorInHierarchy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::FlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flowCoordinator);
}
inline ::UnityW<::HMUI::FlowCoordinator> HMUI::FlowCoordinator::YoungestChildFlowCoordinatorOrSelf() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "YoungestChildFlowCoordinatorOrSelf",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::FlowCoordinator>, false>(this, ___internal_method);
}
/// @param leftScreenViewController: ::HMUI::ViewController* (default: nullptr)
/// @param rightScreenViewController: ::HMUI::ViewController* (default: nullptr)
/// @param bottomScreenViewController: ::HMUI::ViewController* (default: nullptr)
/// @param topScreenViewController: ::HMUI::ViewController* (default: nullptr)
inline void HMUI::FlowCoordinator::ProvideInitialViewControllers(::HMUI::ViewController* mainViewController, ::HMUI::ViewController* leftScreenViewController,
                                                                 ::HMUI::ViewController* rightScreenViewController, ::HMUI::ViewController* bottomScreenViewController,
                                                                 ::HMUI::ViewController* topScreenViewController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "ProvideInitialViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mainViewController, leftScreenViewController, rightScreenViewController, bottomScreenViewController,
                                                          topScreenViewController);
}
inline void HMUI::FlowCoordinator::Activate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "Activate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::FlowCoordinator::Deactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "Deactivate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::FlowCoordinator::__ExternalActivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "__ExternalActivate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::__ExternalDeactivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "__ExternalDeactivate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::HandleScreenSystemBackButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "HandleScreenSystemBackButtonWasPressed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::SetGlobalUserInteraction(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "SetGlobalUserInteraction",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::FlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::FlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::FlowCoordinator::TransitionDidStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::TransitionDidFinish() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                               ::HMUI::__ViewController__AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void HMUI::FlowCoordinator::InitialViewControllerWasPresented() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline void HMUI::FlowCoordinator::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::FlowCoordinator*>());
}
inline void HMUI::FlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::FlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator::FlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
