#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__FoveatedRenderingCaps_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSystem)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::Experimental::Rendering {
class XRLayoutStack;
}
namespace UnityEngine::Experimental::Rendering {
class XRLayout;
}
namespace UnityEngine::Experimental::Rendering {
struct XRPassCreateInfo;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Experimental::Rendering {
struct XRSystem___c__DisplayClass44_0;
}
namespace UnityEngine::Experimental::Rendering {
struct XRView;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingCaps;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRRenderParameter;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRRenderPass;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRSystem;
}
namespace UnityEngine::Experimental::Rendering {
struct XRSystem___c__DisplayClass44_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XRSystem);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0);
// Dependencies
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.XRSystem/<>c__DisplayClass44_0
struct CORDL_TYPE XRSystem___c__DisplayClass44_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystem___c__DisplayClass44_0();

  // Ctor Parameters [CppParam { name: "camera", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: None }]
  constexpr XRSystem___c__DisplayClass44_0(::UnityW<::UnityEngine::Camera> camera) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11835 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field camera, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0, camera) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
// Dependencies System.Object, UnityEngine.Rendering.FoveatedRenderingCaps, UnityEngine.Rendering.MSAASamples
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRSystem
class CORDL_TYPE XRSystem : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass44_0 = ::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0;

  /// @brief Field <dumpDebugInfo>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__dumpDebugInfo_k__BackingField, put = setStaticF__dumpDebugInfo_k__BackingField)) bool _dumpDebugInfo_k__BackingField;

  /// @brief Field <foveatedRenderingCaps>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__foveatedRenderingCaps_k__BackingField,
                      put = setStaticF__foveatedRenderingCaps_k__BackingField)) ::UnityEngine::Rendering::FoveatedRenderingCaps _foveatedRenderingCaps_k__BackingField;

  /// @brief Field <singlePassAllowed>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__singlePassAllowed_k__BackingField, put = setStaticF__singlePassAllowed_k__BackingField)) bool _singlePassAllowed_k__BackingField;

  /// @brief Field emptyPass, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_emptyPass, put = setStaticF_emptyPass)) ::UnityEngine::Experimental::Rendering::XRPass* emptyPass;

  /// @brief Field s_Display, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Display, put = setStaticF_s_Display)) Il2CppObject* s_Display;

  /// @brief Field s_DisplayList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DisplayList, put = setStaticF_s_DisplayList)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_DisplayList;

  /// @brief Field s_Layout, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Layout, put = setStaticF_s_Layout)) ::UnityEngine::Experimental::Rendering::XRLayoutStack* s_Layout;

  /// @brief Field s_LayoutOverride, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LayoutOverride,
                      put = setStaticF_s_LayoutOverride)) ::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* s_LayoutOverride;

  /// @brief Field s_MSAASamples, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MSAASamples, put = setStaticF_s_MSAASamples)) ::UnityEngine::Rendering::MSAASamples s_MSAASamples;

  /// @brief Field s_MirrorViewMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MirrorViewMaterial, put = setStaticF_s_MirrorViewMaterial)) ::UnityW<::UnityEngine::Material> s_MirrorViewMaterial;

  /// @brief Field s_OcclusionMeshMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_OcclusionMeshMaterial, put = setStaticF_s_OcclusionMeshMaterial)) ::UnityW<::UnityEngine::Material> s_OcclusionMeshMaterial;

  /// @brief Field s_OcclusionMeshScaling, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_OcclusionMeshScaling, put = setStaticF_s_OcclusionMeshScaling)) float_t s_OcclusionMeshScaling;

  /// @brief Field s_PassAllocator, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_PassAllocator,
                      put = setStaticF_s_PassAllocator)) ::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* s_PassAllocator;

  /// @brief Method BuildPass, addr 0x6595160, size 0x2a0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::XRPassCreateInfo BuildPass(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrRenderPass,
                                                                                   ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters,
                                                                                   ::UnityEngine::Experimental::Rendering::XRLayout* layout);

  /// @brief Method BuildView, addr 0x65954f4, size 0x150, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::XRView BuildView(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass,
                                                                         ::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter renderParameter);

  /// @brief Method CanUseSinglePass, addr 0x6594ff0, size 0x170, virtual false, abstract: false, final false
  static inline bool CanUseSinglePass(::UnityEngine::Camera* camera, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass);

  /// @brief Method CreateDefaultLayout, addr 0x658f374, size 0x4cc, virtual false, abstract: false, final false
  static inline void CreateDefaultLayout(::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRLayout* layout);

  /// @brief Method Dispose, addr 0x6594d30, size 0x190, virtual false, abstract: false, final false
  static inline void Dispose();

  /// @brief Method EndLayout, addr 0x6594ba0, size 0xe4, virtual false, abstract: false, final false
  static inline void EndLayout();

  /// @brief Method GetActiveDisplay, addr 0x6593a6c, size 0x5c, virtual false, abstract: false, final false
  static inline Il2CppObject* GetActiveDisplay();

  /// @brief Method GetDisplayMSAASamples, addr 0x65946dc, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::MSAASamples GetDisplayMSAASamples();

  /// @brief Method GetMirrorViewMode, addr 0x6594898, size 0x98, virtual false, abstract: false, final false
  static inline int32_t GetMirrorViewMode();

  /// @brief Method GetOcclusionMeshScale, addr 0x65947a0, size 0x5c, virtual false, abstract: false, final false
  static inline float_t GetOcclusionMeshScale();

  /// @brief Method GetRenderViewportScale, addr 0x6594ad0, size 0x68, virtual false, abstract: false, final false
  static inline float_t GetRenderViewportScale();

  /// @brief Method Initialize, addr 0x6593dac, size 0x440, virtual false, abstract: false, final false
  static inline void Initialize(::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* passAllocator,
                                ::UnityEngine::Shader* occlusionMeshPS, ::UnityEngine::Shader* mirrorViewPS);

  /// @brief Method NewLayout, addr 0x6594b38, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::XRLayout* NewLayout();

  /// @brief Method ReconfigurePass, addr 0x658f9bc, size 0x2a4, virtual false, abstract: false, final false
  static inline void ReconfigurePass(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::Camera* camera);

  /// @brief Method RefreshDeviceInfo, addr 0x65941ec, size 0x318, virtual false, abstract: false, final false
  static inline void RefreshDeviceInfo();

  /// @brief Method RenderMirrorView, addr 0x6594c84, size 0xac, virtual false, abstract: false, final false
  static inline void RenderMirrorView(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera);

  /// @brief Method SetDisplayMSAASamples, addr 0x6594504, size 0x1d8, virtual false, abstract: false, final false
  static inline void SetDisplayMSAASamples(::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method SetDisplayZRange, addr 0x658f2ac, size 0xc8, virtual false, abstract: false, final false
  static inline void SetDisplayZRange(float_t zNear, float_t zFar);

  /// @brief Method SetLayoutOverride, addr 0x6594ec0, size 0x60, virtual false, abstract: false, final false
  static inline void SetLayoutOverride(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* action);

  /// @brief Method SetMirrorViewMode, addr 0x65947fc, size 0x9c, virtual false, abstract: false, final false
  static inline void SetMirrorViewMode(int32_t mirrorBlitMode);

  /// @brief Method SetOcclusionMeshScale, addr 0x6594738, size 0x68, virtual false, abstract: false, final false
  static inline void SetOcclusionMeshScale(float_t occlusionMeshScale);

  /// @brief Method SetRenderScale, addr 0x6594930, size 0x1a0, virtual false, abstract: false, final false
  static inline void SetRenderScale(float_t renderScale);

  /// @brief Method XRSystemInit, addr 0x6594f20, size 0xd0, virtual false, abstract: false, final false
  static inline void XRSystemInit();

  /// @brief Method XrRenderTextureDescToUnityRenderTextureDesc, addr 0x65956bc, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor XrRenderTextureDescToUnityRenderTextureDesc(::UnityEngine::RenderTextureDescriptor xrDesc);

  /// @brief Method <CreateDefaultLayout>g__AddViewToPass|44_0, addr 0x6595400, size 0xf4, virtual false, abstract: false, final false
  static inline void _CreateDefaultLayout_g__AddViewToPass_44_0(::UnityEngine::Experimental::Rendering::XRPass* xrPass, ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass renderPass,
                                                                int32_t renderParamIndex,
                                                                ::ByRef<::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0> _cordl_fixed_empty_name_whitespace);

  static inline bool getStaticF__dumpDebugInfo_k__BackingField();

  static inline ::UnityEngine::Rendering::FoveatedRenderingCaps getStaticF__foveatedRenderingCaps_k__BackingField();

  static inline bool getStaticF__singlePassAllowed_k__BackingField();

  static inline ::UnityEngine::Experimental::Rendering::XRPass* getStaticF_emptyPass();

  static inline Il2CppObject* getStaticF_s_Display();

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_DisplayList();

  static inline ::UnityEngine::Experimental::Rendering::XRLayoutStack* getStaticF_s_Layout();

  static inline ::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* getStaticF_s_LayoutOverride();

  static inline ::UnityEngine::Rendering::MSAASamples getStaticF_s_MSAASamples();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_MirrorViewMaterial();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_OcclusionMeshMaterial();

  static inline float_t getStaticF_s_OcclusionMeshScaling();

  static inline ::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* getStaticF_s_PassAllocator();

  /// @brief Method get_displayActive, addr 0x658f210, size 0x9c, virtual false, abstract: false, final false
  static inline bool get_displayActive();

  /// @brief Method get_dumpDebugInfo, addr 0x6593cec, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_dumpDebugInfo();

  /// @brief Method get_foveatedRenderingCaps, addr 0x6593c30, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::FoveatedRenderingCaps get_foveatedRenderingCaps();

  /// @brief Method get_isHDRDisplayOutputActive, addr 0x6593ac8, size 0xa8, virtual false, abstract: false, final false
  static inline bool get_isHDRDisplayOutputActive();

  /// @brief Method get_singlePassAllowed, addr 0x6593b70, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_singlePassAllowed();

  static inline void setStaticF__dumpDebugInfo_k__BackingField(bool value);

  static inline void setStaticF__foveatedRenderingCaps_k__BackingField(::UnityEngine::Rendering::FoveatedRenderingCaps value);

  static inline void setStaticF__singlePassAllowed_k__BackingField(bool value);

  static inline void setStaticF_emptyPass(::UnityEngine::Experimental::Rendering::XRPass* value);

  static inline void setStaticF_s_Display(Il2CppObject* value);

  static inline void setStaticF_s_DisplayList(::System::Collections::Generic::List_1<Il2CppObject*>* value);

  static inline void setStaticF_s_Layout(::UnityEngine::Experimental::Rendering::XRLayoutStack* value);

  static inline void setStaticF_s_LayoutOverride(::System::Action_2<::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityW<::UnityEngine::Camera>>* value);

  static inline void setStaticF_s_MSAASamples(::UnityEngine::Rendering::MSAASamples value);

  static inline void setStaticF_s_MirrorViewMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_OcclusionMeshMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_OcclusionMeshScaling(float_t value);

  static inline void setStaticF_s_PassAllocator(::System::Func_2<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, ::UnityEngine::Experimental::Rendering::XRPass*>* value);

  /// @brief Method set_dumpDebugInfo, addr 0x6593d48, size 0x64, virtual false, abstract: false, final false
  static inline void set_dumpDebugInfo(bool value);

  /// @brief Method set_foveatedRenderingCaps, addr 0x6593c8c, size 0x60, virtual false, abstract: false, final false
  static inline void set_foveatedRenderingCaps(::UnityEngine::Rendering::FoveatedRenderingCaps value);

  /// @brief Method set_singlePassAllowed, addr 0x6593bcc, size 0x64, virtual false, abstract: false, final false
  static inline void set_singlePassAllowed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRSystem(XRSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRSystem(XRSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11836 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRSystem, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XRSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRSystem*, "UnityEngine.Experimental.Rendering", "XRSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRSystem___c__DisplayClass44_0, "UnityEngine.Experimental.Rendering", "XRSystem/<>c__DisplayClass44_0");
