#pragma once
// IWYU pragma private; include "UnityEngine/WaitForSecondsRealtime.hpp"
#include "UnityEngine/zzzz__CustomYieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForSecondsRealtime_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForSecondsRealtime.get_waitTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::WaitForSecondsRealtime::*)()>(&::UnityEngine::WaitForSecondsRealtime::get_waitTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae8b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { "get_waitTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitForSecondsRealtime.set_waitTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitForSecondsRealtime::*)(float_t)>(&::UnityEngine::WaitForSecondsRealtime::set_waitTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ae8b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { "set_waitTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitForSecondsRealtime.get_keepWaiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::WaitForSecondsRealtime::*)()>(&::UnityEngine::WaitForSecondsRealtime::get_keepWaiting)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6ae8b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { ::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitForSecondsRealtime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitForSecondsRealtime::*)(float_t)>(&::UnityEngine::WaitForSecondsRealtime::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ae8c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::WaitForSecondsRealtime.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::WaitForSecondsRealtime::*)()>(&::UnityEngine::WaitForSecondsRealtime::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ae8c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { ::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), 8 }));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::WaitForSecondsRealtime::__cordl_internal_get__waitTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitTime_k__BackingField;
}
constexpr float_t const& UnityEngine::WaitForSecondsRealtime::__cordl_internal_get__waitTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitTime_k__BackingField;
}
constexpr void UnityEngine::WaitForSecondsRealtime::__cordl_internal_set__waitTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitTime_k__BackingField = value;
}
constexpr float_t& UnityEngine::WaitForSecondsRealtime::__cordl_internal_get_m_WaitUntilTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitUntilTime;
}
constexpr float_t const& UnityEngine::WaitForSecondsRealtime::__cordl_internal_get_m_WaitUntilTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WaitUntilTime;
}
constexpr void UnityEngine::WaitForSecondsRealtime::__cordl_internal_set_m_WaitUntilTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WaitUntilTime = value;
}
inline float_t UnityEngine::WaitForSecondsRealtime::get_waitTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { "get_waitTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::WaitForSecondsRealtime::set_waitTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { "set_waitTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::WaitForSecondsRealtime::get_keepWaiting() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::WaitForSecondsRealtime::_ctor(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::WaitForSecondsRealtime::Reset() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::WaitForSecondsRealtime*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::WaitForSecondsRealtime* UnityEngine::WaitForSecondsRealtime::New_ctor(float_t time) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::WaitForSecondsRealtime*>(time));
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForSecondsRealtime::WaitForSecondsRealtime() {}
