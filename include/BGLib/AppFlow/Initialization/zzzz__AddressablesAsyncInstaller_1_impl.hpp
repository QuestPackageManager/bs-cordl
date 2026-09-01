#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AddressablesAsyncInstaller_1.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__IInstallerRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/AddressableAssets/ResourceLocators/zzzz__IResourceLocator_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename T> inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T>
inline void
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<T>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "registry", ty: "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: Some("{}") }, CppParam { name: "container", ty: "::Zenject::DiContainer*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_stopWatch_5__2", ty: "::System::Diagnostics::Stopwatch*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<T> __4__this, ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
    ::Zenject::DiContainer* container, ::System::Diagnostics::Stopwatch* _stopWatch_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<T>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->registry = registry;
  this->container = container;
  this->_stopWatch_5__2 = _stopWatch_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
template <typename T>
constexpr ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1<T>::AddressablesAsyncInstaller_1__LoadResourcesBeforeInstallAsync_d__1() {}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*>&
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__cordl_internal_get__handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
template <typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> const&
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__cordl_internal_get__handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handle;
}
template <typename T>
constexpr void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::__cordl_internal_set__handle(
    ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handle = value;
}
template <typename T>
inline ::System::Threading::Tasks::Task*
BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(),
                          { "LoadResourcesBeforeInstallAsync", {}, { ::i2c::type_of<::BGLib::AppFlow::Initialization::IInstallerRegistry*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, registry, container);
}
template <typename T> inline ::StringW BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::get_telemetryEventName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::StringW BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T>
inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<T>* assets,
                                                                                                        ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assets, registry);
}
template <typename T> inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>* BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::AppFlow::Initialization::AddressablesAsyncInstaller_1<T>::AddressablesAsyncInstaller_1() {}
