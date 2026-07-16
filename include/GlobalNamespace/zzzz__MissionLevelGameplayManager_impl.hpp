#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelGameplayManager.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager_InitData::*)(bool)>(&::GlobalNamespace::MissionLevelGameplayManager_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5915ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::MissionLevelGameplayManager_InitData::__cordl_internal_get_failOn0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOn0Energy;
}
constexpr bool const& GlobalNamespace::MissionLevelGameplayManager_InitData::__cordl_internal_get_failOn0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOn0Energy;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager_InitData::__cordl_internal_set_failOn0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failOn0Energy = value;
}
inline void GlobalNamespace::MissionLevelGameplayManager_InitData::_ctor(bool failOn0Energy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager_InitData*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, failOn0Energy);
}
inline ::GlobalNamespace::MissionLevelGameplayManager_InitData* GlobalNamespace::MissionLevelGameplayManager_InitData::New_ctor(bool failOn0Energy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelGameplayManager_InitData*>(failOn0Energy));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelGameplayManager_InitData::MissionLevelGameplayManager_InitData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState::MissionLevelGameplayManager_GameState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState::MissionLevelGameplayManager_GameState() {}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState GlobalNamespace::MissionLevelGameplayManager_GameState::Intro{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState GlobalNamespace::MissionLevelGameplayManager_GameState::Playing{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState GlobalNamespace::MissionLevelGameplayManager_GameState::Paused{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState GlobalNamespace::MissionLevelGameplayManager_GameState::Resuming{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState GlobalNamespace::MissionLevelGameplayManager_GameState::Finished{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState GlobalNamespace::MissionLevelGameplayManager_GameState::Failed{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::*)(int32_t)>(
    &::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5915614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5915ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x5915cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59162ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59162f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591632c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager>& GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> const& GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager__Start_d__23::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelGameplayManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::MissionLevelGameplayManager__Start_d__23::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionLevelGameplayManager__Start_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionLevelGameplayManager__Start_d__23::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23* GlobalNamespace::MissionLevelGameplayManager__Start_d__23::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelGameplayManager__Start_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MissionLevelGameplayManager__Start_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MissionLevelGameplayManager__Start_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MissionLevelGameplayManager__Start_d__23::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MissionLevelGameplayManager__Start_d__23::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MissionLevelGameplayManager__Start_d__23::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MissionLevelGameplayManager__Start_d__23::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelGameplayManager__Start_d__23::MissionLevelGameplayManager__Start_d__23() {}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::add_levelDidStartEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59151a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "add_levelDidStartEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelDidStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::remove_levelDidStartEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5915254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "remove_levelDidStartEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5915300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59153ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::add_levelFailedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5915458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "add_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelFailedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::remove_levelFailedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5915504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "remove_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.get_levelEndStateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelCompletionResults_LevelEndStateType (::GlobalNamespace::MissionLevelGameplayManager::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager::get_levelEndStateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59155b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "get_levelEndStateType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59155b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionLevelGameplayManager::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager::Start)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59155c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::OnDestroy)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x591561c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5915b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandleGameEnergyDidReach0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandleGameEnergyDidReach0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5915b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandleGameEnergyDidReach0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandleMissionObjectiveCheckersManagerObjectiveDidFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager::HandleMissionObjectiveCheckersManagerObjectiveDidFail)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5915bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandleMissionObjectiveCheckersManagerObjectiveDidFail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandleSongDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5915c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandleSongDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerCanPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action_1<bool>*)>(
    &::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerCanPause)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5915c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(),
                                                                                           { "HandlePauseControllerCanPause", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerDidPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5915c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerDidPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerDidStartResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(
    &::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidStartResume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5915cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerDidStartResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerDidResume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5915cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerDidResume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5915cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__missionObjectiveCheckersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__missionObjectiveCheckersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionObjectiveCheckersManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameSongController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameSongController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameSongController;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameSongController = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameEnergyCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameEnergyCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameEnergyCounter = value;
}
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__pauseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__pauseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pauseController;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pauseController = value;
}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_InitData*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_InitData* const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__initData(::GlobalNamespace::MissionLevelGameplayManager_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelDidStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDidStartEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelDidStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelDidStartEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelDidStartEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelDidStartEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelFinishedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFinishedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFailedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFailedEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelFailedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFailedEvent = value;
}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameState;
}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameState;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameState(::GlobalNamespace::MissionLevelGameplayManager_GameState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameState = value;
}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__prePauseGameState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prePauseGameState;
}
constexpr ::GlobalNamespace::MissionLevelGameplayManager_GameState const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__prePauseGameState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prePauseGameState;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__prePauseGameState(::GlobalNamespace::MissionLevelGameplayManager_GameState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prePauseGameState = value;
}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__levelEndStateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndStateType;
}
constexpr ::GlobalNamespace::LevelCompletionResults_LevelEndStateType const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__levelEndStateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelEndStateType;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__levelEndStateType(::GlobalNamespace::LevelCompletionResults_LevelEndStateType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelEndStateType = value;
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelDidStartEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "add_levelDidStartEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelDidStartEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "remove_levelDidStartEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelFinishedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelFinishedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelFailedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "add_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelFailedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "remove_levelFailedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::LevelCompletionResults_LevelEndStateType GlobalNamespace::MissionLevelGameplayManager::get_levelEndStateType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "get_levelEndStateType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionLevelGameplayManager::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandleGameEnergyDidReach0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandleGameEnergyDidReach0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandleMissionObjectiveCheckersManagerObjectiveDidFail() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandleMissionObjectiveCheckersManagerObjectiveDidFail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandleSongDidFinish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandleSongDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerCanPause(::System::Action_1<bool>* canPause) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerCanPause", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canPause);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidPause() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerDidPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidStartResume() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerDidStartResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidResume() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { "HandlePauseControllerDidResume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionLevelGameplayManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelGameplayManager* GlobalNamespace::MissionLevelGameplayManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionLevelGameplayManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr GlobalNamespace::MissionLevelGameplayManager::operator ::GlobalNamespace::ILevelEndActions*() noexcept {
  return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelEndActions"
constexpr ::GlobalNamespace::ILevelEndActions* GlobalNamespace::MissionLevelGameplayManager::i___GlobalNamespace__ILevelEndActions() noexcept {
  return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
constexpr GlobalNamespace::MissionLevelGameplayManager::operator ::GlobalNamespace::ILevelStartController*() noexcept {
  return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelStartController"
constexpr ::GlobalNamespace::ILevelStartController* GlobalNamespace::MissionLevelGameplayManager::i___GlobalNamespace__ILevelStartController() noexcept {
  return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelGameplayManager::MissionLevelGameplayManager() {}
