#pragma once
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
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5192))
// CS Name: ::ComboMissionObjectiveChecker*
class CORDL_TYPE ComboMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
  // Declarations
  /// @brief Field _comboController, offset 0x48, size 0x8
  __declspec(property(get = __get__comboController, put = __set__comboController))::GlobalNamespace::ComboController* _comboController;

  constexpr ::GlobalNamespace::ComboController*& __get__comboController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> const& __get__comboController() const;

  constexpr void __set__comboController(::GlobalNamespace::ComboController* value);

  /// @brief Method Init addr 0x20e9954 size 0x14c virtual true final false
  inline void Init();

  /// @brief Method OnDestroy addr 0x20e9aa0 size 0xd4 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleComboDidChange addr 0x20e9b74 size 0x50 virtual false final false
  inline void HandleComboDidChange(int32_t combo);

  static inline ::GlobalNamespace::ComboMissionObjectiveChecker* New_ctor();

  /// @brief Method .ctor addr 0x20e9bc4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComboMissionObjectiveChecker(ComboMissionObjectiveChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComboMissionObjectiveChecker(ComboMissionObjectiveChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComboMissionObjectiveChecker();

public:
  /// @brief Field _comboController, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::ComboController* ____comboController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComboMissionObjectiveChecker, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ComboMissionObjectiveChecker, ____comboController) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboMissionObjectiveChecker*, "", "ComboMissionObjectiveChecker");
