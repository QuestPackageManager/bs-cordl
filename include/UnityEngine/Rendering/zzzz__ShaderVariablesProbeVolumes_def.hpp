#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderVariablesProbeVolumes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__uint4_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderVariablesProbeVolumes)
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderVariablesProbeVolumes;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderVariablesProbeVolumes);
// Dependencies Unity.Mathematics.uint4, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderVariablesProbeVolumes
struct CORDL_TYPE ShaderVariablesProbeVolumes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderVariablesProbeVolumes();

  // Ctor Parameters [CppParam { name: "_Offset_LayerCount", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_MinLoadedCellInEntries_IndirectionEntryDim", ty:
  // "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_MaxLoadedCellInEntries_RcpIndirectionEntryDim", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None },
  // CppParam { name: "_PoolDim_MinBrickSize", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_RcpPoolDim_XY", ty: "::UnityEngine::Vector4", modifiers: "",
  // def_value: None }, CppParam { name: "_MinEntryPos_Noise", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_EntryCount_X_XY_LeakReduction", ty:
  // "::Unity::Mathematics::uint4", modifiers: "", def_value: None }, CppParam { name: "_Biases_NormalizationClamp", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name:
  // "_FrameIndex_Weights", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "_ProbeVolumeLayerMask", ty: "::Unity::Mathematics::uint4", modifiers: "", def_value: None
  // }]
  constexpr ShaderVariablesProbeVolumes(::UnityEngine::Vector4 _Offset_LayerCount, ::UnityEngine::Vector4 _MinLoadedCellInEntries_IndirectionEntryDim,
                                        ::UnityEngine::Vector4 _MaxLoadedCellInEntries_RcpIndirectionEntryDim, ::UnityEngine::Vector4 _PoolDim_MinBrickSize, ::UnityEngine::Vector4 _RcpPoolDim_XY,
                                        ::UnityEngine::Vector4 _MinEntryPos_Noise, ::Unity::Mathematics::uint4 _EntryCount_X_XY_LeakReduction, ::UnityEngine::Vector4 _Biases_NormalizationClamp,
                                        ::UnityEngine::Vector4 _FrameIndex_Weights, ::Unity::Mathematics::uint4 _ProbeVolumeLayerMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12131 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field _Offset_LayerCount, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 _Offset_LayerCount;

  /// @brief Field _MinLoadedCellInEntries_IndirectionEntryDim, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 _MinLoadedCellInEntries_IndirectionEntryDim;

  /// @brief Field _MaxLoadedCellInEntries_RcpIndirectionEntryDim, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 _MaxLoadedCellInEntries_RcpIndirectionEntryDim;

  /// @brief Field _PoolDim_MinBrickSize, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Vector4 _PoolDim_MinBrickSize;

  /// @brief Field _RcpPoolDim_XY, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 _RcpPoolDim_XY;

  /// @brief Field _MinEntryPos_Noise, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Vector4 _MinEntryPos_Noise;

  /// @brief Field _EntryCount_X_XY_LeakReduction, offset: 0x60, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 _EntryCount_X_XY_LeakReduction;

  /// @brief Field _Biases_NormalizationClamp, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Vector4 _Biases_NormalizationClamp;

  /// @brief Field _FrameIndex_Weights, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Vector4 _FrameIndex_Weights;

  /// @brief Field _ProbeVolumeLayerMask, offset: 0x90, size: 0x10, def value: None
  ::Unity::Mathematics::uint4 _ProbeVolumeLayerMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _Offset_LayerCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _MinLoadedCellInEntries_IndirectionEntryDim) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _MaxLoadedCellInEntries_RcpIndirectionEntryDim) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _PoolDim_MinBrickSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _RcpPoolDim_XY) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _MinEntryPos_Noise) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _EntryCount_X_XY_LeakReduction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _Biases_NormalizationClamp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _FrameIndex_Weights) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, _ProbeVolumeLayerMask) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderVariablesProbeVolumes, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderVariablesProbeVolumes, "UnityEngine.Rendering", "ShaderVariablesProbeVolumes");
