#pragma once
// IWYU pragma private; include "UnityEngine/UI/IMaterialModifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMaterialModifier)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UI {
class IMaterialModifier;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::IMaterialModifier);
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.IMaterialModifier
class CORDL_TYPE IMaterialModifier {
public:
  // Declarations
  /// @brief Method GetModifiedMaterial, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetModifiedMaterial(::UnityEngine::Material* baseMaterial);

  // Ctor Parameters [CppParam { name: "", ty: "IMaterialModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMaterialModifier(IMaterialModifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::IMaterialModifier);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::IMaterialModifier*, "UnityEngine.UI", "IMaterialModifier");
