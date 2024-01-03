#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerMockSettings)
namespace GlobalNamespace {
class MockPlayerSettings;
}
namespace GlobalNamespace {
class MockServerSettings;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerMockSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerMockSettings);
// Type: ::MultiplayerMockSettings
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10210))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5189))
// CS Name: ::MultiplayerMockSettings*
class CORDL_TYPE MultiplayerMockSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _isEnabled, offset 0x18, size 0x1
  __declspec(property(get = __get__isEnabled, put = __set__isEnabled)) bool _isEnabled;

  /// @brief Field _localPlayer, offset 0x20, size 0x8
  __declspec(property(get = __get__localPlayer, put = __set__localPlayer))::GlobalNamespace::MockPlayerSettings* _localPlayer;

  /// @brief Field _otherPlayers, offset 0x28, size 0x8
  __declspec(property(get = __get__otherPlayers, put = __set__otherPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* _otherPlayers;

  /// @brief Field _quickplayServer, offset 0x30, size 0x8
  __declspec(property(get = __get__quickplayServer, put = __set__quickplayServer))::GlobalNamespace::MockServerSettings* _quickplayServer;

  /// @brief Field _multiplayerStatusData, offset 0x38, size 0x8
  __declspec(property(get = __get__multiplayerStatusData, put = __set__multiplayerStatusData))::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData;

  /// @brief Field _quickPlaySetupData, offset 0x40, size 0x8
  __declspec(property(get = __get__quickPlaySetupData, put = __set__quickPlaySetupData))::GlobalNamespace::QuickPlaySetupData* _quickPlaySetupData;

  __declspec(property(get = get_quickplayServer))::GlobalNamespace::MockServerSettings* quickplayServer;

  __declspec(property(get = get_localPlayer))::GlobalNamespace::MockPlayerSettings* localPlayer;

  __declspec(property(get = get_quickPlaySetupData, put = set_quickPlaySetupData))::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData;

  __declspec(property(get = get_multiplayerStatusData, put = set_multiplayerStatusData))::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData;

  __declspec(property(get = get_otherPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* otherPlayers;

  __declspec(property(get = get_isEnabled, put = set_isEnabled)) bool isEnabled;

  constexpr bool& __get__isEnabled();

  constexpr bool const& __get__isEnabled() const;

  constexpr void __set__isEnabled(bool value);

  constexpr ::GlobalNamespace::MockPlayerSettings*& __get__localPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlayerSettings*> const& __get__localPlayer() const;

  constexpr void __set__localPlayer(::GlobalNamespace::MockPlayerSettings* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*& __get__otherPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*> const& __get__otherPlayers() const;

  constexpr void __set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* value);

  constexpr ::GlobalNamespace::MockServerSettings*& __get__quickplayServer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockServerSettings*> const& __get__quickplayServer() const;

  constexpr void __set__quickplayServer(::GlobalNamespace::MockServerSettings* value);

  constexpr ::GlobalNamespace::MultiplayerStatusData*& __get__multiplayerStatusData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerStatusData*> const& __get__multiplayerStatusData() const;

  constexpr void __set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);

  constexpr ::GlobalNamespace::QuickPlaySetupData*& __get__quickPlaySetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> const& __get__quickPlaySetupData() const;

  constexpr void __set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  /// @brief Method get_quickplayServer, addr 0x2244570, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockServerSettings* get_quickplayServer();

  /// @brief Method get_localPlayer, addr 0x2244578, size 0xac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockPlayerSettings* get_localPlayer();

  /// @brief Method get_quickPlaySetupData, addr 0x2244624, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::QuickPlaySetupData* get_quickPlaySetupData();

  /// @brief Method set_quickPlaySetupData, addr 0x224462c, size 0x8, virtual false, abstract: false, final false
  inline void set_quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  /// @brief Method get_multiplayerStatusData, addr 0x2244634, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerStatusData* get_multiplayerStatusData();

  /// @brief Method set_multiplayerStatusData, addr 0x224463c, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);

  /// @brief Method get_otherPlayers, addr 0x2244644, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* get_otherPlayers();

  /// @brief Method get_isEnabled, addr 0x224464c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isEnabled();

  /// @brief Method set_isEnabled, addr 0x2244654, size 0xc, virtual false, abstract: false, final false
  inline void set_isEnabled(bool value);

  /// @brief Method SharedSettings, addr 0x2244660, size 0x8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MultiplayerMockSettings* SharedSettings();

  static inline ::GlobalNamespace::MultiplayerMockSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2244668, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMockSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerMockSettings(MultiplayerMockSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMockSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerMockSettings(MultiplayerMockSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerMockSettings();

public:
  /// @brief Field _isEnabled, offset: 0x18, size: 0x1, def value: None
  bool ____isEnabled;

  /// @brief Field _localPlayer, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerSettings* ____localPlayer;

  /// @brief Field _otherPlayers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* ____otherPlayers;

  /// @brief Field _quickplayServer, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MockServerSettings* ____quickplayServer;

  /// @brief Field _multiplayerStatusData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData* ____multiplayerStatusData;

  /// @brief Field _quickPlaySetupData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData* ____quickPlaySetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMockSettings, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____isEnabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____localPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____otherPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____quickplayServer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____multiplayerStatusData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____quickPlaySetupData) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMockSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMockSettings*, "", "MultiplayerMockSettings");
