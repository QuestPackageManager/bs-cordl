#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelsSettingsAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "GlobalNamespace/zzzz__CustomLevelsSettingsAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "GlobalNamespace/zzzz__CustomLevelsSettingsAsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::*)()>(
    &::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2715da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2715f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::Zenject::DiContainer* container,
    ::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller> __4__this) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->container = container;
  this->__4__this = __4__this;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)(
    ::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(&::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2715bb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller.LoadResourcesBeforeInstallAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*, ::Zenject::DiContainer*)>(
    &::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2715c14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)()>(
    &::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2715ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::*)()>(
    &::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2715da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomLevelsSettingsAsyncInstaller::__cordl_internal_get__customLevelsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelsEnabled;
}
constexpr bool const& GlobalNamespace::CustomLevelsSettingsAsyncInstaller::__cordl_internal_get__customLevelsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customLevelsEnabled;
}
constexpr void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::__cordl_internal_set__customLevelsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____customLevelsEnabled = value;
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
                                                                                            ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry, container);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::CustomLevelsSettingsAsyncInstaller::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry, container);
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CustomLevelsSettingsAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller* GlobalNamespace::CustomLevelsSettingsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller::CustomLevelsSettingsAsyncInstaller() {}
