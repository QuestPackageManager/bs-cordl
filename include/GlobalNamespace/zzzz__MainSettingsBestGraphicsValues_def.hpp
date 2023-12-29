#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MainSettingsBestGraphicsValues)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsBestGraphicsValues;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsBestGraphicsValues);
// Type: ::MainSettingsBestGraphicsValues
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4453))
// CS Name: ::MainSettingsBestGraphicsValues*
class CORDL_TYPE MainSettingsBestGraphicsValues : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApplyValues addr 0x220227c size 0x154 virtual false final false
  static inline void ApplyValues(::GlobalNamespace::MainSettingsModelSO* mainSettingsModel);

  static inline ::GlobalNamespace::MainSettingsBestGraphicsValues* New_ctor();

  /// @brief Method .ctor addr 0x22023d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsBestGraphicsValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsBestGraphicsValues(MainSettingsBestGraphicsValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsBestGraphicsValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsBestGraphicsValues(MainSettingsBestGraphicsValues const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsBestGraphicsValues();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsBestGraphicsValues, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsBestGraphicsValues);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsBestGraphicsValues*, "", "MainSettingsBestGraphicsValues");
