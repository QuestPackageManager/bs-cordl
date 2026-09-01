#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\IInterval.hpp"
#include "UnityEngine/Timeline/zzzz__IInterval_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::IInterval.get_intervalStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::IInterval::*)()>(&::UnityEngine::Timeline::IInterval::get_intervalStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IInterval*>(), { ::i2c::class_of<::UnityEngine::Timeline::IInterval*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::IInterval.get_intervalEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::IInterval::*)()>(&::UnityEngine::Timeline::IInterval::get_intervalEnd)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::IInterval*>(), { ::i2c::class_of<::UnityEngine::Timeline::IInterval*>(), 1 }));
    return ___internal_method;
  }
};
inline int64_t UnityEngine::Timeline::IInterval::get_intervalStart() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IInterval*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t UnityEngine::Timeline::IInterval::get_intervalEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::IInterval*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
