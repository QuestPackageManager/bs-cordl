#pragma once
// IWYU pragma private; include "GlobalNamespace\PlanarMirrorRenderPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlanarMirrorRenderPass)
namespace GlobalNamespace {
class MirrorFrameData;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class PlanarMirrorRenderPass_PassData;
}
namespace GlobalNamespace {
class PlanarMirrorRenderPass___c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
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
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Forward declare root types
namespace GlobalNamespace {
class PlanarMirrorRenderPass;
}
namespace GlobalNamespace {
class PlanarMirrorRenderPass_PassData;
}
namespace GlobalNamespace {
class PlanarMirrorRenderPass___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlanarMirrorRenderPass*);
MARK_REF_T(::GlobalNamespace::PlanarMirrorRenderPass_PassData*);
MARK_REF_T(::GlobalNamespace::PlanarMirrorRenderPass___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorRenderPass*, "", "PlanarMirrorRenderPass");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorRenderPass_PassData*, "", "PlanarMirrorRenderPass/PassData");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlanarMirrorRenderPass___c*, "", "PlanarMirrorRenderPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorRenderPass/PassData
class CORDL_TYPE PlanarMirrorRenderPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field mirrorFrameData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorFrameData, put = __cordl_internal_set_mirrorFrameData)) ::GlobalNamespace::MirrorFrameData* mirrorFrameData;

  /// @brief Field opaqueList, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_opaqueList, put = __cordl_internal_set_opaqueList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle opaqueList;

  /// @brief Field transparentList, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_transparentList, put = __cordl_internal_set_transparentList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle transparentList;

  /// @brief Field xr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::GlobalNamespace::PlanarMirrorRenderPass_PassData* New_ctor();

  constexpr ::GlobalNamespace::MirrorFrameData* const& __cordl_internal_get_mirrorFrameData() const;

  constexpr ::GlobalNamespace::MirrorFrameData*& __cordl_internal_get_mirrorFrameData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_opaqueList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_opaqueList();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_transparentList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_transparentList();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_mirrorFrameData(::GlobalNamespace::MirrorFrameData* value);

  constexpr void __cordl_internal_set_opaqueList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_transparentList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x5f4af0c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorRenderPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorRenderPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorRenderPass_PassData(PlanarMirrorRenderPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorRenderPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorRenderPass_PassData(PlanarMirrorRenderPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20661 };

  /// @brief Field mirrorFrameData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MirrorFrameData* ___mirrorFrameData;

  /// @brief Field xr, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field opaqueList, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___opaqueList;

  /// @brief Field transparentList, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___transparentList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlanarMirrorRenderPass_PassData, ___mirrorFrameData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorRenderPass_PassData, ___xr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorRenderPass_PassData, ___opaqueList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorRenderPass_PassData, ___transparentList) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlanarMirrorRenderPass_PassData) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorRenderPass/<>c
class CORDL_TYPE PlanarMirrorRenderPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PlanarMirrorRenderPass___c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0,
                      put = setStaticF___9__9_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__9_0;

  static inline ::GlobalNamespace::PlanarMirrorRenderPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__9_0, addr 0x5f4af68, size 0x70, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__9_0(::GlobalNamespace::PlanarMirrorRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x5f4af64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PlanarMirrorRenderPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__9_0();

  static inline void setStaticF___9(::GlobalNamespace::PlanarMirrorRenderPass___c* value);

  static inline void setStaticF___9__9_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::GlobalNamespace::PlanarMirrorRenderPass_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorRenderPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorRenderPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorRenderPass___c(PlanarMirrorRenderPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorRenderPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorRenderPass___c(PlanarMirrorRenderPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PlanarMirrorRenderPass___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.CullingResults, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlanarMirrorRenderPass
class CORDL_TYPE PlanarMirrorRenderPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::PlanarMirrorRenderPass_PassData;

  using __c = ::GlobalNamespace::PlanarMirrorRenderPass___c;

  /// @brief Field _cullResults, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get__cullResults, put = __cordl_internal_set__cullResults)) ::UnityEngine::Rendering::CullingResults _cullResults;

  /// @brief Field _mirrorRenderer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__mirrorRenderer, put = __cordl_internal_set__mirrorRenderer)) ::UnityW<::GlobalNamespace::MirrorRendererSO> _mirrorRenderer;

  /// @brief Field _profilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__profilingSampler, put = setStaticF__profilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* _profilingSampler;

  /// @brief Field _reflectionTexId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__reflectionTexId, put = setStaticF__reflectionTexId)) int32_t _reflectionTexId;

  /// @brief Field _shaderTagIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__shaderTagIds, put = setStaticF__shaderTagIds)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* _shaderTagIds;

  __declspec(property(put = set_cullResults)) ::UnityEngine::Rendering::CullingResults cullResults;

  static inline ::GlobalNamespace::PlanarMirrorRenderPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::MirrorRendererSO* mirrorRenderer);

  /// @brief Method RecordRenderGraph, addr 0x5f49bf8, size 0xf0c, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Render, addr 0x5f4ab04, size 0x168, virtual false, abstract: false, final false
  static inline void Render(::GlobalNamespace::PlanarMirrorRenderPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityEngine::Rendering::CullingResults const& __cordl_internal_get__cullResults() const;

  constexpr ::UnityEngine::Rendering::CullingResults& __cordl_internal_get__cullResults();

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO> const& __cordl_internal_get__mirrorRenderer() const;

  constexpr ::UnityW<::GlobalNamespace::MirrorRendererSO>& __cordl_internal_get__mirrorRenderer();

  constexpr void __cordl_internal_set__cullResults(::UnityEngine::Rendering::CullingResults value);

  constexpr void __cordl_internal_set__mirrorRenderer(::UnityW<::GlobalNamespace::MirrorRendererSO> value);

  /// @brief Method .ctor, addr 0x5f48e24, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::GlobalNamespace::MirrorRendererSO* mirrorRenderer);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF__profilingSampler();

  static inline int32_t getStaticF__reflectionTexId();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF__shaderTagIds();

  static inline void setStaticF__profilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF__reflectionTexId(int32_t value);

  static inline void setStaticF__shaderTagIds(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method set_cullResults, addr 0x5f49bf0, size 0x8, virtual false, abstract: false, final false
  inline void set_cullResults(::UnityEngine::Rendering::CullingResults value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlanarMirrorRenderPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorRenderPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlanarMirrorRenderPass(PlanarMirrorRenderPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlanarMirrorRenderPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlanarMirrorRenderPass(PlanarMirrorRenderPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20663 };

  /// @brief Field _mirrorRenderer, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MirrorRendererSO> ____mirrorRenderer;

  /// @brief Field _cullResults, offset: 0xc0, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults ____cullResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlanarMirrorRenderPass, ____mirrorRenderer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlanarMirrorRenderPass, ____cullResults) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlanarMirrorRenderPass) == 0xd0, "Size mismatch!");

} // namespace GlobalNamespace
