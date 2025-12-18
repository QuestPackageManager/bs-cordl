#pragma once
// IWYU pragma private; include "GlobalNamespace/HandsMovementMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandsMovementMissionObjectiveChecker)
namespace GlobalNamespace {
class SaberActivityCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class HandsMovementMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HandsMovementMissionObjectiveChecker);
// Dependencies SimpleValueMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandsMovementMissionObjectiveChecker
class CORDL_TYPE HandsMovementMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _saberActivityCounter, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__saberActivityCounter, put = __cordl_internal_set__saberActivityCounter)) ::UnityW<::GlobalNamespace::SaberActivityCounter> _saberActivityCounter;

  /// @brief Method HandleTotalDistanceDidChange, addr 0x580a5dc, size 0x60, virtual false, abstract: false, final false
  inline void HandleTotalDistanceDidChange(float_t distance);

  /// @brief Method Init, addr 0x580a63c, size 0x10c, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::HandsMovementMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x580a4c8, size 0x114, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter> const& __cordl_internal_get__saberActivityCounter() const;

  constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter>& __cordl_internal_get__saberActivityCounter();

  constexpr void __cordl_internal_set__saberActivityCounter(::UnityW<::GlobalNamespace::SaberActivityCounter> value);

  /// @brief Method .ctor, addr 0x580a748, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandsMovementMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandsMovementMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandsMovementMissionObjectiveChecker(HandsMovementMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandsMovementMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandsMovementMissionObjectiveChecker(HandsMovementMissionObjectiveChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6049 };

  /// @brief Field _saberActivityCounter, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberActivityCounter> ____saberActivityCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandsMovementMissionObjectiveChecker, ____saberActivityCounter) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HandsMovementMissionObjectiveChecker, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HandsMovementMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandsMovementMissionObjectiveChecker*, "", "HandsMovementMissionObjectiveChecker");
