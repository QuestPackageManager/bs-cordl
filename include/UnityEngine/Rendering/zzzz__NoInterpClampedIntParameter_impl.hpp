#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\NoInterpClampedIntParameter.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__NoInterpClampedIntParameter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedIntParameter.get_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::NoInterpClampedIntParameter::*)()>(&::UnityEngine::Rendering::NoInterpClampedIntParameter::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67ccb68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedIntParameter.set_value
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpClampedIntParameter::*)(int32_t)>(&::UnityEngine::Rendering::NoInterpClampedIntParameter::set_value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67ccb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::NoInterpClampedIntParameter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::NoInterpClampedIntParameter::*)(int32_t, int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::NoInterpClampedIntParameter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x67ccb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr int32_t const& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_set_min(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr int32_t& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr int32_t const& UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::NoInterpClampedIntParameter::__cordl_internal_set_max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline int32_t UnityEngine::Rendering::NoInterpClampedIntParameter::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::NoInterpClampedIntParameter::set_value(int32_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::NoInterpClampedIntParameter::_ctor(int32_t value, int32_t min, int32_t max, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, min, max, overrideState);
}
inline ::UnityEngine::Rendering::NoInterpClampedIntParameter* UnityEngine::Rendering::NoInterpClampedIntParameter::New_ctor(int32_t value, int32_t min, int32_t max, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::NoInterpClampedIntParameter*>(value, min, max, overrideState));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::NoInterpClampedIntParameter::NoInterpClampedIntParameter() {}
