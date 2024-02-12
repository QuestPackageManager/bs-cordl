#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FriendsViewController)
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5027))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4938))
// CS Name: ::FriendsViewController*
class CORDL_TYPE FriendsViewController : public ::GlobalNamespace::NetworkPlayersViewController {
public:
  // Declarations
  /// @brief Field _enableOpenPartyToggle, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__enableOpenPartyToggle, put = __cordl_internal_set__enableOpenPartyToggle))::UnityW<::UnityEngine::UI::Toggle> _enableOpenPartyToggle;

  /// @brief Field _networkPlayerModel, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__networkPlayerModel, put = __cordl_internal_set__networkPlayerModel))::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> _networkPlayerModel;

  /// @brief Field _networkConfig, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _toggleBinder, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _allowAnyoneToJoin, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get__allowAnyoneToJoin, put = __cordl_internal_set__allowAnyoneToJoin)) bool _allowAnyoneToJoin;

  __declspec(property(get = get_myPartyTitle))::StringW myPartyTitle;

  __declspec(property(get = get_otherPlayersTitle))::StringW otherPlayersTitle;

  __declspec(property(get = get_networkPlayerModel))::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__enableOpenPartyToggle();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__enableOpenPartyToggle() const;

  constexpr void __cordl_internal_set__enableOpenPartyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>& __cordl_internal_get__networkPlayerModel();

  constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> const& __cordl_internal_get__networkPlayerModel() const;

  constexpr void __cordl_internal_set__networkPlayerModel(::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> value);

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __cordl_internal_get__networkConfig() const;

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr bool& __cordl_internal_get__allowAnyoneToJoin();

  constexpr bool const& __cordl_internal_get__allowAnyoneToJoin() const;

  constexpr void __cordl_internal_set__allowAnyoneToJoin(bool value);

  /// @brief Method get_myPartyTitle, addr 0x22e4400, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_myPartyTitle();

  /// @brief Method get_otherPlayersTitle, addr 0x22e4440, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_otherPlayersTitle();

  /// @brief Method get_networkPlayerModel, addr 0x22e4480, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();

  /// @brief Method NetworkPlayersViewControllerDidActivate, addr 0x22e4488, size 0x10c, virtual true, abstract: false, final false
  inline void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method DidDeactivate, addr 0x22e4714, size 0x44, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy, addr 0x22e4758, size 0x28, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleOpenPartyToggleChanged, addr 0x22e4780, size 0x10, virtual false, abstract: false, final false
  inline void HandleOpenPartyToggleChanged(bool openParty);

  /// @brief Method RefreshParty, addr 0x22e4594, size 0x180, virtual false, abstract: false, final false
  inline void RefreshParty(bool overrideHide);

  static inline ::GlobalNamespace::FriendsViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22e4790, size 0x8, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::UI::Toggle> ____enableOpenPartyToggle;

  /// @brief Field _networkPlayerModel, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> ____networkPlayerModel;

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

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____enableOpenPartyToggle) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____networkPlayerModel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____networkConfig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____toggleBinder) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____allowAnyoneToJoin) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FriendsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FriendsViewController*, "", "FriendsViewController");
