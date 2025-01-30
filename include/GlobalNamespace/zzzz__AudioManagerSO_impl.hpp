#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioManagerSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType::AudioManagerSO_AudioFadeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType::AudioManagerSO_AudioFadeType() {}
constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType GlobalNamespace::AudioManagerSO_AudioFadeType::FadeIn{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType GlobalNamespace::AudioManagerSO_AudioFadeType::FadeOut{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::*)(int32_t)>(
    &::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ad15b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::*)()>(
    &::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ad1608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::*)()>(
    &::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::MoveNext)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3ad160c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::*)()>(
    &::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad1704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::*)()>(
    &::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ad170c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::*)()>(
    &::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad1744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get_fadeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeType;
}
constexpr ::GlobalNamespace::AudioManagerSO_AudioFadeType const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get_fadeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fadeType;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set_fadeType(::GlobalNamespace::AudioManagerSO_AudioFadeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fadeType = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AudioManagerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get_duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get_duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___duration;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set_duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___duration = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get__fadeFrom_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeFrom_5__2;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get__fadeFrom_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeFrom_5__2;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set__fadeFrom_5__2(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeFrom_5__2 = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get__fadeTo_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeTo_5__3;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get__fadeTo_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeTo_5__3;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set__fadeTo_5__3(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeTo_5__3 = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get__timer_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer_5__4;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_get__timer_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timer_5__4;
}
constexpr void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::__cordl_internal_set__timer_5__4(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timer_5__4 = value;
}
inline void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43* GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManagerSO__FadeMainVolume_d__43::AudioManagerSO__FadeMainVolume_d__43() {}
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.get_sfxLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::get_sfxLatency)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3ad1038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_sfxLatency",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(::GlobalNamespace::ICoroutineStarter*)>(
    &::GlobalNamespace::AudioManagerSO::Init)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3ad1098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICoroutineStarter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.get_mainVolumeFade
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::get_mainVolumeFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad1148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_mainVolumeFade",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.get_mainVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::get_mainVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad1150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_mainVolume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.set_mainVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(float_t)>(&::GlobalNamespace::AudioManagerSO::set_mainVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad1158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_mainVolume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.set_musicVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(float_t)>(&::GlobalNamespace::AudioManagerSO::set_musicVolume)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3ad11e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_musicVolume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.get_sfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::get_sfxVolume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3ad124c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_sfxVolume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.set_sfxVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(float_t)>(&::GlobalNamespace::AudioManagerSO::set_sfxVolume)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ad0454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_sfxVolume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.get_sfxEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::get_sfxEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ad1264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_sfxEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.set_sfxEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(bool)>(&::GlobalNamespace::AudioManagerSO::set_sfxEnabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3ad126c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_sfxEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.set_musicPitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(float_t)>(&::GlobalNamespace::AudioManagerSO::set_musicPitch)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3ad128c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_musicPitch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.set_musicSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(float_t)>(&::GlobalNamespace::AudioManagerSO::set_musicSpeed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3ad138c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_musicSpeed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.StartMainVolumeFade
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)(::GlobalNamespace::AudioManagerSO_AudioFadeType, float_t)>(
    &::GlobalNamespace::AudioManagerSO::StartMainVolumeFade)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3ad13f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "StartMainVolumeFade", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO_AudioFadeType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.FadeMainVolume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (
    ::GlobalNamespace::AudioManagerSO::*)(::GlobalNamespace::AudioManagerSO_AudioFadeType, float_t)>(&::GlobalNamespace::AudioManagerSO::FadeMainVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3ad1538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "FadeMainVolume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO_AudioFadeType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO.UpdateMainMixerBus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::UpdateMainMixerBus)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ad1160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "UpdateMainMixerBus",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioManagerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AudioManagerSO::*)()>(&::GlobalNamespace::AudioManagerSO::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ad15e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& GlobalNamespace::AudioManagerSO::__cordl_internal_get__audioMixer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioMixer;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__audioMixer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioMixer;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__audioMixer(::UnityW<::UnityEngine::Audio::AudioMixer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioMixer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__spatializerPluginLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerPluginLatency;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__spatializerPluginLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerPluginLatency;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__spatializerPluginLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatializerPluginLatency = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__spatializerSfxVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerSfxVolumeOffset;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__spatializerSfxVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spatializerSfxVolumeOffset;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__spatializerSfxVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spatializerSfxVolumeOffset = value;
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::AudioManagerSO::__cordl_internal_get__coroutineStarter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr ::GlobalNamespace::ICoroutineStarter* const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__coroutineStarter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coroutineStarter;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::AudioManagerSO::__cordl_internal_get__fadeCoroutine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__fadeCoroutine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeCoroutine;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__fadeCoroutine(::UnityEngine::Coroutine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeCoroutine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__mainVolumeFade() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolumeFade;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__mainVolumeFade() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolumeFade;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__mainVolumeFade(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainVolumeFade = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__mainVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolume;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__mainVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainVolume;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__mainVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainVolume = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__musicVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicVolumeOffset;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__musicVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____musicVolumeOffset;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__musicVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____musicVolumeOffset = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__sfxVolumeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolumeOffset;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__sfxVolumeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolumeOffset;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__sfxVolumeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxVolumeOffset = value;
}
constexpr float_t& GlobalNamespace::AudioManagerSO::__cordl_internal_get__sfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolume;
}
constexpr float_t const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__sfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolume;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__sfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxVolume = value;
}
constexpr bool& GlobalNamespace::AudioManagerSO::__cordl_internal_get__sfxEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxEnabled;
}
constexpr bool const& GlobalNamespace::AudioManagerSO::__cordl_internal_get__sfxEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxEnabled;
}
constexpr void GlobalNamespace::AudioManagerSO::__cordl_internal_set__sfxEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxEnabled = value;
}
inline float_t GlobalNamespace::AudioManagerSO::get_sfxLatency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_sfxLatency",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerSO::Init(::GlobalNamespace::ICoroutineStarter* coroutineStarter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ICoroutineStarter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coroutineStarter);
}
inline float_t GlobalNamespace::AudioManagerSO::get_mainVolumeFade() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_mainVolumeFade",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioManagerSO::get_mainVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_mainVolume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerSO::set_mainVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_mainVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManagerSO::set_musicVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_musicVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::AudioManagerSO::get_sfxVolume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_sfxVolume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerSO::set_sfxVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_sfxVolume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::AudioManagerSO::get_sfxEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "get_sfxEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerSO::set_sfxEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_sfxEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManagerSO::set_musicPitch(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_musicPitch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManagerSO::set_musicSpeed(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "set_musicSpeed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::AudioManagerSO::StartMainVolumeFade(::GlobalNamespace::AudioManagerSO_AudioFadeType fadeType, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "StartMainVolumeFade", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO_AudioFadeType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fadeType, duration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::AudioManagerSO::FadeMainVolume(::GlobalNamespace::AudioManagerSO_AudioFadeType fadeType, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "FadeMainVolume", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO_AudioFadeType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method, fadeType, duration);
}
inline void GlobalNamespace::AudioManagerSO::UpdateMainMixerBus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), "UpdateMainMixerBus",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AudioManagerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AudioManagerSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioManagerSO* GlobalNamespace::AudioManagerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AudioManagerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioManagerSO::AudioManagerSO() {}
