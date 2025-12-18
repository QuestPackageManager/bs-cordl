#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceShadows.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceShadows)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPass_ScreenSpaceShadows___c;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsSettings;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadows_ScreenSpaceShadowsPass;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadows_ScreenSpaceShadowsPostPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
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
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
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
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadows;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPass_ScreenSpaceShadows___c;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadows_ScreenSpaceShadowsPass;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceShadows_ScreenSpaceShadowsPostPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadows);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPass/PassData
class CORDL_TYPE ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field shadowmapID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_shadowmapID, put = __cordl_internal_set_shadowmapID)) int32_t shadowmapID;

  /// @brief Field target, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle target;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_shadowmapID() const;

  constexpr int32_t& __cordl_internal_get_shadowmapID();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_target() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_shadowmapID(int32_t value);

  constexpr void __cordl_internal_set_target(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66f8214, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData(ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData(ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12901 };

  /// @brief Field target, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___target;

  /// @brief Field material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field shadowmapID, offset: 0x28, size: 0x4, def value: None
  int32_t ___shadowmapID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData, ___target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData, ___material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData, ___shadowmapID) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPass/<>c
class CORDL_TYPE ScreenSpaceShadowsPass_ScreenSpaceShadows___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__11_0;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__11_0, addr 0x66f8f10, size 0x88, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__11_0(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* data,
                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x66f8f0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__11_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c* value);

  static inline void setStaticF___9__11_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadowsPass_ScreenSpaceShadows___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPass_ScreenSpaceShadows___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadowsPass_ScreenSpaceShadows___c(ScreenSpaceShadowsPass_ScreenSpaceShadows___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPass_ScreenSpaceShadows___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadowsPass_ScreenSpaceShadows___c(ScreenSpaceShadowsPass_ScreenSpaceShadows___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12902 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPass
class CORDL_TYPE ScreenSpaceShadows_ScreenSpaceShadowsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData;

  using __c = ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c;

  /// @brief Field m_CurrentSettings, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSettings, put = __cordl_internal_set_m_CurrentSettings)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_CurrentSettings;

  /// @brief Field m_Material, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_PassData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData,
                      put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* m_PassData;

  /// @brief Field m_RenderTarget, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTarget, put = __cordl_internal_set_m_RenderTarget)) ::UnityEngine::Rendering::RTHandle* m_RenderTarget;

  /// @brief Field m_ScreenSpaceShadowmapTextureID, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ScreenSpaceShadowmapTextureID, put = __cordl_internal_set_m_ScreenSpaceShadowmapTextureID)) int32_t m_ScreenSpaceShadowmapTextureID;

  /// @brief Method Dispose, addr 0x66f81a0, size 0x14, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x66f8ca8, size 0x210, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66f8b68, size 0x140, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* data,
                                 ::UnityEngine::Rendering::RTHandle* target);

  /// @brief Method InitPassData, addr 0x66f8394, size 0x30, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*> passData);

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* New_ctor();

  /// @brief Method OnCameraSetup, addr 0x66f8218, size 0x17c, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RecordRenderGraph, addr 0x66f83c4, size 0x7a4, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Setup, addr 0x66f80a8, size 0x7c, virtual false, abstract: false, final false
  inline bool Setup(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* featureSettings, ::UnityEngine::Material* material);

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* const& __cordl_internal_get_m_CurrentSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& __cordl_internal_get_m_CurrentSettings();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_RenderTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_RenderTarget();

  constexpr int32_t const& __cordl_internal_get_m_ScreenSpaceShadowmapTextureID() const;

  constexpr int32_t& __cordl_internal_get_m_ScreenSpaceShadowmapTextureID();

  constexpr void __cordl_internal_set_m_CurrentSettings(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* value);

  constexpr void __cordl_internal_set_m_RenderTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_ScreenSpaceShadowmapTextureID(int32_t value);

  /// @brief Method .ctor, addr 0x66f7b24, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadows_ScreenSpaceShadowsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows_ScreenSpaceShadowsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadows_ScreenSpaceShadowsPass(ScreenSpaceShadows_ScreenSpaceShadowsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows_ScreenSpaceShadowsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadows_ScreenSpaceShadowsPass(ScreenSpaceShadows_ScreenSpaceShadowsPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12903 };

  /// @brief Field m_Material, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_CurrentSettings, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* ___m_CurrentSettings;

  /// @brief Field m_RenderTarget, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_RenderTarget;

  /// @brief Field m_ScreenSpaceShadowmapTextureID, offset: 0xd0, size: 0x4, def value: None
  int32_t ___m_ScreenSpaceShadowmapTextureID;

  /// @brief Field m_PassData, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass, ___m_Material) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass, ___m_CurrentSettings) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass, ___m_RenderTarget) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass, ___m_ScreenSpaceShadowmapTextureID) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass, ___m_PassData) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPostPass/PassData
class CORDL_TYPE ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field pass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_pass, put = __cordl_internal_set_pass)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* pass;

  /// @brief Field shadowData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowData, put = __cordl_internal_set_shadowData)) ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* const& __cordl_internal_get_pass() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*& __cordl_internal_get_pass();

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& __cordl_internal_get_shadowData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& __cordl_internal_get_shadowData();

  constexpr void __cordl_internal_set_pass(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* value);

  constexpr void __cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value);

  /// @brief Method .ctor, addr 0x66f9730, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData(ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData(ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12904 };

  /// @brief Field pass, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* ___pass;

  /// @brief Field shadowData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalShadowData* ___shadowData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData, ___pass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData, ___shadowData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPostPass/<>c
