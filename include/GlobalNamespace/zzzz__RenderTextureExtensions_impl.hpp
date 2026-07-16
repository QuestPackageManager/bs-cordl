#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderTextureExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RenderTextureExtensions_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RenderTextureExtensions.GetTexture2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::RenderTextureExtensions::GetTexture2D)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x33245d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderTextureExtensions*>(), { "GetTexture2D", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::RenderTextureExtensions::GetTexture2D(::UnityEngine::RenderTexture* rt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RenderTextureExtensions*>(), { "GetTexture2D", {}, { ::i2c::type_of<::UnityEngine::RenderTexture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, rt);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderTextureExtensions::RenderTextureExtensions() {}
