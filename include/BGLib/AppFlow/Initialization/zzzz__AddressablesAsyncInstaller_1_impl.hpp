#pragma once
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "System/Collections/Generic/zzzz__IList_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetLabelReference_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void
BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "registry", ty:
// "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* __4__this,
    ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->registry = registry;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::BGLib::AppFlow::Initialization::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2<T>::__AddressablesAsyncInstaller_1___LoadResourcesBeforeInstallAsync_d__2() {}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>&
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> const&
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
template <typename T>
constexpr void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__set__handle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
template <typename T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(), "LoadResourcesBeforeInstall", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry);
}
template <typename T>
inline ::System::Threading::Tasks::Task*
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(), "LoadResourcesBeforeInstallAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
template <typename T> inline ::UnityEngine::AddressableAssets::AssetLabelReference* BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::get_assetLabel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(), "get_assetLabel",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetLabelReference*, false>(this, ___internal_method);
}
template <typename T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<T>* assets,
                                                                                                        ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(), "LoadResourcesBeforeInstall", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assets, registry);
}
template <typename T> inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(), "OnDestroy",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>());
}
template <typename T> inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::AddressablesAsyncInstaller_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
