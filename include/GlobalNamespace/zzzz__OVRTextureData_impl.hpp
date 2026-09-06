#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTextureData.hpp"
#include "GlobalNamespace/zzzz__OVRTextureFormat_impl.hpp"
#include "UnityEngine/zzzz__TextureFormat_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTextureData_def.hpp"
// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "format", ty: "::GlobalNamespace::OVRTextureFormat",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "transcodedFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: Some("{}"), comment: None }, CppParam {
// name: "uri", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRTextureData::OVRTextureData(::ArrayW<uint8_t> data, int32_t width, int32_t height, ::GlobalNamespace::OVRTextureFormat format,
                                                            ::UnityEngine::TextureFormat transcodedFormat, ::StringW uri) noexcept {
  this->data = data;
  this->width = width;
  this->height = height;
  this->format = format;
  this->transcodedFormat = transcodedFormat;
  this->uri = uri;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRTextureData::OVRTextureData() {}
