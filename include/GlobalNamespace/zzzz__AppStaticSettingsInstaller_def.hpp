#pragma once
// IWYU pragma private; include "GlobalNamespace/AppStaticSettingsInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(AppStaticSettingsInstaller)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class AppStaticSettingsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AppStaticSettingsInstaller);
// Type: ::AppStaticSettingsInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AppStaticSettingsInstaller*
class CORDL_TYPE AppStaticSettingsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _appStaticSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__appStaticSettings, put = __cordl_internal_set__appStaticSettings)) ::UnityW<::GlobalNamespace::AppStaticSettingsSO> _appStaticSettings;

  /// @brief Method InstallBindings, addr 0x26e1a08, size 0x6c, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::AppStaticSettingsInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO> const& __cordl_internal_get__appStaticSettings() const;

  constexpr ::UnityW<::GlobalNamespace::AppStaticSettingsSO>& __cordl_internal_get__appStaticSettings();

  constexpr void __cordl_internal_set__appStaticSettings(::UnityW<::GlobalNamespace::AppStaticSettingsSO> value);

  /// @brief Method .ctor, addr 0x26e1a74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppStaticSettingsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppStaticSettingsInstaller(AppStaticSettingsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppStaticSettingsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppStaticSettingsInstaller(AppStaticSettingsInstaller const&) = delete;

  /// @brief Field _appStaticSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppStaticSettingsSO> ____appStaticSettings;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17860 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppStaticSettingsInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppStaticSettingsInstaller, ____appStaticSettings) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AppStaticSettingsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppStaticSettingsInstaller*, "", "AppStaticSettingsInstaller");
