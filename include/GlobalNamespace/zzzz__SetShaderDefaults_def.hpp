#pragma once
// IWYU pragma private; include "GlobalNamespace\SetShaderDefaults.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(SetShaderDefaults)
namespace GlobalNamespace {
class SetShaderDefaultsPass;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SetShaderDefaults;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SetShaderDefaults*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetShaderDefaults*, "", "SetShaderDefaults");
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: SetShaderDefaults
class CORDL_TYPE SetShaderDefaults : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field _pass, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pass, put = __cordl_internal_set__pass)) ::GlobalNamespace::SetShaderDefaultsPass* _pass;

  /// @brief Method AddRenderPasses, addr 0x5f4e9a4, size 0x20, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x5f4e8d8, size 0x5c, virtual true, abstract: false, final false
  inline void Create();

  static inline ::GlobalNamespace::SetShaderDefaults* New_ctor();

  constexpr ::GlobalNamespace::SetShaderDefaultsPass* const& __cordl_internal_get__pass() const;

  constexpr ::GlobalNamespace::SetShaderDefaultsPass*& __cordl_internal_get__pass();

  constexpr void __cordl_internal_set__pass(::GlobalNamespace::SetShaderDefaultsPass* value);

  /// @brief Method .ctor, addr 0x5f4e9c4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SetShaderDefaults();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaults", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SetShaderDefaults(SetShaderDefaults&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SetShaderDefaults", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SetShaderDefaults(SetShaderDefaults const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20688 };

  /// @brief Field _pass, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SetShaderDefaultsPass* ____pass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetShaderDefaults, ____pass) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetShaderDefaults) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
