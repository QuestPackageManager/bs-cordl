#pragma once
// IWYU pragma private; include "BGLib\MetaRemoteAssets\MetaRemoteAssetsCatalogUpdater.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsCatalogUpdater_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsCatalogUpdater_def.hpp"
#include "BGLib/MetaRemoteAssets/zzzz__MetaRemoteAssetsManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupData_def.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3317854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c._HandleGameSceneChanged_b__9_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::*)(::StringW)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_HandleGameSceneChanged_b__9_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3317858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(),
                                                                                           { "<HandleGameSceneChanged>b__9_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::setStaticF___9(::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(
      std::forward<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(value));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*, "<>9", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::setStaticF___9__9_0(::System::Func_2<::StringW, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, bool>*, "<>9__9_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(
      std::forward<::System::Func_2<::StringW, bool>*>(value));
}
inline ::System::Func_2<::StringW, bool>* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, bool>*, "<>9__9_0", ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>();
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::_HandleGameSceneChanged_b__9_0(::StringW sceneName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>(), { "<HandleGameSceneChanged>b__9_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, sceneName);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c*>());
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater___c::MetaRemoteAssetsCatalogUpdater___c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::*)()>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x33178a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3317f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater__CheckForCatalogUpdateWithInterval_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*, ::GlobalNamespace::GameScenesManager*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x331734c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), ::i2c::type_of<::GlobalNamespace::GameScenesManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Initialize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x33173c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)()>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Dispose)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x331753c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.HandleGameSceneChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(::GlobalNamespace::GameScenesManager_SceneTransitionType,
                                                                                                                           ::GlobalNamespace::ScenesTransitionSetupData*, ::Zenject::DiContainer*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::HandleGameSceneChanged)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3317660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(),
                                                             { "HandleGameSceneChanged",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater.CheckForCatalogUpdateWithInterval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(::System::Threading::CancellationToken)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::CheckForCatalogUpdateWithInterval)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x331747c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(),
                                                                                           { "CheckForCatalogUpdateWithInterval", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
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
  this->____remoteAssetsManager = value;
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
  this->____scenesManager = value;
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
  this->____cancellationTokenSource = value;
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
  this->____checkForCatalogUpdateOngoingTask = value;
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::_ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager,
                                                                           ::GlobalNamespace::GameScenesManager* scenesManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*>(), ::i2c::type_of<::GlobalNamespace::GameScenesManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, remoteAssetsManager, scenesManager);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::HandleGameSceneChanged(::GlobalNamespace::GameScenesManager_SceneTransitionType sceneTransitionType,
                                                                                            ::GlobalNamespace::ScenesTransitionSetupData* transitionSetupData, ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(),
                                                           { "HandleGameSceneChanged",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::GameScenesManager_SceneTransitionType>(),
                                                               ::i2c::type_of<::GlobalNamespace::ScenesTransitionSetupData*>(), ::i2c::type_of<::Zenject::DiContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneTransitionType, transitionSetupData, container);
}
inline ::System::Threading::Tasks::Task* BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::CheckForCatalogUpdateWithInterval(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(),
                                                                                         { "CheckForCatalogUpdateWithInterval", {}, { ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::New_ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager, ::GlobalNamespace::GameScenesManager* scenesManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(remoteAssetsManager, scenesManager));
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
