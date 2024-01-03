#pragma once
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::*)()>(
    &::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2226488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3>::get(), "MoveNext",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22266f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainSettingsModelAsyncLoader*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::MainSettingsModelAsyncLoader* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3::__MainSettingsModelAsyncLoader___LoadResourcesBeforeInstallAsync_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelAsyncLoader.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelAsyncLoader::*)(
    ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*)>(&::GlobalNamespace::MainSettingsModelAsyncLoader::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x222628c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelAsyncLoader.LoadResourcesBeforeInstallAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MainSettingsModelAsyncLoader::*)(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*)>(
        &::GlobalNamespace::MainSettingsModelAsyncLoader::LoadResourcesBeforeInstallAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2226324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelAsyncLoader.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelAsyncLoader::*)()>(
    &::GlobalNamespace::MainSettingsModelAsyncLoader::InstallBindings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22263ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelAsyncLoader::*)()>(
    &::GlobalNamespace::MainSettingsModelAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2226480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MainSettingsModelSO*& GlobalNamespace::MainSettingsModelAsyncLoader::__get__mainSettingsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsModelSO*> const& GlobalNamespace::MainSettingsModelAsyncLoader::__get__mainSettingsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsModel;
}
constexpr void GlobalNamespace::MainSettingsModelAsyncLoader::__set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ISaveData*& GlobalNamespace::MainSettingsModelAsyncLoader::__get__saveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> const& GlobalNamespace::MainSettingsModelAsyncLoader::__get__saveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveData;
}
constexpr void GlobalNamespace::MainSettingsModelAsyncLoader::__set__saveData(::GlobalNamespace::ISaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saveData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MainSettingsModelAsyncLoader::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::MainSettingsModelAsyncLoader::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
inline void GlobalNamespace::MainSettingsModelAsyncLoader::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsModelAsyncLoader* GlobalNamespace::MainSettingsModelAsyncLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainSettingsModelAsyncLoader*>());
}
inline void GlobalNamespace::MainSettingsModelAsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelAsyncLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsModelAsyncLoader::MainSettingsModelAsyncLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
