#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
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
// Type: ::PerformanceReport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceReport*
class CORDL_TYPE PerformanceReport : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateReportDescriptor, addr 0x258d8f4, size 0x188, virtual false, abstract: false, final false
  static inline ::StringW CreateReportDescriptor(::System::DateTime timestamp, ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData);

  /// @brief Method CreateTimestamp, addr 0x258d8a4, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW CreateTimestamp(::System::DateTime timestamp);

  /// @brief Method ListAggregatedFps, addr 0x258d580, size 0x324, virtual false, abstract: false, final false
  static inline ::StringW ListAggregatedFps(::ArrayW<float_t, ::Array<float_t>*> frameDurations, float_t minWindowSize);

  /// @brief Method ListFrameDurations, addr 0x258d46c, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW ListFrameDurations(::ArrayW<float_t, ::Array<float_t>*> frameDurations);

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

  /// @brief Field kDefaultFpsWindow offset 0xffffffff size 0x4
  static constexpr float_t kDefaultFpsWindow{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceReport, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceReport);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceReport*, "", "PerformanceReport");
