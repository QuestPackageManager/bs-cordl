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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5396))
// CS Name: ::MainSettingsMenuViewControllersInstaller*
class CORDL_TYPE MainSettingsMenuViewControllersInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _defaultSettingsMenuViewController, offset 0x20, size 0x8
  __declspec(property(get = __get__defaultSettingsMenuViewController,
                      put = __set__defaultSettingsMenuViewController))::GlobalNamespace::MainSettingsMenuViewController* _defaultSettingsMenuViewController;

  /// @brief Field _oculusPCSettingsMenuViewController, offset 0x28, size 0x8
  __declspec(property(get = __get__oculusPCSettingsMenuViewController,
                      put = __set__oculusPCSettingsMenuViewController))::GlobalNamespace::MainSettingsMenuViewController* _oculusPCSettingsMenuViewController;

  /// @brief Field _questSettingsMenuViewController, offset 0x30, size 0x8
  __declspec(property(get = __get__questSettingsMenuViewController, put = __set__questSettingsMenuViewController))::GlobalNamespace::MainSettingsMenuViewController* _questSettingsMenuViewController;

  /// @brief Field _psvrSettingsMenuViewController, offset 0x38, size 0x8
  __declspec(property(get = __get__psvrSettingsMenuViewController, put = __set__psvrSettingsMenuViewController))::GlobalNamespace::MainSettingsMenuViewController* _psvrSettingsMenuViewController;

  /// @brief Field _psvr2SettingsMenuViewController, offset 0x40, size 0x8
  __declspec(property(get = __get__psvr2SettingsMenuViewController, put = __set__psvr2SettingsMenuViewController))::GlobalNamespace::MainSettingsMenuViewController* _psvr2SettingsMenuViewController;

  /// @brief Field _tabBarViewControllerPrefab, offset 0x48, size 0x8
  __declspec(property(get = __get__tabBarViewControllerPrefab, put = __set__tabBarViewControllerPrefab))::GlobalNamespace::TabBarViewController* _tabBarViewControllerPrefab;

  constexpr ::GlobalNamespace::MainSettingsMenuViewController*& __get__defaultSettingsMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& __get__defaultSettingsMenuViewController() const;

  constexpr void __set__defaultSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value);

  constexpr ::GlobalNamespace::MainSettingsMenuViewController*& __get__oculusPCSettingsMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& __get__oculusPCSettingsMenuViewController() const;

  constexpr void __set__oculusPCSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value);

  constexpr ::GlobalNamespace::MainSettingsMenuViewController*& __get__questSettingsMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& __get__questSettingsMenuViewController() const;

  constexpr void __set__questSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value);

  constexpr ::GlobalNamespace::MainSettingsMenuViewController*& __get__psvrSettingsMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& __get__psvrSettingsMenuViewController() const;

  constexpr void __set__psvrSettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value);

  constexpr ::GlobalNamespace::MainSettingsMenuViewController*& __get__psvr2SettingsMenuViewController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainSettingsMenuViewController*> const& __get__psvr2SettingsMenuViewController() const;

  constexpr void __set__psvr2SettingsMenuViewController(::GlobalNamespace::MainSettingsMenuViewController* value);

  constexpr ::GlobalNamespace::TabBarViewController*& __get__tabBarViewControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TabBarViewController*> const& __get__tabBarViewControllerPrefab() const;

  constexpr void __set__tabBarViewControllerPrefab(::GlobalNamespace::TabBarViewController* value);

  /// @brief Method InstallBindings addr 0x2272078 size 0xb4 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::MainSettingsMenuViewControllersInstaller* New_ctor();

  /// @brief Method .ctor addr 0x227212c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewControllersInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsMenuViewControllersInstaller(MainSettingsMenuViewControllersInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsMenuViewControllersInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsMenuViewControllersInstaller(MainSettingsMenuViewControllersInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsMenuViewControllersInstaller();

public:
  /// @brief Field _defaultSettingsMenuViewController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsMenuViewController* ____defaultSettingsMenuViewController;

  /// @brief Field _oculusPCSettingsMenuViewController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsMenuViewController* ____oculusPCSettingsMenuViewController;

  /// @brief Field _questSettingsMenuViewController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsMenuViewController* ____questSettingsMenuViewController;

  /// @brief Field _psvrSettingsMenuViewController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsMenuViewController* ____psvrSettingsMenuViewController;

  /// @brief Field _psvr2SettingsMenuViewController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MainSettingsMenuViewController* ____psvr2SettingsMenuViewController;

  /// @brief Field _tabBarViewControllerPrefab, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::TabBarViewController* ____tabBarViewControllerPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsMenuViewControllersInstaller, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsMenuViewControllersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsMenuViewControllersInstaller*, "", "MainSettingsMenuViewControllersInstaller");
