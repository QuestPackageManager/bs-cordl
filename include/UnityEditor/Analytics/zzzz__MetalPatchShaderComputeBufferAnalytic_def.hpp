#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/MetalPatchShaderComputeBufferAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
CORDL_MODULE_EXPORT(MetalPatchShaderComputeBufferAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class MetalPatchShaderComputeBufferAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.MetalPatchShaderComputeBufferAnalytic
class CORDL_TYPE MetalPatchShaderComputeBufferAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Method CreateMetalPatchShaderComputeBufferAnalytic, addr 0x6c59800, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic* CreateMetalPatchShaderComputeBufferAnalytic();

  static inline ::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic* New_ctor();

  /// @brief Method .ctor, addr 0x6c59788, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetalPatchShaderComputeBufferAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetalPatchShaderComputeBufferAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetalPatchShaderComputeBufferAnalytic(MetalPatchShaderComputeBufferAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetalPatchShaderComputeBufferAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetalPatchShaderComputeBufferAnalytic(MetalPatchShaderComputeBufferAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic, 0x30>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::MetalPatchShaderComputeBufferAnalytic*, "UnityEditor.Analytics", "MetalPatchShaderComputeBufferAnalytic");
