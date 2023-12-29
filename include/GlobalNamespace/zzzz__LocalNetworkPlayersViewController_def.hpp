#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkPlayersViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LocalNetworkPlayersViewController)
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class LocalNetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkConfig;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalNetworkPlayersViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalNetworkPlayersViewController);
// Type: ::LocalNetworkPlayersViewController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 186, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5824))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5788))
// CS Name: ::LocalNetworkPlayersViewController*
class CORDL_TYPE LocalNetworkPlayersViewController : public ::GlobalNamespace::NetworkPlayersViewController {
public:
  // Declarations
  /// @brief Field _enableNetworkingToggle, offset 0x90, size 0x8
  __declspec(property(get = __get__enableNetworkingToggle, put = __set__enableNetworkingToggle))::UnityEngine::UI::Toggle* _enableNetworkingToggle;

  /// @brief Field _enableOpenPartyToggle, offset 0x98, size 0x8
  __declspec(property(get = __get__enableOpenPartyToggle, put = __set__enableOpenPartyToggle))::UnityEngine::UI::Toggle* _enableOpenPartyToggle;

  /// @brief Field _localNetworkPlayerModel, offset 0xa0, size 0x8
  __declspec(property(get = __get__localNetworkPlayerModel, put = __set__localNetworkPlayerModel))::GlobalNamespace::LocalNetworkPlayerModel* _localNetworkPlayerModel;

  /// @brief Field _networkConfig, offset 0xa8, size 0x8
  __declspec(property(get = __get__networkConfig, put = __set__networkConfig))::GlobalNamespace::INetworkConfig* _networkConfig;

  /// @brief Field _toggleBinder, offset 0xb0, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _enableBroadcasting, offset 0xb8, size 0x1
  __declspec(property(get = __get__enableBroadcasting, put = __set__enableBroadcasting)) bool _enableBroadcasting;

  /// @brief Field _allowAnyoneToJoin, offset 0xb9, size 0x1
  __declspec(property(get = __get__allowAnyoneToJoin, put = __set__allowAnyoneToJoin)) bool _allowAnyoneToJoin;

  __declspec(property(get = get_myPartyTitle))::StringW myPartyTitle;

  __declspec(property(get = get_otherPlayersTitle))::StringW otherPlayersTitle;

  __declspec(property(get = get_networkPlayerModel))::GlobalNamespace::INetworkPlayerModel* networkPlayerModel;

  constexpr ::UnityEngine::UI::Toggle*& __get__enableNetworkingToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__enableNetworkingToggle() const;

  constexpr void __set__enableNetworkingToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__enableOpenPartyToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__enableOpenPartyToggle() const;

  constexpr void __set__enableOpenPartyToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::GlobalNamespace::LocalNetworkPlayerModel*& __get__localNetworkPlayerModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalNetworkPlayerModel*> const& __get__localNetworkPlayerModel() const;

  constexpr void __set__localNetworkPlayerModel(::GlobalNamespace::LocalNetworkPlayerModel* value);

  constexpr ::GlobalNamespace::INetworkConfig*& __get__networkConfig();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkConfig*> const& __get__networkConfig() const;

  constexpr void __set__networkConfig(::GlobalNamespace::INetworkConfig* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr bool& __get__enableBroadcasting();

  constexpr bool const& __get__enableBroadcasting() const;

  constexpr void __set__enableBroadcasting(bool value);

  constexpr bool& __get__allowAnyoneToJoin();

  constexpr bool const& __get__allowAnyoneToJoin() const;

  constexpr void __set__allowAnyoneToJoin(bool value);

  /// @brief Method get_myPartyTitle addr 0x2185cd0 size 0x40 virtual true final false
  inline ::StringW get_myPartyTitle();

  /// @brief Method get_otherPlayersTitle addr 0x2185d10 size 0x40 virtual true final false
  inline ::StringW get_otherPlayersTitle();

  /// @brief Method get_networkPlayerModel addr 0x2185d50 size 0x8 virtual true final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_networkPlayerModel();

  /// @brief Method NetworkPlayersViewControllerDidActivate addr 0x2185d58 size 0x150 virtual true final false
  inline void NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy);

  /// @brief Method DidDeactivate addr 0x2186050 size 0x10 virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method OnDestroy addr 0x2186060 size 0x28 virtual true final false
  inline void OnDestroy();

  /// @brief Method HandleNetworkingToggleChanged addr 0x2186090 size 0x10 virtual false final false
  inline void HandleNetworkingToggleChanged(bool enabled);

  /// @brief Method HandleOpenPartyToggleChanged addr 0x21860a0 size 0x10 virtual false final false
  inline void HandleOpenPartyToggleChanged(bool openParty);

  /// @brief Method RefreshParty addr 0x2185ea8 size 0x1a8 virtual false final false
  inline void RefreshParty(bool overrideHide);

  static inline ::GlobalNamespace::LocalNetworkPlayersViewController* New_ctor();

  /// @brief Method .ctor addr 0x21860b0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayersViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalNetworkPlayersViewController(LocalNetworkPlayersViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalNetworkPlayersViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalNetworkPlayersViewController(LocalNetworkPlayersViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalNetworkPlayersViewController();

public:
  /// @brief Field _enableNetworkingToggle, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____enableNetworkingToggle;

  /// @brief Field _enableOpenPartyToggle, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____enableOpenPartyToggle;

  /// @brief Field _localNetworkPlayerModel, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LocalNetworkPlayerModel* ____localNetworkPlayerModel;

  /// @brief Field _networkConfig, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::INetworkConfig* ____networkConfig;

  /// @brief Field _toggleBinder, offset: 0xb0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _enableBroadcasting, offset: 0xb8, size: 0x1, def value: None
  bool ____enableBroadcasting;

  /// @brief Field _allowAnyoneToJoin, offset: 0xb9, size: 0x1, def value: None
  bool ____allowAnyoneToJoin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalNetworkPlayersViewController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____enableNetworkingToggle) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____enableOpenPartyToggle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____localNetworkPlayerModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____networkConfig) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____toggleBinder) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____enableBroadcasting) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalNetworkPlayersViewController, ____allowAnyoneToJoin) == 0xb9, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalNetworkPlayersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalNetworkPlayersViewController*, "", "LocalNetworkPlayersViewController");
