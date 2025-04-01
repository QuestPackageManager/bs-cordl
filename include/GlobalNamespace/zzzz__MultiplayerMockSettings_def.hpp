#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerMockSettings.hpp"
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
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerMockSettings
class CORDL_TYPE MultiplayerMockSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _localPlayer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__localPlayer, put = __cordl_internal_set__localPlayer)) ::GlobalNamespace::MockPlayerSettings* _localPlayer;

  /// @brief Field _multiplayerStatusData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerStatusData, put = __cordl_internal_set__multiplayerStatusData)) ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData;

  /// @brief Field _otherPlayers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__otherPlayers,
                      put = __cordl_internal_set__otherPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* _otherPlayers;

  /// @brief Field _quickPlaySetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__quickPlaySetupData, put = __cordl_internal_set__quickPlaySetupData)) ::GlobalNamespace::QuickPlaySetupData* _quickPlaySetupData;

  /// @brief Field _quickplayServer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__quickplayServer, put = __cordl_internal_set__quickplayServer)) ::GlobalNamespace::MockServerSettings* _quickplayServer;

  __declspec(property(get = get_localPlayer)) ::GlobalNamespace::MockPlayerSettings* localPlayer;

  __declspec(property(get = get_multiplayerStatusData, put = set_multiplayerStatusData)) ::GlobalNamespace::MultiplayerStatusData* multiplayerStatusData;

  __declspec(property(get = get_otherPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* otherPlayers;

  __declspec(property(get = get_quickPlaySetupData, put = set_quickPlaySetupData)) ::GlobalNamespace::QuickPlaySetupData* quickPlaySetupData;

  __declspec(property(get = get_quickplayServer)) ::GlobalNamespace::MockServerSettings* quickplayServer;

  static inline ::GlobalNamespace::MultiplayerMockSettings* New_ctor();

  /// @brief Method SharedSettings, addr 0x3bc7718, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::MultiplayerMockSettings> SharedSettings();

  constexpr ::GlobalNamespace::MockPlayerSettings* const& __cordl_internal_get__localPlayer() const;

  constexpr ::GlobalNamespace::MockPlayerSettings*& __cordl_internal_get__localPlayer();

  constexpr ::GlobalNamespace::MultiplayerStatusData* const& __cordl_internal_get__multiplayerStatusData() const;

  constexpr ::GlobalNamespace::MultiplayerStatusData*& __cordl_internal_get__multiplayerStatusData();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* const& __cordl_internal_get__otherPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>*& __cordl_internal_get__otherPlayers();

  constexpr ::GlobalNamespace::QuickPlaySetupData* const& __cordl_internal_get__quickPlaySetupData() const;

  constexpr ::GlobalNamespace::QuickPlaySetupData*& __cordl_internal_get__quickPlaySetupData();

  constexpr ::GlobalNamespace::MockServerSettings* const& __cordl_internal_get__quickplayServer() const;

  constexpr ::GlobalNamespace::MockServerSettings*& __cordl_internal_get__quickplayServer();

  constexpr void __cordl_internal_set__localPlayer(::GlobalNamespace::MockPlayerSettings* value);

  constexpr void __cordl_internal_set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);

  constexpr void __cordl_internal_set__otherPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* value);

  constexpr void __cordl_internal_set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

  constexpr void __cordl_internal_set__quickplayServer(::GlobalNamespace::MockServerSettings* value);

  /// @brief Method .ctor, addr 0x3bc7720, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_localPlayer, addr 0x3bc7644, size 0xac, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockPlayerSettings* get_localPlayer();

  /// @brief Method get_multiplayerStatusData, addr 0x3bc7700, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerStatusData* get_multiplayerStatusData();

  /// @brief Method get_otherPlayers, addr 0x3bc7710, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* get_otherPlayers();

  /// @brief Method get_quickPlaySetupData, addr 0x3bc76f0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::QuickPlaySetupData* get_quickPlaySetupData();

  /// @brief Method get_quickplayServer, addr 0x3bc763c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockServerSettings* get_quickplayServer();

  /// @brief Method set_multiplayerStatusData, addr 0x3bc7708, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value);

  /// @brief Method set_quickPlaySetupData, addr 0x3bc76f8, size 0x8, virtual false, abstract: false, final false
  inline void set_quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerMockSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMockSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerMockSettings(MultiplayerMockSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerMockSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerMockSettings(MultiplayerMockSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4552 };

  /// @brief Field _localPlayer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MockPlayerSettings* ____localPlayer;

  /// @brief Field _otherPlayers, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MockPlayerSettings*>* ____otherPlayers;

  /// @brief Field _quickplayServer, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MockServerSettings* ____quickplayServer;

  /// @brief Field _multiplayerStatusData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerStatusData* ____multiplayerStatusData;

  /// @brief Field _quickPlaySetupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::QuickPlaySetupData* ____quickPlaySetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____localPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____otherPlayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____quickplayServer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____multiplayerStatusData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerMockSettings, ____quickPlaySetupData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerMockSettings, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerMockSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerMockSettings*, "", "MultiplayerMockSettings");
