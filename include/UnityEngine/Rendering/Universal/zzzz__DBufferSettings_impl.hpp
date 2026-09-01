#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\DBufferSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSurfaceData_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DBufferSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::DBufferSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::DBufferSettings::*)()>(&::UnityEngine::Rendering::Universal::DBufferSettings::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68adafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData& UnityEngine::Rendering::Universal::DBufferSettings::__cordl_internal_get_surfaceData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceData;
}
constexpr ::UnityEngine::Rendering::Universal::DecalSurfaceData const& UnityEngine::Rendering::Universal::DBufferSettings::__cordl_internal_get_surfaceData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surfaceData;
}
constexpr void UnityEngine::Rendering::Universal::DBufferSettings::__cordl_internal_set_surfaceData(::UnityEngine::Rendering::Universal::DecalSurfaceData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___surfaceData = value;
}
inline void UnityEngine::Rendering::Universal::DBufferSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::DBufferSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::DBufferSettings* UnityEngine::Rendering::Universal::DBufferSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::DBufferSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::DBufferSettings::DBufferSettings() {}
