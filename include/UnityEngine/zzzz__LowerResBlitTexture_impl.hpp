#pragma once
// IWYU pragma private; include "UnityEngine\LowerResBlitTexture.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LowerResBlitTexture_def.hpp"
//  Writing Method size for method: ::UnityEngine::LowerResBlitTexture.LowerResBlitTextureDontStripMe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LowerResBlitTexture::*)()>(&::UnityEngine::LowerResBlitTexture::LowerResBlitTextureDontStripMe)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6af0320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowerResBlitTexture*>(), { "LowerResBlitTextureDontStripMe", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::LowerResBlitTexture::LowerResBlitTextureDontStripMe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::LowerResBlitTexture*>(), { "LowerResBlitTextureDontStripMe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::LowerResBlitTexture::LowerResBlitTexture() {}
