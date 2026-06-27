#pragma once
// IWYU pragma private; include "OVR/OpenVR/Compositor_FrameTiming.hpp"
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_impl.hpp"
#include "OVR/OpenVR/zzzz__Compositor_FrameTiming_def.hpp"
// Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nFrameIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flSystemTimeInSeconds", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flPreSubmitGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flPostSubmitGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flTotalRenderGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorRenderGpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorRenderCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorIdleCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flClientFrameIntervalMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flPresentCallCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flWaitForPresentCpuMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flSubmitFrameMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flWaitGetPosesCalledMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flNewPosesReadyMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flNewFrameReadyMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorUpdateStartMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorUpdateEndMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_flCompositorRenderStartMs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_HmdPose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::Compositor_FrameTiming::Compositor_FrameTiming(uint32_t  m_nSize, uint32_t  m_nFrameIndex, uint32_t  m_nNumFramePresents, uint32_t  m_nNumMisPresented, uint32_t  m_nNumDroppedFrames, uint32_t  m_nReprojectionFlags, double_t  m_flSystemTimeInSeconds, float_t  m_flPreSubmitGpuMs, float_t  m_flPostSubmitGpuMs, float_t  m_flTotalRenderGpuMs, float_t  m_flCompositorRenderGpuMs, float_t  m_flCompositorRenderCpuMs, float_t  m_flCompositorIdleCpuMs, float_t  m_flClientFrameIntervalMs, float_t  m_flPresentCallCpuMs, float_t  m_flWaitForPresentCpuMs, float_t  m_flSubmitFrameMs, float_t  m_flWaitGetPosesCalledMs, float_t  m_flNewPosesReadyMs, float_t  m_flNewFrameReadyMs, float_t  m_flCompositorUpdateStartMs, float_t  m_flCompositorUpdateEndMs, float_t  m_flCompositorRenderStartMs, ::OVR::OpenVR::TrackedDevicePose_t  m_HmdPose) noexcept  {
this->m_nSize = m_nSize;
this->m_nFrameIndex = m_nFrameIndex;
this->m_nNumFramePresents = m_nNumFramePresents;
this->m_nNumMisPresented = m_nNumMisPresented;
this->m_nNumDroppedFrames = m_nNumDroppedFrames;
this->m_nReprojectionFlags = m_nReprojectionFlags;
this->m_flSystemTimeInSeconds = m_flSystemTimeInSeconds;
this->m_flPreSubmitGpuMs = m_flPreSubmitGpuMs;
this->m_flPostSubmitGpuMs = m_flPostSubmitGpuMs;
this->m_flTotalRenderGpuMs = m_flTotalRenderGpuMs;
this->m_flCompositorRenderGpuMs = m_flCompositorRenderGpuMs;
this->m_flCompositorRenderCpuMs = m_flCompositorRenderCpuMs;
this->m_flCompositorIdleCpuMs = m_flCompositorIdleCpuMs;
this->m_flClientFrameIntervalMs = m_flClientFrameIntervalMs;
this->m_flPresentCallCpuMs = m_flPresentCallCpuMs;
this->m_flWaitForPresentCpuMs = m_flWaitForPresentCpuMs;
this->m_flSubmitFrameMs = m_flSubmitFrameMs;
this->m_flWaitGetPosesCalledMs = m_flWaitGetPosesCalledMs;
this->m_flNewPosesReadyMs = m_flNewPosesReadyMs;
this->m_flNewFrameReadyMs = m_flNewFrameReadyMs;
this->m_flCompositorUpdateStartMs = m_flCompositorUpdateStartMs;
this->m_flCompositorUpdateEndMs = m_flCompositorUpdateEndMs;
this->m_flCompositorRenderStartMs = m_flCompositorRenderStartMs;
this->m_HmdPose = m_HmdPose;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::Compositor_FrameTiming::Compositor_FrameTiming()   {
}
