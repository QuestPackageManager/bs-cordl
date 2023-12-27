#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_TextureMap_t_def.hpp"
// Ctor Parameters [CppParam { name: "unWidth", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unHeight", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "rubTextureMapData", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_TextureMap_t::RenderModel_TextureMap_t(uint16_t unWidth, uint16_t unHeight, void* rubTextureMapData) noexcept {
  this->unWidth = unWidth;
  this->unHeight = unHeight;
  this->rubTextureMapData = rubTextureMapData;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_TextureMap_t::RenderModel_TextureMap_t() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
