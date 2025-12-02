#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceOcclusionTestSubviewSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceOcclusionTestSubviewSettings)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace UnityEngine::Rendering {
struct SubviewOcclusionTest;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceOcclusionTestSubviewSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceOcclusionTestSubviewSettings
struct CORDL_TYPE InstanceOcclusionTestSubviewSettings {
public:
  // Declarations
  /// @brief Method FromSpan, addr 0x6610f90, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings FromSpan(::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubviewOcclusionTest> subviewOcclusionTests);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceOcclusionTestSubviewSettings();

  // Ctor Parameters [CppParam { name: "testCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occluderSubviewIndices", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "occluderSubviewMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cullingSplitIndices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "cullingSplitMask", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InstanceOcclusionTestSubviewSettings(int32_t testCount, int32_t occluderSubviewIndices, int32_t occluderSubviewMask, int32_t cullingSplitIndices, int32_t cullingSplitMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17700 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field testCount, offset: 0x0, size: 0x4, def value: None
  int32_t testCount;

  /// @brief Field occluderSubviewIndices, offset: 0x4, size: 0x4, def value: None
  int32_t occluderSubviewIndices;

  /// @brief Field occluderSubviewMask, offset: 0x8, size: 0x4, def value: None
  int32_t occluderSubviewMask;

  /// @brief Field cullingSplitIndices, offset: 0xc, size: 0x4, def value: None
  int32_t cullingSplitIndices;

  /// @brief Field cullingSplitMask, offset: 0x10, size: 0x4, def value: None
  int32_t cullingSplitMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, testCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, occluderSubviewIndices) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, occluderSubviewMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, cullingSplitIndices) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, cullingSplitMask) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings, "UnityEngine.Rendering", "InstanceOcclusionTestSubviewSettings");
