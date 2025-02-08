#pragma once
// IWYU pragma private; include "GlobalNamespace/IBakedLightWithRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBakedLightWithRenderer)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class IBakedLightWithRenderer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBakedLightWithRenderer);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBakedLightWithRenderer
class CORDL_TYPE IBakedLightWithRenderer {
public:
  // Declarations
  __declspec(property(get = get_bakingMaterial)) ::UnityW<::UnityEngine::Material> bakingMaterial;

  /// @brief Method get_bakingMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_bakingMaterial();

  // Ctor Parameters [CppParam { name: "", ty: "IBakedLightWithRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBakedLightWithRenderer(IBakedLightWithRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17887 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBakedLightWithRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBakedLightWithRenderer*, "", "IBakedLightWithRenderer");
