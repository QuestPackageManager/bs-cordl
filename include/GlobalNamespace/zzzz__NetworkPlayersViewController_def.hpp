#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkPlayersViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkPlayersViewController)
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class NetworkPlayersTableView;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayersViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayersViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetworkPlayersViewController
class CORDL_TYPE NetworkPlayersViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _networkPlayersTableView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__networkPlayersTableView, put = __cordl_internal_set__networkPlayersTableView)) ::UnityW<::GlobalNamespace::NetworkPlayersTableView>
      _networkPlayersTableView;

  /// @brief Field _refreshIsNeeded, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshIsNeeded, put = __cordl_internal_set__refreshIsNeeded)) bool _refreshIsNeeded;

  __declspec(property(get = get_myPartyTitle)) ::StringW myPartyTitle;

  __declspec(property(get = get_networkPlayerModel)) ::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  /// @brief Field onInviteRequestEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_onInviteRequestEvent, put = __cordl_internal_set_onInviteRequestEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* onInviteRequestEvent;

  /// @brief Field onJoinRequestEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_onJoinRequestEvent, put = __cordl_internal_set_onJoinRequestEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* onJoinRequestEvent;

  __declspec(property(get = get_otherPlayersTitle)) ::StringW otherPlayersTitle;

  /// @brief Method DidActivate, addr 0x3af3c90, size 0x2dc, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3af4100, size 0x2a8, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleInviteRequest, addr 0x3af43e8, size 0x1c, virtual false, abstract: false, final false
  inline void HandleInviteRequest(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandleJoinRequest, addr 0x3af43cc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleJoinRequest(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandlePartyChanged, addr 0x3af43b4, size 0x18, virtual false, abstract: false, final false
  inline void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel);

  /// @brief Method NetworkPlayersViewControllerDidActivate, addr 0x3af40fc, size 0x4, virtual true, abstract: false, final false
  inline void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method NetworkPlayersViewControllerDidDeactivate, addr 0x3af43a8, size 0x4, virtual true, abstract: false, final false
  inline void NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy);

  static inline ::GlobalNamespace::NetworkPlayersViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3af43ac, size 0x8, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Refresh, addr 0x3af3f6c, size 0x190, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayersTableView> const& __cordl_internal_get__networkPlayersTableView() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayersTableView>& __cordl_internal_get__networkPlayersTableView();

  constexpr bool const& __cordl_internal_get__refreshIsNeeded() const;

  constexpr bool& __cordl_internal_get__refreshIsNeeded();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& __cordl_internal_get_onInviteRequestEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_onInviteRequestEvent();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& __cordl_internal_get_onJoinRequestEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_onJoinRequestEvent();

  constexpr void __cordl_internal_set__networkPlayersTableView(::UnityW<::GlobalNamespace::NetworkPlayersTableView> value);

  constexpr void __cordl_internal_set__refreshIsNeeded(bool value);

  constexpr void __cordl_internal_set_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr void __cordl_internal_set_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method .ctor, addr 0x3af4404, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onInviteRequestEvent, addr 0x3af3b30, size 0xb0, virtual false, abstract: false, final false
  inline void add_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_onJoinRequestEvent, addr 0x3af39d0, size 0xb0, virtual false, abstract: false, final false
  inline void add_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_myPartyTitle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_myPartyTitle();

  /// @brief Method get_networkPlayerModel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();

  /// @brief Method get_otherPlayersTitle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_otherPlayersTitle();

  /// @brief Method remove_onInviteRequestEvent, addr 0x3af3be0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_onJoinRequestEvent, addr 0x3af3a80, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayersViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayersViewController(NetworkPlayersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayersViewController(NetworkPlayersViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4931 };

  /// @brief Field _networkPlayersTableView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayersTableView> ____networkPlayersTableView;

  /// @brief Field _refreshIsNeeded, offset: 0x80, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field onJoinRequestEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___onJoinRequestEvent;

  /// @brief Field onInviteRequestEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___onInviteRequestEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetworkPlayersViewController, ____networkPlayersTableView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersViewController, ____refreshIsNeeded) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersViewController, ___onJoinRequestEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersViewController, ___onInviteRequestEvent) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayersViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayersViewController*, "", "NetworkPlayersViewController");
