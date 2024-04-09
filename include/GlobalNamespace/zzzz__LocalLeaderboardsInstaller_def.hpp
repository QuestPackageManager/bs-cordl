#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(LocalLeaderboardsInstaller)
namespace GlobalNamespace {
class LocalLeaderboardsSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsInstaller);
// Type: ::LocalLeaderboardsInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LocalLeaderboardsInstaller*
class CORDL_TYPE LocalLeaderboardsInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _localLeaderboardsSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__localLeaderboardsSettings,
                      put = __cordl_internal_set__localLeaderboardsSettings))::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> _localLeaderboardsSettings;

  /// @brief Method InstallBindings, addr 0x2500bbc, size 0xb0, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::LocalLeaderboardsInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> const& __cordl_internal_get__localLeaderboardsSettings() const;

  constexpr ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO>& __cordl_internal_get__localLeaderboardsSettings();

  constexpr void __cordl_internal_set__localLeaderboardsSettings(::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> value);

  /// @brief Method .ctor, addr 0x2500c6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsInstaller(LocalLeaderboardsInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsInstaller(LocalLeaderboardsInstaller const&) = delete;

  /// @brief Field _localLeaderboardsSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LocalLeaderboardsSettingsSO> ____localLeaderboardsSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsInstaller, ____localLeaderboardsSettings) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsInstaller*, "", "LocalLeaderboardsInstaller");
