#pragma once
// IWYU pragma private; include "DataModels/RemoteLocalizationModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "DataModels/zzzz__RemoteLocalizationModel_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationModel_def.hpp"
#include "DataModels/zzzz__RemoteLocalizationModel_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::*)()>(
    &::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x369e788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x369f020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "prevLoadingTask", ty: "::System::Threading::Tasks::Task*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::DataModels::RemoteLocalizationModel*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_loadAdditionalLocalizationHandle_5__2", ty:
// "::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Threading::Tasks::Task* prevLoadingTask, ::DataModels::RemoteLocalizationModel* __4__this,
    ::System::Nullable_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*>>
        _loadAdditionalLocalizationHandle_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::TextAsset>>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->prevLoadingTask = prevLoadingTask;
  this->__4__this = __4__this;
  this->_loadAdditionalLocalizationHandle_5__2 = _loadAdditionalLocalizationHandle_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::DataModels::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6::RemoteLocalizationModel__LoadAdditionalLocalizationAsync_d__6() {}
//  Writing Method size for method: ::DataModels::RemoteLocalizationModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DataModels::RemoteLocalizationModel::*)(
    ::BGLib::Polyglot::LocalizationModel*, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*)>(&::DataModels::RemoteLocalizationModel::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x369e5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DataModels::RemoteLocalizationModel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DataModels::RemoteLocalizationModel::*)()>(&::DataModels::RemoteLocalizationModel::Initialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x369e680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DataModels::RemoteLocalizationModel.HandleDidCatalogLoadOrUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DataModels::RemoteLocalizationModel::*)()>(
    &::DataModels::RemoteLocalizationModel::HandleDidCatalogLoadOrUpdate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x369e76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(),
                                                                               "HandleDidCatalogLoadOrUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DataModels::RemoteLocalizationModel.LoadAdditionalLocalizationAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::DataModels::RemoteLocalizationModel::*)(::System::Threading::Tasks::Task*)>(
    &::DataModels::RemoteLocalizationModel::LoadAdditionalLocalizationAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x369e6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(), "LoadAdditionalLocalizationAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::Polyglot::LocalizationModel*& DataModels::RemoteLocalizationModel::__cordl_internal_get__localizationModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr ::BGLib::Polyglot::LocalizationModel* const& DataModels::RemoteLocalizationModel::__cordl_internal_get__localizationModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationModel;
}
constexpr void DataModels::RemoteLocalizationModel::__cordl_internal_set__localizationModel(::BGLib::Polyglot::LocalizationModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizationModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& DataModels::RemoteLocalizationModel::__cordl_internal_get__metaRemoteAssetsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaRemoteAssetsManager;
}
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* const& DataModels::RemoteLocalizationModel::__cordl_internal_get__metaRemoteAssetsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____metaRemoteAssetsManager;
}
constexpr void DataModels::RemoteLocalizationModel::__cordl_internal_set__metaRemoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____metaRemoteAssetsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& DataModels::RemoteLocalizationModel::__cordl_internal_get__loadingTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingTask;
}
constexpr ::System::Threading::Tasks::Task* const& DataModels::RemoteLocalizationModel::__cordl_internal_get__loadingTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadingTask;
}
constexpr void DataModels::RemoteLocalizationModel::__cordl_internal_set__loadingTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadingTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DataModels::RemoteLocalizationModel::_ctor(::BGLib::Polyglot::LocalizationModel* localizationModel, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::LocalizationModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, localizationModel, metaRemoteAssetsManager);
}
inline void DataModels::RemoteLocalizationModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void DataModels::RemoteLocalizationModel::HandleDidCatalogLoadOrUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(),
                                                                             "HandleDidCatalogLoadOrUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* DataModels::RemoteLocalizationModel::LoadAdditionalLocalizationAsync(::System::Threading::Tasks::Task* prevLoadingTask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DataModels::RemoteLocalizationModel*>::get(), "LoadAdditionalLocalizationAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, prevLoadingTask);
}
inline ::DataModels::RemoteLocalizationModel* DataModels::RemoteLocalizationModel::New_ctor(::BGLib::Polyglot::LocalizationModel* localizationModel,
                                                                                            ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* metaRemoteAssetsManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DataModels::RemoteLocalizationModel*>(localizationModel, metaRemoteAssetsManager));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr DataModels::RemoteLocalizationModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* DataModels::RemoteLocalizationModel::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DataModels::RemoteLocalizationModel::RemoteLocalizationModel() {}
