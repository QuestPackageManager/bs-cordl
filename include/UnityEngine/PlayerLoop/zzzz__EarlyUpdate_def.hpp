#pragma once
// IWYU pragma private; include "UnityEngine/PlayerLoop/EarlyUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(EarlyUpdate)
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ARCoreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_AnalyticsCoreStatsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ClearIntermediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_DeliverIosPlatformEvents;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_DispatchEventQueueEvents;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ExecuteMainThreadJobs;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_GpuTimestamp;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PerformanceAnalyticsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_Physics2DEarlyUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PhysicsResetInterpolatedTransformPosition;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PlayerCleanupCachedData;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PollHtcsPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PollPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PresentBeforeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ProcessMouseInWindow;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ProcessRemoteInput;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_RendererNotifyInvisible;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ResetFrameStatsAfterPresent;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ScriptRunDelayedStartupFrame;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_SpriteAtlasManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_TangoUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UnityWebRequestUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateAsyncInstantiate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateAsyncReadbackManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateContentLoading;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateInputManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateKinect;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateMainGameViewRect;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdatePreloading;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateTextureStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_XRUpdate;
}
// Forward declare root types
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ARCoreUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_AnalyticsCoreStatsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ClearIntermediateRenderers;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ClearLines;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_DeliverIosPlatformEvents;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_DispatchEventQueueEvents;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ExecuteMainThreadJobs;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_GpuTimestamp;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PerformanceAnalyticsUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_Physics2DEarlyUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PhysicsResetInterpolatedTransformPosition;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PlayerCleanupCachedData;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PollHtcsPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PollPlayerConnection;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_PresentBeforeUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ProcessMouseInWindow;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ProcessRemoteInput;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_RendererNotifyInvisible;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ResetFrameStatsAfterPresent;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_ScriptRunDelayedStartupFrame;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_SpriteAtlasManagerUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_TangoUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UnityWebRequestUpdate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateAsyncInstantiate;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateAsyncReadbackManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateCanvasRectTransform;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateContentLoading;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateInputManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateKinect;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateMainGameViewRect;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdatePreloading;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_UpdateTextureStreamingManager;
}
namespace UnityEngine::PlayerLoop {
struct EarlyUpdate_XRUpdate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ARCoreUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_AnalyticsCoreStatsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ClearIntermediateRenderers);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ClearLines);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_DeliverIosPlatformEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_DispatchEventQueueEvents);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ExecuteMainThreadJobs);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_GpuTimestamp);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_PerformanceAnalyticsUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_Physics2DEarlyUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_PhysicsResetInterpolatedTransformPosition);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_PlayerCleanupCachedData);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_PollHtcsPlayerConnection);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_PollPlayerConnection);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_PresentBeforeUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ProcessMouseInWindow);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ProcessRemoteInput);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_RendererNotifyInvisible);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ResetFrameStatsAfterPresent);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_ScriptRunDelayedStartupFrame);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_SpriteAtlasManagerUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_TangoUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UnityWebRequestUpdate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncInstantiate);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncReadbackManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateCanvasRectTransform);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateContentLoading);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateInputManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateKinect);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateMainGameViewRect);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdatePreloading);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateStreamingManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateTextureStreamingManager);
MARK_VAL_T(::UnityEngine::PlayerLoop::EarlyUpdate_XRUpdate);
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/PollPlayerConnection
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_PollPlayerConnection {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_PollPlayerConnection();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11027 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_PollPlayerConnection, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/PollHtcsPlayerConnection
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_PollHtcsPlayerConnection {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_PollHtcsPlayerConnection();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11028 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_PollHtcsPlayerConnection, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/GpuTimestamp
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_GpuTimestamp {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_GpuTimestamp();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11029 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_GpuTimestamp, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/AnalyticsCoreStatsUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_AnalyticsCoreStatsUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_AnalyticsCoreStatsUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11030 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_AnalyticsCoreStatsUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UnityWebRequestUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UnityWebRequestUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UnityWebRequestUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11031 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UnityWebRequestUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateStreamingManager
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateStreamingManager {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateStreamingManager();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11032 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateStreamingManager, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ExecuteMainThreadJobs
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ExecuteMainThreadJobs {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ExecuteMainThreadJobs();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11033 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ExecuteMainThreadJobs, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ProcessMouseInWindow
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ProcessMouseInWindow {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ProcessMouseInWindow();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11034 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ProcessMouseInWindow, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ClearIntermediateRenderers
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ClearIntermediateRenderers {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ClearIntermediateRenderers();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11035 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ClearIntermediateRenderers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ClearLines
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ClearLines {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ClearLines();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11036 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ClearLines, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/PresentBeforeUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_PresentBeforeUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_PresentBeforeUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11037 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_PresentBeforeUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ResetFrameStatsAfterPresent
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ResetFrameStatsAfterPresent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ResetFrameStatsAfterPresent();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11038 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ResetFrameStatsAfterPresent, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncReadbackManager
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateAsyncReadbackManager {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateAsyncReadbackManager();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11039 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncReadbackManager, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateTextureStreamingManager
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateTextureStreamingManager {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateTextureStreamingManager();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11040 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateTextureStreamingManager, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdatePreloading
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdatePreloading {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdatePreloading();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11041 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdatePreloading, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateContentLoading
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateContentLoading {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateContentLoading();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11042 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateContentLoading, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateAsyncInstantiate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateAsyncInstantiate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateAsyncInstantiate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11043 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncInstantiate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/RendererNotifyInvisible
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_RendererNotifyInvisible {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_RendererNotifyInvisible();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11044 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_RendererNotifyInvisible, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/PlayerCleanupCachedData
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_PlayerCleanupCachedData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_PlayerCleanupCachedData();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11045 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_PlayerCleanupCachedData, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateMainGameViewRect
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateMainGameViewRect {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateMainGameViewRect();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11046 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateMainGameViewRect, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateCanvasRectTransform
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateCanvasRectTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateCanvasRectTransform();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11047 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateCanvasRectTransform, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateInputManager
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateInputManager {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateInputManager();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11048 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateInputManager, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ProcessRemoteInput
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ProcessRemoteInput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ProcessRemoteInput();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11049 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ProcessRemoteInput, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/XRUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_XRUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_XRUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_XRUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ScriptRunDelayedStartupFrame
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ScriptRunDelayedStartupFrame {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ScriptRunDelayedStartupFrame();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11051 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ScriptRunDelayedStartupFrame, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/UpdateKinect
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_UpdateKinect {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_UpdateKinect();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11052 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_UpdateKinect, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/DeliverIosPlatformEvents
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_DeliverIosPlatformEvents {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_DeliverIosPlatformEvents();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11053 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_DeliverIosPlatformEvents, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/DispatchEventQueueEvents
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_DispatchEventQueueEvents {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_DispatchEventQueueEvents();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11054 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_DispatchEventQueueEvents, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/Physics2DEarlyUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_Physics2DEarlyUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_Physics2DEarlyUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11055 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_Physics2DEarlyUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/PhysicsResetInterpolatedTransformPosition
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_PhysicsResetInterpolatedTransformPosition {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_PhysicsResetInterpolatedTransformPosition();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11056 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_PhysicsResetInterpolatedTransformPosition, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/SpriteAtlasManagerUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_SpriteAtlasManagerUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_SpriteAtlasManagerUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11057 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_SpriteAtlasManagerUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/TangoUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_TangoUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_TangoUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11058 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_TangoUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/ARCoreUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_ARCoreUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_ARCoreUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11059 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_ARCoreUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate/PerformanceAnalyticsUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate_PerformanceAnalyticsUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate_PerformanceAnalyticsUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11060 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate_PerformanceAnalyticsUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
// Dependencies
namespace UnityEngine::PlayerLoop {
// Is value type: true
// CS Name: UnityEngine.PlayerLoop.EarlyUpdate
#pragma pack(push, 0)
struct CORDL_TYPE EarlyUpdate {
public:
  // Declarations
  using ARCoreUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_ARCoreUpdate;

  using AnalyticsCoreStatsUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_AnalyticsCoreStatsUpdate;

  using ClearIntermediateRenderers = ::UnityEngine::PlayerLoop::EarlyUpdate_ClearIntermediateRenderers;

  using ClearLines = ::UnityEngine::PlayerLoop::EarlyUpdate_ClearLines;

  using DeliverIosPlatformEvents = ::UnityEngine::PlayerLoop::EarlyUpdate_DeliverIosPlatformEvents;

  using DispatchEventQueueEvents = ::UnityEngine::PlayerLoop::EarlyUpdate_DispatchEventQueueEvents;

  using ExecuteMainThreadJobs = ::UnityEngine::PlayerLoop::EarlyUpdate_ExecuteMainThreadJobs;

  using GpuTimestamp = ::UnityEngine::PlayerLoop::EarlyUpdate_GpuTimestamp;

  using PerformanceAnalyticsUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_PerformanceAnalyticsUpdate;

  using Physics2DEarlyUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_Physics2DEarlyUpdate;

  using PhysicsResetInterpolatedTransformPosition = ::UnityEngine::PlayerLoop::EarlyUpdate_PhysicsResetInterpolatedTransformPosition;

  using PlayerCleanupCachedData = ::UnityEngine::PlayerLoop::EarlyUpdate_PlayerCleanupCachedData;

  using PollHtcsPlayerConnection = ::UnityEngine::PlayerLoop::EarlyUpdate_PollHtcsPlayerConnection;

  using PollPlayerConnection = ::UnityEngine::PlayerLoop::EarlyUpdate_PollPlayerConnection;

  using PresentBeforeUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_PresentBeforeUpdate;

  using ProcessMouseInWindow = ::UnityEngine::PlayerLoop::EarlyUpdate_ProcessMouseInWindow;

  using ProcessRemoteInput = ::UnityEngine::PlayerLoop::EarlyUpdate_ProcessRemoteInput;

  using RendererNotifyInvisible = ::UnityEngine::PlayerLoop::EarlyUpdate_RendererNotifyInvisible;

  using ResetFrameStatsAfterPresent = ::UnityEngine::PlayerLoop::EarlyUpdate_ResetFrameStatsAfterPresent;

  using ScriptRunDelayedStartupFrame = ::UnityEngine::PlayerLoop::EarlyUpdate_ScriptRunDelayedStartupFrame;

  using SpriteAtlasManagerUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_SpriteAtlasManagerUpdate;

  using TangoUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_TangoUpdate;

  using UnityWebRequestUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_UnityWebRequestUpdate;

  using UpdateAsyncInstantiate = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncInstantiate;

  using UpdateAsyncReadbackManager = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncReadbackManager;

  using UpdateCanvasRectTransform = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateCanvasRectTransform;

  using UpdateContentLoading = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateContentLoading;

  using UpdateInputManager = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateInputManager;

  using UpdateKinect = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateKinect;

  using UpdateMainGameViewRect = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateMainGameViewRect;

  using UpdatePreloading = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdatePreloading;

  using UpdateStreamingManager = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateStreamingManager;

  using UpdateTextureStreamingManager = ::UnityEngine::PlayerLoop::EarlyUpdate_UpdateTextureStreamingManager;

  using XRUpdate = ::UnityEngine::PlayerLoop::EarlyUpdate_XRUpdate;

  // Ctor Parameters []
  // @brief default ctor
  constexpr EarlyUpdate();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11061 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PlayerLoop::EarlyUpdate, 0x1>, "Size mismatch!");

} // namespace UnityEngine::PlayerLoop
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ARCoreUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/ARCoreUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_AnalyticsCoreStatsUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/AnalyticsCoreStatsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ClearIntermediateRenderers, "UnityEngine.PlayerLoop", "EarlyUpdate/ClearIntermediateRenderers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ClearLines, "UnityEngine.PlayerLoop", "EarlyUpdate/ClearLines");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_DeliverIosPlatformEvents, "UnityEngine.PlayerLoop", "EarlyUpdate/DeliverIosPlatformEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_DispatchEventQueueEvents, "UnityEngine.PlayerLoop", "EarlyUpdate/DispatchEventQueueEvents");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ExecuteMainThreadJobs, "UnityEngine.PlayerLoop", "EarlyUpdate/ExecuteMainThreadJobs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_GpuTimestamp, "UnityEngine.PlayerLoop", "EarlyUpdate/GpuTimestamp");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_PerformanceAnalyticsUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/PerformanceAnalyticsUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_Physics2DEarlyUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/Physics2DEarlyUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_PhysicsResetInterpolatedTransformPosition, "UnityEngine.PlayerLoop", "EarlyUpdate/PhysicsResetInterpolatedTransformPosition");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_PlayerCleanupCachedData, "UnityEngine.PlayerLoop", "EarlyUpdate/PlayerCleanupCachedData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_PollHtcsPlayerConnection, "UnityEngine.PlayerLoop", "EarlyUpdate/PollHtcsPlayerConnection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_PollPlayerConnection, "UnityEngine.PlayerLoop", "EarlyUpdate/PollPlayerConnection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_PresentBeforeUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/PresentBeforeUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ProcessMouseInWindow, "UnityEngine.PlayerLoop", "EarlyUpdate/ProcessMouseInWindow");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ProcessRemoteInput, "UnityEngine.PlayerLoop", "EarlyUpdate/ProcessRemoteInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_RendererNotifyInvisible, "UnityEngine.PlayerLoop", "EarlyUpdate/RendererNotifyInvisible");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ResetFrameStatsAfterPresent, "UnityEngine.PlayerLoop", "EarlyUpdate/ResetFrameStatsAfterPresent");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_ScriptRunDelayedStartupFrame, "UnityEngine.PlayerLoop", "EarlyUpdate/ScriptRunDelayedStartupFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_SpriteAtlasManagerUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/SpriteAtlasManagerUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_TangoUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/TangoUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UnityWebRequestUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/UnityWebRequestUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncInstantiate, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateAsyncInstantiate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateAsyncReadbackManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateAsyncReadbackManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateCanvasRectTransform, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateCanvasRectTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateContentLoading, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateContentLoading");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateInputManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateInputManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateKinect, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateKinect");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateMainGameViewRect, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateMainGameViewRect");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdatePreloading, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdatePreloading");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateStreamingManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateStreamingManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_UpdateTextureStreamingManager, "UnityEngine.PlayerLoop", "EarlyUpdate/UpdateTextureStreamingManager");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::EarlyUpdate_XRUpdate, "UnityEngine.PlayerLoop", "EarlyUpdate/XRUpdate");
