#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(MainSettingsMenuViewControllersInstaller)
namespace GlobalNamespace {
class MainSettingsMenuViewController;
}
namespace GlobalNamespace {
class TabBarViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsMenuViewControllersInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsMenuViewControllersInstaller);
// Type: ::MainSettingsMenuViewControllersInstaller
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MainSettingsMenuViewControllersInstaller*
class CORDL_TYPE MainSettingsMenuViewControllersInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _defaultSettingsMenuViewController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultSettingsMenuViewController,
                      put = __cordl_internal_set__defaultSettingsMenuViewController))::UnityW<::GlobalNamespace::MainSettingsMenuViewController> _defaultSettingsMenuViewController;

  /// @brief Field _oculusPCSettingsMenuViewController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__oculusPCSettingsMenuViewController,
                      put = __cordl_internal_set__oculusPCSettingsMenuViewController))::UnityW<::GlobalNamespace::MainSettingsMenuViewController> _oculusPCSettingsMenuViewController;

  /// @brief Field _psvr2SettingsMenuViewController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__psvr2SettingsMenuViewController,
                      put = __cordl_internal_set__psvr2SettingsMenuViewController))::UnityW<::GlobalNamespace::MainSettingsMenuViewController> _psvr2SettingsMenuViewController;

  /// @brief Field _psvrSettingsMenuViewController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__psvrSettingsMenuViewController,
                      put = __cordl_internal_set__psvrSettingsMenuViewController))::UnityW<::GlobalNamespace::MainSettingsMenuViewController> _psvrSettingsMenuViewController;

  /// @brief Field _questSettingsMenuViewController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__questSettingsMenuViewController,
                      put = __cordl_internal_set__questSettingsMenuViewController))::UnityW<::GlobalNamespace::MainSettingsMenuViewController> _questSettingsMenuViewController;

  /// @brief Field _tabBarViewControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tabBarViewControllerPrefab,
                      put = __cordl_internal_set__tabBarViewControllerPrefab))::UnityW<::GlobalNamespace::TabBarViewController> _tabBarViewControllerPrefab;

  /// @brief Method InstallBindings, addr 0x249c61c, size 0xb4, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainSettingsMenuViewControllersInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__defaultSettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__defaultSettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__oculusPCSettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__oculusPCSettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__psvr2SettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__psvr2SettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__psvrSettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__psvrSettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> const& __cordl_internal_get__questSettingsMenuViewController() const;

  constexpr ::UnityW<::GlobalNamespace::MainSettingsMenuViewController>& __cordl_internal_get__questSettingsMenuViewController();

  constexpr ::UnityW<::GlobalNamespace::TabBarViewController> const& __cordl_internal_get__tabBarViewControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::TabBarViewController>& __cordl_internal_get__tabBarViewControllerPrefab();

  constexpr void __cordl_internal_set__defaultSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__oculusPCSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__psvr2SettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__psvrSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__questSettingsMenuViewController(::UnityW<::GlobalNamespace::MainSettingsMenuViewController> value);

  constexpr void __cordl_internal_set__tabBarViewControllerPrefab(::UnityW<::GlobalNamespace::TabBarViewController> value);

  /// @brief Method .ctor, addr 0x249c6d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsMenuViewControllersInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewControllersInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsMenuViewControllersInstaller(MainSettingsMenuViewControllersInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewControllersInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsMenuViewControllersInstaller(MainSettingsMenuViewControllersInstaller const&) = delete;

  /// @brief Field _defaultSettingsMenuViewController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____defaultSettingsMenuViewController;

  /// @brief Field _oculusPCSettingsMenuViewController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____oculusPCSettingsMenuViewController;

  /// @brief Field _questSettingsMenuViewController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____questSettingsMenuViewController;

  /// @brief Field _psvrSettingsMenuViewController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____psvrSettingsMenuViewController;

  /// @brief Field _psvr2SettingsMenuViewController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MainSettingsMenuViewController> ____psvr2SettingsMenuViewController;

  /// @brief Field _tabBarViewControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TabBarViewController> ____tabBarViewControllerPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsMenuViewControllersInstaller, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewControllersInstaller, ____defaultSettingsMenuViewController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewControllersInstaller, ____oculusPCSettingsMenuViewController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewControllersInstaller, ____questSettingsMenuViewController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewControllersInstaller, ____psvrSettingsMenuViewController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewControllersInstaller, ____psvr2SettingsMenuViewController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MainSettingsMenuViewControllersInstaller, ____tabBarViewControllerPrefab) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsMenuViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsMenuViewControllersInstaller*, "", "MainSettingsMenuViewControllersInstaller");
