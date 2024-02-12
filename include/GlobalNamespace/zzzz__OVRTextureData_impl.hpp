#pragma once
#include "GlobalNamespace/zzzz__OVRTextureFormat_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
#include "GlobalNamespace/zzzz__OVRTextureFormat_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "format", ty: "::GlobalNamespace::OVRTextureFormat", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "transcodedFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRTextureData::OVRTextureData(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t width, int32_t height, ::GlobalNamespace::OVRTextureFormat format,
                                                            ::UnityEngine::TextureFormat transcodedFormat) noexcept {
  this->data = data;
  this->width = width;
  this->height = height;
  this->format = format;
  this->transcodedFormat = transcodedFormat;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTextureData::OVRTextureData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
