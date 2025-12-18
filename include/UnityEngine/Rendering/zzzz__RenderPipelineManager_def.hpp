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

  /// @brief Field beginContextRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginContextRendering,
                      put = setStaticF_beginContextRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,
                                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* beginContextRendering;

  /// @brief Field beginFrameRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_beginFrameRendering,
                      put = setStaticF_beginFrameRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,
                                                                                ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>>* beginFrameRendering;

  /// @brief Field endCameraRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endCameraRendering,
                      put = setStaticF_endCameraRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* endCameraRendering;

  /// @brief Field endContextRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endContextRendering,
                      put = setStaticF_endContextRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,
                                                                                ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* endContextRendering;

  /// @brief Field endFrameRendering, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_endFrameRendering,
                      put = setStaticF_endFrameRendering)) ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext,
                                                                              ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>>* endFrameRendering;

  /// @brief Field s_CleanUpPipeline, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_CleanUpPipeline, put = setStaticF_s_CleanUpPipeline)) bool s_CleanUpPipeline;

  /// @brief Field s_CurrentPipeline, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipeline, put = setStaticF_s_CurrentPipeline)) ::UnityEngine::Rendering::RenderPipeline* s_CurrentPipeline;

  /// @brief Field s_CurrentPipelineAsset, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipelineAsset, put = setStaticF_s_CurrentPipelineAsset)) ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> s_CurrentPipelineAsset;

  /// @brief Field s_CurrentPipelineType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CurrentPipelineType, put = setStaticF_s_CurrentPipelineType)) ::StringW s_CurrentPipelineType;

  /// @brief Method BeginCameraRendering, addr 0x6956d2c, size 0x94, virtual false, abstract: false, final false
  static inline void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method BeginContextRendering, addr 0x6956bcc, size 0xf8, virtual false, abstract: false, final false
  static inline void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method CleanupRenderPipeline, addr 0x69575dc, size 0x1c4, virtual false, abstract: false, final false
  static inline void CleanupRenderPipeline();

  /// @brief Method DoRenderLoop_Internal, addr 0x6958abc, size 0x328, virtual false, abstract: false, final false
  static inline void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset, ::System::IntPtr loopPtr, ::UnityEngine::Object* renderRequest);

  /// @brief Method EndCameraRendering, addr 0x6956f8c, size 0x94, virtual false, abstract: false, final false
  static inline void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method EndContextRendering, addr 0x6956e28, size 0xfc, virtual false, abstract: false, final false
  static inline void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method GetCurrentPipelineAssetType, addr 0x6958a60, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetCurrentPipelineAssetType();

  /// @brief Method HandleRenderPipelineChange, addr 0x69588c4, size 0x90, virtual false, abstract: false, final false
  static inline void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method IsPipelineRequireCreation, addr 0x6958ffc, size 0x164, virtual false, abstract: false, final false
  static inline bool IsPipelineRequireCreation();

  /// @brief Method OnActiveRenderPipelineAssetChanged, addr 0x69587b0, size 0x114, virtual false, abstract: false, final false
  static inline void OnActiveRenderPipelineAssetChanged(::UnityEngine::ScriptableObject* from, ::UnityEngine::ScriptableObject* to);

  /// @brief Method OnActiveRenderPipelineTypeChanged, addr 0x6958738, size 0x78, virtual false, abstract: false, final false
  static inline void OnActiveRenderPipelineTypeChanged();

  /// @brief Method RecreateCurrentPipeline, addr 0x69574cc, size 0xc0, virtual false, abstract: false, final false
  static inline void RecreateCurrentPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method TryPrepareRenderPipeline, addr 0x6958de4, size 0x140, virtual false, abstract: false, final false
  static inline bool TryPrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method add_beginCameraRendering, addr 0x6958318, size 0x108, virtual false, abstract: false, final false
  static inline void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// @brief Method add_beginContextRendering, addr 0x6957ef8, size 0x108, virtual false, abstract: false, final false
  static inline void add_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  /// @brief Method add_endCameraRendering, addr 0x6958528, size 0x108, virtual false, abstract: false, final false
  static inline void add_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// @brief Method add_endContextRendering, addr 0x6958108, size 0x108, virtual false, abstract: false, final false
  static inline void add_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline ::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* getStaticF_activeRenderPipelineAssetChanged();

  static inline ::System::Action* getStaticF_activeRenderPipelineCreated();

  static inline ::System::Action* getStaticF_activeRenderPipelineDisposed();

  static inline ::System::Action* getStaticF_activeRenderPipelineTypeChanged();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* getStaticF_beginCameraRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* getStaticF_beginContextRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>>*
  getStaticF_beginFrameRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* getStaticF_endCameraRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* getStaticF_endContextRendering();

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>>*
  getStaticF_endFrameRendering();

  static inline bool getStaticF_s_CleanUpPipeline();

  static inline ::UnityEngine::Rendering::RenderPipeline* getStaticF_s_CurrentPipeline();

  static inline ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> getStaticF_s_CurrentPipelineAsset();

  static inline ::StringW getStaticF_s_CurrentPipelineType();

  /// @brief Method get_currentPipeline, addr 0x6957df0, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline();

  /// @brief Method get_isCurrentPipelineValid, addr 0x6958954, size 0xac, virtual false, abstract: false, final false
  static inline bool get_isCurrentPipelineValid();

  /// @brief Method remove_beginCameraRendering, addr 0x6958420, size 0x108, virtual false, abstract: false, final false
  static inline void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// @brief Method remove_beginContextRendering, addr 0x6958000, size 0x108, virtual false, abstract: false, final false
  static inline void
  remove_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  /// @brief Method remove_endCameraRendering, addr 0x6958630, size 0x108, virtual false, abstract: false, final false
  static inline void remove_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  /// @brief Method remove_endContextRendering, addr 0x6958210, size 0x108, virtual false, abstract: false, final false
  static inline void remove_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline void
  setStaticF_activeRenderPipelineAssetChanged(::System::Action_2<::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>, ::UnityW<::UnityEngine::Rendering::RenderPipelineAsset>>* value);

  static inline void setStaticF_activeRenderPipelineCreated(::System::Action* value);

  static inline void setStaticF_activeRenderPipelineDisposed(::System::Action* value);

  static inline void setStaticF_activeRenderPipelineTypeChanged(::System::Action* value);

  static inline void setStaticF_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void
  setStaticF_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline void
  setStaticF_beginFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>>* value);

  static inline void setStaticF_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void
  setStaticF_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*>* value);

  static inline void
  setStaticF_endFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityW<::UnityEngine::Camera>, ::Array<::UnityW<::UnityEngine::Camera>>*>>* value);

  static inline void setStaticF_s_CleanUpPipeline(bool value);

  static inline void setStaticF_s_CurrentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

  static inline void setStaticF_s_CurrentPipelineAsset(::UnityW<::UnityEngine::Rendering::RenderPipelineAsset> value);

  static inline void setStaticF_s_CurrentPipelineType(::StringW value);

  /// @brief Method set_currentPipeline, addr 0x6957e4c, size 0xac, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10798 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
