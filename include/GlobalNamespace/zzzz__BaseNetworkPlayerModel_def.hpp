#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseNetworkPlayerModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapLevelSelectionMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerConfiguration_def.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseNetworkPlayerModel)
namespace GlobalNamespace {
class BaseNetworkPlayerModel_PartyConfig;
}
namespace GlobalNamespace {
class BaseNetworkPlayerModel__GetOtherPlayers_d__56;
}
namespace GlobalNamespace {
class BaseNetworkPlayerModel__GetPartyPlayers_d__55;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseNetworkPlayerModel;
}
namespace GlobalNamespace {
class BaseNetworkPlayerModel_PartyConfig;
}
namespace GlobalNamespace {
class BaseNetworkPlayerModel__GetOtherPlayers_d__56;
}
namespace GlobalNamespace {
class BaseNetworkPlayerModel__GetPartyPlayers_d__55;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56);
MARK_REF_PTR_T(::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55);
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseNetworkPlayerModel/PartyConfig
class CORDL_TYPE BaseNetworkPlayerModel_PartyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field configuration, offset 0x38, size 0x18
  __declspec(property(get = __cordl_internal_get_configuration, put = __cordl_internal_set_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field partyManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_partyManager, put = __cordl_internal_set_partyManager)) ::GlobalNamespace::INetworkPlayerModel* partyManager;

  /// @brief Field selectionMask, offset 0x10, size 0x28
  __declspec(property(get = __cordl_internal_get_selectionMask, put = __cordl_internal_set_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  static inline ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig* New_ctor();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get_configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get_configuration();

  constexpr ::GlobalNamespace::INetworkPlayerModel* const& __cordl_internal_get_partyManager() const;

  constexpr ::GlobalNamespace::INetworkPlayerModel*& __cordl_internal_get_partyManager();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get_selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get_selectionMask();

  constexpr void __cordl_internal_set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set_partyManager(::GlobalNamespace::INetworkPlayerModel* value);

  constexpr void __cordl_internal_set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  /// @brief Method .ctor, addr 0x5ab765c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNetworkPlayerModel_PartyConfig();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel_PartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNetworkPlayerModel_PartyConfig(BaseNetworkPlayerModel_PartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel_PartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNetworkPlayerModel_PartyConfig(BaseNetworkPlayerModel_PartyConfig const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21213 };

  /// @brief Field selectionMask, offset: 0x10, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x38, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  /// @brief Field partyManager, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayerModel* ___partyManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig, ___configuration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig, ___partyManager) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseNetworkPlayerModel/<GetOtherPlayers>d__56
class CORDL_TYPE BaseNetworkPlayerModel__GetOtherPlayers_d__56 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)) ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5ab7664, size 0x18, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator, addr 0x5ab76c4, size 0x8c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current, addr 0x5ab767c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5ab7750, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ab7684, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ab76bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5ab7660, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::INetworkPlayer* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x5ab73d4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNetworkPlayerModel__GetOtherPlayers_d__56();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel__GetOtherPlayers_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNetworkPlayerModel__GetOtherPlayers_d__56(BaseNetworkPlayerModel__GetOtherPlayers_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel__GetOtherPlayers_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNetworkPlayerModel__GetOtherPlayers_d__56(BaseNetworkPlayerModel__GetOtherPlayers_d__56 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21214 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseNetworkPlayerModel/<GetPartyPlayers>d__55
class CORDL_TYPE BaseNetworkPlayerModel__GetPartyPlayers_d__55 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current)) ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x5ab7758, size 0x18, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator, addr 0x5ab77b8, size 0x8c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current, addr 0x5ab7770, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5ab7844, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ab7778, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ab77b0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x5ab7754, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::GlobalNamespace::INetworkPlayer* const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get___2__current();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  /// @brief Method .ctor, addr 0x5ab734c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__INetworkPlayer__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNetworkPlayerModel__GetPartyPlayers_d__55();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel__GetPartyPlayers_d__55", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNetworkPlayerModel__GetPartyPlayers_d__55(BaseNetworkPlayerModel__GetPartyPlayers_d__55&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel__GetPartyPlayers_d__55", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNetworkPlayerModel__GetPartyPlayers_d__55(BaseNetworkPlayerModel__GetPartyPlayers_d__55 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21215 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapLevelSelectionMask, GameplayServerConfiguration, StandaloneMonobehavior
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseNetworkPlayerModel
class CORDL_TYPE BaseNetworkPlayerModel : public ::GlobalNamespace::StandaloneMonobehavior {
public:
  // Declarations
  using PartyConfig = ::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig;

  using _GetOtherPlayers_d__56 = ::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56;

  using _GetPartyPlayers_d__55 = ::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55;

