#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\IMarker.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::IMarker.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Timeline::IMarker::*)()>(&::UnityEngine::Timeline::IMarker::get_time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::IMarker.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::IMarker::*)(double_t)>(&::UnityEngine::Timeline::IMarker::set_time)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::IMarker.get_parent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::TrackAsset> (::UnityEngine::Timeline::IMarker::*)()>(&::UnityEngine::Timeline::IMarker::get_parent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::IMarker.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::IMarker::*)(::UnityEngine::Timeline::TrackAsset*)>(&::UnityEngine::Timeline::IMarker::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 3 }));
    return ___internal_method;
  }
};
inline double_t UnityEngine::Timeline::IMarker::get_time() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::IMarker::set_time(double_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::IMarker::get_parent() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::TrackAsset>>(this, ___internal_method);
}
inline void UnityEngine::Timeline::IMarker::Initialize(::UnityEngine::Timeline::TrackAsset* parent) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IMarker*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent);
}
