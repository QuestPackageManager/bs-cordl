#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderPathCompatibleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibility_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibleAttribute_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPathCompatibility_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::*)(::UnityEngine::Rendering::Universal::RenderPathCompatibility)>(
    &::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x68d2b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPathCompatibility>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility& UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::__cordl_internal_get_renderPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderPath;
}
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibility const& UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::__cordl_internal_get_renderPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderPath;
}
constexpr void UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::__cordl_internal_set_renderPath(::UnityEngine::Rendering::Universal::RenderPathCompatibility value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderPath = value;
}
inline void UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::_ctor(::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPathCompatibility>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPath);
}
inline ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*
UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::New_ctor(::UnityEngine::Rendering::Universal::RenderPathCompatibility renderPath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute*>(renderPath));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::RenderPathCompatibleAttribute::RenderPathCompatibleAttribute() {}
