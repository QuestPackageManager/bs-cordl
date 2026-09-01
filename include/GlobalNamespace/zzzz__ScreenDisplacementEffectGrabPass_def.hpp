#pragma once
// IWYU pragma private; include "GlobalNamespace\ScreenDisplacementEffectGrabPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(ScreenDisplacementEffectGrabPass)
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass_PassData;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass___c;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass_PassData;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectGrabPass*);
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*);
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectGrabPass*, "", "ScreenDisplacementEffectGrabPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, "", "ScreenDisplacementEffectGrabPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectGrabPass___c*, "", "ScreenDisplacementEffectGrabPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectGrabPass/PassData
class CORDL_TYPE ScreenDisplacementEffectGrabPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeColorTexture, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_activeColorTexture, put = __cordl_internal_set_activeColorTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle activeColorTexture;

  /// @brief Field blitMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blitMaterial, put = __cordl_internal_set_blitMaterial)) ::UnityW<::UnityEngine::Material> blitMaterial;

  static inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_activeColorTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_activeColorTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blitMaterial();

  constexpr void __cordl_internal_set_activeColorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_blitMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x5f4d058, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectGrabPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectGrabPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectGrabPass_PassData(ScreenDisplacementEffectGrabPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectGrabPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectGrabPass_PassData(ScreenDisplacementEffectGrabPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20677 };

  /// @brief Field blitMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___blitMaterial;

  /// @brief Field activeColorTexture, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___activeColorTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData, ___blitMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData, ___activeColorTexture) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectGrabPass/<>c
class CORDL_TYPE ScreenDisplacementEffectGrabPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0,
                      put = setStaticF___9__4_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__4_0;

  static inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__4_0, addr 0x5f4d0b4, size 0x70, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__4_0(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f4d0b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__4_0();

  static inline void setStaticF___9(::GlobalNamespace::ScreenDisplacementEffectGrabPass___c* value);

  static inline void setStaticF___9__4_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectGrabPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectGrabPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectGrabPass___c(ScreenDisplacementEffectGrabPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectGrabPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectGrabPass___c(ScreenDisplacementEffectGrabPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectGrabPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectGrabPass
class CORDL_TYPE ScreenDisplacementEffectGrabPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData;

  using __c = ::GlobalNamespace::ScreenDisplacementEffectGrabPass___c;

  /// @brief Field _blitMaterial, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__blitMaterial, put = __cordl_internal_set__blitMaterial)) ::UnityW<::UnityEngine::Material> _blitMaterial;

  /// @brief Field _profilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__profilingSampler, put = setStaticF__profilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* _profilingSampler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5f4c4e4, size 0x5c, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass* New_ctor(::UnityEngine::Shader* blitShader);

  /// @brief Method RecordRenderGraph, addr 0x5f4c718, size 0x6dc, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Render, addr 0x5f4cdf4, size 0x1d0, virtual false, abstract: false, final false
  static inline void Render(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__blitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__blitMaterial();

  constexpr void __cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x5f4c2a0, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* blitShader);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF__profilingSampler();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectGrabPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectGrabPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectGrabPass(ScreenDisplacementEffectGrabPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectGrabPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectGrabPass(ScreenDisplacementEffectGrabPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20679 };

  /// @brief Field _blitMaterial, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____blitMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectGrabPass, ____blitMaterial) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectGrabPass) == 0xc0, "Size mismatch!");

} // namespace GlobalNamespace
