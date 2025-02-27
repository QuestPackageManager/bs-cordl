#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerBeatmapObjectEventManager.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IPoolableSerializable_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerSongTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData::*)(
    float_t, ::GlobalNamespace::IPoolableSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3bc433c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData::_ctor(float_t time,
                                                                                                                          ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, beatmapObjectEventData);
}
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "beatmapObjectEventData", ty: "::GlobalNamespace::IPoolableSerializable*",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData::
    MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData(float_t time, ::GlobalNamespace::IPoolableSerializable* beatmapObjectEventData) noexcept {
  this->time = time;
  this->beatmapObjectEventData = beatmapObjectEventData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData::
    MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerNoteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc3190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerNoteWasSpawnedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerNoteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc3240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerNoteWasSpawnedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerObstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerObstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc32f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerObstacleWasSpawnedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerObstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(
        &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerObstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc33a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerObstacleWasSpawnedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerSliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerSliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc3450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerSliderWasSpawnedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerSliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerSliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc3500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerSliderWasSpawnedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerNoteWasCutEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc35b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerNoteWasCutEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerNoteWasCutEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc3660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerNoteWasCutEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.add_connectedPlayerNoteWasMissedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc3710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerNoteWasMissedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.remove_connectedPlayerNoteWasMissedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3bc37c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerNoteWasMissedEvent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Start)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x3bc3870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Start",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::OnDestroy)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x3bc3c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "OnDestroy",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Update)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3bc3fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Pause)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3bc42ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Pause",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.Resume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Resume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bc42b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Resume",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager.InvokeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)(
    ::GlobalNamespace::IPoolableSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::InvokeCallback)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x3bc409c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "InvokeCallback",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3bc42c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayRpcManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayRpcManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController>&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__songTimeController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__songTimeController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeController;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set__songTimeController(::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songTimeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerNoteWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerNoteWasSpawnedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerNoteWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerNoteWasSpawnedEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set_connectedPlayerNoteWasSpawnedEvent(
    ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerNoteWasSpawnedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerObstacleWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerObstacleWasSpawnedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerObstacleWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerObstacleWasSpawnedEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set_connectedPlayerObstacleWasSpawnedEvent(
    ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerObstacleWasSpawnedEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerSliderWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerSliderWasSpawnedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerSliderWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerSliderWasSpawnedEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set_connectedPlayerSliderWasSpawnedEvent(
    ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerSliderWasSpawnedEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerNoteWasCutEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerNoteWasCutEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerNoteWasCutEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerNoteWasCutEvent;
}
constexpr void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerNoteWasCutEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerNoteWasMissedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerNoteWasMissedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get_connectedPlayerNoteWasMissedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayerNoteWasMissedEvent;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set_connectedPlayerNoteWasMissedEvent(
    ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedPlayerNoteWasMissedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__beatmapObjectEventQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__beatmapObjectEventQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventQueue;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set__beatmapObjectEventQueue(
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager_TimestampedBeatmapObjectEventData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectEventQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__paused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_get__paused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____paused;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::__cordl_internal_set__paused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____paused = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerNoteWasSpawnedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerNoteWasSpawnedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerObstacleWasSpawnedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerObstacleWasSpawnedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerSliderWasSpawnedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerSliderWasSpawnedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerNoteWasCutEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerNoteWasCutEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "add_connectedPlayerNoteWasMissedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "remove_connectedPlayerNoteWasMissedEvent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Start() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Start",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "OnDestroy",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Update() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Update",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Pause() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Pause",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::Resume() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "Resume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::HandleBeatmapObjectEventData(::StringW userId, int64_t syncTime, float_t songTime, T beatmapObjectEventData) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "HandleBeatmapObjectEventData",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, beatmapObjectEventData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::InvokeCallback(::GlobalNamespace::IPoolableSerializable* noteEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), "InvokeCallback",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPoolableSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteEventData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
constexpr GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::operator ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager"
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::i___GlobalNamespace__IConnectedPlayerBeatmapObjectEventManager() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager::MultiplayerConnectedPlayerBeatmapObjectEventManager() {}
