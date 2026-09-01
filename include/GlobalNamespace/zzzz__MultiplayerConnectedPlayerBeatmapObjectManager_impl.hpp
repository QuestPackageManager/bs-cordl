#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerConnectedPlayerBeatmapObjectManager.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::*)(bool, bool, float_t, float_t, float_t)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x59ba6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>(),
                                                { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
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
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>(),
                                              { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disappearingArrows, ghostNotes, notesUniformScale, noteJumpMovementSpeed, bpm);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::New_ctor(bool disappearingArrows, bool ghostNotes, float_t notesUniformScale, float_t noteJumpMovementSpeed, float_t bpm) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>(disappearingArrows, ghostNotes, notesUniformScale, noteJumpMovementSpeed, bpm));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData::MultiplayerConnectedPlayerBeatmapObjectManager_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.get_activeObstacleControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* (
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)()>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::get_activeObstacleControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59b8e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*,
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*, ::GlobalNamespace::VariableMovementDataProvider*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::_ctor)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x59b8e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
            { ".ctor",
              {},
              { ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(),
                ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>(),
                ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*>(),
                ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(), ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::Dispose)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x59b9410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessObstacleData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::ObstacleData*, ::by_ref<::GlobalNamespace::ObstacleSpawnData>)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessObstacleData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59b973c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::NoteData*, ::by_ref<::GlobalNamespace::NoteSpawnData>, bool)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessNoteData)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x59b97ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.ProcessSliderData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(
    ::GlobalNamespace::SliderData*, ::by_ref<::GlobalNamespace::SliderSpawnData>)>(&::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessSliderData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b9bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59b9bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::ObstacleController*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59b9d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.DespawnInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::SliderController*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59b9dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59b9dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                { "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x59b9f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                { "HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x59ba07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                { "HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::*)(::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x59ba278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                { "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager.AreNotesSame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NoteController*, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::AreNotesSame)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59ba5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                                { "AreNotesSame", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
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
  this->____gameNotePoolContainer = value;
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
  this->____burstSliderHeadGameNotePoolContainer = value;
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
  this->____burstSliderGameNotePoolContainer = value;
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
  this->____bombNotePoolContainer = value;
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
  this->____obstaclePoolContainer = value;
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
  this->____beatmapObjectEventManager = value;
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
  this->____initData = value;
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
  this->____defaultBeatmapObjectSpawnMovementData = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::get_activeObstacleControllers() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ObstacleController>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::_ctor(
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* gameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderHeadGameNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderGameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* bombNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* obstaclePool, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
          { ".ctor",
            {},
            { ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager*>(),
              ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>(),
              ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool*>(),
              ::i2c::type_of<::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool*>(), ::i2c::type_of<::GlobalNamespace::VariableMovementDataProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initData, beatmapObjectEventManager, gameNotePool, burstSliderHeadGameNotePool, burstSliderGameNotePool, bombNotePool,
                                                   obstaclePool, variableMovementDataProvider);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessObstacleData(::GlobalNamespace::ObstacleData* obstacleData,
                                                                                                 ::by_ref<::GlobalNamespace::ObstacleSpawnData> obstacleSpawnData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleData, obstacleSpawnData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessNoteData(::GlobalNamespace::NoteData* noteData, ::by_ref<::GlobalNamespace::NoteSpawnData> noteSpawnData,
                                                                                             bool forceIsFirstNoteBehaviour) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteData, noteSpawnData, forceIsFirstNoteBehaviour);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::ProcessSliderData(::GlobalNamespace::SliderData* sliderData,
                                                                                               ::by_ref<::GlobalNamespace::SliderSpawnData> sliderSpawnData) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderData, sliderSpawnData);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::NoteController* noteController) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::ObstacleController* obstacleController) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleController);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::DespawnInternal(::GlobalNamespace::SliderController* sliderNoteController) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderNoteController);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                              { "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteSpawnInfo);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned(::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                              { "HandleMultiplayerBeatmapObjectEventManagerObstacleWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacleSpawnInfo);
}
inline void
GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned(::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                              { "HandleMultiplayerBeatmapObjectEventManagerSliderWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sliderSpawnInfo);
}
inline void GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut(::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                              { "HandleMultiplayerBeatmapObjectEventManagerBeatmapObjectWasCut", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteCutInfo);
}
inline bool GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::AreNotesSame(::GlobalNamespace::NoteController* noteController,
                                                                                          ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(),
                                              { "AreNotesSame", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, noteController, noteCutInfo);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager* GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::New_ctor(
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager_InitData* initData, ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager* beatmapObjectEventManager,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* gameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderHeadGameNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController_Pool* burstSliderGameNotePool, ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController_Pool* bombNotePool,
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController_Pool* obstaclePool, ::GlobalNamespace::VariableMovementDataProvider* variableMovementDataProvider) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*>(initData, beatmapObjectEventManager, gameNotePool, burstSliderHeadGameNotePool,
                                                                                                          burstSliderGameNotePool, bombNotePool, obstaclePool, variableMovementDataProvider));
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
