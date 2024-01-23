#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(EnergyMissionObjectiveChecker)
namespace GlobalNamespace {
class GameEnergyCounter;
}
// Forward declare root types
namespace GlobalNamespace {
class EnergyMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnergyMissionObjectiveChecker);
// Type: ::EnergyMissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5093))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5088))
// CS Name: ::EnergyMissionObjectiveChecker*
class CORDL_TYPE EnergyMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _energyCounter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__energyCounter, put = __cordl_internal_set__energyCounter))::UnityW<::GlobalNamespace::GameEnergyCounter> _energyCounter;

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& __cordl_internal_get__energyCounter();

  constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& __cordl_internal_get__energyCounter() const;

  constexpr void __cordl_internal_set__energyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value);

  /// @brief Method OnDestroy, addr 0x23cb6dc, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleEnergyDidChange, addr 0x23cb7ac, size 0x6c, virtual false, abstract: false, final false
  inline void HandleEnergyDidChange(float_t energy);

  /// @brief Method Init, addr 0x23cb8dc, size 0x138, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method CheckAndUpdateStatus, addr 0x23cb818, size 0xc4, virtual false, abstract: false, final false
  inline void CheckAndUpdateStatus();

  static inline ::GlobalNamespace::EnergyMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor, addr 0x23cba14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnergyMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnergyMissionObjectiveChecker(EnergyMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnergyMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnergyMissionObjectiveChecker(EnergyMissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnergyMissionObjectiveChecker();

public:
  /// @brief Field _energyCounter, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameEnergyCounter> ____energyCounter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnergyMissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EnergyMissionObjectiveChecker, ____energyCounter) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnergyMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnergyMissionObjectiveChecker*, "", "EnergyMissionObjectiveChecker");
