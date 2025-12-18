#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/BatchRenderGroupUsageAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BatchRenderGroupUsageAnalytic)
// Forward declare root types
namespace UnityEngine::Analytics {
class BatchRenderGroupUsageAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.BatchRenderGroupUsageAnalytic
class CORDL_TYPE BatchRenderGroupUsageAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field maxBRGInstance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxBRGInstance, put = __cordl_internal_set_maxBRGInstance)) int32_t maxBRGInstance;

  /// @brief Field maxDrawCommandBatch, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_maxDrawCommandBatch, put = __cordl_internal_set_maxDrawCommandBatch)) int32_t maxDrawCommandBatch;

  /// @brief Field maxMaterialCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxMaterialCount, put = __cordl_internal_set_maxMaterialCount)) int32_t maxMaterialCount;

  /// @brief Field maxMeshCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_maxMeshCount, put = __cordl_internal_set_maxMeshCount)) int32_t maxMeshCount;

  /// @brief Method CreateBatchRenderGroupUsageAnalytic, addr 0x693c848, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* CreateBatchRenderGroupUsageAnalytic();

  static inline ::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_maxBRGInstance() const;

  constexpr int32_t& __cordl_internal_get_maxBRGInstance();

  constexpr int32_t const& __cordl_internal_get_maxDrawCommandBatch() const;

  constexpr int32_t& __cordl_internal_get_maxDrawCommandBatch();

  constexpr int32_t const& __cordl_internal_get_maxMaterialCount() const;

  constexpr int32_t& __cordl_internal_get_maxMaterialCount();

  constexpr int32_t const& __cordl_internal_get_maxMeshCount() const;

  constexpr int32_t& __cordl_internal_get_maxMeshCount();

  constexpr void __cordl_internal_set_maxBRGInstance(int32_t value);

  constexpr void __cordl_internal_set_maxDrawCommandBatch(int32_t value);

  constexpr void __cordl_internal_set_maxMaterialCount(int32_t value);

  constexpr void __cordl_internal_set_maxMeshCount(int32_t value);

  /// @brief Method .ctor, addr 0x693c7d0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRenderGroupUsageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRenderGroupUsageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRenderGroupUsageAnalytic(BatchRenderGroupUsageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRenderGroupUsageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRenderGroupUsageAnalytic(BatchRenderGroupUsageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10672 };

  /// @brief Field maxBRGInstance, offset: 0x2c, size: 0x4, def value: None
  int32_t ___maxBRGInstance;

  /// @brief Field maxMeshCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___maxMeshCount;

  /// @brief Field maxMaterialCount, offset: 0x34, size: 0x4, def value: None
  int32_t ___maxMaterialCount;

  /// @brief Field maxDrawCommandBatch, offset: 0x38, size: 0x4, def value: None
  int32_t ___maxDrawCommandBatch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic, ___maxBRGInstance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic, ___maxMeshCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic, ___maxMaterialCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic, ___maxDrawCommandBatch) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::BatchRenderGroupUsageAnalytic*, "UnityEngine.Analytics", "BatchRenderGroupUsageAnalytic");
