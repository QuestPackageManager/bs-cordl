#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroupCreateInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BatchRendererGroupCreateInfo)
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnFinishedCulling;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnPerformCulling;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchRendererGroupCreateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchRendererGroupCreateInfo);
// Dependencies System.IntPtr
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchRendererGroupCreateInfo
struct CORDL_TYPE BatchRendererGroupCreateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroupCreateInfo();

  // Ctor Parameters [CppParam { name: "cullingCallback", ty: "::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*", modifiers: "", def_value: None }, CppParam { name:
  // "finishedCullingCallback", ty: "::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling*", modifiers: "", def_value: None }, CppParam { name: "userContext", ty: "::System::IntPtr",
  // modifiers: "", def_value: None }]
  constexpr BatchRendererGroupCreateInfo(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* cullingCallback,
                                         ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* finishedCullingCallback, ::System::IntPtr userContext) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10842 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field cullingCallback, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* cullingCallback;

  /// @brief Field finishedCullingCallback, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchRendererGroup_OnFinishedCulling* finishedCullingCallback;

  /// @brief Field userContext, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr userContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupCreateInfo, cullingCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupCreateInfo, finishedCullingCallback) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroupCreateInfo, userContext) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroupCreateInfo, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroupCreateInfo, "UnityEngine.Rendering", "BatchRendererGroupCreateInfo");
