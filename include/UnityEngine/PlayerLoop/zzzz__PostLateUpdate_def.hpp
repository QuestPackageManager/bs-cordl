#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PostLateUpdate)
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__BatchModeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ClearImmediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__DirectorLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__DirectorRenderImage;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__EnlightenRuntimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ExecuteGameCenterCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__FinishFrameRendering;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__GUIClearEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__GraphicsWarmupPreloadedShaders;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__InputEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__MemoryFrameMaintenance;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ParticleSystemEndUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PhysicsSkinnedClothBeginUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PhysicsSkinnedClothFinishUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerEmitCanvasGeometry;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerSendFrameComplete;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerSendFramePostPresent;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerSendFrameStarted;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerUpdateCanvases;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PresentAfterDraw;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ProcessWebSendMessages;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ProfilerEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ProfilerSynchronizeStats;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ResetInputAxis;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ShaderHandleErrors;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__SortingGroupsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ThreadedLoadingDebug;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__TriggerEndOfFrameCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateAllRenderers;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateAllSkinnedMeshes;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateAudio;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateCaptureScreenshot;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateCustomRenderTextures;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateLightProbeProxyVolumes;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateResolution;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateSubstance;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateVideoTextures;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__VFXUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__XRPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__XRPostPresent;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__XRPreEndFrame;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct PostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__BatchModeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ClearImmediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__DirectorLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__DirectorRenderImage;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__EnlightenRuntimeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ExecuteGameCenterCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__FinishFrameRendering;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__GUIClearEvents;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__GraphicsWarmupPreloadedShaders;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__InputEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__MemoryFrameMaintenance;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ParticleSystemEndUpdateAll;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PhysicsSkinnedClothBeginUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PhysicsSkinnedClothFinishUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerEmitCanvasGeometry;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerSendFrameComplete;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerSendFramePostPresent;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerSendFrameStarted;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PlayerUpdateCanvases;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__PresentAfterDraw;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ProcessWebSendMessages;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ProfilerEndFrame;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ProfilerSynchronizeStats;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ResetInputAxis;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ScriptRunDelayedDynamicFrameRate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ShaderHandleErrors;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__SortingGroupsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__ThreadedLoadingDebug;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__TriggerEndOfFrameCallbacks;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateAllRenderers;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateAllSkinnedMeshes;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateAudio;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateCaptureScreenshot;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateCustomRenderTextures;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateLightProbeProxyVolumes;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateResolution;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateSubstance;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateVideo;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__UpdateVideoTextures;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__VFXUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__XRPostLateUpdate;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__XRPostPresent;
}
namespace UnityEngine::PlayerLoop {
struct __PostLateUpdate__XRPreEndFrame;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::PostLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__BatchModeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ClearImmediateRenderers);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorRenderImage);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__EnlightenRuntimeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ExecuteGameCenterCallbacks);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__FinishFrameRendering);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__GUIClearEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__GraphicsWarmupPreloadedShaders);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__InputEndFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__MemoryFrameMaintenance);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ParticleSystemEndUpdateAll);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothBeginUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothFinishUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerEmitCanvasGeometry);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameComplete);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFramePostPresent);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameStarted);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerUpdateCanvases);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__PresentAfterDraw);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ProcessWebSendMessages);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerEndFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerSynchronizeStats);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ResetInputAxis);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ScriptRunDelayedDynamicFrameRate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ShaderHandleErrors);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__SortingGroupsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__ThreadedLoadingDebug);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__TriggerEndOfFrameCallbacks);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllRenderers);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllSkinnedMeshes);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAudio);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCanvasRectTransform);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCaptureScreenshot);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCustomRenderTextures);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateLightProbeProxyVolumes);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateRectTransform);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateResolution);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateSubstance);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideo);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideoTextures);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__VFXUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostLateUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostPresent);
MARK_VAL_T(::UnityEngine::PlayerLoop::__PostLateUpdate__XRPreEndFrame);
// Type: ::PlayerSendFrameStarted
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9330))
// CS Name: ::PostLateUpdate::PlayerSendFrameStarted
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PlayerSendFrameStarted {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PlayerSendFrameStarted();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameStarted, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateRectTransform
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9331))
// CS Name: ::PostLateUpdate::UpdateRectTransform
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateRectTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateRectTransform();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateRectTransform, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateCanvasRectTransform
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9332))
// CS Name: ::PostLateUpdate::UpdateCanvasRectTransform
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateCanvasRectTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateCanvasRectTransform();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCanvasRectTransform, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PlayerUpdateCanvases
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9333))
// CS Name: ::PostLateUpdate::PlayerUpdateCanvases
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PlayerUpdateCanvases {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PlayerUpdateCanvases();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerUpdateCanvases, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateAudio
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9334))
// CS Name: ::PostLateUpdate::UpdateAudio
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateAudio {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateAudio();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAudio, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateVideo
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9335))
// CS Name: ::PostLateUpdate::UpdateVideo
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateVideo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateVideo();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideo, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9336))
// CS Name: ::PostLateUpdate::DirectorLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__DirectorLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__DirectorLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ScriptRunDelayedDynamicFrameRate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9337))
// CS Name: ::PostLateUpdate::ScriptRunDelayedDynamicFrameRate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ScriptRunDelayedDynamicFrameRate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ScriptRunDelayedDynamicFrameRate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ScriptRunDelayedDynamicFrameRate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::VFXUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9338))
// CS Name: ::PostLateUpdate::VFXUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__VFXUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__VFXUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__VFXUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ParticleSystemEndUpdateAll
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9339))
// CS Name: ::PostLateUpdate::ParticleSystemEndUpdateAll
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ParticleSystemEndUpdateAll {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ParticleSystemEndUpdateAll();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ParticleSystemEndUpdateAll, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::EndGraphicsJobsAfterScriptLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9340))
// CS Name: ::PostLateUpdate::EndGraphicsJobsAfterScriptLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateSubstance
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9341))
// CS Name: ::PostLateUpdate::UpdateSubstance
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateSubstance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateSubstance();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateSubstance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateCustomRenderTextures
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9342))
// CS Name: ::PostLateUpdate::UpdateCustomRenderTextures
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateCustomRenderTextures {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateCustomRenderTextures();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCustomRenderTextures, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::XRPostLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9343))
// CS Name: ::PostLateUpdate::XRPostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__XRPostLateUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__XRPostLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateAllRenderers
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9344))
// CS Name: ::PostLateUpdate::UpdateAllRenderers
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateAllRenderers {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateAllRenderers();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllRenderers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateLightProbeProxyVolumes
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9345))
// CS Name: ::PostLateUpdate::UpdateLightProbeProxyVolumes
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateLightProbeProxyVolumes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateLightProbeProxyVolumes();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateLightProbeProxyVolumes, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::EnlightenRuntimeUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9346))
// CS Name: ::PostLateUpdate::EnlightenRuntimeUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__EnlightenRuntimeUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__EnlightenRuntimeUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__EnlightenRuntimeUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateAllSkinnedMeshes
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9347))
// CS Name: ::PostLateUpdate::UpdateAllSkinnedMeshes
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateAllSkinnedMeshes {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateAllSkinnedMeshes();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllSkinnedMeshes, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ProcessWebSendMessages
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9348))
// CS Name: ::PostLateUpdate::ProcessWebSendMessages
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ProcessWebSendMessages {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ProcessWebSendMessages();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ProcessWebSendMessages, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::SortingGroupsUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9349))
// CS Name: ::PostLateUpdate::SortingGroupsUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__SortingGroupsUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__SortingGroupsUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__SortingGroupsUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateVideoTextures
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9350))
// CS Name: ::PostLateUpdate::UpdateVideoTextures
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateVideoTextures {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateVideoTextures();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideoTextures, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::DirectorRenderImage
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9351))
// CS Name: ::PostLateUpdate::DirectorRenderImage
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__DirectorRenderImage {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__DirectorRenderImage();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorRenderImage, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PlayerEmitCanvasGeometry
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9352))
// CS Name: ::PostLateUpdate::PlayerEmitCanvasGeometry
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PlayerEmitCanvasGeometry {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PlayerEmitCanvasGeometry();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerEmitCanvasGeometry, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::FinishFrameRendering
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9353))
// CS Name: ::PostLateUpdate::FinishFrameRendering
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__FinishFrameRendering {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__FinishFrameRendering();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__FinishFrameRendering, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::BatchModeUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9354))
// CS Name: ::PostLateUpdate::BatchModeUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__BatchModeUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__BatchModeUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__BatchModeUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PlayerSendFrameComplete
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9355))
// CS Name: ::PostLateUpdate::PlayerSendFrameComplete
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PlayerSendFrameComplete {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PlayerSendFrameComplete();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameComplete, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateCaptureScreenshot
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9356))
// CS Name: ::PostLateUpdate::UpdateCaptureScreenshot
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateCaptureScreenshot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateCaptureScreenshot();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCaptureScreenshot, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PresentAfterDraw
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9357))
// CS Name: ::PostLateUpdate::PresentAfterDraw
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PresentAfterDraw {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PresentAfterDraw();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PresentAfterDraw, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ClearImmediateRenderers
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9358))
// CS Name: ::PostLateUpdate::ClearImmediateRenderers
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ClearImmediateRenderers {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ClearImmediateRenderers();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ClearImmediateRenderers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::XRPostPresent
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9359))
// CS Name: ::PostLateUpdate::XRPostPresent
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__XRPostPresent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__XRPostPresent();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostPresent, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::UpdateResolution
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9360))
// CS Name: ::PostLateUpdate::UpdateResolution
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__UpdateResolution {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__UpdateResolution();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateResolution, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::InputEndFrame
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9361))
// CS Name: ::PostLateUpdate::InputEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__InputEndFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__InputEndFrame();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__InputEndFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::GUIClearEvents
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9362))
// CS Name: ::PostLateUpdate::GUIClearEvents
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__GUIClearEvents {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__GUIClearEvents();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__GUIClearEvents, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ShaderHandleErrors
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9363))
// CS Name: ::PostLateUpdate::ShaderHandleErrors
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ShaderHandleErrors {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ShaderHandleErrors();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ShaderHandleErrors, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ResetInputAxis
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9364))
// CS Name: ::PostLateUpdate::ResetInputAxis
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ResetInputAxis {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ResetInputAxis();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ResetInputAxis, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ThreadedLoadingDebug
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9365))
// CS Name: ::PostLateUpdate::ThreadedLoadingDebug
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ThreadedLoadingDebug {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ThreadedLoadingDebug();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ThreadedLoadingDebug, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ProfilerSynchronizeStats
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9366))
// CS Name: ::PostLateUpdate::ProfilerSynchronizeStats
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ProfilerSynchronizeStats {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ProfilerSynchronizeStats();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerSynchronizeStats, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::MemoryFrameMaintenance
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9367))
// CS Name: ::PostLateUpdate::MemoryFrameMaintenance
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__MemoryFrameMaintenance {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__MemoryFrameMaintenance();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__MemoryFrameMaintenance, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ExecuteGameCenterCallbacks
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9368))
// CS Name: ::PostLateUpdate::ExecuteGameCenterCallbacks
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ExecuteGameCenterCallbacks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ExecuteGameCenterCallbacks();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ExecuteGameCenterCallbacks, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::XRPreEndFrame
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9369))
// CS Name: ::PostLateUpdate::XRPreEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__XRPreEndFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__XRPreEndFrame();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__XRPreEndFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::ProfilerEndFrame
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9370))
// CS Name: ::PostLateUpdate::ProfilerEndFrame
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__ProfilerEndFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__ProfilerEndFrame();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerEndFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::GraphicsWarmupPreloadedShaders
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9371))
// CS Name: ::PostLateUpdate::GraphicsWarmupPreloadedShaders
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__GraphicsWarmupPreloadedShaders {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__GraphicsWarmupPreloadedShaders();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__GraphicsWarmupPreloadedShaders, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PlayerSendFramePostPresent
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9372))
// CS Name: ::PostLateUpdate::PlayerSendFramePostPresent
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PlayerSendFramePostPresent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PlayerSendFramePostPresent();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFramePostPresent, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PhysicsSkinnedClothBeginUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9373))
// CS Name: ::PostLateUpdate::PhysicsSkinnedClothBeginUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PhysicsSkinnedClothBeginUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PhysicsSkinnedClothBeginUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothBeginUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::PhysicsSkinnedClothFinishUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9374))
// CS Name: ::PostLateUpdate::PhysicsSkinnedClothFinishUpdate
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__PhysicsSkinnedClothFinishUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__PhysicsSkinnedClothFinishUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothFinishUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: ::TriggerEndOfFrameCallbacks
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9375))
// CS Name: ::PostLateUpdate::TriggerEndOfFrameCallbacks
#pragma pack(push, 0)
struct CORDL_TYPE __PostLateUpdate__TriggerEndOfFrameCallbacks {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PostLateUpdate__TriggerEndOfFrameCallbacks();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::__PostLateUpdate__TriggerEndOfFrameCallbacks, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Type: UnityEngine.PlayerLoop::PostLateUpdate
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::PlayerLoop {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9376))
// CS Name: ::UnityEngine.PlayerLoop::PostLateUpdate
#pragma pack(push, 0)
struct CORDL_TYPE PostLateUpdate {
public:
  // Declarations
  using TriggerEndOfFrameCallbacks = ::UnityEngine::PlayerLoop::__PostLateUpdate__TriggerEndOfFrameCallbacks;

  using PhysicsSkinnedClothFinishUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothFinishUpdate;

  using PhysicsSkinnedClothBeginUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothBeginUpdate;

  using PlayerSendFramePostPresent = ::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFramePostPresent;

  using GraphicsWarmupPreloadedShaders = ::UnityEngine::PlayerLoop::__PostLateUpdate__GraphicsWarmupPreloadedShaders;

  using ProfilerEndFrame = ::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerEndFrame;

  using XRPreEndFrame = ::UnityEngine::PlayerLoop::__PostLateUpdate__XRPreEndFrame;

  using ExecuteGameCenterCallbacks = ::UnityEngine::PlayerLoop::__PostLateUpdate__ExecuteGameCenterCallbacks;

  using MemoryFrameMaintenance = ::UnityEngine::PlayerLoop::__PostLateUpdate__MemoryFrameMaintenance;

  using ProfilerSynchronizeStats = ::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerSynchronizeStats;

  using ThreadedLoadingDebug = ::UnityEngine::PlayerLoop::__PostLateUpdate__ThreadedLoadingDebug;

  using ResetInputAxis = ::UnityEngine::PlayerLoop::__PostLateUpdate__ResetInputAxis;

  using ShaderHandleErrors = ::UnityEngine::PlayerLoop::__PostLateUpdate__ShaderHandleErrors;

