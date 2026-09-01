#pragma once
// IWYU pragma private; include "GlobalNamespace\FullComboMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(FullComboMissionObjectiveChecker)
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class FullComboMissionObjectiveChecker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FullComboMissionObjectiveChecker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FullComboMissionObjectiveChecker*, "", "FullComboMissionObjectiveChecker");
// Dependencies MissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// CS Name: FullComboMissionObjectiveChecker
class CORDL_TYPE FullComboMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _comboController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController)) ::UnityW<::GlobalNamespace::ComboController> _comboController;

  /// @brief Method HandleComboBreakingEventHappened, addr 0x5919e90, size 0x3c, virtual false, abstract: false, final false
  inline void HandleComboBreakingEventHappened();

  /// @brief Method Init, addr 0x5919c18, size 0x168, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::FullComboMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x5919d80, size 0x110, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

  constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController();

  constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value);

  /// @brief Method .ctor, addr 0x5919ecc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullComboMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6791 };

  /// @brief Field _comboController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ComboController> ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FullComboMissionObjectiveChecker, ____comboController) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FullComboMissionObjectiveChecker) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
