#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AccelerationStructureOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__BuildFlags_impl.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__AccelerationStructureOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::*)()>(
    &::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0d590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags& UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::__cordl_internal_get_buildFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildFlags;
}
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags const& UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::__cordl_internal_get_buildFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buildFlags;
}
constexpr void UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::__cordl_internal_set_buildFlags(::UnityEngine::Rendering::UnifiedRayTracing::BuildFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buildFlags = value;
}
inline void UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions* UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UnifiedRayTracing::AccelerationStructureOptions::AccelerationStructureOptions() {}
