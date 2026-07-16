#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/GlobalIllumination/Cookie.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/Experimental/GlobalIllumination/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::GlobalIllumination::Cookie.Defaults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::GlobalIllumination::Cookie (*)()>(&::UnityEngine::Experimental::GlobalIllumination::Cookie::Defaults)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b2bc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Cookie>(), { "Defaults", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::GlobalIllumination::Cookie UnityEngine::Experimental::GlobalIllumination::Cookie::Defaults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Experimental::GlobalIllumination::Cookie>(), { "Defaults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::GlobalIllumination::Cookie>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "instanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "sizes", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie(int32_t instanceID, float_t scale, ::UnityEngine::Vector2 sizes) noexcept {
  this->instanceID = instanceID;
  this->scale = scale;
  this->sizes = sizes;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::GlobalIllumination::Cookie::Cookie() {}
