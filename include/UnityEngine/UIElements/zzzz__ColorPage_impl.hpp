#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColorPage.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__RenderChain_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ColorPage.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ColorPage (*)(::UnityEngine::UIElements::UIR::RenderChain*, ::UnityEngine::UIElements::UIR::BMPAlloc)>(
    &::UnityEngine::UIElements::ColorPage::Init)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6dd1970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ColorPage>(),
                                                { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ColorPage.ToNativeColorPage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage (::UnityEngine::UIElements::ColorPage::*)()>(
    &::UnityEngine::UIElements::ColorPage::ToNativeColorPage)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dd1a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ColorPage>(), { "ToNativeColorPage", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::ColorPage UnityEngine::UIElements::ColorPage::Init(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::BMPAlloc alloc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ColorPage>(),
                                              { "Init", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIR::RenderChain*>(), ::i2c::type_of<::UnityEngine::UIElements::UIR::BMPAlloc>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ColorPage>(nullptr, ___internal_method, renderChain, alloc);
}
inline ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage UnityEngine::UIElements::ColorPage::ToNativeColorPage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ColorPage>(), { "ToNativeColorPage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ColorPage::ColorPage(bool isValid, ::UnityEngine::Color32 pageAndID) noexcept {
  this->isValid = isValid;
  this->pageAndID = pageAndID;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ColorPage::ColorPage() {}
