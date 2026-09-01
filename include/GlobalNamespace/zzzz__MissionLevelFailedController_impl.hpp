#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionLevelFailedController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelFailedController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextEffect_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelFailedController_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController_InitData::*)(bool)>(&::GlobalNamespace::MissionLevelFailedController_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5918b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MissionLevelFailedController_InitData::__cordl_internal_get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::MissionLevelFailedController_InitData::__cordl_internal_get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::MissionLevelFailedController_InitData::__cordl_internal_set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
inline void GlobalNamespace::MissionLevelFailedController_InitData::_ctor(bool autoRestart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoRestart);
}
inline ::GlobalNamespace::MissionLevelFailedController_InitData* GlobalNamespace::MissionLevelFailedController_InitData::New_ctor(bool autoRestart) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelFailedController_InitData*>(autoRestart));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelFailedController_InitData::MissionLevelFailedController_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::*)(int32_t)>(
    &::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5918b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5918b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5918b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5918cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5918cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5918d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelFailedController>& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelFailedController> const& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelFailedController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::GlobalNamespace::MissionCompletionResults*& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get__missionCompletionResults_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionCompletionResults_5__2;
}
constexpr ::GlobalNamespace::MissionCompletionResults* const& GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_get__missionCompletionResults_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionCompletionResults_5__2;
}
constexpr void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::__cordl_internal_set__missionCompletionResults_5__2(::GlobalNamespace::MissionCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionCompletionResults_5__2 = value;
}
inline void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13* GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelFailedController__LevelFailedCoroutine_d__13::MissionLevelFailedController__LevelFailedCoroutine_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x59188b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::OnDestroy)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59189b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.HandleLevelFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5918ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "HandleLevelFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.LevelFailedCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionLevelFailedController::*)()>(
    &::GlobalNamespace::MissionLevelFailedController::LevelFailedCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5918b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "LevelFailedCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5918b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__levelFailedTextEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedTextEffect;
}
constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__levelFailedTextEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelFailedTextEffect;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedTextEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelFailedTextEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__prepareLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__prepareLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prepareLevelCompletionResults = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveCheckersManager = value;
}
constexpr ::GlobalNamespace::MissionLevelFailedController_InitData*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MissionLevelFailedController_InitData* const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__initData(::GlobalNamespace::MissionLevelFailedController_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectSpawnController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectSpawnController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectSpawnController = value;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameSongController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameSongController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameSongController = value;
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameplayManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayManager;
}
constexpr ::GlobalNamespace::ILevelEndActions* const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameplayManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayManager;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayManager = value;
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::GlobalNamespace::BeatmapObjectManager* const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectManager = value;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionLevelSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelSceneSetupData;
}
constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionLevelSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionLevelSceneSetupData;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__missionLevelSceneSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionLevelSceneSetupData = value;
}
inline void GlobalNamespace::MissionLevelFailedController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelFailedController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelFailedController::HandleLevelFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "HandleLevelFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionLevelFailedController::LevelFailedCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { "LevelFailedCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelFailedController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelFailedController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelFailedController* GlobalNamespace::MissionLevelFailedController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelFailedController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelFailedController::MissionLevelFailedController() {}
