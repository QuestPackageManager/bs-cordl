#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::UnityEngine::Rendering::RenderPipelineManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
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

  /// @brief Field beginContextRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginContextRendering,
                      put = setStaticF_beginContextRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,
                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* beginContextRendering;

  /// @brief Field beginFrameRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginFrameRendering,
                      put = setStaticF_beginFrameRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* beginFrameRendering;

  /// @brief Field endCameraRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endCameraRendering,
                      put = setStaticF_endCameraRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* endCameraRendering;

  /// @brief Field endContextRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endContextRendering,
                      put = setStaticF_endContextRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* endContextRendering;

  /// @brief Field endFrameRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endFrameRendering,
                      put = setStaticF_endFrameRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* endFrameRendering;

  /// @brief Field s_CleanUpPipeline, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_CleanUpPipeline, put = setStaticF_s_CleanUpPipeline)) bool s_CleanUpPipeline;

  /// @brief Field s_CurrentPipeline, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipeline, put = setStaticF_s_CurrentPipeline)) ::UnityEngine::Rendering::RenderPipeline* s_CurrentPipeline;

  /// @brief Field s_CurrentPipelineAsset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipelineAsset, put = setStaticF_s_CurrentPipelineAsset)) ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> s_CurrentPipelineAsset;

  /// @brief Field s_PendingRPAssignationToRaise, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_PendingRPAssignationToRaise, put = setStaticF_s_PendingRPAssignationToRaise)) bool s_PendingRPAssignationToRaise;

  /// @brief Method BeginCameraRendering, addr 0x6f802cc, size 0x84, virtual false, abstract: false, final false
  static inline void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method BeginContextRendering, addr 0x6f801f0, size 0xd8, virtual false, abstract: false, final false
  static inline void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// [RequiredByNativeCode]
  /// @brief Method CleanupRenderPipeline, addr 0x6f809c4, size 0x184, virtual false, abstract: false, final false
  static inline void CleanupRenderPipeline();

  /// [RequiredByNativeCode]
  /// @brief Method DoRenderLoop_Internal, addr 0x6f81cc8, size 0x2bc, virtual false, abstract: false, final false
  static inline void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset, ::System::IntPtr loopPtr, ::UnityEngine::Object* renderRequest);

  /// @brief Method EndCameraRendering, addr 0x6f80434, size 0x84, virtual false, abstract: false, final false
  static inline void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method EndContextRendering, addr 0x6f80354, size 0xdc, virtual false, abstract: false, final false
  static inline void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// [RequiredByNativeCode]
  /// @brief Method HandleRenderPipelineChange, addr 0x6f81b90, size 0x74, virtual false, abstract: false, final false
  static inline void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// [RequiredByNativeCode]
  /// @brief Method InitializeGlobalRenderPipelineTag, addr 0x6f82230, size 0x8c, virtual false, abstract: false, final false
  static inline void InitializeGlobalRenderPipelineTag();

  /// [RequiredByNativeCode]
  /// @brief Method IsCurrentRenderPipelineValid, addr 0x6f81c04, size 0x64, virtual false, abstract: false, final false
  static inline bool IsCurrentRenderPipelineValid();

  /// @brief Method IsPipelineRequireCreation, addr 0x6f82194, size 0x9c, virtual false, abstract: false, final false
  static inline bool IsPipelineRequireCreation();

  /// [RequiredByNativeCode]
  /// @brief Method OnActiveRenderPipelineAssetChanged, addr 0x6f8198c, size 0x204, virtual false, abstract: false, final false
  static inline void OnActiveRenderPipelineAssetChanged(::UnityEngine::ScriptableObject* from, ::UnityEngine::ScriptableObject* to, bool raiseTypeChanged);

  /// [RequiredByNativeCode]
  /// @brief Method RecreateCurrentPipeline, addr 0x6f80924, size 0x9c, virtual false, abstract: false, final false
  static inline void RecreateCurrentPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method TryPrepareRenderPipeline, addr 0x6f81f84, size 0x138, virtual false, abstract: false, final false
  static inline bool TryPrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// [CompilerGenerated]
  /// @brief Method add_beginCameraRendering, addr 0x6f815fc, size 0xe4, virtual false, abstract: false, final false
  static inline void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// [CompilerGenerated]
  /// @brief Method add_beginContextRendering, addr 0x6f8126c, size 0xe4, virtual false, abstract: false, final false
  static inline void add_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  /// [CompilerGenerated]
  /// @brief Method add_endCameraRendering, addr 0x6f817c4, size 0xe4, virtual false, abstract: false, final false
  static inline void add_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// [CompilerGenerated]
  /// @brief Method add_endContextRendering, addr 0x6f81434, size 0xe4, virtual false, abstract: false, final false
  static inline void add_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* getStaticF_activeRenderPipelineAssetChanged();

  static inline ::System::Action* getStaticF_activeRenderPipelineCreated();

  static inline ::System::Action* getStaticF_activeRenderPipelineDisposed();

  static inline ::System::Action* getStaticF_activeRenderPipelineTypeChanged();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* getStaticF_beginCameraRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* getStaticF_beginContextRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* getStaticF_beginFrameRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* getStaticF_endCameraRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* getStaticF_endContextRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* getStaticF_endFrameRendering();

  static inline bool getStaticF_s_CleanUpPipeline();

  static inline ::UnityEngine::Rendering::RenderPipeline* getStaticF_s_CurrentPipeline();

  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> getStaticF_s_CurrentPipelineAsset();

  static inline bool getStaticF_s_PendingRPAssignationToRaise();

  /// @brief Method get_currentPipeline, addr 0x6f811a4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline();

  /// [CompilerGenerated]
  /// @brief Method remove_beginCameraRendering, addr 0x6f816e0, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_beginContextRendering, addr 0x6f81350, size 0xe4, virtual false, abstract: false, final false
  static inline void
  remove_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_endCameraRendering, addr 0x6f818a8, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_endContextRendering, addr 0x6f81518, size 0xe4, virtual false, abstract: false, final false
  static inline void remove_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline void
  setStaticF_activeRenderPipelineAssetChanged(::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* value);

  static inline void setStaticF_activeRenderPipelineCreated(::System::Action* value);

  static inline void setStaticF_activeRenderPipelineDisposed(::System::Action* value);

  static inline void setStaticF_activeRenderPipelineTypeChanged(::System::Action* value);

  static inline void setStaticF_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void
  setStaticF_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline void setStaticF_beginFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* value);

  static inline void setStaticF_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void
  setStaticF_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline void setStaticF_endFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>>>* value);

  static inline void setStaticF_s_CleanUpPipeline(bool value);

  static inline void setStaticF_s_CurrentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

  static inline void setStaticF_s_CurrentPipelineAsset(::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> value);

  static inline void setStaticF_s_PendingRPAssignationToRaise(bool value);

  /// @brief Method set_currentPipeline, addr 0x6f811f0, size 0x7c, virtual false, abstract: false, final false
  static inline void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineManager(RenderPipelineManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineManager(RenderPipelineManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10427 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::RenderPipelineManager) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
