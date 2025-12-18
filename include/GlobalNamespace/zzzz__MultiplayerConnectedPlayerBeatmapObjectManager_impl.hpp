#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerConnectedPlayerBeatmapObjectManager.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerBeatmapObjectEventManager_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_1_def.hpp"
#include "GlobalNamespace/zzzz__MemoryPoolContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
#include "GlobalNamespace/zzzz__SliderData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnData_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::*)(
    bool, bool, float_t, float_t, float_t)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x580f458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_set_disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disappearingArrows = value;
}
constexpr bool& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr bool const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_set_ghostNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ghostNotes = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_notesUniformScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notesUniformScale;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_notesUniformScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___notesUniformScale;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_set_notesUniformScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___notesUniformScale = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_set_noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr float_t const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_get_bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::__cordl_internal_set_bpm(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bpm = value;
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale, float_t noteJumpMovementSpeed,
                                                                                            float_t bpm) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disappearingArrows, ghostNotes, notesUniformScale, noteJumpMovementSpeed, bpm);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::New_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale, float_t noteJumpMovementSpeed, float_t bpm) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>(disappearingArrows, ghostNotes, notesUniformScale, noteJumpMovementSpeed, bpm));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::MultiplayerConnectedPlayerBeatmapObjectManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.get_activeObstacleControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* (
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x580dbf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*,
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*, ::GlobalNamespace::VariableMovementDataProvider*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x580dc4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VariableMovementDataProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::Dispose)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x580e1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::ObstacleData*, ::ByRef<::GlobalNamespace::ObstacleSpawnData>)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x580e500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessNoteData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::NoteData*, ::ByRef<::GlobalNamespace::NoteSpawnData>, bool)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x580e5b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessSliderData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::SliderData*, ::ByRef<::GlobalNamespace::SliderSpawnData>)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580e978;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x580e97c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x580eacc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580eb88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x580eb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                    "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x580ed08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                    "HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x580ee38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                    "HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::NoteCutInfoNetSerializable*)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x580f02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                                 "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.AreNotesSame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::NoteController*, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::AreNotesSame)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x580f370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), "AreNotesSame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<float_t>& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__firstBasicNoteTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstBasicNoteTime;
}
constexpr ::System::Nullable_1<float_t> const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__firstBasicNoteTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstBasicNoteTime;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__firstBasicNoteTime(::System::Nullable_1<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstBasicNoteTime = value;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__gameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__gameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameNotePoolContainer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__gameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__burstSliderHeadGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadGameNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__burstSliderHeadGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadGameNotePoolContainer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__burstSliderHeadGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderHeadGameNotePoolContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__burstSliderGameNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderGameNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__burstSliderGameNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderGameNotePoolContainer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__burstSliderGameNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderGameNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__bombNotePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__bombNotePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotePoolContainer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__bombNotePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_1<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>*&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__obstaclePoolContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePoolContainer;
}
constexpr ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__obstaclePoolContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclePoolContainer;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__obstaclePoolContainer(
    ::GlobalNamespace::MemoryPoolContainer_2<::UnityW<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController>, ::UnityW<::GlobalNamespace::ObstacleController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstaclePoolContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__beatmapObjectEventManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__beatmapObjectEventManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectEventManager;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__beatmapObjectEventManager(::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectEventManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* const& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__initData(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData*& GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__defaultBeatmapObjectSpawnMovementData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultBeatmapObjectSpawnMovementData;
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData* const&
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_get__defaultBeatmapObjectSpawnMovementData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultBeatmapObjectSpawnMovementData;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::__cordl_internal_set__defaultBeatmapObjectSpawnMovementData(::GlobalNamespace::BeatmapObjectSpawnMovementData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____defaultBeatmapObjectSpawnMovementData)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::get_activeObstacleControllers() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::_ctor(
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* gameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderHeadGameNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderGameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* bombNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* obstaclePool, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VariableMovementDataProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, beatmapObjectEventManager, gameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool,
                                                          bombNotePool, obstaclePool, variableMovementDataProvider);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData,
                                                                                                 ::ByRef<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::ByRef<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                                             bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ::ByRef<::GlobalNamespace::SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderData, sliderSpawnData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderNoteController);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                               "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteSpawnInfo);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  "HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obstacleSpawnInfo);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                  "HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sliderSpawnInfo);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(),
                                               "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteCutInfo);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::AreNotesSame(::GlobalNamespace::NoteController* noteController,
                                                                                          ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>::get(), "AreNotesSame", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, noteController, noteCutInfo);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::New_ctor(
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* gameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderHeadGameNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderGameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* bombNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* obstaclePool, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(
      initData, beatmapObjectEventManager, gameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, bombNotePool, obstaclePool, variableMovementDataProvider));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::MultiplayerConnectedPlayerBeatmapObjectManager() {}