  __declspec(property(get = INetworkPlayerModel_get_otherPlayers)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* INetworkPlayerModel_otherPlayers;

  /// @brief Field _configuration, offset 0x50, size 0x18
  __declspec(property(get = __cordl_internal_get__configuration, put = __cordl_internal_set__configuration)) ::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _connectedPlayerManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayerManager, put = __cordl_internal_set__connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field <discoveryEnabled>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__discoveryEnabled_k__BackingField, put = __cordl_internal_set__discoveryEnabled_k__BackingField)) bool _discoveryEnabled_k__BackingField;

  /// @brief Field _partyManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__partyManager, put = __cordl_internal_set__partyManager)) ::GlobalNamespace::INetworkPlayerModel* _partyManager;

  /// @brief Field _selectionMask, offset 0x68, size 0x28
  __declspec(property(get = __cordl_internal_get__selectionMask, put = __cordl_internal_set__selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  __declspec(property(get = get_configuration)) ::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_connectedPlayerManager)) ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerManagerCreatedEvent,
                      put = __cordl_internal_set_connectedPlayerManagerCreatedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_connectedPlayerManagerDestroyedEvent,
                      put = __cordl_internal_set_connectedPlayerManagerDestroyedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_discoveryEnabled, put = set_discoveryEnabled)) bool discoveryEnabled;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  __declspec(property(get = get_isClient)) bool isClient;

  __declspec(property(get = get_isConnectedOrConnecting)) bool isConnectedOrConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_isServer)) bool isServer;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_partyManager)) ::GlobalNamespace::INetworkPlayerModel* partyManager;

  __declspec(property(get = get_partyPlayers)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers;

  __declspec(property(get = get_selectionMask)) ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  /// @brief Method Connected, addr 0x5ab741c, size 0x4, virtual true, abstract: false, final false
  inline void Connected();

  /// @brief Method ConnectedPlayerManagerChanged, addr 0x5ab7410, size 0x4, virtual true, abstract: false, final false
  inline void ConnectedPlayerManagerChanged();

  /// @brief Method ConnectionFailed, addr 0x5ab73f4, size 0x10, virtual true, abstract: false, final false
  inline void ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method CreateConnectedPlayerManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool CreateConnectedPlayerManager(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method CreatePartyConnection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig);

  /// @brief Method DestroyConnectedPlayerManager, addr 0x5ab6f20, size 0x370, virtual false, abstract: false, final false
  inline void DestroyConnectedPlayerManager();

  /// @brief Method DestroyPartyConnection, addr 0x5ab7430, size 0x148, virtual true, abstract: false, final false
  inline void DestroyPartyConnection();

  /// @brief Method Disconnected, addr 0x5ab7420, size 0x10, virtual true, abstract: false, final false
  inline void Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetOtherPlayers, addr 0x5ab736c, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();

  /// @brief Method GetPartyPlayers, addr 0x5ab72e4, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();

  /// @brief Method INetworkPlayerModel.get_otherPlayers, addr 0x5ab6e50, size 0x10, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* INetworkPlayerModel_get_otherPlayers();

  /// @brief Method Log, addr 0x5ab7578, size 0xdc, virtual false, abstract: false, final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::BaseNetworkPlayerModel* New_ctor();

  /// @brief Method OnDestroy, addr 0x5ab6f1c, size 0x4, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PartySizeChanged, addr 0x5ab7418, size 0x4, virtual true, abstract: false, final false
  inline void PartySizeChanged(int32_t currentPartySize);

  /// @brief Method PlayerConnected, addr 0x5ab7404, size 0x4, virtual true, abstract: false, final false
  inline void PlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerDisconnected, addr 0x5ab7408, size 0x4, virtual true, abstract: false, final false
  inline void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerOrderChanged, addr 0x5ab7414, size 0x4, virtual true, abstract: false, final false
  inline void PlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerStateChanged, addr 0x5ab740c, size 0x4, virtual true, abstract: false, final false
  inline void PlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method Update, addr 0x5ab7290, size 0x54, virtual true, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __cordl_internal_get__configuration() const;

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __cordl_internal_get__configuration();

  constexpr ::GlobalNamespace::ConnectedPlayerManager* const& __cordl_internal_get__connectedPlayerManager() const;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __cordl_internal_get__connectedPlayerManager();

  constexpr bool const& __cordl_internal_get__discoveryEnabled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__discoveryEnabled_k__BackingField();

  constexpr ::GlobalNamespace::INetworkPlayerModel* const& __cordl_internal_get__partyManager() const;

  constexpr ::GlobalNamespace::INetworkPlayerModel*& __cordl_internal_get__partyManager();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __cordl_internal_get__selectionMask() const;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __cordl_internal_get__selectionMask();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& __cordl_internal_get_connectedPlayerManagerCreatedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __cordl_internal_get_connectedPlayerManagerCreatedEvent();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* const& __cordl_internal_get_connectedPlayerManagerDestroyedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __cordl_internal_get_connectedPlayerManagerDestroyedEvent();

  constexpr void __cordl_internal_set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr void __cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr void __cordl_internal_set__discoveryEnabled_k__BackingField(bool value);

  constexpr void __cordl_internal_set__partyManager(::GlobalNamespace::INetworkPlayerModel* value);

  constexpr void __cordl_internal_set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr void __cordl_internal_set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr void __cordl_internal_set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method .ctor, addr 0x5ab7654, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_connectedPlayerManagerCreatedEvent, addr 0x5ab6b20, size 0xc0, virtual true, abstract: false, final true
  inline void add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_connectedPlayerManagerDestroyedEvent, addr 0x5ab6ca0, size 0xc0, virtual true, abstract: false, final true
  inline void add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_inviteRequestedEvent, addr 0x5ab6e38, size 0x4, virtual true, abstract: false, final false
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_joinRequestedEvent, addr 0x5ab6e30, size 0x4, virtual true, abstract: false, final false
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_partyChangedEvent, addr 0x5ab6e20, size 0x4, virtual true, abstract: false, final false
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partySizeChangedEvent, addr 0x5ab6e28, size 0x4, virtual true, abstract: false, final false
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method get_configuration, addr 0x5ab6af4, size 0x14, virtual true, abstract: false, final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_connectedPlayerManager, addr 0x5ab6a70, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method get_currentPartySize, addr 0x5ab6aec, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_currentPartySize();

  /// @brief Method get_discoveryEnabled, addr 0x5ab6ad4, size 0x8, virtual true, abstract: false, final false
  inline bool get_discoveryEnabled();

  /// @brief Method get_hasNetworkingFailed, addr 0x5ab6ae4, size 0x8, virtual true, abstract: false, final false
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_isClient, addr 0x5ab6ebc, size 0x60, virtual false, abstract: false, final false
  inline bool get_isClient();

  /// @brief Method get_isConnectedOrConnecting, addr 0x5ab6a88, size 0x38, virtual false, abstract: false, final false
  inline bool get_isConnectedOrConnecting();

  /// @brief Method get_isConnectionOwner, addr 0x5ab6ac0, size 0x14, virtual false, abstract: false, final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_isServer, addr 0x5ab6e68, size 0x54, virtual false, abstract: false, final false
  inline bool get_isServer();

  /// @brief Method get_localPlayerIsPartyOwner, addr 0x5ab6e60, size 0x8, virtual true, abstract: false, final false
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_partyManager, addr 0x5ab6a78, size 0x10, virtual false, abstract: false, final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_partyManager();

  /// @brief Method get_partyPlayers, addr 0x5ab6e40, size 0x10, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_partyPlayers();

  /// @brief Method get_selectionMask, addr 0x5ab6b08, size 0x18, virtual true, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Convert to "::GlobalNamespace::INetworkPlayerModel"
  constexpr ::GlobalNamespace::INetworkPlayerModel* i___GlobalNamespace__INetworkPlayerModel() noexcept;

  /// @brief Method remove_connectedPlayerManagerCreatedEvent, addr 0x5ab6be0, size 0xc0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerDestroyedEvent, addr 0x5ab6d60, size 0xc0, virtual true, abstract: false, final true
  inline void remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_inviteRequestedEvent, addr 0x5ab6e3c, size 0x4, virtual true, abstract: false, final false
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent, addr 0x5ab6e34, size 0x4, virtual true, abstract: false, final false
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_partyChangedEvent, addr 0x5ab6e24, size 0x4, virtual true, abstract: false, final false
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partySizeChangedEvent, addr 0x5ab6e2c, size 0x4, virtual true, abstract: false, final false
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method set_discoveryEnabled, addr 0x5ab6adc, size 0x8, virtual true, abstract: false, final false
  inline void set_discoveryEnabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNetworkPlayerModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNetworkPlayerModel(BaseNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNetworkPlayerModel(BaseNetworkPlayerModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21216 };

  /// @brief Field _connectedPlayerManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field _partyManager, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayerModel* ____partyManager;

  /// @brief Field _configuration, offset: 0x50, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _selectionMask, offset: 0x68, size: 0x28, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field <discoveryEnabled>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____discoveryEnabled_k__BackingField;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerDestroyedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____connectedPlayerManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____partyManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____configuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____selectionMask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____discoveryEnabled_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ___connectedPlayerManagerCreatedEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ___connectedPlayerManagerDestroyedEvent) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNetworkPlayerModel, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel*, "", "BaseNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel_PartyConfig*, "", "BaseNetworkPlayerModel/PartyConfig");
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel__GetOtherPlayers_d__56*, "", "BaseNetworkPlayerModel/<GetOtherPlayers>d__56");
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel__GetPartyPlayers_d__55*, "", "BaseNetworkPlayerModel/<GetPartyPlayers>d__55");
