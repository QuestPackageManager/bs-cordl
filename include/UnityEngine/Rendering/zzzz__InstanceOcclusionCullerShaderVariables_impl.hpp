#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionCullerShaderVariables.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceOcclusionCullerShaderVariables_def.hpp"
// Ctor Parameters [CppParam { name: "_DrawInfoAllocIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DrawInfoCount", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_InstanceInfoAllocIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_InstanceInfoCount", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_BoundingSphereInstanceDataAddress", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_DebugCounterIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_InstanceMultiplierShift", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_InstanceOcclusionCullerPad0", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables::InstanceOcclusionCullerShaderVariables(uint32_t _DrawInfoAllocIndex, uint32_t _DrawInfoCount,
                                                                                                                   uint32_t _InstanceInfoAllocIndex, uint32_t _InstanceInfoCount,
                                                                                                                   int32_t _BoundingSphereInstanceDataAddress, int32_t _DebugCounterIndex,
                                                                                                                   int32_t _InstanceMultiplierShift, int32_t _InstanceOcclusionCullerPad0) noexcept {
  this->_DrawInfoAllocIndex = _DrawInfoAllocIndex;
  this->_DrawInfoCount = _DrawInfoCount;
  this->_InstanceInfoAllocIndex = _InstanceInfoAllocIndex;
  this->_InstanceInfoCount = _InstanceInfoCount;
  this->_BoundingSphereInstanceDataAddress = _BoundingSphereInstanceDataAddress;
  this->_DebugCounterIndex = _DebugCounterIndex;
  this->_InstanceMultiplierShift = _InstanceMultiplierShift;
  this->_InstanceOcclusionCullerPad0 = _InstanceOcclusionCullerPad0;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::InstanceOcclusionCullerShaderVariables::InstanceOcclusionCullerShaderVariables() {}
