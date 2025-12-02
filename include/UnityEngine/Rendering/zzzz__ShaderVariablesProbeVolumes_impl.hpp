#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderVariablesProbeVolumes.hpp"
#include "Unity/Mathematics/zzzz__uint4_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariablesProbeVolumes_def.hpp"
// Ctor Parameters [CppParam { name: "_Offset_LayerCount", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MinLoadedCellInEntries_IndirectionEntryDim", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_MaxLoadedCellInEntries_RcpIndirectionEntryDim", ty: "::UnityEngine::Vector4", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_PoolDim_MinBrickSize", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_RcpPoolDim_XY", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_MinEntryPos_Noise", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_EntryCount_X_XY_LeakReduction", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Biases_NormalizationClamp", ty: "::UnityEngine::Vector4", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_FrameIndex_Weights", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ProbeVolumeLayerMask", ty:
// "::Unity::Mathematics::uint4", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderVariablesProbeVolumes::ShaderVariablesProbeVolumes(
    ::UnityEngine::Vector4 _Offset_LayerCount, ::UnityEngine::Vector4 _MinLoadedCellInEntries_IndirectionEntryDim, ::UnityEngine::Vector4 _MaxLoadedCellInEntries_RcpIndirectionEntryDim,
    ::UnityEngine::Vector4 _PoolDim_MinBrickSize, ::UnityEngine::Vector4 _RcpPoolDim_XY, ::UnityEngine::Vector4 _MinEntryPos_Noise, ::Unity::Mathematics::uint4 _EntryCount_X_XY_LeakReduction,
    ::UnityEngine::Vector4 _Biases_NormalizationClamp, ::UnityEngine::Vector4 _FrameIndex_Weights, ::Unity::Mathematics::uint4 _ProbeVolumeLayerMask) noexcept {
  this->_Offset_LayerCount = _Offset_LayerCount;
  this->_MinLoadedCellInEntries_IndirectionEntryDim = _MinLoadedCellInEntries_IndirectionEntryDim;
  this->_MaxLoadedCellInEntries_RcpIndirectionEntryDim = _MaxLoadedCellInEntries_RcpIndirectionEntryDim;
  this->_PoolDim_MinBrickSize = _PoolDim_MinBrickSize;
  this->_RcpPoolDim_XY = _RcpPoolDim_XY;
  this->_MinEntryPos_Noise = _MinEntryPos_Noise;
  this->_EntryCount_X_XY_LeakReduction = _EntryCount_X_XY_LeakReduction;
  this->_Biases_NormalizationClamp = _Biases_NormalizationClamp;
  this->_FrameIndex_Weights = _FrameIndex_Weights;
  this->_ProbeVolumeLayerMask = _ProbeVolumeLayerMask;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderVariablesProbeVolumes::ShaderVariablesProbeVolumes() {}
