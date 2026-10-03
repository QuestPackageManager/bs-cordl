#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ReferenceCounter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ReferenceCounter_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter.Inc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::Inc)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0c7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), { "Inc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter.Dec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::Dec)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e0c824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), { "Dec", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0d0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint64_t& UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr uint64_t const& UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::__cordl_internal_set_value(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::Inc() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), { "Inc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::Dec() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), { "Dec", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter* UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::ReferenceCounter::ReferenceCounter() {}
