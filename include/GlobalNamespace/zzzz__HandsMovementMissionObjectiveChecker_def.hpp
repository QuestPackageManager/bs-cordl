#pragma once
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
// Type: ::HandsMovementMissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HandsMovementMissionObjectiveChecker*
class CORDL_TYPE HandsMovementMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _saberActivityCounter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__saberActivityCounter, put = __cordl_internal_set__saberActivityCounter))::UnityW<::GlobalNamespace::SaberActivityCounter> _saberActivityCounter;

  /// @brief Method HandleTotalDistanceDidChange, addr 0x24576dc, size 0x64, virtual false, abstract: false, final false
  inline void HandleTotalDistanceDidChange(float_t distance);

  /// @brief Method Init, addr 0x2457740, size 0x108, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::HandsMovementMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x2457608, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter> const& __cordl_internal_get__saberActivityCounter() const;

  constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter>& __cordl_internal_get__saberActivityCounter();

  constexpr void __cordl_internal_set__saberActivityCounter(::UnityW<::GlobalNamespace::SaberActivityCounter> value);

  /// @brief Method .ctor, addr 0x2457848, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _saberActivityCounter, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SaberActivityCounter> ____saberActivityCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HandsMovementMissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HandsMovementMissionObjectiveChecker, ____saberActivityCounter) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HandsMovementMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandsMovementMissionObjectiveChecker*, "", "HandsMovementMissionObjectiveChecker");
