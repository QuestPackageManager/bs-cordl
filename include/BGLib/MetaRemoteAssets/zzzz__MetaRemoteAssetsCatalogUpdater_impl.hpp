#pragma once
// IWYU pragma private; include "BGLib/MetaRemoteAssets/MetaRemoteAssetsCatalogUpdater.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsCatalogUpdater_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsCatalogUpdater_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x321fa4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c._HandleGameSceneChanged_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::*)(::StringW)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_HandleGameSceneChanged_b__9_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x321fa50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get(), "<HandleGameSceneChanged>b__9_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::setStaticF___9__9_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_HandleGameSceneChanged_b__9_0(::StringW sceneName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>::get(), "<HandleGameSceneChanged>b__9_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sceneName);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::MetaRemoteAssetsCatalogUpdater___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x321fa9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x322017c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*", modifiers: "", def_value: Some("{}") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater* __4__this,
    ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*, ::GlobalNamespace::GameScenesManager*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x321f58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Initialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x321f608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "Initialize",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Dispose)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x321f7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.HandleGameSceneChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(
    ::GlobalNamespace::GameScenesManager_SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::HandleGameSceneChanged)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x321f81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "HandleGameSceneChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.CheckForCatalogUpdateWithInterval
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(::System::Threading::CancellationToken)>(
        &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::CheckForCatalogUpdateWithInterval)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x321f734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "CheckForCatalogUpdateWithInterval",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__remoteAssetsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteAssetsManager;
}
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__remoteAssetsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteAssetsManager;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_set__remoteAssetsManager(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____remoteAssetsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__scenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__scenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scenesManager;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_set__scenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancellationTokenSource;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task*& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__checkForCatalogUpdateOngoingTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkForCatalogUpdateOngoingTask;
}
constexpr ::System::Threading::Tasks::Task* const& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__checkForCatalogUpdateOngoingTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkForCatalogUpdateOngoingTask;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_set__checkForCatalogUpdateOngoingTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____checkForCatalogUpdateOngoingTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::_ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager,
                                                                           ::GlobalNamespace::GameScenesManager* scenesManager) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, remoteAssetsManager, scenesManager);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::HandleGameSceneChanged(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType,
                                                                                            ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "HandleGameSceneChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameScenesManager_SceneTransitionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneTransitionType, transitionSetupDataSo, container);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::CheckForCatalogUpdateWithInterval(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "CheckForCatalogUpdateWithInterval",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::New_ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager, ::GlobalNamespace::GameScenesManager* scenesManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(remoteAssetsManager, scenesManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::MetaRemoteAssetsCatalogUpdater() {}
