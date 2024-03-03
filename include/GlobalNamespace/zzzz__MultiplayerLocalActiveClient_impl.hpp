#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalActiveClient_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ComboController_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::Start)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x2466540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x2466c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2467054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleNoteWasAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(
    ::GlobalNamespace::NoteData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasAdded)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x246739c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleNoteWasAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleObstacleWasAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(
    ::GlobalNamespace::ObstacleData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleObstacleWasAdded)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x24674fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleObstacleWasAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleSliderWasAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(
    ::GlobalNamespace::SliderData*, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData, float_t)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleSliderWasAdded)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x246763c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleSliderWasAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2467810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleNoteWasMissed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(
    ::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x246790c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleComboDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::HandleComboDidChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2467ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleComboDidChange",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleMultiplierDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(int32_t, float_t)>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::HandleMultiplierDidChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2467b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleMultiplierDidChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient.HandleScoreDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)(int32_t, int32_t)>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::HandleScoreDidChange)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2467c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleScoreDidChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalActiveClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalActiveClient::*)()>(
    &::GlobalNamespace::MultiplayerLocalActiveClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2467ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IScoreSyncStateManager*& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__scoreSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__scoreSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreSyncStateManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INodePoseSyncStateManager*> const&
GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____nodePoseSyncStateManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__rpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGameplayRpcManager*> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__rpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__rpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rpcManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ComboController>& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__comboController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr ::UnityW<::GlobalNamespace::ComboController> const& GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_get__comboController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr void GlobalNamespace::MultiplayerLocalActiveClient::__cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comboController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasAdded(::GlobalNamespace::NoteData* noteData, ::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData,
                                                                              float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleNoteWasAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, noteSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleObstacleWasAdded(::GlobalNamespace::ObstacleData* obstacleData,
                                                                                  ::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleObstacleWasAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__ObstacleSpawnData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData, obstacleSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleSliderWasAdded(::GlobalNamespace::SliderData* sliderData,
                                                                                ::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleSliderWasAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderData, sliderSpawnData, rotation);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleNoteWasMissed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleNoteWasCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleComboDidChange(int32_t combo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleComboDidChange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, combo);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleMultiplierDidChange(int32_t multiplier, float_t multiplierProgress) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleMultiplierDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplier, multiplierProgress);
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), "HandleScoreDidChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multipliedScore, modifiedScore);
}
inline ::GlobalNamespace::MultiplayerLocalActiveClient* GlobalNamespace::MultiplayerLocalActiveClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLocalActiveClient*>());
}
inline void GlobalNamespace::MultiplayerLocalActiveClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalActiveClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalActiveClient::MultiplayerLocalActiveClient() {}
