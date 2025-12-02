#pragma once
// IWYU pragma private; include "GlobalNamespace/ScreenDisplacementEffectGrabPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(ScreenDisplacementEffectGrabPass)
namespace GlobalNamespace {
class ScreenDisplacementEffectGrabPass_PassData;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScreenDisplacementEffectGrabPass);
MARK_REF_PTR_T(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectGrabPass/PassData
class CORDL_TYPE ScreenDisplacementEffectGrabPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field activeColorTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_activeColorTexture, put = __cordl_internal_set_activeColorTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle activeColorTexture;

  static inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_activeColorTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_activeColorTexture();

  constexpr void __cordl_internal_set_activeColorTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x5d31cd8, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20781 };

  /// @brief Field activeColorTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___activeColorTexture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData, ___activeColorTexture) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScreenDisplacementEffectGrabPass
class CORDL_TYPE ScreenDisplacementEffectGrabPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData;

  /// @brief Field _blitMaterial, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__blitMaterial, put = __cordl_internal_set__blitMaterial)) ::UnityW<::UnityEngine::Material> _blitMaterial;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x5d313cc, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  static inline ::GlobalNamespace::ScreenDisplacementEffectGrabPass* New_ctor(::UnityEngine::Shader* blitShader);

  /// @brief Method RecordRenderGraph, addr 0x5d31508, size 0x618, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method Render, addr 0x5d31b20, size 0x1b8, virtual false, abstract: false, final false
  inline void Render(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__blitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__blitMaterial();

  constexpr void __cordl_internal_set__blitMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x5d31190, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Shader* blitShader);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20782 };

  /// @brief Field _blitMaterial, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____blitMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenDisplacementEffectGrabPass, ____blitMaterial) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScreenDisplacementEffectGrabPass, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScreenDisplacementEffectGrabPass);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenDisplacementEffectGrabPass*, "", "ScreenDisplacementEffectGrabPass");
NEED_NO_BOX(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScreenDisplacementEffectGrabPass_PassData*, "", "ScreenDisplacementEffectGrabPass/PassData");
