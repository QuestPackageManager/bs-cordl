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
// CS Name: ::BoolSettingsController*
class CORDL_TYPE BoolSettingsController : public ::GlobalNamespace::SwitchSettingsController {
public:
  // Declarations
  /// @brief Field _settingsValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsValue, put = __cordl_internal_set__settingsValue))::UnityW<::GlobalNamespace::BoolSO> _settingsValue;

  /// @brief Method ApplyValue, addr 0x265c004, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(bool value);

  /// @brief Method GetInitValue, addr 0x265bfbc, size 0x48, virtual true, abstract: false, final false
  inline bool GetInitValue();

  static inline ::GlobalNamespace::BoolSettingsController* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BoolSO> const& __cordl_internal_get__settingsValue() const;

  constexpr ::UnityW<::GlobalNamespace::BoolSO>& __cordl_internal_get__settingsValue();

  constexpr void __cordl_internal_set__settingsValue(::UnityW<::GlobalNamespace::BoolSO> value);

  /// @brief Method .ctor, addr 0x265c05c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolSettingsController(BoolSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolSettingsController(BoolSettingsController const&) = delete;

  /// @brief Field _settingsValue, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BoolSO> ____settingsValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoolSettingsController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BoolSettingsController, ____settingsValue) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoolSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoolSettingsController*, "", "BoolSettingsController");
