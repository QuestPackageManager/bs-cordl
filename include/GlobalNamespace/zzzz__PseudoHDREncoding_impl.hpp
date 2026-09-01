#pragma once
// IWYU pragma private; include "GlobalNamespace\PseudoHDREncoding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PseudoHDREncoding_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PseudoHDREncoding.CreatePseudoHDREncodedTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)(::UnityEngine::RenderTexture*)>(
    &::GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x58e4670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PseudoHDREncoding*>(), { "CreatePseudoHDREncodedTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PseudoHDREncoding::setStaticF__material(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "_material", ::GlobalNamespace::PseudoHDREncoding*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::PseudoHDREncoding::getStaticF__material() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "_material", ::GlobalNamespace::PseudoHDREncoding*>();
}
inline ::UnityW<::UnityEngine::RenderTexture> GlobalNamespace::PseudoHDREncoding::CreatePseudoHDREncodedTexture(::UnityEngine::RenderTexture* src) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PseudoHDREncoding*>(), { "CreatePseudoHDREncodedTexture", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method, src);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PseudoHDREncoding::PseudoHDREncoding() {}
