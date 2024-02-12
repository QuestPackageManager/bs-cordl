#pragma once
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_impl.hpp"
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
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xe45b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe45c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__AsyncSceneContext___Run_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                           ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4::__AsyncSceneContext___Run_d__4() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xe45c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe46004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__AsyncSceneContext___RunAsync_d__5(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5::__AsyncSceneContext___RunAsync_d__5() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe46010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0._LoadInstallersAsync_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::*)(::BGLib::AppFlow::Initialization::AsyncInstaller*)>(
        &::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::_LoadInstallersAsync_b__0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe46018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*>::get(),
                                    "<LoadInstallersAsync>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__cordl_internal_get_registry() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const&
BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__cordl_internal_get_registry() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registry;
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registry)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__cordl_internal_get_container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__cordl_internal_get_container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___container;
}
constexpr void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__cordl_internal_set_container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___container)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*>());
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::_LoadInstallersAsync_b__0(::BGLib::AppFlow::Initialization::AsyncInstaller* r) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*>::get(),
                                               "<LoadInstallersAsync>b__0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, r);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0::__AsyncSceneContext____c__DisplayClass8_0() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::*)()>(
    &::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xe46040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe46318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__8__1", ty:
// "::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::__AsyncSceneContext___LoadInstallersAsync_d__8(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
    ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8::__AsyncSceneContext___LoadInstallersAsync_d__8() {}
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncSceneContext.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncSceneContext::*)()>(
    &::BGLib::AppFlow::Initialization::AsyncSceneContext::Run)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe45548;

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
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe3fb20;

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
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe455dc;

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
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe45678;

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
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xe456fc;

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
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xe457f0;

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
  constexpr static std::size_t addrs = 0xe45af0;

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
  constexpr static std::size_t addrs = 0xe45af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncSceneContext*>::get(),
                                                                               "<>n__0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