  using GUIClearEvents = ::UnityEngine::PlayerLoop::__PostLateUpdate__GUIClearEvents;

  using InputEndFrame = ::UnityEngine::PlayerLoop::__PostLateUpdate__InputEndFrame;

  using UpdateResolution = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateResolution;

  using XRPostPresent = ::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostPresent;

  using ClearImmediateRenderers = ::UnityEngine::PlayerLoop::__PostLateUpdate__ClearImmediateRenderers;

  using PresentAfterDraw = ::UnityEngine::PlayerLoop::__PostLateUpdate__PresentAfterDraw;

  using UpdateCaptureScreenshot = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCaptureScreenshot;

  using PlayerSendFrameComplete = ::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameComplete;

  using BatchModeUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__BatchModeUpdate;

  using FinishFrameRendering = ::UnityEngine::PlayerLoop::__PostLateUpdate__FinishFrameRendering;

  using PlayerEmitCanvasGeometry = ::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerEmitCanvasGeometry;

  using DirectorRenderImage = ::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorRenderImage;

  using UpdateVideoTextures = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideoTextures;

  using SortingGroupsUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__SortingGroupsUpdate;

  using ProcessWebSendMessages = ::UnityEngine::PlayerLoop::__PostLateUpdate__ProcessWebSendMessages;

