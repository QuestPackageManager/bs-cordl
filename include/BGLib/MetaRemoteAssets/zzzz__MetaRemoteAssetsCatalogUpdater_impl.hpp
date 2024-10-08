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
#include "GlobalNamespace/zzzz__SceneInfo_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::*)()>(
    &::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22679a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c._HandleGameSceneChanged_b__9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::*)(::GlobalNamespace::SceneInfo*)>(
    &::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::_HandleGameSceneChanged_b__9_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22679b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get(), "<HandleGameSceneChanged>b__9_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
    return ___internal_method;
  }
};
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::setStaticF___9(::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* value) {
  ::cordl_internals::setStaticField<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get>(
      std::forward<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>(value));
}
inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get>();
}
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::setStaticF___9__9_0(::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>*, "<>9__9_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>* BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::getStaticF___9__9_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::SceneInfo>, bool>*, "<>9__9_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get>();
}
inline ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c* BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>());
}
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::_HandleGameSceneChanged_b__9_0(::GlobalNamespace::SceneInfo* info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c*>::get(), "<HandleGameSceneChanged>b__9_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SceneInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, info);
}
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater____c::__MetaRemoteAssetsCatalogUpdater____c() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::*)()>(
    &::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x2267a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10>::get(),
                                   "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22680d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10>::get(),
                                   "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10(
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
constexpr ::BGLib::MetaRemoteAssets::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10::__MetaRemoteAssetsCatalogUpdater___CheckForCatalogUpdateWithInterval_d__10() {}
//  Writing Method size for method: ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::*)(
    ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*, ::GlobalNamespace::GameScenesManager*)>(&::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x226754c;

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
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x22675c4;

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
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x226777c;

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
    ::GlobalNamespace::__GameScenesManager__SceneTransitionType, ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(
    &::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::HandleGameSceneChanged)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2267798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "HandleGameSceneChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneTransitionType>::get(),
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
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22676ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "CheckForCatalogUpdateWithInterval",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
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
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*& BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__remoteAssetsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteAssetsManager;
}
constexpr ::cordl_internals::to_const_pointer<::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager*> const&
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__remoteAssetsManager() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__cancellationTokenSource() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const&
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_get__checkForCatalogUpdateOngoingTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____checkForCatalogUpdateOngoingTask;
}
constexpr void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::__cordl_internal_set__checkForCatalogUpdateOngoingTask(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____checkForCatalogUpdateOngoingTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*
BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::New_ctor(::BGLib::MetaRemoteAssets::MetaRemoteAssetsManager* remoteAssetsManager, ::GlobalNamespace::GameScenesManager* scenesManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>(remoteAssetsManager, scenesManager));
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
inline void BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::HandleGameSceneChanged(::GlobalNamespace::__GameScenesManager__SceneTransitionType sceneTransitionType,
                                                                                            ::GlobalNamespace::ScenesTransitionSetupDataSO* transitionSetupDataSo, ::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater*>::get(), "HandleGameSceneChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameScenesManager__SceneTransitionType>::get(),
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
// Ctor Parameters []
constexpr ::BGLib::MetaRemoteAssets::MetaRemoteAssetsCatalogUpdater::MetaRemoteAssetsCatalogUpdater() {}
