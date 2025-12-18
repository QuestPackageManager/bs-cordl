#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferAllocInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectBufferAllocInfo)
namespace UnityEngine::Rendering {
struct IndirectBufferLimits;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectBufferAllocInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectBufferAllocInfo);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectBufferAllocInfo
struct CORDL_TYPE IndirectBufferAllocInfo {
public:
  // Declarations
  /// @brief Method GetExtraDrawInfoSlotIndex, addr 0x66778a4, size 0xc, virtual false, abstract: false, final false
  inline int32_t GetExtraDrawInfoSlotIndex();

  /// @brief Method IsEmpty, addr 0x6677860, size 0x10, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method IsWithinLimits, addr 0x6677870, size 0x34, virtual false, abstract: false, final false
  inline bool IsWithinLimits(::ByRef<::UnityEngine::Rendering::IndirectBufferLimits> limits);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectBufferAllocInfo();

  // Ctor Parameters [CppParam { name: "drawAllocIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "drawCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "instanceAllocIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IndirectBufferAllocInfo(int32_t drawAllocIndex, int32_t drawCount, int32_t instanceAllocIndex, int32_t instanceCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17706 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field drawAllocIndex, offset: 0x0, size: 0x4, def value: None
  int32_t drawAllocIndex;

  /// @brief Field drawCount, offset: 0x4, size: 0x4, def value: None
  int32_t drawCount;

  /// @brief Field instanceAllocIndex, offset: 0x8, size: 0x4, def value: None
  int32_t instanceAllocIndex;

  /// @brief Field instanceCount, offset: 0xc, size: 0x4, def value: None
  int32_t instanceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferAllocInfo, drawAllocIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferAllocInfo, drawCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferAllocInfo, instanceAllocIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectBufferAllocInfo, instanceCount) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectBufferAllocInfo, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectBufferAllocInfo, "UnityEngine.Rendering", "IndirectBufferAllocInfo");
