#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IVirtualTexturingEnabledRenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVirtualTexturingEnabledRenderPipeline)
// Forward declare root types
namespace UnityEngine::Rendering {
class IVirtualTexturingEnabledRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IVirtualTexturingEnabledRenderPipeline
class CORDL_TYPE IVirtualTexturingEnabledRenderPipeline {
public:
  // Declarations
  __declspec(property(get = get_virtualTexturingEnabled)) bool virtualTexturingEnabled;

  /// @brief Method get_virtualTexturingEnabled, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_virtualTexturingEnabled();

  // Ctor Parameters [CppParam { name: "", ty: "IVirtualTexturingEnabledRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVirtualTexturingEnabledRenderPipeline(IVirtualTexturingEnabledRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11890 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IVirtualTexturingEnabledRenderPipeline*, "UnityEngine.Rendering", "IVirtualTexturingEnabledRenderPipeline");
