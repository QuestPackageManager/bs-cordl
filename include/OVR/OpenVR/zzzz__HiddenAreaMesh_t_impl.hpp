#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__HiddenAreaMesh_t_def.hpp"
// Ctor Parameters [CppParam { name: "pVertexData", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "unTriangleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::HiddenAreaMesh_t::HiddenAreaMesh_t(void* pVertexData, uint32_t unTriangleCount) noexcept {
  this->pVertexData = pVertexData;
  this->unTriangleCount = unTriangleCount;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::HiddenAreaMesh_t::HiddenAreaMesh_t() {}
