#pragma once
// IWYU pragma private; include "OVR/OpenVR/NotificationBitmap_t.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
// Ctor Parameters [CppParam { name: "m_pImageData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nBytesPerPixel", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::NotificationBitmap_t::NotificationBitmap_t(::System::IntPtr  m_pImageData, int32_t  m_nWidth, int32_t  m_nHeight, int32_t  m_nBytesPerPixel) noexcept  {
this->m_pImageData = m_pImageData;
this->m_nWidth = m_nWidth;
this->m_nHeight = m_nHeight;
this->m_nBytesPerPixel = m_nBytesPerPixel;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::NotificationBitmap_t::NotificationBitmap_t()   {
}
