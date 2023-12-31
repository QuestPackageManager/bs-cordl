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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5091))
// CS Name: ::HandsMovementMissionObjectiveChecker*
class CORDL_TYPE HandsMovementMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _saberActivityCounter, offset 0x48, size 0x8
  __declspec(property(get = __get__saberActivityCounter, put = __set__saberActivityCounter))::GlobalNamespace::SaberActivityCounter* _saberActivityCounter;

  constexpr ::GlobalNamespace::SaberActivityCounter*& __get__saberActivityCounter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberActivityCounter*> const& __get__saberActivityCounter() const;

  constexpr void __set__saberActivityCounter(::GlobalNamespace::SaberActivityCounter* value);

  /// @brief Method OnDestroy, addr 0x23cbeb8, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleTotalDistanceDidChange, addr 0x23cbf8c, size 0x60, virtual false, abstract: false, final false
  inline void HandleTotalDistanceDidChange(float_t distance);

  /// @brief Method Init, addr 0x23cbfec, size 0x108, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::HandsMovementMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor, addr 0x23cc0f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HandsMovementMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandsMovementMissionObjectiveChecker(HandsMovementMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandsMovementMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandsMovementMissionObjectiveChecker(HandsMovementMissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandsMovementMissionObjectiveChecker();

public:
  /// @brief Field _saberActivityCounter, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::SaberActivityCounter* ____saberActivityCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HandsMovementMissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::HandsMovementMissionObjectiveChecker, ____saberActivityCounter) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HandsMovementMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandsMovementMissionObjectiveChecker*, "", "HandsMovementMissionObjectiveChecker");
