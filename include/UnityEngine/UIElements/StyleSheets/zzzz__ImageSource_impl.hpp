#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/ImageSource.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__ImageSource_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::ImageSource.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::ImageSource::*)()>(
    &::UnityEngine::UIElements::StyleSheets::ImageSource::IsNull)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6ade0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ImageSource>::get(),
                                                                               "IsNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StyleSheets::ImageSource::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ImageSource>::get(),
                                                                             "IsNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "renderTexture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::StyleSheets::ImageSource::ImageSource(::UnityW<::UnityEngine::Texture2D> texture, ::UnityW<::UnityEngine::Sprite> sprite,
                                                                           ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage,
                                                                           ::UnityW<::UnityEngine::RenderTexture> renderTexture) noexcept {
  this->texture = texture;
  this->sprite = sprite;
  this->vectorImage = vectorImage;
  this->renderTexture = renderTexture;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::ImageSource::ImageSource() {}
