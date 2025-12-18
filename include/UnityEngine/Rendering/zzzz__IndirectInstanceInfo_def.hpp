#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectInstanceInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectInstanceInfo)
// Forward declare root types
namespace UnityEngine::Rendering {
struct IndirectInstanceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::IndirectInstanceInfo);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.IndirectInstanceInfo
struct CORDL_TYPE IndirectInstanceInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IndirectInstanceInfo();

  // Ctor Parameters [CppParam { name: "drawOffsetAndSplitMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instanceIndexAndCrossFade", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr IndirectInstanceInfo(int32_t drawOffsetAndSplitMask, int32_t instanceIndexAndCrossFade) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field drawOffsetAndSplitMask, offset: 0x0, size: 0x4, def value: None
  int32_t drawOffsetAndSplitMask;

  /// @brief Field instanceIndexAndCrossFade, offset: 0x4, size: 0x4, def value: None
  int32_t instanceIndexAndCrossFade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::IndirectInstanceInfo, drawOffsetAndSplitMask) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::IndirectInstanceInfo, instanceIndexAndCrossFade) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IndirectInstanceInfo, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IndirectInstanceInfo, "UnityEngine.Rendering", "IndirectInstanceInfo");
