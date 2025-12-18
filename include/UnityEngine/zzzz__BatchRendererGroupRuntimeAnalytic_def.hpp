#pragma once
// IWYU pragma private; include "UnityEngine/BatchRendererGroupRuntimeAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRendererGroupRuntimeAnalytic)
// Forward declare root types
namespace UnityEngine {
class BatchRendererGroupRuntimeAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::BatchRendererGroupRuntimeAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.BatchRendererGroupRuntimeAnalytic
class CORDL_TYPE BatchRendererGroupRuntimeAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field brgRuntimeStatus, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_brgRuntimeStatus, put = __cordl_internal_set_brgRuntimeStatus)) int32_t brgRuntimeStatus;

  /// @brief Method CreateBatchRendererGroupRuntimeAnalytic, addr 0x689d8b0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::BatchRendererGroupRuntimeAnalytic* CreateBatchRendererGroupRuntimeAnalytic();

  static inline ::UnityEngine::BatchRendererGroupRuntimeAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_brgRuntimeStatus() const;

  constexpr int32_t& __cordl_internal_get_brgRuntimeStatus();

  constexpr void __cordl_internal_set_brgRuntimeStatus(int32_t value);

  /// @brief Method .ctor, addr 0x689d838, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroupRuntimeAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroupRuntimeAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroupRuntimeAnalytic(BatchRendererGroupRuntimeAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroupRuntimeAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroupRuntimeAnalytic(BatchRendererGroupRuntimeAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10058 };

  /// @brief Field brgRuntimeStatus, offset: 0x2c, size: 0x4, def value: None
  int32_t ___brgRuntimeStatus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BatchRendererGroupRuntimeAnalytic, ___brgRuntimeStatus) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::BatchRendererGroupRuntimeAnalytic, 0x30>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::BatchRendererGroupRuntimeAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BatchRendererGroupRuntimeAnalytic*, "UnityEngine", "BatchRendererGroupRuntimeAnalytic");
