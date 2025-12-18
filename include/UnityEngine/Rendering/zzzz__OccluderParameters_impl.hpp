#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderParameters.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::OccluderParameters::*)(int32_t)>(
    &::UnityEngine::Rendering::OccluderParameters::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x665f5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderParameters>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OccluderParameters::_ctor(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OccluderParameters>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewInstanceID);
}
// Ctor Parameters [CppParam { name: "viewInstanceID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "subviewCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "depthTexture", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthSize", ty:
// "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}") }, CppParam { name: "depthIsArray", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::OccluderParameters::OccluderParameters(int32_t viewInstanceID, int32_t subviewCount, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture,
                                                                           ::UnityEngine::Vector2Int depthSize, bool depthIsArray) noexcept {
  this->viewInstanceID = viewInstanceID;
  this->subviewCount = subviewCount;
  this->depthTexture = depthTexture;
  this->depthSize = depthSize;
  this->depthIsArray = depthIsArray;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::OccluderParameters::OccluderParameters() {}
