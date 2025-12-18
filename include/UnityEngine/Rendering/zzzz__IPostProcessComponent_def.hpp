#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IPostProcessComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPostProcessComponent)
// Forward declare root types
namespace UnityEngine::Rendering {
class IPostProcessComponent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IPostProcessComponent);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IPostProcessComponent
class CORDL_TYPE IPostProcessComponent {
public:
  // Declarations
  /// @brief Method IsActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsActive();

  /// @brief Method IsTileCompatible, addr 0x65e2904, size 0x8, virtual true, abstract: false, final false
  inline bool IsTileCompatible();

  // Ctor Parameters [CppParam { name: "", ty: "IPostProcessComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPostProcessComponent(IPostProcessComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12141 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IPostProcessComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IPostProcessComponent*, "UnityEngine.Rendering", "IPostProcessComponent");
