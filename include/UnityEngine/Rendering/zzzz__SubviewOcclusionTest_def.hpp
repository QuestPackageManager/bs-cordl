#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SubviewOcclusionTest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubviewOcclusionTest)
// Forward declare root types
namespace UnityEngine::Rendering {
struct SubviewOcclusionTest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SubviewOcclusionTest);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SubviewOcclusionTest
struct CORDL_TYPE SubviewOcclusionTest {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubviewOcclusionTest();

  // Ctor Parameters [CppParam { name: "cullingSplitIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occluderSubviewIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SubviewOcclusionTest(int32_t cullingSplitIndex, int32_t occluderSubviewIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17601 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field cullingSplitIndex, offset: 0x0, size: 0x4, def value: None
  int32_t cullingSplitIndex;

  /// @brief Field occluderSubviewIndex, offset: 0x4, size: 0x4, def value: None
  int32_t occluderSubviewIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SubviewOcclusionTest, cullingSplitIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SubviewOcclusionTest, occluderSubviewIndex) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::SubviewOcclusionTest, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SubviewOcclusionTest, "UnityEngine.Rendering", "SubviewOcclusionTest");
