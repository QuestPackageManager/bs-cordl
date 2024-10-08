#pragma once
// IWYU pragma private; include "GlobalNamespace/ComboMissionObjectiveChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComboMissionObjectiveChecker)
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ComboMissionObjectiveChecker);
// Type: ::ComboMissionObjectiveChecker
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ComboMissionObjectiveChecker*
class CORDL_TYPE ComboMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _comboController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__comboController, put = __cordl_internal_set__comboController)) ::UnityW<::GlobalNamespace::ComboController> _comboController;

  /// @brief Method HandleComboDidChange, addr 0x3b37d1c, size 0x50, virtual false, abstract: false, final false
  inline void HandleComboDidChange(int32_t combo);

  /// @brief Method Init, addr 0x3b37b08, size 0x144, virtual true, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::ComboMissionObjectiveChecker* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b37c4c, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::GlobalNamespace::ComboController> const& __cordl_internal_get__comboController() const;

  constexpr ::UnityW<::GlobalNamespace::ComboController>& __cordl_internal_get__comboController();

  constexpr void __cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value);

  /// @brief Method .ctor, addr 0x3b37d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComboMissionObjectiveChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComboMissionObjectiveChecker(ComboMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComboMissionObjectiveChecker(ComboMissionObjectiveChecker const&) = delete;

  /// @brief Field _comboController, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ComboController> ____comboController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComboMissionObjectiveChecker, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboMissionObjectiveChecker, ____comboController) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboMissionObjectiveChecker*, "", "ComboMissionObjectiveChecker");
