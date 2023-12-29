#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAnalyticsManager)
namespace GlobalNamespace {
class IPollable;
}
namespace GlobalNamespace {
struct MetricIdentifier;
}
namespace System {
class IDisposable;
}
namespace BGNet::Core {
struct AnalyticsMetricUnit;
}
// Forward declare root types
namespace BGNet::Core {
class IAnalyticsManager;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::IAnalyticsManager);
// Type: BGNet.Core::IAnalyticsManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12934))
// CS Name: ::BGNet.Core::IAnalyticsManager*
class CORDL_TYPE IAnalyticsManager {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method UpdateState addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateState(::GlobalNamespace::MetricIdentifier metricIdentifier, int64_t state, ::BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric);

  /// @brief Method UpdateAverage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateAverage(::GlobalNamespace::MetricIdentifier metricIdentifier, double_t value, ::BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric);

  /// @brief Method IncrementCounter addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void IncrementCounter(::GlobalNamespace::MetricIdentifier metricIdentifier, int64_t incrementAmount, ::BGNet::Core::AnalyticsMetricUnit unit);

  // Ctor Parameters [CppParam { name: "", ty: "IAnalyticsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAnalyticsManager(IAnalyticsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAnalyticsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAnalyticsManager(IAnalyticsManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::IAnalyticsManager);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::IAnalyticsManager*, "BGNet.Core", "IAnalyticsManager");
