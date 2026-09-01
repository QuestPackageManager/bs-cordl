#pragma once
// IWYU pragma private; include "GlobalNamespace\IAudioTimeSource.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::IAudioTimeSource_State::IAudioTimeSource_State(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IAudioTimeSource_State::IAudioTimeSource_State() {}
constexpr ::GlobalNamespace::IAudioTimeSource_State GlobalNamespace::IAudioTimeSource_State::Playing{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::IAudioTimeSource_State GlobalNamespace::IAudioTimeSource_State::Paused{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::IAudioTimeSource_State GlobalNamespace::IAudioTimeSource_State::Stopped{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_songTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_songTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_lastFrameDeltaSongTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_lastFrameDeltaSongTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_songEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_songEndTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_songLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_songLength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_timeScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_timeScale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_isReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_isReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IAudioTimeSource.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IAudioTimeSource_State (::GlobalNamespace::IAudioTimeSource::*)()>(&::GlobalNamespace::IAudioTimeSource::get_state)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 6 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::IAudioTimeSource::get_songTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IAudioTimeSource::get_lastFrameDeltaSongTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IAudioTimeSource::get_songEndTime() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IAudioTimeSource::get_songLength() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::IAudioTimeSource::get_timeScale() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::IAudioTimeSource::get_isReady() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::IAudioTimeSource_State GlobalNamespace::IAudioTimeSource::get_state() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IAudioTimeSource*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAudioTimeSource_State>(this, ___internal_method);
}
