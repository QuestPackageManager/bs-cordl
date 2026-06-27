#pragma once
// IWYU pragma private; include "OVR/OpenVR/DriverDirectMode_FrameTiming.hpp"
#include "OVR/OpenVR/zzzz__DriverDirectMode_FrameTiming_def.hpp"
// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::DriverDirectMode_FrameTiming::DriverDirectMode_FrameTiming(uint32_t  m_nSize, uint32_t  m_nNumFramePresents, uint32_t  m_nNumMisPresented, uint32_t  m_nNumDroppedFrames, uint32_t  m_nReprojectionFlags) noexcept  {
this->m_nSize = m_nSize;
this->m_nNumFramePresents = m_nNumFramePresents;
this->m_nNumMisPresented = m_nNumMisPresented;
this->m_nNumDroppedFrames = m_nNumDroppedFrames;
this->m_nReprojectionFlags = m_nReprojectionFlags;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::DriverDirectMode_FrameTiming::DriverDirectMode_FrameTiming()   {
}
