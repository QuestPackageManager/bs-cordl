#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/SubsystemsAnalyticStart.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__SubsystemsAnalyticBase_def.hpp"
CORDL_MODULE_EXPORT(SubsystemsAnalyticStart)
// Forward declare root types
namespace UnityEngine::Analytics {
class SubsystemsAnalyticStart;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Analytics::SubsystemsAnalyticStart);
// Dependencies UnityEngine.Analytics.SubsystemsAnalyticBase
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.SubsystemsAnalyticStart
class CORDL_TYPE SubsystemsAnalyticStart : public ::UnityEngine::Analytics::SubsystemsAnalyticBase {
public:
  // Declarations
  /// @brief Method CreateSubsystemsAnalyticStart, addr 0x6c58f90, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Analytics::SubsystemsAnalyticStart* CreateSubsystemsAnalyticStart();

  static inline ::UnityEngine::Analytics::SubsystemsAnalyticStart* New_ctor();

  /// @brief Method .ctor, addr 0x6c58efc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemsAnalyticStart();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticStart", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemsAnalyticStart(SubsystemsAnalyticStart&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemsAnalyticStart", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemsAnalyticStart(SubsystemsAnalyticStart const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22572 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Analytics::SubsystemsAnalyticStart, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Analytics
NEED_NO_BOX(::UnityEngine::Analytics::SubsystemsAnalyticStart);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Analytics::SubsystemsAnalyticStart*, "UnityEngine.Analytics", "SubsystemsAnalyticStart");
