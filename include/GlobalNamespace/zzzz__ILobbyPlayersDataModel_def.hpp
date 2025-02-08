#pragma once
// IWYU pragma private; include "GlobalNamespace/ILobbyPlayersDataModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ILobbyPlayersDataModel)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILobbyPlayersDataModel);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.Generic.IReadOnlyDictionary`2<TKey, TValue>,
// System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Collections.IEnumerable
namespace GlobalNamespace {
// Is value type: false
// CS Name: ILobbyPlayersDataModel
class CORDL_TYPE ILobbyPlayersDataModel {
public:
  // Declarations
  __declspec(property(get = get_localUserId)) ::StringW localUserId;

  __declspec(property(get = get_partyOwnerId)) ::StringW partyOwnerId;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
  constexpr operator ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Activate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Activate();

  /// @brief Method ClearData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearData();

  /// @brief Method ClearLocalPlayerBeatmapLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearLocalPlayerBeatmapLevel();

  /// @brief Method ClearLocalPlayerGameplayModifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearLocalPlayerGameplayModifiers();

  /// @brief Method ClearRecommendations, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ClearRecommendations();

  /// @brief Method Deactivate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Deactivate();

  /// @brief Method RequestKickPlayer, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RequestKickPlayer(::StringW kickedUserId);

  /// @brief Method SetLocalPlayerBeatmapLevel, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLocalPlayerBeatmapLevel(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method SetLocalPlayerGameplayModifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLocalPlayerGameplayModifiers(::GlobalNamespace::GameplayModifiers* modifiers);

  /// @brief Method SetLocalPlayerIsActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLocalPlayerIsActive(bool isActive);

  /// @brief Method SetLocalPlayerIsInLobby, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLocalPlayerIsInLobby(bool isInLobby);

  /// @brief Method SetLocalPlayerIsReady, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetLocalPlayerIsReady(bool isReady);

  /// @brief Method add_didChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void add_didChangeEvent(::System::Action_1<::StringW>* value);

  /// @brief Method get_localUserId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_localUserId();

  /// @brief Method get_partyOwnerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_partyOwnerId();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
  i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>>*
  i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2___StringW___GlobalNamespace__ILobbyPlayerData___() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<::StringW,::GlobalNamespace::ILobbyPlayerData*>"
  constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::GlobalNamespace::ILobbyPlayerData*>*
  i___System__Collections__Generic__IReadOnlyDictionary_2___StringW___GlobalNamespace__ILobbyPlayerData__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method remove_didChangeEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void remove_didChangeEvent(::System::Action_1<::StringW>* value);

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyPlayersDataModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyPlayersDataModel(ILobbyPlayersDataModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13095 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILobbyPlayersDataModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyPlayersDataModel*, "", "ILobbyPlayersDataModel");
