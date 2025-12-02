#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionTestComputeShader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OcclusionTestComputeShader)
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct OcclusionTestComputeShader;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OcclusionTestComputeShader);
// Dependencies UnityEngine.Rendering.LocalKeyword
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionTestComputeShader
struct CORDL_TYPE OcclusionTestComputeShader {
public:
  // Declarations
  /// @brief Method Init, addr 0x66135fc, size 0x84, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::ComputeShader* cs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionTestComputeShader();

  // Ctor Parameters [CppParam { name: "cs", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: None }, CppParam { name: "occlusionDebugKeyword", ty:
  // "::UnityEngine::Rendering::LocalKeyword", modifiers: "", def_value: None }]
  constexpr OcclusionTestComputeShader(::UnityW<::UnityEngine::ComputeShader> cs, ::UnityEngine::Rendering::LocalKeyword occlusionDebugKeyword) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17725 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field cs, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> cs;

  /// @brief Field occlusionDebugKeyword, offset: 0x8, size: 0x18, def value: None
  ::UnityEngine::Rendering::LocalKeyword occlusionDebugKeyword;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionTestComputeShader, cs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionTestComputeShader, occlusionDebugKeyword) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionTestComputeShader, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionTestComputeShader, "UnityEngine.Rendering", "OcclusionTestComputeShader");
