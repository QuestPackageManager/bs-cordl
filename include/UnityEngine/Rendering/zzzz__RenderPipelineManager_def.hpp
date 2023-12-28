#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPipelineManager)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct __Camera__RenderRequest;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineManager);
// Type: UnityEngine.Rendering::RenderPipelineManager
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10354))
// CS Name: ::UnityEngine.Rendering::RenderPipelineManager*
class CORDL_TYPE RenderPipelineManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_CurrentPipelineAsset, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CurrentPipelineAsset, put = setStaticF_s_CurrentPipelineAsset))::UnityEngine::Rendering::RenderPipelineAsset* s_CurrentPipelineAsset;

  /// @brief Field s_Cameras, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Cameras, put = setStaticF_s_Cameras))::System::Collections::Generic::List_1<::UnityEngine::Camera*>* s_Cameras;

  /// @brief Field s_currentPipelineType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_currentPipelineType, put = setStaticF_s_currentPipelineType))::StringW s_currentPipelineType;

  /// @brief Field s_builtinPipelineName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_builtinPipelineName, put = setStaticF_s_builtinPipelineName))::StringW s_builtinPipelineName;

  /// @brief Field s_currentPipeline, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_currentPipeline, put = setStaticF_s_currentPipeline))::UnityEngine::Rendering::RenderPipeline* s_currentPipeline;

  /// @brief Field beginCameraRendering, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_beginCameraRendering,
                             put = setStaticF_beginCameraRendering))::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* beginCameraRendering;

  /// @brief Field activeRenderPipelineTypeChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeRenderPipelineTypeChanged, put = setStaticF_activeRenderPipelineTypeChanged))::System::Action* activeRenderPipelineTypeChanged;

  static inline void setStaticF_s_CurrentPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* value);

  static inline ::UnityEngine::Rendering::RenderPipelineAsset* getStaticF_s_CurrentPipelineAsset();

  static inline void setStaticF_s_Cameras(::System::Collections::Generic::List_1<::UnityEngine::Camera*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* getStaticF_s_Cameras();

  static inline void setStaticF_s_currentPipelineType(::StringW value);

  static inline ::StringW getStaticF_s_currentPipelineType();

  static inline void setStaticF_s_builtinPipelineName(::StringW value);

  static inline ::StringW getStaticF_s_builtinPipelineName();

  static inline void setStaticF_s_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

  static inline ::UnityEngine::Rendering::RenderPipeline* getStaticF_s_currentPipeline();

  static inline void setStaticF_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);

  static inline ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* getStaticF_beginCameraRendering();

  static inline void setStaticF_activeRenderPipelineTypeChanged(::System::Action* value);

  static inline ::System::Action* getStaticF_activeRenderPipelineTypeChanged();

  /// @brief Method get_currentPipeline addr 0x2cecab0 size 0x58 virtual false final false
  static inline ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline();

  /// @brief Method set_currentPipeline addr 0x2cecb08 size 0xb0 virtual false final false
  static inline void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value);

  /// @brief Method add_beginCameraRendering addr 0x2cecbb8 size 0xf4 virtual false final false
  static inline void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);

  /// @brief Method remove_beginCameraRendering addr 0x2ceccac size 0xf4 virtual false final false
  static inline void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);

  /// @brief Method OnActiveRenderPipelineTypeChanged addr 0x2cecda0 size 0x74 virtual false final false
  static inline void OnActiveRenderPipelineTypeChanged();

  /// @brief Method HandleRenderPipelineChange addr 0x2cece14 size 0x80 virtual false final false
  static inline void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  /// @brief Method CleanupRenderPipeline addr 0x2cece94 size 0x188 virtual false final false
  static inline void CleanupRenderPipeline();

  /// @brief Method GetCurrentPipelineAssetType addr 0x2ced180 size 0x58 virtual false final false
  static inline ::StringW GetCurrentPipelineAssetType();

  /// @brief Method DoRenderLoop_Internal addr 0x2ced1d8 size 0x1c8 virtual false final false
  static inline void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, void* loopPtr,
                                           ::System::Collections::Generic::List_1<::UnityEngine::__Camera__RenderRequest>* renderRequests);

  /// @brief Method PrepareRenderPipeline addr 0x2ced3a0 size 0x16c virtual false final false
  static inline void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineManager(RenderPipelineManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineManager(RenderPipelineManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineManager, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
