#pragma once
// IWYU pragma private; include "GlobalNamespace\AudioManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerConfigSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioManager_AudioFadeType::AudioManager_AudioFadeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManager_AudioFadeType::AudioManager_AudioFadeType() {}
constexpr ::GlobalNamespace::AudioManager_AudioFadeType GlobalNamespace::AudioManager_AudioFadeType::FadeIn{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AudioManager_AudioFadeType GlobalNamespace::AudioManager_AudioFadeType::FadeOut{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AudioManager__FadeMainVolume_d__46._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager__FadeMainVolume_d__46::*)(int32_t)>(&::GlobalNamespace::AudioManager__FadeMainVolume_d__46::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager__FadeMainVolume_d__46.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager__FadeMainVolume_d__46::*)()>(
    &::GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3266f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager__FadeMainVolume_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioManager__FadeMainVolume_d__46::*)()>(&::GlobalNamespace::AudioManager__FadeMainVolume_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3266f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager__FadeMainVolume_d__46.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AudioManager__FadeMainVolume_d__46::*)()>(
    &::GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32670a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager__FadeMainVolume_d__46.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager__FadeMainVolume_d__46::*)()>(
    &::GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32670ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager__FadeMainVolume_d__46.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::AudioManager__FadeMainVolume_d__46::*)()>(
    &::GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32670e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::GlobalNamespace::AudioManager_AudioFadeType& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get_fadeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeType;
}
constexpr ::GlobalNamespace::AudioManager_AudioFadeType const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get_fadeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeType;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set_fadeType(::GlobalNamespace::AudioManager_AudioFadeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeType = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set___4__this(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get__fadeFrom_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeFrom_5__2;
}
constexpr float_t const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get__fadeFrom_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeFrom_5__2;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set__fadeFrom_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeFrom_5__2 = value;
}
constexpr float_t& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get__fadeTo_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeTo_5__3;
}
constexpr float_t const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get__fadeTo_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeTo_5__3;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set__fadeTo_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeTo_5__3 = value;
}
constexpr float_t& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get__timer_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer_5__4;
}
constexpr float_t const& GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_get__timer_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer_5__4;
}
constexpr void GlobalNamespace::AudioManager__FadeMainVolume_d__46::__cordl_internal_set__timer_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timer_5__4 = value;
}
inline void GlobalNamespace::AudioManager__FadeMainVolume_d__46::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioManager__FadeMainVolume_d__46::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AudioManager__FadeMainVolume_d__46::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioManager__FadeMainVolume_d__46* GlobalNamespace::AudioManager__FadeMainVolume_d__46::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioManager__FadeMainVolume_d__46*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::AudioManager__FadeMainVolume_d__46::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::AudioManager__FadeMainVolume_d__46::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::AudioManager__FadeMainVolume_d__46::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AudioManager__FadeMainVolume_d__46::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AudioManager__FadeMainVolume_d__46::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AudioManager__FadeMainVolume_d__46::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManager__FadeMainVolume_d__46::AudioManager__FadeMainVolume_d__46() {}
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_sfxLatency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_sfxLatency)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3266904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_sfxLatency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioManagerConfigSO*, ::GlobalNamespace::GameScenesManager*,
                                                                                                 ::GlobalNamespace::ICoroutineStarter*)>(&::GlobalNamespace::AudioManager::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3266970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::AudioManagerConfigSO*>(), ::i2c::type_of<::GlobalNamespace::GameScenesManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ICoroutineStarter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_mainVolumeFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_mainVolumeFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_mainVolumeFade", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_mainVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_mainVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_mainVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_mainVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(float_t)>(&::GlobalNamespace::AudioManager::set_mainVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_mainVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_musicVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(float_t)>(&::GlobalNamespace::AudioManager::set_musicVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_musicVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_sfxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_sfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_sfxVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_sfxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(float_t)>(&::GlobalNamespace::AudioManager::set_sfxVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3265c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_sfxVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.get_sfxEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::get_sfxEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_sfxEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_sfxEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(bool)>(&::GlobalNamespace::AudioManager::set_sfxEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_sfxEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_musicPitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(float_t)>(&::GlobalNamespace::AudioManager::set_musicPitch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_musicPitch", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.set_musicSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(float_t)>(&::GlobalNamespace::AudioManager::set_musicSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3266d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_musicSpeed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.StartMainVolumeFade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioManager_AudioFadeType, float_t)>(
    &::GlobalNamespace::AudioManager::StartMainVolumeFade)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x3266d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                                                             { "StartMainVolumeFade", {}, { ::i2c::type_of<::GlobalNamespace::AudioManager_AudioFadeType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.FadeMainVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::AudioManager::*)(::GlobalNamespace::AudioManager_AudioFadeType, float_t)>(
    &::GlobalNamespace::AudioManager::FadeMainVolume)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3266ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                                                             { "FadeMainVolume", {}, { ::i2c::type_of<::GlobalNamespace::AudioManager_AudioFadeType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.UpdateMusicPitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::UpdateMusicPitch)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3266c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMusicPitch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.UpdateMusicVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::UpdateMusicVolume)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3266b10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMusicVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.UpdateMainVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::UpdateMainVolume)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3266a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMainVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.UpdateSfxVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::UpdateSfxVolume)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3266b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateSfxVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.UpdateMusicSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::UpdateMusicSpeed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3266d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMusicSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManager.OnResetAudio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioManager::*)()>(&::GlobalNamespace::AudioManager::OnResetAudio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3266f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "OnResetAudio", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO>& GlobalNamespace::AudioManager::__cordl_internal_get__audioManagerConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManagerConfig;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerConfigSO> const& GlobalNamespace::AudioManager::__cordl_internal_get__audioManagerConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManagerConfig;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__audioManagerConfig(::UnityW<::GlobalNamespace::AudioManagerConfigSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManagerConfig = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::AudioManager::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::AudioManager::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coroutineStarter = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AudioManager::__cordl_internal_get__audioMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AudioManager::__cordl_internal_get__audioMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioMixer;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioMixer = value;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::AudioManager::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::AudioManager::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameScenesManager = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::AudioManager::__cordl_internal_get__fadeCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::AudioManager::__cordl_internal_get__fadeCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeCoroutine;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__fadeCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeCoroutine = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__mainVolumeFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolumeFade;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__mainVolumeFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolumeFade;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__mainVolumeFade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainVolumeFade = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__mainVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolume;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__mainVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolume;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__mainVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainVolume = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__musicPitch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPitch;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__musicPitch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicPitch;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__musicPitch(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicPitch = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__musicSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicSpeed;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__musicSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicSpeed;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__musicSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicSpeed = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__musicVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicVolume;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__musicVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicVolume;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__musicVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicVolume = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__musicVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicVolumeOffset;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__musicVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicVolumeOffset;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__musicVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicVolumeOffset = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__sfxVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolumeOffset;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__sfxVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolumeOffset;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__sfxVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxVolumeOffset = value;
}
constexpr float_t& GlobalNamespace::AudioManager::__cordl_internal_get__sfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolume;
}
constexpr float_t const& GlobalNamespace::AudioManager::__cordl_internal_get__sfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolume;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__sfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxVolume = value;
}
constexpr bool& GlobalNamespace::AudioManager::__cordl_internal_get__sfxEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxEnabled;
}
constexpr bool const& GlobalNamespace::AudioManager::__cordl_internal_get__sfxEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxEnabled;
}
constexpr void GlobalNamespace::AudioManager::__cordl_internal_set__sfxEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxEnabled = value;
}
inline float_t GlobalNamespace::AudioManager::get_sfxLatency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_sfxLatency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::_ctor(::GlobalNamespace::AudioManagerConfigSO* audioManagerConfig, ::GlobalNamespace::GameScenesManager* gameScenesManager,
                                                 ::GlobalNamespace::ICoroutineStarter* coroutineStarter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { ".ctor",
                                                                                 {},
                                                                                 { ::i2c::type_of<::GlobalNamespace::AudioManagerConfigSO*>(), ::i2c::type_of<::GlobalNamespace::GameScenesManager*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::ICoroutineStarter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioManagerConfig, gameScenesManager, coroutineStarter);
}
inline float_t GlobalNamespace::AudioManager::get_mainVolumeFade() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_mainVolumeFade", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioManager::get_mainVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_mainVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_mainVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_mainVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::set_musicVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_musicVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioManager::get_sfxVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_sfxVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_sfxVolume(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_sfxVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioManager::get_sfxEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "get_sfxEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::set_sfxEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_sfxEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::set_musicPitch(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_musicPitch", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::set_musicSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "set_musicSpeed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManager::StartMainVolumeFade(::GlobalNamespace::AudioManager_AudioFadeType fadeType, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                                                           { "StartMainVolumeFade", {}, { ::i2c::type_of<::GlobalNamespace::AudioManager_AudioFadeType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fadeType, duration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AudioManager::FadeMainVolume(::GlobalNamespace::AudioManager_AudioFadeType fadeType, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(),
                                                           { "FadeMainVolume", {}, { ::i2c::type_of<::GlobalNamespace::AudioManager_AudioFadeType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, fadeType, duration);
}
inline void GlobalNamespace::AudioManager::UpdateMusicPitch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMusicPitch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::UpdateMusicVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMusicVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::UpdateMainVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMainVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::UpdateSfxVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateSfxVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::UpdateMusicSpeed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "UpdateMusicSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManager::OnResetAudio() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioManager*>(), { "OnResetAudio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioManager* GlobalNamespace::AudioManager::New_ctor(::GlobalNamespace::AudioManagerConfigSO* audioManagerConfig, ::GlobalNamespace::GameScenesManager* gameScenesManager,
                                                                                ::GlobalNamespace::ICoroutineStarter* coroutineStarter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioManager*>(audioManagerConfig, gameScenesManager, coroutineStarter));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManager::AudioManager() {}
