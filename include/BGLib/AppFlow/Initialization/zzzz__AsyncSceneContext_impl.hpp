#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncSceneContext.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_impl.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State::__AsyncSceneContext__State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State::__AsyncSceneContext__State() {}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State BGLib::AppFlow::Initialization::__AsyncSceneContext__State::NotInitialized{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State BGLib::AppFlow::Initialization::__AsyncSceneContext__State::Initializing{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State BGLib::AppFlow::Initialization::__AsyncSceneContext__State::Initialized{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1078758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10788d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::__AsyncSceneContext___Run_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                           ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__5::__AsyncSceneContext___Run_d__5() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x10788dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1078c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::__AsyncSceneContext___RunAsync_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__6::__AsyncSceneContext___RunAsync_d__6() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1078c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0._LoadInstallersAsync_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::*)(::BGLib::AppFlow::Initialization::AsyncInstaller*)>(
        &::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::_LoadInstallersAsync_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1078c70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0*>::get(),
                                    "<LoadInstallersAsync>b__1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__cordl_internal_get_registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const&
BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__cordl_internal_get_registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0*>());
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::_LoadInstallersAsync_b__1(::BGLib::AppFlow::Initialization::AsyncInstaller* r) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0*>::get(),
                                               "<LoadInstallersAsync>b__1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, r);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0::__AsyncSceneContext____c__DisplayClass9_0() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1078cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c._LoadInstallersAsync_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c::*)(::BGLib::AppFlow::Initialization::AsyncPreloader*)>(
        &::BGLib::AppFlow::Initialization::__AsyncSceneContext____c::_LoadInstallersAsync_b__9_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1078d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get(), "<LoadInstallersAsync>b__9_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncPreloader*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext____c::setStaticF___9(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c* value) {
  ::cordl_internals::setStaticField<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get>(
      std::forward<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>(value));
}
inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c* BGLib::AppFlow::Initialization::__AsyncSceneContext____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get>();
}
inline void
BGLib::AppFlow::Initialization::__AsyncSceneContext____c::setStaticF___9__9_0(::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*
BGLib::AppFlow::Initialization::__AsyncSceneContext____c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get>();
}
inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c* BGLib::AppFlow::Initialization::__AsyncSceneContext____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>());
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::__AsyncSceneContext____c::_LoadInstallersAsync_b__9_0(::BGLib::AppFlow::Initialization::AsyncPreloader* r) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c*>::get(),
                                               "<LoadInstallersAsync>b__9_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncPreloader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, r);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c::__AsyncSceneContext____c() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x1078d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10791a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty:
// "::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::__AsyncSceneContext___LoadInstallersAsync_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
    ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass9_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__9::__AsyncSceneContext___LoadInstallersAsync_d__9() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::Run)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x10781a0;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1072394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "RunAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.CreateContainerForLoading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::DiContainer* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::CreateContainerForLoading)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1078234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "CreateContainerForLoading", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.CreateRegistry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::CreateRegistry)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x10782d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "CreateRegistry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.LoadInstallersAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* (
    ::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(&::BGLib::AppFlow::Initialization::AsyncSceneContext::LoadInstallersAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1078354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "LoadInstallersAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.InstallInstallers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::InstallInstallers)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1078448;

  inline static const ::MethodInfo* methodInfo() {

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
  constexpr static std::size_t addrs = 0x1078748;

  inline static const ::MethodInfo* methodInfo() {
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
  constexpr static std::size_t addrs = 0x1078750;

  inline static const ::MethodInfo* methodInfo() {
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*> const&
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>*> const&
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__asyncInstallers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncInstallers;
}
constexpr void
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__asyncInstallers(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncInstallers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__state(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const&
BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_get__registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registry;
}
constexpr void BGLib::AppFlow::Initialization::AsyncSceneContext::__cordl_internal_set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* BGLib::AppFlow::Initialization::AsyncSceneContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::AsyncSceneContext*>());
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
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext::AsyncSceneContext() {}
