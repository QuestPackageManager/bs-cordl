#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\StyleSheets\ScalableImage.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::ScalableImage.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::ScalableImage::*)()>(&::UnityEngine::UIElements::StyleSheets::ScalableImage::ToString)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6d12680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>(), 3 }));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleSheets::ScalableImage::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::StyleSheets::ScalableImage>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highResolutionImage", ty:
// "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::ScalableImage::ScalableImage(::UnityW<::UnityEngine::Texture2D> normalImage, ::UnityW<::UnityEngine::Texture2D> highResolutionImage) noexcept {
  this->normalImage = normalImage;
  this->highResolutionImage = highResolutionImage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::ScalableImage::ScalableImage() {}
