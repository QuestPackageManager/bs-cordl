#pragma once
// IWYU pragma private; include "OVR/OpenVR/VRVulkanTextureData_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__VRVulkanTextureData_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_nImage", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pDevice", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pPhysicalDevice", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pInstance", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pQueue", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nQueueFamilyIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nWidth", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nHeight", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFormat", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nSampleCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VRVulkanTextureData_t::VRVulkanTextureData_t(uint64_t  m_nImage, ::System::IntPtr  m_pDevice, ::System::IntPtr  m_pPhysicalDevice, ::System::IntPtr  m_pInstance, ::System::IntPtr  m_pQueue, uint32_t  m_nQueueFamilyIndex, uint32_t  m_nWidth, uint32_t  m_nHeight, uint32_t  m_nFormat, uint32_t  m_nSampleCount) noexcept  {
this->m_nImage = m_nImage;
this->m_pDevice = m_pDevice;
this->m_pPhysicalDevice = m_pPhysicalDevice;
this->m_pInstance = m_pInstance;
this->m_pQueue = m_pQueue;
this->m_nQueueFamilyIndex = m_nQueueFamilyIndex;
this->m_nWidth = m_nWidth;
this->m_nHeight = m_nHeight;
this->m_nFormat = m_nFormat;
this->m_nSampleCount = m_nSampleCount;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::VRVulkanTextureData_t::VRVulkanTextureData_t()   {
}
