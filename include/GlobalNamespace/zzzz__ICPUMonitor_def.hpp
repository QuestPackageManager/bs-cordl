#pragma once
// IWYU pragma private; include "GlobalNamespace/ICPUMonitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(ICPUMonitor)
namespace GlobalNamespace {
class IPollable;
}
// Forward declare root types
namespace GlobalNamespace {
class ICPUMonitor;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ICPUMonitor*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ICPUMonitor*, "", "ICPUMonitor");
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: ICPUMonitor
class CORDL_TYPE ICPUMonitor {
public:
  // Declarations
  __declspec(property(get = get_utilization)) float_t utilization;

  /// @brief Convert operator to "::GlobalNamespace::IPollable"
  constexpr operator ::GlobalNamespace::IPollable*() noexcept;

  /// @brief Method get_utilization, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_utilization();

  /// @brief Convert to "::GlobalNamespace::IPollable"
  constexpr ::GlobalNamespace::IPollable* i___GlobalNamespace__IPollable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICPUMonitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICPUMonitor(ICPUMonitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18141 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
