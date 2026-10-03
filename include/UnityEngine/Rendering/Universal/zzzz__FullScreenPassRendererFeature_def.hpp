#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/FullScreenPassRendererFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPassInput_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FullScreenPassRendererFeature)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenPassRendererFeature_FullScreenRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct FullScreenPassRendererFeature_InjectionPoint;
}
namespace UnityEngine::Rendering::Universal {
struct FullScreenPassRendererFeature_Version;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_Event;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct FullScreenPassRendererFeature_InjectionPoint;
}
namespace UnityEngine::Rendering::Universal {
struct FullScreenPassRendererFeature_Version;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenPassRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenPassRendererFeature_FullScreenRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData;
}
namespace UnityEngine::Rendering::Universal {
class FullScreenRenderPass_FullScreenPassRendererFeature___c;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint);
MARK_VAL_T(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/InjectionPoint");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/Version");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*, "UnityEngine.Rendering.Universal", "FullScreenPassRendererFeature/FullScreenRenderPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*, "UnityEngine.Rendering.Universal",
                    "FullScreenPassRendererFeature/FullScreenRenderPass/CopyPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*, "UnityEngine.Rendering.Universal",
                    "FullScreenPassRendererFeature/FullScreenRenderPass/MainPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c*, "UnityEngine.Rendering.Universal",
                    "FullScreenPassRendererFeature/FullScreenRenderPass/<>c");
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/InjectionPoint
struct CORDL_TYPE FullScreenPassRendererFeature_InjectionPoint {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FullScreenPassRendererFeature_InjectionPoint_Unwrapped
  enum struct __FullScreenPassRendererFeature_InjectionPoint_Unwrapped : int32_t {
    __E_BeforeRenderingTransparents = static_cast<int32_t>(0x1c2),
    __E_BeforeRenderingPostProcessing = static_cast<int32_t>(0x226),
    __E_AfterRenderingPostProcessing = static_cast<int32_t>(0x258),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FullScreenPassRendererFeature_InjectionPoint_Unwrapped() const noexcept {
    return static_cast<__FullScreenPassRendererFeature_InjectionPoint_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenPassRendererFeature_InjectionPoint();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr FullScreenPassRendererFeature_InjectionPoint(int32_t value__) noexcept;

  /// @brief Field AfterRenderingPostProcessing value: I32(600)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint const AfterRenderingPostProcessing;

  /// @brief Field BeforeRenderingPostProcessing value: I32(550)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint const BeforeRenderingPostProcessing;

  /// @brief Field BeforeRenderingTransparents value: I32(450)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint const BeforeRenderingTransparents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13153 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass/CopyPassData
class CORDL_TYPE FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_inputTexture, put = __cordl_internal_set_inputTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputTexture;

  static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputTexture();

  constexpr void __cordl_internal_set_inputTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6ce8b40, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData(FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData(FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13154 };

  /// @brief Field inputTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___inputTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData, ___inputTexture) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass/MainPassData
class CORDL_TYPE FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputTexture, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_inputTexture, put = __cordl_internal_set_inputTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle inputTexture;

  /// @brief Field material, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field passIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndex, put = __cordl_internal_set_passIndex)) int32_t passIndex;

  static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_inputTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_inputTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_passIndex() const;

  constexpr int32_t& __cordl_internal_get_passIndex();

  constexpr void __cordl_internal_set_inputTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_passIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6ce8b44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData(FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData(FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13155 };

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field passIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ___passIndex;

  /// @brief Field inputTexture, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___inputTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData, ___passIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData, ___inputTexture) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass/<>c
class CORDL_TYPE FullScreenRenderPass_FullScreenPassRendererFeature___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__11_0;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__12_0;

  static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* New_ctor();

  /// @brief Method <AddCopyPassRenderPassFullscreen>b__12_0, addr 0x6ce8c68, size 0xb4, virtual false, abstract: false, final false
  inline void _AddCopyPassRenderPassFullscreen_b__12_0(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData* data,
                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method <AddFullscreenRenderPassInputPass>b__11_0, addr 0x6ce8ba0, size 0xc8, virtual false, abstract: false, final false
  inline void _AddFullscreenRenderPassInputPass_b__11_0(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData* data,
                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x6ce8b9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__11_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__12_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c* value);

  static inline void
  setStaticF___9__11_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData*,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void
  setStaticF___9__12_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData*,
                                                                                     ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenRenderPass_FullScreenPassRendererFeature___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullScreenRenderPass_FullScreenPassRendererFeature___c(FullScreenRenderPass_FullScreenPassRendererFeature___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullScreenRenderPass_FullScreenPassRendererFeature___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullScreenRenderPass_FullScreenPassRendererFeature___c(FullScreenRenderPass_FullScreenPassRendererFeature___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/FullScreenRenderPass
class CORDL_TYPE FullScreenPassRendererFeature_FullScreenRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using CopyPassData = ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_CopyPassData;

  using MainPassData = ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature_MainPassData;

  using __c = ::UnityEngine::Rendering::Universal::FullScreenRenderPass_FullScreenPassRendererFeature___c;

  /// @brief Field m_BindDepthStencilAttachment, offset 0x6d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BindDepthStencilAttachment, put = __cordl_internal_set_m_BindDepthStencilAttachment)) bool m_BindDepthStencilAttachment;

  /// @brief Field m_FetchActiveColor, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FetchActiveColor, put = __cordl_internal_set_m_FetchActiveColor)) bool m_FetchActiveColor;

  /// @brief Field m_Material, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_PassIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PassIndex, put = __cordl_internal_set_m_PassIndex)) int32_t m_PassIndex;

  /// @brief Field s_SharedPropertyBlock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SharedPropertyBlock, put = setStaticF_s_SharedPropertyBlock)) ::UnityEngine::MaterialPropertyBlock* s_SharedPropertyBlock;

  /// @brief Method AddCopyPassRenderPassFullscreen, addr 0x6ce8694, size 0x414, virtual false, abstract: false, final false
  inline void AddCopyPassRenderPassFullscreen(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination);

  /// @brief Method AddFullscreenRenderPassInputPass, addr 0x6ce7d50, size 0x944, virtual false, abstract: false, final false
  inline void AddFullscreenRenderPassInputPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourcesData,
                                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination);

  /// @brief Method ExecuteCopyColorPass, addr 0x6ce76cc, size 0x84, virtual false, abstract: false, final false
  static inline void ExecuteCopyColorPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTexture);

  /// @brief Method ExecuteMainPass, addr 0x6ce7750, size 0x1e4, virtual false, abstract: false, final false
  static inline void ExecuteMainPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTexture, ::UnityEngine::Material* material, int32_t passIndex);

  static inline ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* New_ctor(::StringW passName);

  /// @brief Method ReAllocate, addr 0x6ce76c8, size 0x4, virtual false, abstract: false, final false
  inline void ReAllocate(::UnityEngine::RenderTextureDescriptor desc);

  /// @brief Method RecordRenderGraph, addr 0x6ce7934, size 0x41c, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetupMembers, addr 0x6ce7658, size 0x14, virtual false, abstract: false, final false
  inline void SetupMembers(::UnityEngine::Material* material, int32_t passIndex, bool fetchActiveColor, bool bindDepthStencilAttachment);

  constexpr bool const& __cordl_internal_get_m_BindDepthStencilAttachment() const;

  constexpr bool& __cordl_internal_get_m_BindDepthStencilAttachment();

  constexpr bool const& __cordl_internal_get_m_FetchActiveColor() const;

  constexpr bool& __cordl_internal_get_m_FetchActiveColor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr int32_t const& __cordl_internal_get_m_PassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_PassIndex();

  constexpr void __cordl_internal_set_m_BindDepthStencilAttachment(bool value);

  constexpr void __cordl_internal_set_m_FetchActiveColor(bool value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_PassIndex(int32_t value);

  /// @brief Method .ctor, addr 0x6ce739c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW passName);

  static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_SharedPropertyBlock();

  static inline void setStaticF_s_SharedPropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenPassRendererFeature_FullScreenRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature_FullScreenRenderPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullScreenPassRendererFeature_FullScreenRenderPass(FullScreenPassRendererFeature_FullScreenRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature_FullScreenRenderPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullScreenPassRendererFeature_FullScreenRenderPass(FullScreenPassRendererFeature_FullScreenRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13157 };

  /// @brief Field m_Material, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_PassIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_PassIndex;

  /// @brief Field m_FetchActiveColor, offset: 0x6c, size: 0x1, def value: None
  bool ___m_FetchActiveColor;

  /// @brief Field m_BindDepthStencilAttachment, offset: 0x6d, size: 0x1, def value: None
  bool ___m_BindDepthStencilAttachment;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_Material) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_PassIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_FetchActiveColor) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass, ___m_BindDepthStencilAttachment) == 0x6d, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass) == 0x70, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature/Version
struct CORDL_TYPE FullScreenPassRendererFeature_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FullScreenPassRendererFeature_Version_Unwrapped
  enum struct __FullScreenPassRendererFeature_Version_Unwrapped : int32_t {
    __E_Uninitialised = static_cast<int32_t>(0xffffffff),
    __E_Initial = static_cast<int32_t>(0x0),
    __E_AddFetchColorBufferCheckbox = static_cast<int32_t>(0x1),
    __E_Count = static_cast<int32_t>(0x2),
    __E_Latest = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FullScreenPassRendererFeature_Version_Unwrapped() const noexcept {
    return static_cast<__FullScreenPassRendererFeature_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenPassRendererFeature_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr FullScreenPassRendererFeature_Version(int32_t value__) noexcept;

  /// @brief Field AddFetchColorBufferCheckbox value: I32(1)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const AddFetchColorBufferCheckbox;

  /// @brief Field Count value: I32(2)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const Initial;

  /// @brief Field Latest value: I32(1)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const Latest;

  /// @brief Field Uninitialised value: I32(-1)
  static ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const Uninitialised;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13158 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [MovedFrom("")]
// Dependencies UnityEngine.Rendering.Universal.FullScreenPassRendererFeature::InjectionPoint, UnityEngine.Rendering.Universal.FullScreenPassRendererFeature::Version,
// UnityEngine.Rendering.Universal.ScriptableRenderPassInput, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.FullScreenPassRendererFeature
class CORDL_TYPE FullScreenPassRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using FullScreenRenderPass = ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass;

  using InjectionPoint = ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint;

  using Version = ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version;

  /// @brief Field bindDepthStencilAttachment, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_bindDepthStencilAttachment, put = __cordl_internal_set_bindDepthStencilAttachment)) bool bindDepthStencilAttachment;

  /// @brief Field fetchColorBuffer, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_fetchColorBuffer, put = __cordl_internal_set_fetchColorBuffer)) bool fetchColorBuffer;

  /// @brief Field injectionPoint, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_injectionPoint,
                      put = __cordl_internal_set_injectionPoint)) ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint injectionPoint;

  /// @brief Field m_FullScreenPass, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullScreenPass,
                      put = __cordl_internal_set_m_FullScreenPass)) ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* m_FullScreenPass;

