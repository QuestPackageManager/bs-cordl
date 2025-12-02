#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ISTPEnabledRenderPipeline.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISTPEnabledRenderPipeline)
// Forward declare root types
namespace UnityEngine::Rendering {
class ISTPEnabledRenderPipeline;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ISTPEnabledRenderPipeline);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ISTPEnabledRenderPipeline
class CORDL_TYPE ISTPEnabledRenderPipeline {
public:
  // Declarations
  __declspec(property(get = get_isStpUsed)) bool isStpUsed;

  /// @brief Method get_isStpUsed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isStpUsed();

  // Ctor Parameters [CppParam { name: "", ty: "ISTPEnabledRenderPipeline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISTPEnabledRenderPipeline(ISTPEnabledRenderPipeline const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ISTPEnabledRenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ISTPEnabledRenderPipeline*, "UnityEngine.Rendering", "ISTPEnabledRenderPipeline");
