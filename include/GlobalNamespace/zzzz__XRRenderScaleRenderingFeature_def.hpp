#pragma once
// IWYU pragma private; include "GlobalNamespace/XRRenderScaleRenderingFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(XRRenderScaleRenderingFeature)
namespace GlobalNamespace {
class XRRenderScaleRenderPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class XRRenderScaleRenderingFeature;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::XRRenderScaleRenderingFeature*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRRenderScaleRenderingFeature*, "", "XRRenderScaleRenderingFeature");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: XRRenderScaleRenderingFeature
class CORDL_TYPE XRRenderScaleRenderingFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _pass, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pass, put = __cordl_internal_set__pass)) ::GlobalNamespace::XRRenderScaleRenderPass* _pass;

  /// @brief Method AddRenderPasses, addr 0x5f4d5c4, size 0x50, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5f4d508, size 0x58, virtual true, abstract: false, final false
  inline void Create();

  static inline ::GlobalNamespace::XRRenderScaleRenderingFeature* New_ctor();

  constexpr ::GlobalNamespace::XRRenderScaleRenderPass* const& __cordl_internal_get__pass() const;

  constexpr ::GlobalNamespace::XRRenderScaleRenderPass*& __cordl_internal_get__pass();

  constexpr void __cordl_internal_set__pass(::GlobalNamespace::XRRenderScaleRenderPass* value);

  /// @brief Method .ctor, addr 0x5f4d614, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRRenderScaleRenderingFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRRenderScaleRenderingFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRRenderScaleRenderingFeature(XRRenderScaleRenderingFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRRenderScaleRenderingFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRRenderScaleRenderingFeature(XRRenderScaleRenderingFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20940 };

  /// @brief Field _pass, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::XRRenderScaleRenderPass* ____pass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRRenderScaleRenderingFeature, ____pass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRRenderScaleRenderingFeature) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
