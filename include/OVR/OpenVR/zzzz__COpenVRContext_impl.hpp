#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "OVR/OpenVR/zzzz__COpenVRContext_def.hpp"
// Ctor Parameters [CppParam { name: "m_pVRSystem", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRChaperone", ty: "void*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_pVRChaperoneSetup", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRCompositor", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_pVROverlay", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRResources", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_pVRRenderModels", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRExtendedDisplay", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_pVRSettings", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRApplications", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_pVRTrackedCamera", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRScreenshots", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_pVRDriverManager", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRInput", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRIOBuffer", ty:
// "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_pVRSpatialAnchors", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::COpenVRContext::COpenVRContext(void* m_pVRSystem, void* m_pVRChaperone, void* m_pVRChaperoneSetup, void* m_pVRCompositor, void* m_pVROverlay, void* m_pVRResources,
                                                        void* m_pVRRenderModels, void* m_pVRExtendedDisplay, void* m_pVRSettings, void* m_pVRApplications, void* m_pVRTrackedCamera,
                                                        void* m_pVRScreenshots, void* m_pVRDriverManager, void* m_pVRInput, void* m_pVRIOBuffer, void* m_pVRSpatialAnchors) noexcept {
  this->m_pVRSystem = m_pVRSystem;
  this->m_pVRChaperone = m_pVRChaperone;
  this->m_pVRChaperoneSetup = m_pVRChaperoneSetup;
  this->m_pVRCompositor = m_pVRCompositor;
  this->m_pVROverlay = m_pVROverlay;
  this->m_pVRResources = m_pVRResources;
  this->m_pVRRenderModels = m_pVRRenderModels;
  this->m_pVRExtendedDisplay = m_pVRExtendedDisplay;
  this->m_pVRSettings = m_pVRSettings;
  this->m_pVRApplications = m_pVRApplications;
  this->m_pVRTrackedCamera = m_pVRTrackedCamera;
  this->m_pVRScreenshots = m_pVRScreenshots;
  this->m_pVRDriverManager = m_pVRDriverManager;
  this->m_pVRInput = m_pVRInput;
  this->m_pVRIOBuffer = m_pVRIOBuffer;
  this->m_pVRSpatialAnchors = m_pVRSpatialAnchors;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::COpenVRContext::COpenVRContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
