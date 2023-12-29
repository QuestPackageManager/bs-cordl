#pragma once
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
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
template <typename T> class IConnectionInitParams_1;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class __BaseNetworkPlayerModel__PartyConfig;
}
namespace GlobalNamespace {
template <typename T> class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class __BaseNetworkPlayerModel___GetOtherPlayers_d__56;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
class __BaseNetworkPlayerModel___GetPartyPlayers_d__55;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseNetworkPlayerModel;
}
namespace GlobalNamespace {
class __BaseNetworkPlayerModel__PartyConfig;
}
namespace GlobalNamespace {
class __BaseNetworkPlayerModel___GetOtherPlayers_d__56;
}
namespace GlobalNamespace {
class __BaseNetworkPlayerModel___GetPartyPlayers_d__55;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig);
MARK_REF_PTR_T(::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56);
MARK_REF_PTR_T(::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55);
// Type: ::PartyConfig
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12687)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12614))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4534))
// CS Name: ::BaseNetworkPlayerModel::PartyConfig*
class CORDL_TYPE __BaseNetworkPlayerModel__PartyConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field selectionMask, offset 0x10, size 0x18
  __declspec(property(get = __get_selectionMask, put = __set_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  /// @brief Field configuration, offset 0x28, size 0x18
  __declspec(property(get = __get_configuration, put = __set_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  /// @brief Field partyManager, offset 0x40, size 0x8
  __declspec(property(get = __get_partyManager, put = __set_partyManager))::GlobalNamespace::INetworkPlayerModel* partyManager;

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get_selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get_selectionMask() const;

  constexpr void __set_selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get_configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get_configuration() const;

  constexpr void __set_configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::GlobalNamespace::INetworkPlayerModel*& __get_partyManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayerModel*> const& __get_partyManager() const;

  constexpr void __set_partyManager(::GlobalNamespace::INetworkPlayerModel* value);

  static inline ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig* New_ctor();

  /// @brief Method .ctor addr 0x2215ff8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__BaseNetworkPlayerModel__PartyConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseNetworkPlayerModel__PartyConfig(__BaseNetworkPlayerModel__PartyConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseNetworkPlayerModel__PartyConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseNetworkPlayerModel__PartyConfig(__BaseNetworkPlayerModel__PartyConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseNetworkPlayerModel__PartyConfig();

public:
  /// @brief Field selectionMask, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ___selectionMask;

  /// @brief Field configuration, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ___configuration;

  /// @brief Field partyManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayerModel* ___partyManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig, ___selectionMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig, ___configuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig, ___partyManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPartyPlayers>d__55
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4535))
// CS Name: ::BaseNetworkPlayerModel::<GetPartyPlayers>d__55*
class CORDL_TYPE __BaseNetworkPlayerModel___GetPartyPlayers_d__55 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::GlobalNamespace::INetworkPlayer*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __get___2__current() const;

  constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  static inline ::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2215cf8 size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2216000 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2216004 size 0x18 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x221601c size 0x8 virtual true final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x2216024 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x2216064 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x221606c size 0x98 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2216104 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__BaseNetworkPlayerModel___GetPartyPlayers_d__55", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseNetworkPlayerModel___GetPartyPlayers_d__55(__BaseNetworkPlayerModel___GetPartyPlayers_d__55&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseNetworkPlayerModel___GetPartyPlayers_d__55", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseNetworkPlayerModel___GetPartyPlayers_d__55(__BaseNetworkPlayerModel___GetPartyPlayers_d__55 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseNetworkPlayerModel___GetPartyPlayers_d__55();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55, _____l__initialThreadId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetOtherPlayers>d__56
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4536))
// CS Name: ::BaseNetworkPlayerModel::<GetOtherPlayers>d__56*
class CORDL_TYPE __BaseNetworkPlayerModel___GetOtherPlayers_d__56 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::GlobalNamespace::INetworkPlayer* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  __declspec(property(get = System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::GlobalNamespace::INetworkPlayer*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __get___2__current() const;

  constexpr void __set___2__current(::GlobalNamespace::INetworkPlayer* value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  static inline ::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2215d9c size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2216108 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x221610c size 0x18 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x2216124 size 0x8 virtual true final true
  inline ::GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x221612c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x221616c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x2216174 size 0x98 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x221620c size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__BaseNetworkPlayerModel___GetOtherPlayers_d__56", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseNetworkPlayerModel___GetOtherPlayers_d__56(__BaseNetworkPlayerModel___GetOtherPlayers_d__56&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseNetworkPlayerModel___GetOtherPlayers_d__56", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseNetworkPlayerModel___GetOtherPlayers_d__56(__BaseNetworkPlayerModel___GetOtherPlayers_d__56 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseNetworkPlayerModel___GetOtherPlayers_d__56();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56, _____l__initialThreadId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BaseNetworkPlayerModel
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12887)), TypeDefinitionIndex(TypeDefinitionIndex(12614)), TypeDefinitionIndex(TypeDefinitionIndex(12687))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4537))
// CS Name: ::BaseNetworkPlayerModel*
class CORDL_TYPE BaseNetworkPlayerModel : public ::GlobalNamespace::StandaloneMonobehavior {
public:
  // Declarations
  using _GetOtherPlayers_d__56 = ::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56;

  using _GetPartyPlayers_d__55 = ::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55;

  using PartyConfig = ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig;

  /// @brief Field _connectedPlayerManager, offset 0x38, size 0x8
  __declspec(property(get = __get__connectedPlayerManager, put = __set__connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* _connectedPlayerManager;

  /// @brief Field _partyManager, offset 0x40, size 0x8
  __declspec(property(get = __get__partyManager, put = __set__partyManager))::GlobalNamespace::INetworkPlayerModel* _partyManager;

  /// @brief Field _configuration, offset 0x48, size 0x18
  __declspec(property(get = __get__configuration, put = __set__configuration))::GlobalNamespace::GameplayServerConfiguration _configuration;

  /// @brief Field _selectionMask, offset 0x60, size 0x18
  __declspec(property(get = __get__selectionMask, put = __set__selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask _selectionMask;

  /// @brief Field <discoveryEnabled>k__BackingField, offset 0x78, size 0x1
  __declspec(property(get = __get__discoveryEnabled_k__BackingField, put = __set__discoveryEnabled_k__BackingField)) bool _discoveryEnabled_k__BackingField;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_connectedPlayerManagerCreatedEvent,
                      put = __set_connectedPlayerManagerCreatedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_connectedPlayerManagerDestroyedEvent,
                      put = __set_connectedPlayerManagerDestroyedEvent))::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;

  __declspec(property(get = get_connectedPlayerManager))::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;

  __declspec(property(get = get_partyManager))::GlobalNamespace::INetworkPlayerModel* partyManager;

  __declspec(property(get = get_isConnectedOrConnecting)) bool isConnectedOrConnecting;

  __declspec(property(get = get_isConnectionOwner)) bool isConnectionOwner;

  __declspec(property(get = get_discoveryEnabled, put = set_discoveryEnabled)) bool discoveryEnabled;

  __declspec(property(get = get_hasNetworkingFailed)) bool hasNetworkingFailed;

  __declspec(property(get = get_currentPartySize)) int32_t currentPartySize;

  __declspec(property(get = get_configuration))::GlobalNamespace::GameplayServerConfiguration configuration;

  __declspec(property(get = get_selectionMask))::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;

  __declspec(property(get = get_partyPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers;

  __declspec(property(get = INetworkPlayerModel_get_otherPlayers))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* INetworkPlayerModel_otherPlayers;

  __declspec(property(get = get_localPlayerIsPartyOwner)) bool localPlayerIsPartyOwner;

  __declspec(property(get = get_isServer)) bool isServer;

  __declspec(property(get = get_isClient)) bool isClient;

  /// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModel"
  constexpr operator ::GlobalNamespace::INetworkPlayerModel*() noexcept;

  constexpr ::GlobalNamespace::ConnectedPlayerManager*& __get__connectedPlayerManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& __get__connectedPlayerManager() const;

  constexpr void __set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value);

  constexpr ::GlobalNamespace::INetworkPlayerModel*& __get__partyManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayerModel*> const& __get__partyManager() const;

  constexpr void __set__partyManager(::GlobalNamespace::INetworkPlayerModel* value);

  constexpr ::GlobalNamespace::GameplayServerConfiguration& __get__configuration();

  constexpr ::GlobalNamespace::GameplayServerConfiguration const& __get__configuration() const;

  constexpr void __set__configuration(::GlobalNamespace::GameplayServerConfiguration value);

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask& __get__selectionMask();

  constexpr ::GlobalNamespace::BeatmapLevelSelectionMask const& __get__selectionMask() const;

  constexpr void __set__selectionMask(::GlobalNamespace::BeatmapLevelSelectionMask value);

  constexpr bool& __get__discoveryEnabled_k__BackingField();

  constexpr bool const& __get__discoveryEnabled_k__BackingField() const;

  constexpr void __set__discoveryEnabled_k__BackingField(bool value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_connectedPlayerManagerCreatedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_connectedPlayerManagerCreatedEvent() const;

  constexpr void __set_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*& __get_connectedPlayerManagerDestroyedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>*> const& __get_connectedPlayerManagerDestroyedEvent() const;

  constexpr void __set_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method get_connectedPlayerManager addr 0x2215560 size 0x8 virtual true final true
  inline ::GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();

  /// @brief Method get_partyManager addr 0x2215568 size 0x10 virtual false final false
  inline ::GlobalNamespace::INetworkPlayerModel* get_partyManager();

  /// @brief Method get_isConnectedOrConnecting addr 0x2215578 size 0x14 virtual false final false
  inline bool get_isConnectedOrConnecting();

  /// @brief Method get_isConnectionOwner addr 0x221558c size 0x14 virtual false final false
  inline bool get_isConnectionOwner();

  /// @brief Method get_discoveryEnabled addr 0x22155a0 size 0x8 virtual true final false
  inline bool get_discoveryEnabled();

  /// @brief Method set_discoveryEnabled addr 0x22155a8 size 0xc virtual true final false
  inline void set_discoveryEnabled(bool value);

  /// @brief Method get_hasNetworkingFailed addr 0x22155b4 size 0x8 virtual true final false
  inline bool get_hasNetworkingFailed();

  /// @brief Method get_currentPartySize addr 0x22155bc size 0x8 virtual true final false
  inline int32_t get_currentPartySize();

  /// @brief Method get_configuration addr 0x22155c4 size 0x14 virtual true final false
  inline ::GlobalNamespace::GameplayServerConfiguration get_configuration();

  /// @brief Method get_selectionMask addr 0x22155d8 size 0x14 virtual true final false
  inline ::GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask();

  /// @brief Method add_connectedPlayerManagerCreatedEvent addr 0x22155ec size 0xb0 virtual true final true
  inline void add_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerCreatedEvent addr 0x221569c size 0xb0 virtual true final true
  inline void remove_connectedPlayerManagerCreatedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_connectedPlayerManagerDestroyedEvent addr 0x221574c size 0xb0 virtual true final true
  inline void add_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_connectedPlayerManagerDestroyedEvent addr 0x22157fc size 0xb0 virtual true final true
  inline void remove_connectedPlayerManagerDestroyedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partyChangedEvent addr 0x22158ac size 0x4 virtual true final false
  inline void add_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method remove_partyChangedEvent addr 0x22158b0 size 0x4 virtual true final false
  inline void remove_partyChangedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* value);

  /// @brief Method add_partySizeChangedEvent addr 0x22158b4 size 0x4 virtual true final false
  inline void add_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_partySizeChangedEvent addr 0x22158b8 size 0x4 virtual true final false
  inline void remove_partySizeChangedEvent(::System::Action_1<int32_t>* value);

  /// @brief Method add_joinRequestedEvent addr 0x22158bc size 0x4 virtual true final false
  inline void add_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_joinRequestedEvent addr 0x22158c0 size 0x4 virtual true final false
  inline void remove_joinRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method add_inviteRequestedEvent addr 0x22158c4 size 0x4 virtual true final false
  inline void add_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method remove_inviteRequestedEvent addr 0x22158c8 size 0x4 virtual true final false
  inline void remove_inviteRequestedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method get_partyPlayers addr 0x22158cc size 0x10 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_partyPlayers();

  /// @brief Method INetworkPlayerModel.get_otherPlayers addr 0x22158dc size 0x10 virtual true final true
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* INetworkPlayerModel_get_otherPlayers();

  /// @brief Method get_localPlayerIsPartyOwner addr 0x22158ec size 0x8 virtual true final false
  inline bool get_localPlayerIsPartyOwner();

  /// @brief Method get_isServer addr 0x22158f4 size 0x3c virtual false final false
  inline bool get_isServer();

  /// @brief Method get_isClient addr 0x2215930 size 0x4c virtual false final false
  inline bool get_isClient();

  /// @brief Method OnDestroy addr 0x221597c size 0x4 virtual true final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x2215c58 size 0x30 virtual true final false
  inline void Update();

  /// @brief Method GetPartyPlayers addr 0x2215c88 size 0x70 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();

  /// @brief Method GetOtherPlayers addr 0x2215d2c size 0x70 virtual true final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();

  /// @brief Method ConnectionFailed addr 0x2215dd0 size 0x10 virtual true final false
  inline void ConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason);

  /// @brief Method PlayerConnected addr 0x2215de0 size 0x4 virtual true final false
  inline void PlayerConnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerDisconnected addr 0x2215de4 size 0x4 virtual true final false
  inline void PlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PlayerStateChanged addr 0x2215de8 size 0x4 virtual true final false
  inline void PlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method ConnectedPlayerManagerChanged addr 0x2215dec size 0x4 virtual true final false
  inline void ConnectedPlayerManagerChanged();

  /// @brief Method PlayerOrderChanged addr 0x2215df0 size 0x4 virtual true final false
  inline void PlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* player);

  /// @brief Method PartySizeChanged addr 0x2215df4 size 0x4 virtual true final false
  inline void PartySizeChanged(int32_t currentPartySize);

  /// @brief Method Connected addr 0x2215df8 size 0x4 virtual true final false
  inline void Connected();

  /// @brief Method Disconnected addr 0x2215dfc size 0x10 virtual true final false
  inline void Disconnected(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
  template <typename T> inline bool CreatePartyConnection(::GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig);

  /// @brief Method DestroyPartyConnection addr 0x2215e0c size 0x114 virtual true final false
  inline void DestroyPartyConnection();

  /// @brief Method DestroyConnectedPlayerManager addr 0x2215980 size 0x2d8 virtual false final false
  inline void DestroyConnectedPlayerManager();

  /// @brief Method CreateConnectedPlayerManager addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline bool CreateConnectedPlayerManager(::GlobalNamespace::IConnectionInitParams_1<T>* initParams);

  /// @brief Method Log addr 0x2215f20 size 0xd0 virtual false final false
  inline void Log(::StringW message);

  static inline ::GlobalNamespace::BaseNetworkPlayerModel* New_ctor();

  /// @brief Method .ctor addr 0x2215ff0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseNetworkPlayerModel(BaseNetworkPlayerModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseNetworkPlayerModel(BaseNetworkPlayerModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseNetworkPlayerModel();

public:
  /// @brief Field _connectedPlayerManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::ConnectedPlayerManager* ____connectedPlayerManager;

  /// @brief Field _partyManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayerModel* ____partyManager;

  /// @brief Field _configuration, offset: 0x48, size: 0x18, def value: None
  ::GlobalNamespace::GameplayServerConfiguration ____configuration;

  /// @brief Field _selectionMask, offset: 0x60, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapLevelSelectionMask ____selectionMask;

  /// @brief Field <discoveryEnabled>k__BackingField, offset: 0x78, size: 0x1, def value: None
  bool ____discoveryEnabled_k__BackingField;

  /// @brief Field connectedPlayerManagerCreatedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerCreatedEvent;

  /// @brief Field connectedPlayerManagerDestroyedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayerModel*>* ___connectedPlayerManagerDestroyedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseNetworkPlayerModel, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____connectedPlayerManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____partyManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____configuration) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____selectionMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ____discoveryEnabled_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ___connectedPlayerManagerCreatedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseNetworkPlayerModel, ___connectedPlayerManagerDestroyedEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNetworkPlayerModel*, "", "BaseNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig*, "", "BaseNetworkPlayerModel/PartyConfig");
NEED_NO_BOX(::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BaseNetworkPlayerModel___GetOtherPlayers_d__56*, "", "BaseNetworkPlayerModel/<GetOtherPlayers>d__56");
NEED_NO_BOX(::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BaseNetworkPlayerModel___GetPartyPlayers_d__55*, "", "BaseNetworkPlayerModel/<GetPartyPlayers>d__55");
