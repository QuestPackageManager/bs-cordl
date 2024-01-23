#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::FullComboMissionObjectiveChecker);
// Type: ::FullComboMissionObjectiveChecker
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5093))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5089))
// CS Name: ::FullComboMissionObjectiveChecker*
class CORDL_TYPE FullComboMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _comboController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController))::UnityW<::GlobalNamespace::ComboController> _comboController;

  constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController();

  constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

  constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value);

  /// @brief Method Init, addr 0x23cba24, size 0x104, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method OnDestroy, addr 0x23cbb28, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleComboBreakingEventHappened, addr 0x23cbbfc, size 0x3c, virtual false, abstract: false, final false
  inline void HandleComboBreakingEventHappened();

  static inline ::GlobalNamespace::FullComboMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor, addr 0x23cbc38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FullComboMissionObjectiveChecker();

public:
  /// @brief Field _comboController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ComboController> ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FullComboMissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FullComboMissionObjectiveChecker, ____comboController) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FullComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FullComboMissionObjectiveChecker*, "", "FullComboMissionObjectiveChecker");
