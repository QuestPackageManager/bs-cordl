#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\InfiniteRuntimeClip.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_impl.hpp"
#include "UnityEngine/Timeline/zzzz__InfiniteRuntimeClip_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::InfiniteRuntimeClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::InfiniteRuntimeClip::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::InfiniteRuntimeClip::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69b19f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::InfiniteRuntimeClip.get_intervalStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::InfiniteRuntimeClip::*)()>(&::UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalStart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c5164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::InfiniteRuntimeClip.get_intervalEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::Timeline::InfiniteRuntimeClip::*)()>(&::UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalEnd)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c516c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::InfiniteRuntimeClip.set_enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::InfiniteRuntimeClip::*)(bool)>(&::UnityEngine::Timeline::InfiniteRuntimeClip::set_enable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x69c51c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::InfiniteRuntimeClip.EvaluateAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::InfiniteRuntimeClip::*)(double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::InfiniteRuntimeClip::EvaluateAt)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x69c5250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::InfiniteRuntimeClip.DisableAt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::InfiniteRuntimeClip::*)(double_t, double_t, ::UnityEngine::Playables::FrameData)>(
    &::UnityEngine::Timeline::InfiniteRuntimeClip::DisableAt)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x69c52ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::InfiniteRuntimeClip::__cordl_internal_get_m_Playable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Playable;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::InfiniteRuntimeClip::__cordl_internal_get_m_Playable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Playable;
}
constexpr void UnityEngine::Timeline::InfiniteRuntimeClip::__cordl_internal_set_m_Playable(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Playable = value;
}
inline void UnityEngine::Timeline::InfiniteRuntimeClip::setStaticF_kIntervalEnd(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "kIntervalEnd", ::UnityEngine::Timeline::InfiniteRuntimeClip*>(std::forward<int64_t>(value));
}
inline int64_t UnityEngine::Timeline::InfiniteRuntimeClip::getStaticF_kIntervalEnd() {
  return ::cordl_internals::getStaticField<int64_t, "kIntervalEnd", ::UnityEngine::Timeline::InfiniteRuntimeClip*>();
}
inline void UnityEngine::Timeline::InfiniteRuntimeClip::_ctor(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline int64_t UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalStart() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t UnityEngine::Timeline::InfiniteRuntimeClip::get_intervalEnd() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void UnityEngine::Timeline::InfiniteRuntimeClip::set_enable(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Timeline::InfiniteRuntimeClip::EvaluateAt(double_t localTime, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, frameData);
}
inline void UnityEngine::Timeline::InfiniteRuntimeClip::DisableAt(double_t localTime, double_t rootDuration, ::UnityEngine::Playables::FrameData frameData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Timeline::InfiniteRuntimeClip*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localTime, rootDuration, frameData);
}
inline ::UnityEngine::Timeline::InfiniteRuntimeClip* UnityEngine::Timeline::InfiniteRuntimeClip::New_ctor(::UnityEngine::Playables::Playable playable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::InfiniteRuntimeClip*>(playable));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::InfiniteRuntimeClip::InfiniteRuntimeClip() {}
