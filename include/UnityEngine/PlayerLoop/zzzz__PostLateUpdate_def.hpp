#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/PostLateUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate)
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_BatchModeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ClearImmediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_DirectorLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_DirectorRenderImage;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_EnlightenRuntimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ExecuteGameCenterCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_FinishFrameRendering;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_GUIClearEvents;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_GraphicsWarmupPreloadedShaders;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_InputEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_MemoryFrameMaintenance;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ObjectDispatcherPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ParticleSystemEndUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PhysicsSkinnedClothBeginUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PhysicsSkinnedClothFinishUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerEmitCanvasGeometry;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerSendFrameComplete;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerSendFramePostPresent;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerSendFrameStarted;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerUpdateCanvases;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PresentAfterDraw;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ProcessWebSendMessages;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ProfilerEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ProfilerSynchronizeStats;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ResetInputAxis;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ShaderHandleErrors;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_SortingGroupsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ThreadedLoadingDebug;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_TriggerEndOfFrameCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UIElementsRenderBatchModeOffscreen;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UIElementsRepaintPanels;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateAllRenderers;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateAllSkinnedMeshes;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateAudio;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateCaptureScreenshot;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateCustomRenderTextures;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateLightProbeProxyVolumes;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateResolution;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateSubstance;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateVideoTextures;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_VFXUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_XRPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_XRPostPresent;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_XRPreEndFrame;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_BatchModeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ClearImmediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_DirectorLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_DirectorRenderImage;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_EnlightenRuntimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ExecuteGameCenterCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_FinishFrameRendering;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_GUIClearEvents;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_GraphicsWarmupPreloadedShaders;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_InputEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_MemoryFrameMaintenance;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ObjectDispatcherPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ParticleSystemEndUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PhysicsSkinnedClothBeginUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PhysicsSkinnedClothFinishUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerEmitCanvasGeometry;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerSendFrameComplete;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerSendFramePostPresent;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerSendFrameStarted;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PlayerUpdateCanvases;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_PresentAfterDraw;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ProcessWebSendMessages;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ProfilerEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ProfilerSynchronizeStats;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ResetInputAxis;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ShaderHandleErrors;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_SortingGroupsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_ThreadedLoadingDebug;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_TriggerEndOfFrameCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UIElementsRenderBatchModeOffscreen;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UIElementsRepaintPanels;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateAllRenderers;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateAllSkinnedMeshes;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateAudio;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateCaptureScreenshot;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateCustomRenderTextures;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateLightProbeProxyVolumes;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateResolution;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateSubstance;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_UpdateVideoTextures;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_VFXUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_XRPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_XRPostPresent;
}
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate_XRPreEndFrame;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_BatchModeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ClearImmediateRenderers);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_DirectorLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_DirectorRenderImage);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_EnlightenRuntimeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ExecuteGameCenterCallbacks);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_FinishFrameRendering);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_GUIClearEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_GraphicsWarmupPreloadedShaders);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_InputEndFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_MemoryFrameMaintenance);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ObjectDispatcherPostLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ParticleSystemEndUpdateAll);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothBeginUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothFinishUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerEmitCanvasGeometry);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameComplete);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFramePostPresent);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameStarted);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerUpdateCanvases);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_PresentAfterDraw);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ProcessWebSendMessages);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerEndFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerSynchronizeStats);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ResetInputAxis);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ScriptRunDelayedDynamicFrameRate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ShaderHandleErrors);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_SortingGroupsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_ThreadedLoadingDebug);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_TriggerEndOfFrameCallbacks);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRenderBatchModeOffscreen);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRepaintPanels);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllRenderers);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllSkinnedMeshes);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAudio);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCanvasRectTransform);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCaptureScreenshot);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCustomRenderTextures);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateLightProbeProxyVolumes);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateRectTransform);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateResolution);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateSubstance);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideo);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideoTextures);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_VFXUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_XRPostLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_XRPostPresent);
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate_XRPreEndFrame);
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameStarted
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PlayerSendFrameStarted {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PlayerSendFrameStarted();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10567 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameStarted, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateRectTransform
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateRectTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateRectTransform();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10568 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateRectTransform, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateCanvasRectTransform
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateCanvasRectTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateCanvasRectTransform();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10569 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCanvasRectTransform, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PlayerUpdateCanvases
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PlayerUpdateCanvases {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PlayerUpdateCanvases();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10570 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PlayerUpdateCanvases, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UIElementsRepaintPanels
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UIElementsRepaintPanels {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UIElementsRepaintPanels();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10571 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRepaintPanels, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateAudio
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateAudio {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateAudio();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10572 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAudio, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideo
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateVideo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateVideo();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10573 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideo, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/DirectorLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_DirectorLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_DirectorLateUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10574 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_DirectorLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ScriptRunDelayedDynamicFrameRate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ScriptRunDelayedDynamicFrameRate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ScriptRunDelayedDynamicFrameRate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10575 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ScriptRunDelayedDynamicFrameRate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/VFXUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_VFXUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_VFXUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10576 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_VFXUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ParticleSystemEndUpdateAll
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ParticleSystemEndUpdateAll {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ParticleSystemEndUpdateAll();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ParticleSystemEndUpdateAll, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10578 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateSubstance
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateSubstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateSubstance();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10579 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateSubstance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateCustomRenderTextures
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateCustomRenderTextures {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateCustomRenderTextures();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10580 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCustomRenderTextures, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/XRPostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_XRPostLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_XRPostLateUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10581 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_XRPostLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllRenderers
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateAllRenderers {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateAllRenderers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10582 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllRenderers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateLightProbeProxyVolumes
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateLightProbeProxyVolumes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateLightProbeProxyVolumes();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10583 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateLightProbeProxyVolumes, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/EnlightenRuntimeUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_EnlightenRuntimeUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_EnlightenRuntimeUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10584 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_EnlightenRuntimeUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateAllSkinnedMeshes
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateAllSkinnedMeshes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateAllSkinnedMeshes();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10585 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllSkinnedMeshes, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ProcessWebSendMessages
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ProcessWebSendMessages {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ProcessWebSendMessages();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ProcessWebSendMessages, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/SortingGroupsUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_SortingGroupsUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_SortingGroupsUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10587 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_SortingGroupsUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateVideoTextures
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateVideoTextures {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateVideoTextures();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10588 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideoTextures, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/DirectorRenderImage
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_DirectorRenderImage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_DirectorRenderImage();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10589 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_DirectorRenderImage, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PlayerEmitCanvasGeometry
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PlayerEmitCanvasGeometry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PlayerEmitCanvasGeometry();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10590 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PlayerEmitCanvasGeometry, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UIElementsRenderBatchModeOffscreen
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UIElementsRenderBatchModeOffscreen {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UIElementsRenderBatchModeOffscreen();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10591 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRenderBatchModeOffscreen, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/FinishFrameRendering
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_FinishFrameRendering {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_FinishFrameRendering();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10592 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_FinishFrameRendering, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/BatchModeUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_BatchModeUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_BatchModeUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10593 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_BatchModeUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFrameComplete
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PlayerSendFrameComplete {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PlayerSendFrameComplete();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10594 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameComplete, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateCaptureScreenshot
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateCaptureScreenshot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateCaptureScreenshot();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCaptureScreenshot, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PresentAfterDraw
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PresentAfterDraw {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PresentAfterDraw();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PresentAfterDraw, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ClearImmediateRenderers
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ClearImmediateRenderers {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ClearImmediateRenderers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ClearImmediateRenderers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/XRPostPresent
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_XRPostPresent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_XRPostPresent();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10598 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_XRPostPresent, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/UpdateResolution
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_UpdateResolution {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_UpdateResolution();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10599 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_UpdateResolution, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_InputEndFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_InputEndFrame();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10600 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_InputEndFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/GUIClearEvents
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_GUIClearEvents {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_GUIClearEvents();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10601 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_GUIClearEvents, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ShaderHandleErrors
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ShaderHandleErrors {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ShaderHandleErrors();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10602 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ShaderHandleErrors, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ResetInputAxis
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ResetInputAxis {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ResetInputAxis();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10603 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ResetInputAxis, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ThreadedLoadingDebug
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ThreadedLoadingDebug {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ThreadedLoadingDebug();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10604 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ThreadedLoadingDebug, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ProfilerSynchronizeStats
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ProfilerSynchronizeStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ProfilerSynchronizeStats();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10605 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerSynchronizeStats, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/MemoryFrameMaintenance
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_MemoryFrameMaintenance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_MemoryFrameMaintenance();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10606 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_MemoryFrameMaintenance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ExecuteGameCenterCallbacks
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ExecuteGameCenterCallbacks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ExecuteGameCenterCallbacks();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10607 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ExecuteGameCenterCallbacks, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/XRPreEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_XRPreEndFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_XRPreEndFrame();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10608 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_XRPreEndFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ProfilerEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ProfilerEndFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ProfilerEndFrame();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerEndFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/GraphicsWarmupPreloadedShaders
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_GraphicsWarmupPreloadedShaders {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_GraphicsWarmupPreloadedShaders();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_GraphicsWarmupPreloadedShaders, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PlayerSendFramePostPresent
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PlayerSendFramePostPresent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PlayerSendFramePostPresent();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFramePostPresent, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothBeginUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PhysicsSkinnedClothBeginUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PhysicsSkinnedClothBeginUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10612 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothBeginUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/PhysicsSkinnedClothFinishUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_PhysicsSkinnedClothFinishUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_PhysicsSkinnedClothFinishUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothFinishUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/TriggerEndOfFrameCallbacks
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_TriggerEndOfFrameCallbacks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_TriggerEndOfFrameCallbacks();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10614 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_TriggerEndOfFrameCallbacks, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate/ObjectDispatcherPostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate_ObjectDispatcherPostLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate_ObjectDispatcherPostLateUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate_ObjectDispatcherPostLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.PostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate {
public:
  // Declarations
  using BatchModeUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_BatchModeUpdate;

  using ClearImmediateRenderers = ::UnityEngine::PlayerLoop::PostLateUpdate_ClearImmediateRenderers;

  using DirectorLateUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_DirectorLateUpdate;

  using DirectorRenderImage = ::UnityEngine::PlayerLoop::PostLateUpdate_DirectorRenderImage;

  using EndGraphicsJobsAfterScriptLateUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate;

  using EnlightenRuntimeUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_EnlightenRuntimeUpdate;

  using ExecuteGameCenterCallbacks = ::UnityEngine::PlayerLoop::PostLateUpdate_ExecuteGameCenterCallbacks;

  using FinishFrameRendering = ::UnityEngine::PlayerLoop::PostLateUpdate_FinishFrameRendering;

  using GUIClearEvents = ::UnityEngine::PlayerLoop::PostLateUpdate_GUIClearEvents;

  using GraphicsWarmupPreloadedShaders = ::UnityEngine::PlayerLoop::PostLateUpdate_GraphicsWarmupPreloadedShaders;

  using InputEndFrame = ::UnityEngine::PlayerLoop::PostLateUpdate_InputEndFrame;

  using MemoryFrameMaintenance = ::UnityEngine::PlayerLoop::PostLateUpdate_MemoryFrameMaintenance;

  using ObjectDispatcherPostLateUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_ObjectDispatcherPostLateUpdate;

  using ParticleSystemEndUpdateAll = ::UnityEngine::PlayerLoop::PostLateUpdate_ParticleSystemEndUpdateAll;

  using PhysicsSkinnedClothBeginUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothBeginUpdate;

  using PhysicsSkinnedClothFinishUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothFinishUpdate;

  using PlayerEmitCanvasGeometry = ::UnityEngine::PlayerLoop::PostLateUpdate_PlayerEmitCanvasGeometry;

  using PlayerSendFrameComplete = ::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameComplete;

  using PlayerSendFramePostPresent = ::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFramePostPresent;

  using PlayerSendFrameStarted = ::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameStarted;

  using PlayerUpdateCanvases = ::UnityEngine::PlayerLoop::PostLateUpdate_PlayerUpdateCanvases;

  using PresentAfterDraw = ::UnityEngine::PlayerLoop::PostLateUpdate_PresentAfterDraw;

  using ProcessWebSendMessages = ::UnityEngine::PlayerLoop::PostLateUpdate_ProcessWebSendMessages;

  using ProfilerEndFrame = ::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerEndFrame;

  using ProfilerSynchronizeStats = ::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerSynchronizeStats;

  using ResetInputAxis = ::UnityEngine::PlayerLoop::PostLateUpdate_ResetInputAxis;

  using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::PostLateUpdate_ScriptRunDelayedDynamicFrameRate;

  using ShaderHandleErrors = ::UnityEngine::PlayerLoop::PostLateUpdate_ShaderHandleErrors;

  using SortingGroupsUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_SortingGroupsUpdate;

  using ThreadedLoadingDebug = ::UnityEngine::PlayerLoop::PostLateUpdate_ThreadedLoadingDebug;

  using TriggerEndOfFrameCallbacks = ::UnityEngine::PlayerLoop::PostLateUpdate_TriggerEndOfFrameCallbacks;

  using UIElementsRenderBatchModeOffscreen = ::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRenderBatchModeOffscreen;

  using UIElementsRepaintPanels = ::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRepaintPanels;

  using UpdateAllRenderers = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllRenderers;

  using UpdateAllSkinnedMeshes = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllSkinnedMeshes;

  using UpdateAudio = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAudio;

  using UpdateCanvasRectTransform = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCanvasRectTransform;

  using UpdateCaptureScreenshot = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCaptureScreenshot;

  using UpdateCustomRenderTextures = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCustomRenderTextures;

  using UpdateLightProbeProxyVolumes = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateLightProbeProxyVolumes;

  using UpdateRectTransform = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateRectTransform;

  using UpdateResolution = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateResolution;

  using UpdateSubstance = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateSubstance;

  using UpdateVideo = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideo;

  using UpdateVideoTextures = ::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideoTextures;

  using VFXUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_VFXUpdate;

  using XRPostLateUpdate = ::UnityEngine::PlayerLoop::PostLateUpdate_XRPostLateUpdate;

  using XRPostPresent = ::UnityEngine::PlayerLoop::PostLateUpdate_XRPostPresent;

  using XRPreEndFrame = ::UnityEngine::PlayerLoop::PostLateUpdate_XRPreEndFrame;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10616 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_BatchModeUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/BatchModeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ClearImmediateRenderers, "UnityEngine.PlayerLoop", "PostLateUpdate/ClearImmediateRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_DirectorLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_DirectorRenderImage, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorRenderImage");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_EndGraphicsJobsAfterScriptLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_EnlightenRuntimeUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EnlightenRuntimeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ExecuteGameCenterCallbacks, "UnityEngine.PlayerLoop", "PostLateUpdate/ExecuteGameCenterCallbacks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_FinishFrameRendering, "UnityEngine.PlayerLoop", "PostLateUpdate/FinishFrameRendering");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_GUIClearEvents, "UnityEngine.PlayerLoop", "PostLateUpdate/GUIClearEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_GraphicsWarmupPreloadedShaders, "UnityEngine.PlayerLoop", "PostLateUpdate/GraphicsWarmupPreloadedShaders");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_InputEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/InputEndFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_MemoryFrameMaintenance, "UnityEngine.PlayerLoop", "PostLateUpdate/MemoryFrameMaintenance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ObjectDispatcherPostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/ObjectDispatcherPostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ParticleSystemEndUpdateAll, "UnityEngine.PlayerLoop", "PostLateUpdate/ParticleSystemEndUpdateAll");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothBeginUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/PhysicsSkinnedClothBeginUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PhysicsSkinnedClothFinishUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/PhysicsSkinnedClothFinishUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerEmitCanvasGeometry, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerEmitCanvasGeometry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameComplete, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFrameComplete");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFramePostPresent, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFramePostPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerSendFrameStarted, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFrameStarted");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PlayerUpdateCanvases, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerUpdateCanvases");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_PresentAfterDraw, "UnityEngine.PlayerLoop", "PostLateUpdate/PresentAfterDraw");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ProcessWebSendMessages, "UnityEngine.PlayerLoop", "PostLateUpdate/ProcessWebSendMessages");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/ProfilerEndFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ProfilerSynchronizeStats, "UnityEngine.PlayerLoop", "PostLateUpdate/ProfilerSynchronizeStats");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ResetInputAxis, "UnityEngine.PlayerLoop", "PostLateUpdate/ResetInputAxis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "PostLateUpdate/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ShaderHandleErrors, "UnityEngine.PlayerLoop", "PostLateUpdate/ShaderHandleErrors");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_SortingGroupsUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/SortingGroupsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_ThreadedLoadingDebug, "UnityEngine.PlayerLoop", "PostLateUpdate/ThreadedLoadingDebug");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_TriggerEndOfFrameCallbacks, "UnityEngine.PlayerLoop", "PostLateUpdate/TriggerEndOfFrameCallbacks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRenderBatchModeOffscreen, "UnityEngine.PlayerLoop", "PostLateUpdate/UIElementsRenderBatchModeOffscreen");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UIElementsRepaintPanels, "UnityEngine.PlayerLoop", "PostLateUpdate/UIElementsRepaintPanels");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllRenderers, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAllRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAllSkinnedMeshes, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAllSkinnedMeshes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateAudio, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAudio");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCanvasRectTransform, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCanvasRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCaptureScreenshot, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCaptureScreenshot");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateCustomRenderTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCustomRenderTextures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateLightProbeProxyVolumes, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateLightProbeProxyVolumes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateRectTransform, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateResolution, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateResolution");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateSubstance, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateSubstance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideo, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateVideo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_UpdateVideoTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateVideoTextures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_VFXUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/VFXUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_XRPostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_XRPostPresent, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPostPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate_XRPreEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPreEndFrame");
