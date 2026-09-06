#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberSwingRatingCounter.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidFinishReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounter.get_beforeCutRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ISaberSwingRatingCounter::*)()>(&::GlobalNamespace::ISaberSwingRatingCounter::get_beforeCutRating)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounter.get_afterCutRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::ISaberSwingRatingCounter::*)()>(&::GlobalNamespace::ISaberSwingRatingCounter::get_afterCutRating)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounter.RegisterDidChangeReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(
    &::GlobalNamespace::ISaberSwingRatingCounter::RegisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounter.RegisterDidFinishReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(
    &::GlobalNamespace::ISaberSwingRatingCounter::RegisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounter.UnregisterDidChangeReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver*)>(
    &::GlobalNamespace::ISaberSwingRatingCounter::UnregisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounter.UnregisterDidFinishReceiver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*)>(
    &::GlobalNamespace::ISaberSwingRatingCounter::UnregisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 5 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::ISaberSwingRatingCounter::get_beforeCutRating() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::ISaberSwingRatingCounter::get_afterCutRating() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::ISaberSwingRatingCounter::RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::ISaberSwingRatingCounter::RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::ISaberSwingRatingCounter::UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver* receiver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
inline void GlobalNamespace::ISaberSwingRatingCounter::UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* receiver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISaberSwingRatingCounter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, receiver);
}
