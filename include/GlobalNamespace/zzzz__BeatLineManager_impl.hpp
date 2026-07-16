#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatLineManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatLine_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.get_isMidRotationValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::get_isMidRotationValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c2404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "get_isMidRotationValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.get_midRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::get_midRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c240c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "get_midRotation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.get_rotationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::get_rotationRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c2414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "get_rotationRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58c241c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58c24ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::Update)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x58c253c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatLineManager::*)(::GlobalNamespace::NoteController*)>(&::GlobalNamespace::BeatLineManager::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x58c2a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatLineManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatLineManager::*)()>(&::GlobalNamespace::BeatLineManager::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58c2c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BeatLineManager::__cordl_internal_get__linesYPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linesYPosition;
}
constexpr float_t const& GlobalNamespace::BeatLineManager::__cordl_internal_get__linesYPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linesYPosition;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__linesYPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____linesYPosition = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::BeatLineManager::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::BeatLineManager::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::GlobalNamespace::BeatLine_Pool*& GlobalNamespace::BeatLineManager::__cordl_internal_get__beatLinePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLinePool;
}
constexpr ::GlobalNamespace::BeatLine_Pool* const& GlobalNamespace::BeatLineManager::__cordl_internal_get__beatLinePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLinePool;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__beatLinePool(::GlobalNamespace::BeatLine_Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatLinePool = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::BeatLineManager::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::BeatLineManager::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>*& GlobalNamespace::BeatLineManager::__cordl_internal_get__activeBeatLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBeatLines;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>* const&
GlobalNamespace::BeatLineManager::__cordl_internal_get__activeBeatLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeBeatLines;
}
constexpr void
GlobalNamespace::BeatLineManager::__cordl_internal_set__activeBeatLines(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector4, ::UnityW<::GlobalNamespace::BeatLine>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeBeatLines = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& GlobalNamespace::BeatLineManager::__cordl_internal_get__removeBeatLineKeyList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeBeatLineKeyList;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* const& GlobalNamespace::BeatLineManager::__cordl_internal_get__removeBeatLineKeyList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____removeBeatLineKeyList;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__removeBeatLineKeyList(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____removeBeatLineKeyList = value;
}
constexpr bool& GlobalNamespace::BeatLineManager::__cordl_internal_get__isMidRotationValid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMidRotationValid;
}
constexpr bool const& GlobalNamespace::BeatLineManager::__cordl_internal_get__isMidRotationValid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMidRotationValid;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__isMidRotationValid(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMidRotationValid = value;
}
constexpr float_t& GlobalNamespace::BeatLineManager::__cordl_internal_get__midRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____midRotation;
}
constexpr float_t const& GlobalNamespace::BeatLineManager::__cordl_internal_get__midRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____midRotation;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__midRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____midRotation = value;
}
constexpr float_t& GlobalNamespace::BeatLineManager::__cordl_internal_get__rotationRange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationRange;
}
constexpr float_t const& GlobalNamespace::BeatLineManager::__cordl_internal_get__rotationRange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationRange;
}
constexpr void GlobalNamespace::BeatLineManager::__cordl_internal_set__rotationRange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationRange = value;
}
inline bool GlobalNamespace::BeatLineManager::get_isMidRotationValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "get_isMidRotationValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatLineManager::get_midRotation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "get_midRotation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatLineManager::get_rotationRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "get_rotationRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatLineManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatLineManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatLineManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatLineManager::HandleNoteWasSpawned(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::GlobalNamespace::NoteController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::BeatLineManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatLineManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatLineManager* GlobalNamespace::BeatLineManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatLineManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatLineManager::BeatLineManager() {}
