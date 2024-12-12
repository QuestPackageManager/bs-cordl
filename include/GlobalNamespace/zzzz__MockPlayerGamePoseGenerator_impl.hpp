#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerGamePoseGenerator.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockNodePoseSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__MockScoreSyncStateSender_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)(
    ::GlobalNamespace::IMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, bool)>(&::GlobalNamespace::MockPlayerGamePoseGenerator::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3c2933c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayRpcManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGenerator::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3c29564;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.SimulateFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3c2964c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.SimulateGiveUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3c2983c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(),
                                                                               "SimulateGiveUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.CreateEmptyLevelCompletionResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::GlobalNamespace::LevelCompletionResults_LevelEndStateType)>(
    &::GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3c29738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), "CreateEmptyLevelCompletionResults", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerSessionManager;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayRpcManager;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayRpcManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr bool const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHanded = value;
}
constexpr ::GlobalNamespace::MockNodePoseSyncStateSender*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockNodePoseSyncStateSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockNodePoseSyncStateSender;
}
constexpr ::GlobalNamespace::MockNodePoseSyncStateSender* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockNodePoseSyncStateSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockNodePoseSyncStateSender;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_mockNodePoseSyncStateSender(::GlobalNamespace::MockNodePoseSyncStateSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mockNodePoseSyncStateSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MockScoreSyncStateSender*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockScoreSyncStateSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockScoreSyncStateSender;
}
constexpr ::GlobalNamespace::MockScoreSyncStateSender* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockScoreSyncStateSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockScoreSyncStateSender;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_mockScoreSyncStateSender(::GlobalNamespace::MockScoreSyncStateSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mockScoreSyncStateSender)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                bool leftHanded) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayRpcManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, leftHanded);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                               ::System::Action* onSongFinished) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::Tick() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(),
                                                                             "SimulateGiveUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults(::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGenerator*>::get(), "CreateEmptyLevelCompletionResults", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(nullptr, ___internal_method, levelEndStateType);
}
inline ::GlobalNamespace::MockPlayerGamePoseGenerator* GlobalNamespace::MockPlayerGamePoseGenerator::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                                              ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockPlayerGamePoseGenerator*>(multiplayerSessionManager, gameplayRpcManager, leftHanded));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockPlayerGamePoseGenerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockPlayerGamePoseGenerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerGamePoseGenerator::MockPlayerGamePoseGenerator() {}
