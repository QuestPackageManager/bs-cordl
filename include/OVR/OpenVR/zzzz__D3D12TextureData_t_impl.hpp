#pragma once
// IWYU pragma private; include "OVR/OpenVR/D3D12TextureData_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__D3D12TextureData_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_pResource", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pCommandQueue", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_nNodeMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::D3D12TextureData_t::D3D12TextureData_t(void* m_pResource, void* m_pCommandQueue, uint32_t m_nNodeMask) noexcept {
  this->m_pResource = m_pResource;
  this->m_pCommandQueue = m_pCommandQueue;
  this->m_nNodeMask = m_nNodeMask;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::D3D12TextureData_t::D3D12TextureData_t() {}
