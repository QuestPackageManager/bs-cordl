#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticStop.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_def.hpp"
CORDL_MODULE_EXPORT(SubsystemsAnalyticStop)
// Forward declare root types
namespace UnityEngine::Analytics {
class SubsystemsAnalyticStop;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::SubsystemsAnalyticStop);
// Dependencies UnityEngine.Analytics.SubsystemsAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.SubsystemsAnalyticStop
class CORDL_TYPE SubsystemsAnalyticStop : public ::UnityEngine::Analytics::SubsystemsAnalyticBase {
public:
  // Declarations
  /// @brief Method CreateSubsystemsAnalyticStop, addr 0x6bf01f4, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::SubsystemsAnalyticStop* CreateSubsystemsAnalyticStop();

  static inline ::UnityEngine::Analytics::SubsystemsAnalyticStop* New_ctor();

  /// @brief Method .ctor, addr 0x6bf0160, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemsAnalyticStop();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticStop", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemsAnalyticStop(SubsystemsAnalyticStop&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticStop", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemsAnalyticStop(SubsystemsAnalyticStop const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::SubsystemsAnalyticStop, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::SubsystemsAnalyticStop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::SubsystemsAnalyticStop*, "UnityEngine.Analytics", "SubsystemsAnalyticStop");
