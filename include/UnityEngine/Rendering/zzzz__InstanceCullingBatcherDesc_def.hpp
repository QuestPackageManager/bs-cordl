#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullingBatcherDesc.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(InstanceCullingBatcherDesc)
namespace UnityEngine::Rendering {
class OnCullingCompleteCallback;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceCullingBatcherDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceCullingBatcherDesc);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullingBatcherDesc
struct CORDL_TYPE InstanceCullingBatcherDesc {
public:
  // Declarations
  /// @brief Method NewDefault, addr 0x65fd0e0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::InstanceCullingBatcherDesc NewDefault();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceCullingBatcherDesc();

  // Ctor Parameters [CppParam { name: "onCompleteCallback", ty: "::UnityEngine::Rendering::OnCullingCompleteCallback*", modifiers: "", def_value: None }]
  constexpr InstanceCullingBatcherDesc(::UnityEngine::Rendering::OnCullingCompleteCallback* onCompleteCallback) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17618 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field onCompleteCallback, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::OnCullingCompleteCallback* onCompleteCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullingBatcherDesc, onCompleteCallback) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::InstanceCullingBatcherDesc, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::InstanceCullingBatcherDesc, "UnityEngine.Rendering", "InstanceCullingBatcherDesc");
