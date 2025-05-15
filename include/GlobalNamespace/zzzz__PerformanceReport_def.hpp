#pragma once
// IWYU pragma private; include "GlobalNamespace/PerformanceReport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PerformanceReport)
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceReport;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceReport);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PerformanceReport
class CORDL_TYPE PerformanceReport : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateReportDescriptor, addr 0x3b24ad8, size 0xf8, virtual false, abstract: false, final false
  static inline ::StringW CreateReportDescriptor(::System::DateTime timestamp, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData);

  /// @brief Method CreateTimestamp, addr 0x3b24a64, size 0x74, virtual false, abstract: false, final false
  static inline ::StringW CreateTimestamp(::System::DateTime timestamp);

  /// @brief Method ListAggregatedFps, addr 0x3b24750, size 0x314, virtual false, abstract: false, final false
  static inline ::StringW ListAggregatedFps(::ArrayW<float_t, ::Array<float_t>*> frameDurations, float_t minWindowSize);

  /// @brief Method ListFrameDurations, addr 0x3b24634, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW ListFrameDurations(::ArrayW<float_t, ::Array<float_t>*> frameDurations);

  /// @brief Method ListStat, addr 0x3b2519c, size 0x11c, virtual false, abstract: false, final false
  static inline ::StringW ListStat(::ArrayW<float_t, ::Array<float_t>*> statList);

  /// @brief Method ListStat, addr 0x3b252b8, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW ListStat(::ArrayW<int64_t, ::Array<int64_t>*> statList);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceReport();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceReport(PerformanceReport&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceReport", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceReport(PerformanceReport const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5128 };

  /// @brief Field kDefaultFpsWindow offset 0xffffffff size 0x4
  static constexpr float_t kDefaultFpsWindow{ static_cast<float_t>(1.0f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceReport, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceReport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceReport*, "", "PerformanceReport");