  using UpdateAllSkinnedMeshes = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllSkinnedMeshes;

  using EnlightenRuntimeUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__EnlightenRuntimeUpdate;

  using UpdateLightProbeProxyVolumes = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateLightProbeProxyVolumes;

  using UpdateAllRenderers = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllRenderers;

  using XRPostLateUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostLateUpdate;

  using UpdateCustomRenderTextures = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCustomRenderTextures;

  using UpdateSubstance = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateSubstance;

  using EndGraphicsJobsAfterScriptLateUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate;

  using ParticleSystemEndUpdateAll = ::UnityEngine::PlayerLoop::__PostLateUpdate__ParticleSystemEndUpdateAll;

  using VFXUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__VFXUpdate;

  using ScriptRunDelayedDynamicFrameRate = ::UnityEngine::PlayerLoop::__PostLateUpdate__ScriptRunDelayedDynamicFrameRate;

  using DirectorLateUpdate = ::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorLateUpdate;

  using UpdateVideo = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideo;

  using UpdateAudio = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAudio;

  using PlayerUpdateCanvases = ::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerUpdateCanvases;

  using UpdateCanvasRectTransform = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCanvasRectTransform;

  using UpdateRectTransform = ::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateRectTransform;

  using PlayerSendFrameStarted = ::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameStarted;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostLateUpdate();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::PostLateUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::PostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__BatchModeUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/BatchModeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ClearImmediateRenderers, "UnityEngine.PlayerLoop", "PostLateUpdate/ClearImmediateRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__DirectorRenderImage, "UnityEngine.PlayerLoop", "PostLateUpdate/DirectorRenderImage");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__EndGraphicsJobsAfterScriptLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EndGraphicsJobsAfterScriptLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__EnlightenRuntimeUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/EnlightenRuntimeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ExecuteGameCenterCallbacks, "UnityEngine.PlayerLoop", "PostLateUpdate/ExecuteGameCenterCallbacks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__FinishFrameRendering, "UnityEngine.PlayerLoop", "PostLateUpdate/FinishFrameRendering");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__GUIClearEvents, "UnityEngine.PlayerLoop", "PostLateUpdate/GUIClearEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__GraphicsWarmupPreloadedShaders, "UnityEngine.PlayerLoop", "PostLateUpdate/GraphicsWarmupPreloadedShaders");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__InputEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/InputEndFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__MemoryFrameMaintenance, "UnityEngine.PlayerLoop", "PostLateUpdate/MemoryFrameMaintenance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ParticleSystemEndUpdateAll, "UnityEngine.PlayerLoop", "PostLateUpdate/ParticleSystemEndUpdateAll");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothBeginUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/PhysicsSkinnedClothBeginUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PhysicsSkinnedClothFinishUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/PhysicsSkinnedClothFinishUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerEmitCanvasGeometry, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerEmitCanvasGeometry");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameComplete, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFrameComplete");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFramePostPresent, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFramePostPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerSendFrameStarted, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerSendFrameStarted");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PlayerUpdateCanvases, "UnityEngine.PlayerLoop", "PostLateUpdate/PlayerUpdateCanvases");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__PresentAfterDraw, "UnityEngine.PlayerLoop", "PostLateUpdate/PresentAfterDraw");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ProcessWebSendMessages, "UnityEngine.PlayerLoop", "PostLateUpdate/ProcessWebSendMessages");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/ProfilerEndFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ProfilerSynchronizeStats, "UnityEngine.PlayerLoop", "PostLateUpdate/ProfilerSynchronizeStats");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ResetInputAxis, "UnityEngine.PlayerLoop", "PostLateUpdate/ResetInputAxis");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ScriptRunDelayedDynamicFrameRate, "UnityEngine.PlayerLoop", "PostLateUpdate/ScriptRunDelayedDynamicFrameRate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ShaderHandleErrors, "UnityEngine.PlayerLoop", "PostLateUpdate/ShaderHandleErrors");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__SortingGroupsUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/SortingGroupsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__ThreadedLoadingDebug, "UnityEngine.PlayerLoop", "PostLateUpdate/ThreadedLoadingDebug");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__TriggerEndOfFrameCallbacks, "UnityEngine.PlayerLoop", "PostLateUpdate/TriggerEndOfFrameCallbacks");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllRenderers, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAllRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAllSkinnedMeshes, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAllSkinnedMeshes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateAudio, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateAudio");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCanvasRectTransform, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCanvasRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCaptureScreenshot, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCaptureScreenshot");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateCustomRenderTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateCustomRenderTextures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateLightProbeProxyVolumes, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateLightProbeProxyVolumes");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateRectTransform, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateResolution, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateResolution");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateSubstance, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateSubstance");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideo, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateVideo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__UpdateVideoTextures, "UnityEngine.PlayerLoop", "PostLateUpdate/UpdateVideoTextures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__VFXUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/VFXUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostLateUpdate, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPostLateUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__XRPostPresent, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPostPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::__PostLateUpdate__XRPreEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/XRPreEndFrame");
