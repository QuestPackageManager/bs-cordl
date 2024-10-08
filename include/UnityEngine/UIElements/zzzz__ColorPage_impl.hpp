#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColorPage.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ColorPage.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::ColorPage (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::BMPAlloc)>(&::UnityEngine::UIElements::ColorPage::Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x49cf4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ColorPage>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ColorPage.ToNativeColorPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage (::UnityEngine::UIElements::ColorPage::*)()>(
    &::UnityEngine::UIElements::ColorPage::ToNativeColorPage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x49cf594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ColorPage>::get(), "ToNativeColorPage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ColorPage UnityEngine::UIElements::ColorPage::Init(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ColorPage>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::RenderChain*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::BMPAlloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColorPage, false>(nullptr, ___internal_method, renderChain, alloc);
}
inline ::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage UnityEngine::UIElements::ColorPage::ToNativeColorPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ColorPage>::get(), "ToNativeColorPage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshBuilderNative__NativeColorPage, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ColorPage::ColorPage(bool isValid, ::UnityEngine::Color32 pageAndID) noexcept {
  this->isValid = isValid;
  this->pageAndID = pageAndID;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ColorPage::ColorPage() {}
