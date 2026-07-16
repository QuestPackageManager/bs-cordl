#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectDrawPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
CORDL_MODULE_EXPORT(ScreenDisplacementEffectDrawPass)
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass_PassData;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass___c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass_PassData;
}
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectDrawPass*);
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*);
MARK_REF_T(::GlobalNamespace::ScreenDisplacementEffectDrawPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectDrawPass*, "", "ScreenDisplacementEffectDrawPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*, "", "ScreenDisplacementEffectDrawPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenDisplacementEffectDrawPass___c*, "", "ScreenDisplacementEffectDrawPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectDrawPass/PassData
class CORDL_TYPE ScreenDisplacementEffectDrawPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field rendererListHandle, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererListHandle, put = __cordl_internal_set_rendererListHandle)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererListHandle;

  static inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererListHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererListHandle();

  constexpr void __cordl_internal_set_rendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x5f48854, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectDrawPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectDrawPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectDrawPass_PassData(ScreenDisplacementEffectDrawPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectDrawPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectDrawPass_PassData(ScreenDisplacementEffectDrawPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20914 };

  /// @brief Field rendererListHandle, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData, ___rendererListHandle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectDrawPass/<>c
class CORDL_TYPE ScreenDisplacementEffectDrawPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ScreenDisplacementEffectDrawPass___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0,
                      put = setStaticF___9__5_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__5_0;

  static inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__5_0, addr 0x5f488b0, size 0x70, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__5_0(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f488ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__5_0();

  static inline void setStaticF___9(::GlobalNamespace::ScreenDisplacementEffectDrawPass___c* value);

  static inline void setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectDrawPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectDrawPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectDrawPass___c(ScreenDisplacementEffectDrawPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectDrawPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectDrawPass___c(ScreenDisplacementEffectDrawPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20915 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectDrawPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectDrawPass
class CORDL_TYPE ScreenDisplacementEffectDrawPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData;

  using __c = ::GlobalNamespace::ScreenDisplacementEffectDrawPass___c;

  /// @brief Field _filteringSettings, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get__filteringSettings, put = __cordl_internal_set__filteringSettings)) ::UnityEngine::Rendering::FilteringSettings _filteringSettings;

  /// @brief Field _profilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__profilingSampler, put = setStaticF__profilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* _profilingSampler;

  /// @brief Field _shaderTagIdList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__shaderTagIdList, put = setStaticF__shaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* _shaderTagIdList;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5f46f30, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass* New_ctor(::UnityEngine::LayerMask layerMask);

  /// @brief Method RecordRenderGraph, addr 0x5f47b1c, size 0x9d4, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Render, addr 0x5f484f0, size 0xf8, virtual false, abstract: false, final false
  static inline void Render(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get__filteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get__filteringSettings();

  constexpr void __cordl_internal_set__filteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  /// @brief Method .ctor, addr 0x5f46d74, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LayerMask layerMask);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF__profilingSampler();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF__shaderTagIdList();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF__profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF__shaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenDisplacementEffectDrawPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectDrawPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenDisplacementEffectDrawPass(ScreenDisplacementEffectDrawPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenDisplacementEffectDrawPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenDisplacementEffectDrawPass(ScreenDisplacementEffectDrawPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20916 };

  /// @brief Field _filteringSettings, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ____filteringSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectDrawPass, ____filteringSettings) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenDisplacementEffectDrawPass) == 0xd8, "Size mismatch!");

} // namespace GlobalNamespace
