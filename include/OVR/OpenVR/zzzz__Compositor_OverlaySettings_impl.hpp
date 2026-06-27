#pragma once
// IWYU pragma private; include "OVR/OpenVR/Compositor_OverlaySettings.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_impl.hpp"
#include "OVR/OpenVR/zzzz__Compositor_OverlaySettings_def.hpp"
// Ctor Parameters [CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "curved", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "antialias", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "uScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gridDivs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gridWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "gridScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "transform", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Compositor_OverlaySettings::Compositor_OverlaySettings(uint32_t  size, bool  curved, bool  antialias, float_t  scale, float_t  distance, float_t  alpha, float_t  uOffset, float_t  vOffset, float_t  uScale, float_t  vScale, float_t  gridDivs, float_t  gridWidth, float_t  gridScale, ::OVR::OpenVR::HmdMatrix44_t  transform) noexcept  {
this->size = size;
this->curved = curved;
this->antialias = antialias;
this->scale = scale;
this->distance = distance;
this->alpha = alpha;
this->uOffset = uOffset;
this->vOffset = vOffset;
this->uScale = uScale;
this->vScale = vScale;
this->gridDivs = gridDivs;
this->gridWidth = gridWidth;
this->gridScale = gridScale;
this->transform = transform;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::Compositor_OverlaySettings::Compositor_OverlaySettings()   {
}
