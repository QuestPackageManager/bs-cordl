#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderParameters.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OccluderParameters._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::OccluderParameters::*)(int32_t)>(&::UnityEngine::Rendering::OccluderParameters::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6810f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderParameters>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::OccluderParameters::_ctor(int32_t viewInstanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::OccluderParameters>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, viewInstanceID);
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
