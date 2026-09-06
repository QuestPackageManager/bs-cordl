#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_def.hpp"
// Ctor Parameters [CppParam { name: "rVertexData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "rIndexData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unTriangleCount", ty:
// "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::OVR::OpenVR::RenderModel_t::RenderModel_t(::System::IntPtr rVertexData, uint32_t unVertexCount, ::System::IntPtr rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept {
  this->rVertexData = rVertexData;
  this->unVertexCount = unVertexCount;
  this->rIndexData = rIndexData;
  this->unTriangleCount = unTriangleCount;
  this->diffuseTextureId = diffuseTextureId;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_t::RenderModel_t() {}
