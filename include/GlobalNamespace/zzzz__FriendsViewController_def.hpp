#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FriendsViewController)
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class FriendsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FriendsViewController);
// Type: ::FriendsViewController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 177, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5725))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5634))
// CS Name: ::FriendsViewController*
class CORDL_TYPE FriendsViewController : public ::GlobalNamespace::NetworkPlayersViewController {
public:
  // Declarations
  /// @brief Field _enableOpenPartyToggle, offset 0x90, size 0x8
  __declspec(property(get = __get__enableOpenPartyToggle, put = __set__enableOpenPartyToggle))::UnityEngine::UI::Toggle* _enableOpenPartyToggle;

  /// @brief Field _networkPlayerModel, offset 0x98, size 0x8
  __declspec(property(get = __get__networkPlayerModel, put = __set__networkPlayerModel))::GlobalNamespace::PlatformNetworkPlayerModel* _networkPlayerModel;

  /// @brief Field _networkConfig, offset 0xa0, size 0x8
  __declspec(property(get = __get__networkConfig, put = __set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _toggleBinder, offset 0xa8, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _allowAnyoneToJoin, offset 0xb0, size 0x1
  __declspec(property(get = __get__allowAnyoneToJoin, put = __set__allowAnyoneToJoin)) bool _allowAnyoneToJoin;

  __declspec(property(get = get_myPartyTitle))::StringW myPartyTitle;

  __declspec(property(get = get_otherPlayersTitle))::StringW otherPlayersTitle;

  __declspec(property(get = get_networkPlayerModel))::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  constexpr ::UnityEngine::UI::Toggle*& __get__enableOpenPartyToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__enableOpenPartyToggle() const;

  constexpr void __set__enableOpenPartyToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::PlatformNetworkPlayerModel*& __get__networkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformNetworkPlayerModel*> const& __get__networkPlayerModel() const;

  constexpr void __set__networkPlayerModel(::GlobalNamespace::PlatformNetworkPlayerModel* value);

  constexpr ::GlobalNamespace::INetworkConfig*& __get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __get__networkConfig() const;

  constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr bool& __get__allowAnyoneToJoin();

  constexpr bool const& __get__allowAnyoneToJoin() const;

  constexpr void __set__allowAnyoneToJoin(bool value);

  /// @brief Method get_myPartyTitle addr 0x22b113c size 0x40 virtual true final false
  inline ::StringW get_myPartyTitle();

  /// @brief Method get_otherPlayersTitle addr 0x22b117c size 0x40 virtual true final false
  inline ::StringW get_otherPlayersTitle();

  /// @brief Method get_networkPlayerModel addr 0x22b11bc size 0x8 virtual true final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();

  /// @brief Method NetworkPlayersViewControllerDidActivate addr 0x22b11c4 size 0x10c virtual true final false
  inline void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method DidDeactivate addr 0x22b1450 size 0x44 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy addr 0x22b1494 size 0x28 virtual true final false
  inline void OnDestroy();

  /// @brief Method HandleOpenPartyToggleChanged addr 0x22b14bc size 0x10 virtual false final false
  inline void HandleOpenPartyToggleChanged(bool openParty);

  /// @brief Method RefreshParty addr 0x22b12d0 size 0x180 virtual false final false
  inline void RefreshParty(bool overrideHide);

  static inline ::GlobalNamespace::FriendsViewController* New_ctor();

  /// @brief Method .ctor addr 0x22b14cc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FriendsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsViewController(FriendsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsViewController(FriendsViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsViewController();

public:
  /// @brief Field _enableOpenPartyToggle, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____enableOpenPartyToggle;

  /// @brief Field _networkPlayerModel, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::PlatformNetworkPlayerModel* ____networkPlayerModel;

  /// @brief Field _networkConfig, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _toggleBinder, offset: 0xa8, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _allowAnyoneToJoin, offset: 0xb0, size: 0x1, def value: None
  bool ____allowAnyoneToJoin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FriendsViewController, 0xb8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FriendsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FriendsViewController*, "", "FriendsViewController");
