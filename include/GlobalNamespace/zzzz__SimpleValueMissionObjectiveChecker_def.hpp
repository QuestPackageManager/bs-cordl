#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(SimpleValueMissionObjectiveChecker)
// Forward declare root types
namespace GlobalNamespace {
class SimpleValueMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleValueMissionObjectiveChecker);
// Dependencies MissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleValueMissionObjectiveChecker
class CORDL_TYPE SimpleValueMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
  // Declarations
  /// @brief Method CheckAndUpdateStatus, addr 0x3badeb8, size 0x104, virtual false, abstract: false, final false
  inline void CheckAndUpdateStatus();

  static inline ::GlobalNamespace::SimpleValueMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor, addr 0x3badfc4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleValueMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleValueMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleValueMissionObjectiveChecker(SimpleValueMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleValueMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleValueMissionObjectiveChecker(SimpleValueMissionObjectiveChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleValueMissionObjectiveChecker, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleValueMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleValueMissionObjectiveChecker*, "", "SimpleValueMissionObjectiveChecker");
