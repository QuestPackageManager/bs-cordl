#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__ImageSource_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::ImageSource.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::StyleSheets::ImageSource::*)()>(
    &::UnityEngine::UIElements::StyleSheets::ImageSource::IsNull)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c7fc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ImageSource>::get(),
                                                                               "IsNull", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::StyleSheets::ImageSource::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ImageSource>::get(),
                                                                             "IsNull", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "texture", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "sprite", ty: "::UnityEngine::Sprite*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "vectorImage", ty: "::UnityEngine::UIElements::VectorImage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "renderTexture", ty:
// "::UnityEngine::RenderTexture*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::StyleSheets::ImageSource::ImageSource(::UnityEngine::Texture2D* texture, ::UnityEngine::Sprite* sprite, ::UnityEngine::UIElements::VectorImage* vectorImage,
                                                                           ::UnityEngine::RenderTexture* renderTexture) noexcept {
  this->texture = texture;
  this->sprite = sprite;
  this->vectorImage = vectorImage;
  this->renderTexture = renderTexture;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::ImageSource::ImageSource() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
