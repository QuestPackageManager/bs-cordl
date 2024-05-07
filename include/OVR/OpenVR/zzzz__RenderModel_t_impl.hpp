#pragma once
// IWYU pragma private; include "OVR/OpenVR/RenderModel_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__RenderModel_t_def.hpp"
// Ctor Parameters [CppParam { name: "rVertexData", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "unVertexCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rIndexData", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "diffuseTextureId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::RenderModel_t::RenderModel_t(void* rVertexData, uint32_t unVertexCount, void* rIndexData, uint32_t unTriangleCount, int32_t diffuseTextureId) noexcept {
  this->rVertexData = rVertexData;
  this->unVertexCount = unVertexCount;
  this->rIndexData = rIndexData;
  this->unTriangleCount = unTriangleCount;
  this->diffuseTextureId = diffuseTextureId;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::RenderModel_t::RenderModel_t() {}