  /// @brief Field m_Version, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version m_Version;

  /// @brief Field passIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndex, put = __cordl_internal_set_passIndex)) int32_t passIndex;

  /// @brief Field passMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_passMaterial, put = __cordl_internal_set_passMaterial)) ::UnityW<::UnityEngine::Material> passMaterial;

  /// @brief Field requirements, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_requirements, put = __cordl_internal_set_requirements)) ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput requirements;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method AddRenderPasses, addr 0x6ce7430, size 0x228, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x6ce7330, size 0x6c, virtual true, abstract: false, final false
  inline void Create();

  static inline ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature* New_ctor();

  /// @brief Method RequireRenderingLayers, addr 0x6ce741c, size 0x14, virtual true, abstract: false, final false
  inline bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                     ::by_ref<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x6ce768c, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x6ce7670, size 0x1c, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UpgradeIfNeeded, addr 0x6ce766c, size 0x4, virtual false, abstract: false, final false
  inline void UpgradeIfNeeded();

  constexpr bool const& __cordl_internal_get_bindDepthStencilAttachment() const;

  constexpr bool& __cordl_internal_get_bindDepthStencilAttachment();

  constexpr bool const& __cordl_internal_get_fetchColorBuffer() const;

  constexpr bool& __cordl_internal_get_fetchColorBuffer();

  constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint const& __cordl_internal_get_injectionPoint() const;

  constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint& __cordl_internal_get_injectionPoint();

  constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* const& __cordl_internal_get_m_FullScreenPass() const;

  constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass*& __cordl_internal_get_m_FullScreenPass();

  constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version& __cordl_internal_get_m_Version();

  constexpr int32_t const& __cordl_internal_get_passIndex() const;

  constexpr int32_t& __cordl_internal_get_passIndex();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_passMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_passMaterial();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput const& __cordl_internal_get_requirements() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput& __cordl_internal_get_requirements();

  constexpr void __cordl_internal_set_bindDepthStencilAttachment(bool value);

  constexpr void __cordl_internal_set_fetchColorBuffer(bool value);

  constexpr void __cordl_internal_set_injectionPoint(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint value);

  constexpr void __cordl_internal_set_m_FullScreenPass(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version value);

  constexpr void __cordl_internal_set_passIndex(int32_t value);

  constexpr void __cordl_internal_set_passMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_requirements(::UnityEngine::Rendering::Universal::ScriptableRenderPassInput value);

  /// @brief Method .ctor, addr 0x6ce76a4, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullScreenPassRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullScreenPassRendererFeature(FullScreenPassRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullScreenPassRendererFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullScreenPassRendererFeature(FullScreenPassRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13159 };

  /// @brief Field injectionPoint, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_InjectionPoint ___injectionPoint;

  /// @brief Field fetchColorBuffer, offset: 0x20, size: 0x1, def value: None
  bool ___fetchColorBuffer;

  /// @brief Field requirements, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderPassInput ___requirements;

  /// @brief Field passMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___passMaterial;

  /// @brief Field passIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___passIndex;

  /// @brief Field bindDepthStencilAttachment, offset: 0x34, size: 0x1, def value: None
  bool ___bindDepthStencilAttachment;

  /// @brief Field m_FullScreenPass, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_FullScreenRenderPass* ___m_FullScreenPass;

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature_Version ___m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___injectionPoint) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___fetchColorBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___requirements) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___passMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___passIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___bindDepthStencilAttachment) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___m_FullScreenPass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature, ___m_Version) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::FullScreenPassRendererFeature) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
