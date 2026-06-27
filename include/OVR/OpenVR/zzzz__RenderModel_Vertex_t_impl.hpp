#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_Vertex_t.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_Vertex_t_def.hpp"
// Ctor Parameters [CppParam { name: "vPosition", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfTextureCoord0", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rfTextureCoord1", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_Vertex_t::RenderModel_Vertex_t(::OVR::OpenVR::HmdVector3_t  vPosition, ::OVR::OpenVR::HmdVector3_t  vNormal, float_t  rfTextureCoord0, float_t  rfTextureCoord1) noexcept  {
this->vPosition = vPosition;
this->vNormal = vNormal;
this->rfTextureCoord0 = rfTextureCoord0;
this->rfTextureCoord1 = rfTextureCoord1;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_Vertex_t::RenderModel_Vertex_t()   {
}
