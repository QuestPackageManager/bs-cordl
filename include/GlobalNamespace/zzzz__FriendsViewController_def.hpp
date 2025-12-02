#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendsViewController.hpp"
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
// Dependencies NetworkPlayersViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: FriendsViewController
class CORDL_TYPE FriendsViewController : public ::GlobalNamespace::NetworkPlayersViewController {
public:
  // Declarations
  /// @brief Field _allowAnyoneToJoin, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__allowAnyoneToJoin, put = __cordl_internal_set__allowAnyoneToJoin)) bool _allowAnyoneToJoin;

  /// @brief Field _enableOpenPartyToggle, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__enableOpenPartyToggle, put = __cordl_internal_set__enableOpenPartyToggle)) ::UnityW<::UnityEngine::UI::Toggle> _enableOpenPartyToggle;

  /// @brief Field _networkConfig, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__networkConfig, put = __cordl_internal_set__networkConfig)) ::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _networkPlayerModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__networkPlayerModel, put = __cordl_internal_set__networkPlayerModel)) ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> _networkPlayerModel;

  /// @brief Field _toggleBinder, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  __declspec(property(get = get_myPartyTitle)) ::StringW myPartyTitle;

  __declspec(property(get = get_networkPlayerModel)) ::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  __declspec(property(get = get_otherPlayersTitle)) ::StringW otherPlayersTitle;

  /// @brief Method DidDeactivate, addr 0x580fc28, size 0x44, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleOpenPartyToggleChanged, addr 0x580fc94, size 0x10, virtual false, abstract: false, final false
  inline void HandleOpenPartyToggleChanged(bool openParty);

  /// @brief Method NetworkPlayersViewControllerDidActivate, addr 0x580f9b0, size 0x11c, virtual true, abstract: false, final false
  inline void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);

  static inline ::GlobalNamespace::FriendsViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x580fc6c, size 0x28, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshParty, addr 0x580facc, size 0x15c, virtual false, abstract: false, final false
  inline void RefreshParty(bool overrideHide);

  constexpr bool const& __cordl_internal_get__allowAnyoneToJoin() const;

  constexpr bool& __cordl_internal_get__allowAnyoneToJoin();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__enableOpenPartyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__enableOpenPartyToggle();

  constexpr ::GlobalNamespace::INetworkConfig* const& __cordl_internal_get__networkConfig() const;

  constexpr ::GlobalNamespace::INetworkConfig*& __cordl_internal_get__networkConfig();

  constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> const& __cordl_internal_get__networkPlayerModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel>& __cordl_internal_get__networkPlayerModel();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr void __cordl_internal_set__allowAnyoneToJoin(bool value);

  constexpr void __cordl_internal_set__enableOpenPartyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr void __cordl_internal_set__networkPlayerModel(::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  /// @brief Method .ctor, addr 0x580fca4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_myPartyTitle, addr 0x580f920, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_myPartyTitle();

  /// @brief Method get_networkPlayerModel, addr 0x580f9a8, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();

  /// @brief Method get_otherPlayersTitle, addr 0x580f964, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_otherPlayersTitle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FriendsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FriendsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FriendsViewController(FriendsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FriendsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FriendsViewController(FriendsViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6481 };

  /// @brief Field _enableOpenPartyToggle, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____enableOpenPartyToggle;

  /// @brief Field _networkPlayerModel, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlatformNetworkPlayerModel> ____networkPlayerModel;

  /// @brief Field _networkConfig, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _toggleBinder, offset: 0xb0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _allowAnyoneToJoin, offset: 0xb8, size: 0x1, def value: None
  bool ____allowAnyoneToJoin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____enableOpenPartyToggle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____networkPlayerModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____networkConfig) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____toggleBinder) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendsViewController, ____allowAnyoneToJoin) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FriendsViewController, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FriendsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FriendsViewController*, "", "FriendsViewController");
