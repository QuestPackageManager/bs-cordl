#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/ScriptableObjectReferenceAsyncInstaller_1.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__ScriptableObjectReferenceAsyncInstaller_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename T> inline void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<
    T>::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                        ::UnityW<T> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T>
constexpr ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4<
    T>::ScriptableObjectReferenceAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__4() {}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>&
BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::__cordl_internal_get__operationHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationHandle;
}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const&
BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::__cordl_internal_get__operationHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____operationHandle;
}
template <typename T>
constexpr void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::__cordl_internal_set__operationHandle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____operationHandle = value;
}
template <typename T> inline ::StringW BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::get_assetRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename T>
inline void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
                                                                                                                     ::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(),
                                 "LoadResourcesBeforeInstall", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry, _);
}
template <typename T>
inline ::System::Threading::Tasks::Task*
BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry,
                                                                                                              ::Zenject::DiContainer* _) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(),
                                 "LoadResourcesBeforeInstallAsync", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry, _);
}
template <typename T>
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::LoadAsync(::StringW runtimeKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(), "LoadAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>, false>(nullptr, ___internal_method, runtimeKey);
}
template <typename T> inline void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(),
                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>* BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::AppFlow::Initialization::ScriptableObjectReferenceAsyncInstaller_1<T>::ScriptableObjectReferenceAsyncInstaller_1() {}
