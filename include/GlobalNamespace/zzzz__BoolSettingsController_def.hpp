#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SwitchSettingsController_def.hpp"
CORDL_MODULE_EXPORT(BoolSettingsController)
namespace GlobalNamespace {
class BoolSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BoolSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoolSettingsController);
// Type: ::BoolSettingsController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16155))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16143))
// CS Name: ::BoolSettingsController*
class CORDL_TYPE BoolSettingsController : public ::GlobalNamespace::SwitchSettingsController {
public:
  // Declarations
  /// @brief Field _settingsValue, offset 0x28, size 0x8
  __declspec(property(get = __get__settingsValue, put = __set__settingsValue))::GlobalNamespace::BoolSO* _settingsValue;

  constexpr ::GlobalNamespace::BoolSO*& __get__settingsValue();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& __get__settingsValue() const;

  constexpr void __set__settingsValue(::GlobalNamespace::BoolSO* value);

  /// @brief Method GetInitValue, addr 0x23e41b8, size 0x48, virtual true, abstract: false, final false
  inline bool GetInitValue();

  /// @brief Method ApplyValue, addr 0x23e4200, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(bool value);

  static inline ::GlobalNamespace::BoolSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x23e4258, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BoolSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolSettingsController(BoolSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolSettingsController(BoolSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolSettingsController();

public:
  /// @brief Field _settingsValue, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BoolSO* ____settingsValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolSettingsController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BoolSettingsController, ____settingsValue) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSettingsController*, "", "BoolSettingsController");
