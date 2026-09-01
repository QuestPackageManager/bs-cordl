#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\PostProcessParams.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessParams_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::PostProcessParams.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::PostProcessParams (*)()>(&::UnityEngine::Rendering::Universal::PostProcessParams::Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68ab0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessParams>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::PostProcessParams UnityEngine::Rendering::Universal::PostProcessParams::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::PostProcessParams>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::PostProcessParams>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "blitMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestColorFormat", ty:
// "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::PostProcessParams::PostProcessParams(::UnityW<::UnityEngine::Material> blitMaterial,
                                                                                    ::UnityEngine::Experimental::Rendering::GraphicsFormat requestColorFormat) noexcept {
  this->blitMaterial = blitMaterial;
  this->requestColorFormat = requestColorFormat;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::PostProcessParams::PostProcessParams() {}