class CORDL_TYPE ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__6_0;

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__6_0, addr 0x66f978c, size 0x74, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__6_0(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData* data,
                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x66f9788, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__6_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c* value);

  static inline void setStaticF___9__6_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c(ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c(ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12905 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows/ScreenSpaceShadowsPostPass
class CORDL_TYPE ScreenSpaceShadows_ScreenSpaceShadowsPostPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData;

  using __c = ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c;

  /// @brief Field k_CurrentActive, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CurrentActive, put = setStaticF_k_CurrentActive)) ::UnityEngine::Rendering::RTHandle* k_CurrentActive;

  /// @brief Method Configure, addr 0x66f8f98, size 0x68, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x66f90c4, size 0x140, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66f9000, size 0xc4, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData);

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* New_ctor();

  /// @brief Method RecordRenderGraph, addr 0x66f9204, size 0x484, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method .ctor, addr 0x66f7c54, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_k_CurrentActive();

  static inline void setStaticF_k_CurrentActive(::UnityEngine::Rendering::RTHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadows_ScreenSpaceShadowsPostPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows_ScreenSpaceShadowsPostPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadows_ScreenSpaceShadowsPostPass(ScreenSpaceShadows_ScreenSpaceShadowsPostPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows_ScreenSpaceShadowsPostPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadows_ScreenSpaceShadowsPostPass(ScreenSpaceShadows_ScreenSpaceShadowsPostPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12906 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceShadows
class CORDL_TYPE ScreenSpaceShadows : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using ScreenSpaceShadowsPass = ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass;

  using ScreenSpaceShadowsPostPass = ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass;

  /// @brief Field m_Material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_SSShadowsPass, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSShadowsPass,
                      put = __cordl_internal_set_m_SSShadowsPass)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* m_SSShadowsPass;

  /// @brief Field m_SSShadowsPostPass, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSShadowsPostPass,
                      put = __cordl_internal_set_m_SSShadowsPostPass)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* m_SSShadowsPostPass;

  /// @brief Field m_Settings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* m_Settings;

  /// @brief Field m_Shader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::Shader> m_Shader;

  /// @brief Method AddRenderPasses, addr 0x66f7e68, size 0x240, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x66f7a64, size 0xc0, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x66f8124, size 0x7c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method LoadMaterial, addr 0x66f7d08, size 0x160, virtual false, abstract: false, final false
  inline bool LoadMaterial();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceShadows* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* const& __cordl_internal_get_m_SSShadowsPass() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*& __cordl_internal_get_m_SSShadowsPass();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* const& __cordl_internal_get_m_SSShadowsPostPass() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*& __cordl_internal_get_m_SSShadowsPostPass();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings*& __cordl_internal_get_m_Settings();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_SSShadowsPass(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* value);

  constexpr void __cordl_internal_set_m_SSShadowsPostPass(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66f81b4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceShadows();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceShadows(ScreenSpaceShadows&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceShadows", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceShadows(ScreenSpaceShadows const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12907 };

  /// @brief Field k_ShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString k_ShaderName{ u"Hidden/Universal Render Pipeline/ScreenSpaceShadows" };

  /// @brief Field m_Shader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_Settings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadowsSettings* ___m_Settings;

  /// @brief Field m_Material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_SSShadowsPass, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass* ___m_SSShadowsPass;

  /// @brief Field m_SSShadowsPostPass, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass* ___m_SSShadowsPostPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_Shader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_Settings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_Material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_SSShadowsPass) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceShadows, ___m_SSShadowsPostPass) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceShadows, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadows);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadows*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows_PassData*, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceShadows/ScreenSpaceShadowsPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPass_ScreenSpaceShadows___c*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPass/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows_PassData*, "UnityEngine.Rendering.Universal",
                       "ScreenSpaceShadows/ScreenSpaceShadowsPostPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadowsPostPass_ScreenSpaceShadows___c*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPostPass/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceShadows_ScreenSpaceShadowsPostPass*, "UnityEngine.Rendering.Universal", "ScreenSpaceShadows/ScreenSpaceShadowsPostPass");
