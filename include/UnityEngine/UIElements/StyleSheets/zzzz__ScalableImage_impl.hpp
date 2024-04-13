#pragma once
#include "UnityEngine/UIElements/StyleSheets/zzzz__ScalableImage_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::ScalableImage.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::StyleSheets::ScalableImage::*)()>(
    &::UnityEngine::UIElements::StyleSheets::ScalableImage::ToString)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x3335f84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::UIElements::StyleSheets::ScalableImage::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::ScalableImage>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "highResolutionImage", ty:
// "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::StyleSheets::ScalableImage::ScalableImage(::UnityW<::UnityEngine::Texture2D> normalImage, ::UnityW<::UnityEngine::Texture2D> highResolutionImage) noexcept {
  this->normalImage = normalImage;
  this->highResolutionImage = highResolutionImage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::ScalableImage::ScalableImage() {}
