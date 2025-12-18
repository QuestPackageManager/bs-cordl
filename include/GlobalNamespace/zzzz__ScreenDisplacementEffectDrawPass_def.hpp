#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectDrawPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
CORDL_MODULE_EXPORT(ScreenDisplacementEffectDrawPass)
namespace GlobalNamespace {
class ScreenDisplacementEffectDrawPass_PassData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScreenDisplacementEffectDrawPass);
MARK_REF_PTR_T(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData);
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

  /// @brief Method .ctor, addr 0x5d9a518, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20808 };

  /// @brief Field rendererListHandle, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererListHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData, ___rendererListHandle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectDrawPass
class CORDL_TYPE ScreenDisplacementEffectDrawPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData;

  /// @brief Field _layerMask, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__layerMask, put = __cordl_internal_set__layerMask)) ::UnityEngine::LayerMask _layerMask;

  /// @brief Field _shaderTagIdList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__shaderTagIdList, put = setStaticF__shaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* _shaderTagIdList;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5d98f54, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::ScreenDisplacementEffectDrawPass* New_ctor(::UnityEngine::LayerMask layerMask);

  /// @brief Method RecordRenderGraph, addr 0x5d99868, size 0x9dc, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Render, addr 0x5d9a244, size 0xbc, virtual false, abstract: false, final false
  inline void Render(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask();

  constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask value);

  /// @brief Method .ctor, addr 0x5d98e4c, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::LayerMask layerMask);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF__shaderTagIdList();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20809 };

  /// @brief Field _layerMask, offset: 0xb8, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____layerMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectDrawPass, ____layerMask) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenDisplacementEffectDrawPass, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScreenDisplacementEffectDrawPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenDisplacementEffectDrawPass*, "", "ScreenDisplacementEffectDrawPass");
NEED_NO_BOX(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenDisplacementEffectDrawPass_PassData*, "", "ScreenDisplacementEffectDrawPass/PassData");
