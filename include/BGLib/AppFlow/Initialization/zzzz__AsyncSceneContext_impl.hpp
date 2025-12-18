#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncSceneContext.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SceneContext_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncPreloader_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State::AsyncSceneContext_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State::AsyncSceneContext_State() {}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State BGLib::AppFlow::Initialization::AsyncSceneContext_State::NotInitialized{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State BGLib::AppFlow::Initialization::AsyncSceneContext_State::Initializing{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State BGLib::AppFlow::Initialization::AsyncSceneContext_State::Initialized{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext___c::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3212f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c._LoadInstallersAsync_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncSceneContext___c::*)(::BGLib::AppFlow::Initialization::AsyncPreloader*)>(
        &::BGLib::AppFlow::Initialization::AsyncSceneContext___c::_LoadInstallersAsync_b__17_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3212f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get(), "<LoadInstallersAsync>b__17_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncPreloader*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c::setStaticF___9(::BGLib::AppFlow::Initialization::AsyncSceneContext___c* value) {
  ::cordl_internals::setStaticField<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get>(
      std::forward<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>(value));
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* BGLib::AppFlow::Initialization::AsyncSceneContext___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get>();
}
inline void
BGLib::AppFlow::Initialization::AsyncSceneContext___c::setStaticF___9__17_0(::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get>(
      std::forward<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* BGLib::AppFlow::Initialization::AsyncSceneContext___c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get>();
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncSceneContext___c::_LoadInstallersAsync_b__17_0(::BGLib::AppFlow::Initialization::AsyncPreloader* r) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>::get(), "<LoadInstallersAsync>b__17_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncPreloader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, r);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* BGLib::AppFlow::Initialization::AsyncSceneContext___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::AsyncSceneContext___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext___c::AsyncSceneContext___c() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3212f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0._LoadInstallersAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::*)(::BGLib::AppFlow::Initialization::AsyncInstaller*)>(
        &::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::_LoadInstallersAsync_b__1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3212f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0*>::get(),
                                    "<LoadInstallersAsync>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::__cordl_internal_get_registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::__cordl_internal_get_registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::__cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::Zenject::DiContainer* const& BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::_LoadInstallersAsync_b__1(::BGLib::AppFlow::Initialization::AsyncInstaller* r) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0*>::get(),
                                               "<LoadInstallersAsync>b__1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, r);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0* BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0::AsyncSceneContext___c__DisplayClass17_0() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x3212fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3213574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loadersStopwatch_5__2", ty:
// "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_installersStopwatch_5__3", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::AsyncSceneContext__LoadInstallersAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
    ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass17_0* __8__1,
    ::System::Diagnostics::Stopwatch* _loadersStopwatch_5__2, ::System::Diagnostics::Stopwatch* _installersStopwatch_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->_loadersStopwatch_5__2 = _loadersStopwatch_5__2;
  this->_installersStopwatch_5__3 = _installersStopwatch_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__17::AsyncSceneContext__LoadInstallersAsync_d__17() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x32135f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3213778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::AsyncSceneContext__Run_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                       ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__13::AsyncSceneContext__Run_d__13() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x3213780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3213b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::AsyncSceneContext__RunAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14::AsyncSceneContext__RunAsync_d__14() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.get_telemetryLoadersDurationMS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryLoadersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32129c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "get_telemetryLoadersDurationMS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.set_telemetryLoadersDurationMS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)(int32_t)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryLoadersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32129c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), "set_telemetryLoadersDurationMS",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.get_telemetryInstallersDurationMS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryInstallersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32129d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                 "get_telemetryInstallersDurationMS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.set_telemetryInstallersDurationMS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)(int32_t)>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryInstallersDurationMS)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32129d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), "set_telemetryInstallersDurationMS",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32129e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.RunAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::RunAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x320ac34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "RunAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.CreateContainerForLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::CreateContainerForLoading)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3212a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "CreateContainerForLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.CreateRegistry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::CreateRegistry)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3212b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "CreateRegistry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.LoadInstallersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* (
    ::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3212bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "LoadInstallersAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.InstallInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3212c98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3212ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.__n__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::__n__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3212ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "<>n__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*&
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__asyncPreloaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncPreloaders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>* const&
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__asyncPreloaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncPreloaders;
}
constexpr void
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__asyncPreloaders(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncPreloaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>*&
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__asyncInstallers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncInstallers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* const&
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__asyncInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncInstallers;
}
constexpr void
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__asyncInstallers(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__state(::BGLib::AppFlow::Initialization::AsyncSceneContext_State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryLoadersDurationMS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryLoadersDurationMS_k__BackingField;
}
constexpr int32_t const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryLoadersDurationMS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryLoadersDurationMS_k__BackingField;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__telemetryLoadersDurationMS_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryLoadersDurationMS_k__BackingField = value;
}
constexpr int32_t& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryInstallersDurationMS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryInstallersDurationMS_k__BackingField;
}
constexpr int32_t const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__telemetryInstallersDurationMS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____telemetryInstallersDurationMS_k__BackingField;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__telemetryInstallersDurationMS_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____telemetryInstallersDurationMS_k__BackingField = value;
}
inline int32_t BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryLoadersDurationMS() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             "get_telemetryLoadersDurationMS", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryLoadersDurationMS(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), "set_telemetryLoadersDurationMS",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t BGLib::AppFlow::Initialization::AsyncSceneContext::get_telemetryInstallersDurationMS() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), "get_telemetryInstallersDurationMS",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::set_telemetryInstallersDurationMS(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), "set_telemetryInstallersDurationMS",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::Run() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::AsyncSceneContext::RunAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             "RunAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline ::Zenject::DiContainer* BGLib::AppFlow::Initialization::AsyncSceneContext::CreateContainerForLoading() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             "CreateContainerForLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*, false>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::AsyncSceneContext::CreateRegistry() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             "CreateRegistry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             "LoadInstallersAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>*, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::AsyncSceneContext::__n__0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                             "<>n__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::AsyncSceneContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::AsyncSceneContext*>());
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext::AsyncSceneContext() {}
