#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/StencilCrossFadeRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StencilCrossFadeRenderPass)
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
class StencilCrossFadeRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class StencilCrossFadeRenderPass___c;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
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
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class StencilCrossFadeRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class StencilCrossFadeRenderPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class StencilCrossFadeRenderPass___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*, "UnityEngine.Rendering.Universal", "StencilCrossFadeRenderPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*, "UnityEngine.Rendering.Universal", "StencilCrossFadeRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c*, "UnityEngine.Rendering.Universal", "StencilCrossFadeRenderPass/<>c");
// Dependencies System.Object, UnityEngine.Material, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.StencilCrossFadeRenderPass/PassData
class CORDL_TYPE StencilCrossFadeRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field depthTarget, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_depthTarget, put = __cordl_internal_set_depthTarget)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget;

  /// @brief Field stencilDitherMaskSeedMaterials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilDitherMaskSeedMaterials, put = __cordl_internal_set_stencilDitherMaskSeedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>
      stencilDitherMaskSeedMaterials;

  static inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthTarget() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthTarget();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_stencilDitherMaskSeedMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_stencilDitherMaskSeedMaterials();

  constexpr void __cordl_internal_set_depthTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_stencilDitherMaskSeedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value);

  /// @brief Method .ctor, addr 0x6cdeafc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilCrossFadeRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StencilCrossFadeRenderPass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilCrossFadeRenderPass_PassData(StencilCrossFadeRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilCrossFadeRenderPass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilCrossFadeRenderPass_PassData(StencilCrossFadeRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13121 };

  /// @brief Field depthTarget, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthTarget;

  /// @brief Field stencilDitherMaskSeedMaterials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>> ___stencilDitherMaskSeedMaterials;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData, ___depthTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData, ___stencilDitherMaskSeedMaterials) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.StencilCrossFadeRenderPass/<>c
class CORDL_TYPE StencilCrossFadeRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0,
                      put = setStaticF___9__8_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__8_0;

  static inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* New_ctor();

  /// @brief Method <Render>b__8_0, addr 0x6cdeb58, size 0x88, virtual false, abstract: false, final false
  inline void _Render_b__8_0(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6cdeb54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c* value);

  static inline void setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilCrossFadeRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StencilCrossFadeRenderPass___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilCrossFadeRenderPass___c(StencilCrossFadeRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilCrossFadeRenderPass___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilCrossFadeRenderPass___c(StencilCrossFadeRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Material
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.StencilCrossFadeRenderPass
class CORDL_TYPE StencilCrossFadeRenderPass : public ::System::Object {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass___c;

  /// @brief Field _StencilDitherPattern, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__StencilDitherPattern, put = __cordl_internal_set__StencilDitherPattern)) int32_t _StencilDitherPattern;

  /// @brief Field _StencilRefDitherMask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__StencilRefDitherMask, put = __cordl_internal_set__StencilRefDitherMask)) int32_t _StencilRefDitherMask;

  /// @brief Field _StencilWriteDitherMask, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__StencilWriteDitherMask, put = __cordl_internal_set__StencilWriteDitherMask)) int32_t _StencilWriteDitherMask;

  /// @brief Field m_ProfilingSampler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_StencilDitherMaskSeedMaterials, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDitherMaskSeedMaterials, put = __cordl_internal_set_m_StencilDitherMaskSeedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>
      m_StencilDitherMaskSeedMaterials;

  /// @brief Method Dispose, addr 0x6cde528, size 0xb8, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method ExecutePass, addr 0x6cde974, size 0x188, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* depthTarget,
                                 ::ArrayW<::UnityEngine::Material*> stencilDitherMaskSeedMaterials);

  static inline ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* New_ctor(::UnityEngine::Shader* shader);

  /// @brief Method Render, addr 0x6cde5e0, size 0x394, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget);

  constexpr int32_t const& __cordl_internal_get__StencilDitherPattern() const;

  constexpr int32_t& __cordl_internal_get__StencilDitherPattern();

  constexpr int32_t const& __cordl_internal_get__StencilRefDitherMask() const;

  constexpr int32_t& __cordl_internal_get__StencilRefDitherMask();

  constexpr int32_t const& __cordl_internal_get__StencilWriteDitherMask() const;

  constexpr int32_t& __cordl_internal_get__StencilWriteDitherMask();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_m_StencilDitherMaskSeedMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_m_StencilDitherMaskSeedMaterials();

  constexpr void __cordl_internal_set__StencilDitherPattern(int32_t value);

  constexpr void __cordl_internal_set__StencilRefDitherMask(int32_t value);

  constexpr void __cordl_internal_set__StencilWriteDitherMask(int32_t value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_StencilDitherMaskSeedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>> value);

  /// @brief Method .ctor, addr 0x6cde254, size 0x2d4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* shader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StencilCrossFadeRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StencilCrossFadeRenderPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StencilCrossFadeRenderPass(StencilCrossFadeRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StencilCrossFadeRenderPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StencilCrossFadeRenderPass(StencilCrossFadeRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13123 };

  /// @brief Field m_StencilDitherMaskSeedMaterials, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>> ___m_StencilDitherMaskSeedMaterials;

  /// @brief Field _StencilDitherPattern, offset: 0x18, size: 0x4, def value: None
  int32_t ____StencilDitherPattern;

  /// @brief Field _StencilRefDitherMask, offset: 0x1c, size: 0x4, def value: None
  int32_t ____StencilRefDitherMask;

  /// @brief Field _StencilWriteDitherMask, offset: 0x20, size: 0x4, def value: None
  int32_t ____StencilWriteDitherMask;

  /// @brief Field m_ProfilingSampler, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass, ___m_StencilDitherMaskSeedMaterials) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass, ____StencilDitherPattern) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass, ____StencilRefDitherMask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass, ____StencilWriteDitherMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass, ___m_ProfilingSampler) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
