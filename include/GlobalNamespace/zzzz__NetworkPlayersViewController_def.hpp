#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkPlayersViewController)
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class NetworkPlayersTableView;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayersViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayersViewController);
// Type: ::NetworkPlayersViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5725))
// CS Name: ::NetworkPlayersViewController*
class CORDL_TYPE NetworkPlayersViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _networkPlayersTableView, offset 0x70, size 0x8
  __declspec(property(get = __get__networkPlayersTableView, put = __set__networkPlayersTableView))::GlobalNamespace::NetworkPlayersTableView* _networkPlayersTableView;

  /// @brief Field _refreshIsNeeded, offset 0x78, size 0x1
  __declspec(property(get = __get__refreshIsNeeded, put = __set__refreshIsNeeded)) bool _refreshIsNeeded;

  /// @brief Field onJoinRequestEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_onJoinRequestEvent, put = __set_onJoinRequestEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* onJoinRequestEvent;

  /// @brief Field onInviteRequestEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_onInviteRequestEvent, put = __set_onInviteRequestEvent))::System::Action_1<::GlobalNamespace::INetworkPlayer*>* onInviteRequestEvent;

  __declspec(property(get = get_myPartyTitle))::StringW myPartyTitle;

  __declspec(property(get = get_otherPlayersTitle))::StringW otherPlayersTitle;

  __declspec(property(get = get_networkPlayerModel))::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  constexpr ::GlobalNamespace::NetworkPlayersTableView*& __get__networkPlayersTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayersTableView*> const& __get__networkPlayersTableView() const;

  constexpr void __set__networkPlayersTableView(::GlobalNamespace::NetworkPlayersTableView* value);

  constexpr bool& __get__refreshIsNeeded();

  constexpr bool const& __get__refreshIsNeeded() const;

  constexpr void __set__refreshIsNeeded(bool value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_onJoinRequestEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_onJoinRequestEvent() const;

  constexpr void __set_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __get_onInviteRequestEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayer*>*> const& __get_onInviteRequestEvent() const;

  constexpr void __set_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_myPartyTitle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_myPartyTitle();

  /// @brief Method get_otherPlayersTitle addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW get_otherPlayersTitle();

  /// @brief Method get_networkPlayerModel addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();

  /// @brief Method add_onJoinRequestEvent addr 0x22d2178 size 0xb0 virtual false final false
  inline void add_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_onJoinRequestEvent addr 0x22d2228 size 0xb0 virtual false final false
  inline void remove_onJoinRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_onInviteRequestEvent addr 0x22d22d8 size 0xb0 virtual false final false
  inline void add_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_onInviteRequestEvent addr 0x22d2388 size 0xb0 virtual false final false
  inline void remove_onInviteRequestEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method DidActivate addr 0x22d2438 size 0x2e8 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method NetworkPlayersViewControllerDidActivate addr 0x22d28b0 size 0x4 virtual true final false
  inline void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method DidDeactivate addr 0x22d28b4 size 0x2b4 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method NetworkPlayersViewControllerDidDeactivate addr 0x22d2b68 size 0x4 virtual true final false
  inline void NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy);

  /// @brief Method OnDestroy addr 0x22d2b6c size 0x8 virtual true final false
  inline void OnDestroy();

  /// @brief Method HandlePartyChanged addr 0x22d2b74 size 0x18 virtual false final false
  inline void HandlePartyChanged(::GlobalNamespace::INetworkPlayerModel* playerModel);

  /// @brief Method HandleJoinRequest addr 0x22d2b8c size 0x1c virtual false final false
  inline void HandleJoinRequest(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method HandleInviteRequest addr 0x22d2ba8 size 0x1c virtual false final false
  inline void HandleInviteRequest(::GlobalNamespace::INetworkPlayer* player);

  /// @brief Method Refresh addr 0x22d2720 size 0x190 virtual false final false
  inline void Refresh();

  static inline ::GlobalNamespace::NetworkPlayersViewController* New_ctor();

  /// @brief Method .ctor addr 0x22d2bc4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayersViewController(NetworkPlayersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayersViewController(NetworkPlayersViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayersViewController();

public:
  /// @brief Field _networkPlayersTableView, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPlayersTableView* ____networkPlayersTableView;

  /// @brief Field _refreshIsNeeded, offset: 0x78, size: 0x1, def value: None
  bool ____refreshIsNeeded;

  /// @brief Field onJoinRequestEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___onJoinRequestEvent;

  /// @brief Field onInviteRequestEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___onInviteRequestEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayersViewController, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayersViewController*, "", "NetworkPlayersViewController");
