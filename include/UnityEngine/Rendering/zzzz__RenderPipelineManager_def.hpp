#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderPipelineManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ScriptableObject;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineManager);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineManager
class CORDL_TYPE RenderPipelineManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeRenderPipelineAssetChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeRenderPipelineAssetChanged,
                      put = setStaticF_activeRenderPipelineAssetChanged)) ::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>,
                                                                                             ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* activeRenderPipelineAssetChanged;

  /// @brief Field activeRenderPipelineCreated, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeRenderPipelineCreated, put = setStaticF_activeRenderPipelineCreated)) ::System::Action* activeRenderPipelineCreated;

  /// @brief Field activeRenderPipelineDisposed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeRenderPipelineDisposed, put = setStaticF_activeRenderPipelineDisposed)) ::System::Action* activeRenderPipelineDisposed;

  /// @brief Field activeRenderPipelineTypeChanged, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_activeRenderPipelineTypeChanged, put = setStaticF_activeRenderPipelineTypeChanged)) ::System::Action* activeRenderPipelineTypeChanged;

  /// @brief Field beginCameraRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginCameraRendering,
                      put = setStaticF_beginCameraRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* beginCameraRendering;

  /// @brief Field s_Cameras, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Cameras, put = setStaticF_s_Cameras)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* s_Cameras;

  /// @brief Field s_CurrentPipeline, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipeline, put = setStaticF_s_CurrentPipeline)) ::UnityEngine::Rendering::RenderPipeline* s_CurrentPipeline;

  /// @brief Field s_CurrentPipelineAsset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipelineAsset, put = setStaticF_s_CurrentPipelineAsset)) ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> s_CurrentPipelineAsset;

  /// @brief Field s_CurrentPipelineType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipelineType, put = setStaticF_s_CurrentPipelineType)) ::StringW s_CurrentPipelineType;

  /// @brief Method CleanupRenderPipeline, addr 0x48c8f10, size 0x1b4, virtual false, abstract: false, final false
  static inline void CleanupRenderPipeline();

  /// @brief Method DoRenderLoop_Internal, addr 0x48c97e4, size 0x284, virtual false, abstract: false, final false
  static inline void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, ::System::IntPtr loopPtr, ::UnityEngine::Object* renderRequest);

  /// @brief Method GetCurrentPipelineAssetType, addr 0x48c978c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentPipelineAssetType();

  /// @brief Method HandleRenderPipelineChange, addr 0x48c962c, size 0x80, virtual false, abstract: false, final false
  static inline void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method IsPipelineRequireCreation, addr 0x48c9b28, size 0x148, virtual false, abstract: false, final false
  static inline bool IsPipelineRequireCreation();

  /// @brief Method OnActiveRenderPipelineAssetChanged, addr 0x48c9520, size 0x10c, virtual false, abstract: false, final false
  static inline void OnActiveRenderPipelineAssetChanged(::UnityEngine::ScriptableObject* from, ::UnityEngine::ScriptableObject* to);

  /// @brief Method OnActiveRenderPipelineTypeChanged, addr 0x48c94ac, size 0x74, virtual false, abstract: false, final false
  static inline void OnActiveRenderPipelineTypeChanged();

  /// @brief Method PrepareRenderPipeline, addr 0x48c90c4, size 0xb4, virtual false, abstract: false, final false
  static inline void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method add_beginCameraRendering, addr 0x48c92c4, size 0xf4, virtual false, abstract: false, final false
  static inline void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* getStaticF_activeRenderPipelineAssetChanged();

  static inline ::System::Action* getStaticF_activeRenderPipelineCreated();

  static inline ::System::Action* getStaticF_activeRenderPipelineDisposed();

  static inline ::System::Action* getStaticF_activeRenderPipelineTypeChanged();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* getStaticF_beginCameraRendering();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* getStaticF_s_Cameras();

  static inline ::UnityEngine::Rendering::RenderPipeline* getStaticF_s_CurrentPipeline();

  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> getStaticF_s_CurrentPipelineAsset();

  static inline ::StringW getStaticF_s_CurrentPipelineType();

  /// @brief Method get_currentPipeline, addr 0x48c91cc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline();

  /// @brief Method remove_beginCameraRendering, addr 0x48c93b8, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void
  setStaticF_activeRenderPipelineAssetChanged(::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* value);

  static inline void setStaticF_activeRenderPipelineCreated(::System::Action* value);

  static inline void setStaticF_activeRenderPipelineDisposed(::System::Action* value);

  static inline void setStaticF_activeRenderPipelineTypeChanged(::System::Action* value);

  static inline void setStaticF_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void setStaticF_s_Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* value);

  static inline void setStaticF_s_CurrentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

  static inline void setStaticF_s_CurrentPipelineAsset(::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> value);

  static inline void setStaticF_s_CurrentPipelineType(::StringW value);

  /// @brief Method set_currentPipeline, addr 0x48c9224, size 0xa0, virtual false, abstract: false, final false
  static inline void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineManager(RenderPipelineManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineManager(RenderPipelineManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11234 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
