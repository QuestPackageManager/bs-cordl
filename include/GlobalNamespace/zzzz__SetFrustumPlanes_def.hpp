#pragma once
// IWYU pragma private; include "GlobalNamespace/SetFrustumPlanes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(SetFrustumPlanes)
namespace GlobalNamespace {
class SetFrustumPlanesPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetFrustumPlanes;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetFrustumPlanes*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetFrustumPlanes*, "", "SetFrustumPlanes");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetFrustumPlanes
class CORDL_TYPE SetFrustumPlanes : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field Visualise, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_Visualise, put = __cordl_internal_set_Visualise)) bool Visualise;

  /// @brief Field _pass, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pass, put = __cordl_internal_set__pass)) ::GlobalNamespace::SetFrustumPlanesPass* _pass;

  /// @brief Method AddRenderPasses, addr 0x5f48b10, size 0x20, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5f48a30, size 0x64, virtual true, abstract: false, final false
  inline void Create();

  static inline ::GlobalNamespace::SetFrustumPlanes* New_ctor();

  constexpr bool const& __cordl_internal_get_Visualise() const;

  constexpr bool& __cordl_internal_get_Visualise();

  constexpr ::GlobalNamespace::SetFrustumPlanesPass* const& __cordl_internal_get__pass() const;

  constexpr ::GlobalNamespace::SetFrustumPlanesPass*& __cordl_internal_get__pass();

  constexpr void __cordl_internal_set_Visualise(bool value);

  constexpr void __cordl_internal_set__pass(::GlobalNamespace::SetFrustumPlanesPass* value);

  /// @brief Method .ctor, addr 0x5f48b30, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetFrustumPlanes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetFrustumPlanes(SetFrustumPlanes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetFrustumPlanes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetFrustumPlanes(SetFrustumPlanes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20918 };

  /// @brief Field Visualise, offset: 0x19, size: 0x1, def value: None
  bool ___Visualise;

  /// @brief Field _pass, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SetFrustumPlanesPass* ____pass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetFrustumPlanes, ___Visualise) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SetFrustumPlanes, ____pass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetFrustumPlanes) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
