#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\ITimeControl.hpp"
#include "UnityEngine/Timeline/zzzz__ITimeControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::ITimeControl.SetTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ITimeControl::*)(double_t)>(&::UnityEngine::Timeline::ITimeControl::SetTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), { ::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ITimeControl.OnControlTimeStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ITimeControl::*)()>(&::UnityEngine::Timeline::ITimeControl::OnControlTimeStart)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), { ::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ITimeControl.OnControlTimeStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::ITimeControl::*)()>(&::UnityEngine::Timeline::ITimeControl::OnControlTimeStop)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), { ::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), 2 }));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::ITimeControl::SetTime(double_t time) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void UnityEngine::Timeline::ITimeControl::OnControlTimeStart() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ITimeControl::OnControlTimeStop() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::ITimeControl*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
