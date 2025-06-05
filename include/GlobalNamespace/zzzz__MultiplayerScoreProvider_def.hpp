#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerScoreProvider)
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider_RankedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider___c;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider___c__DisplayClass18_0;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
struct StandardScoreSyncState_Score;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider_RankedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider___c;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider___c__DisplayClass18_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreProvider);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreProvider___c);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0);
// Dependencies System.IComparable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreProvider/RankedPlayer
class CORDL_TYPE MultiplayerScoreProvider_RankedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSyncState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSyncState,
                      put = __cordl_internal_set__multiplayerSyncState)) ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,
                                                                                                                   ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* _multiplayerSyncState;

  /// @brief Field _scoreSyncManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncManager, put = __cordl_internal_set__scoreSyncManager)) ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreSyncManager;

  __declspec(property(get = get_isActiveOrFinished)) bool isActiveOrFinished;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_lastScoreTime)) int64_t lastScoreTime;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_score)) int32_t score;

  __declspec(property(get = get_userId)) ::StringW userId;

  __declspec(property(get = get_userName)) ::StringW userName;

  __declspec(property(get = get_wasActiveAtLevelStart)) bool wasActiveAtLevelStart;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*() noexcept;

  /// @brief Method CompareTo, addr 0x3be21c4, size 0x84, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* other);

  static inline ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*
  New_ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* multiplayerSyncState,
           ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);

  constexpr ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* const&
  __cordl_internal_get__multiplayerSyncState() const;

  constexpr ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*&
  __cordl_internal_get__multiplayerSyncState();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreSyncManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreSyncManager();

  constexpr void
  __cordl_internal_set__multiplayerSyncState(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* value);

  constexpr void __cordl_internal_set__scoreSyncManager(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  /// @brief Method .ctor, addr 0x3be1f0c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* multiplayerSyncState,
                    ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);

  /// @brief Method get_isActiveOrFinished, addr 0x3bd7f58, size 0x28, virtual false, abstract: false, final false
  inline bool get_isActiveOrFinished();

  /// @brief Method get_isConnected, addr 0x3be1e2c, size 0xb8, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_isFailed, addr 0x3bd7f80, size 0x28, virtual false, abstract: false, final false
  inline bool get_isFailed();

  /// @brief Method get_isMe, addr 0x3bdbe54, size 0xb4, virtual false, abstract: false, final false
  inline bool get_isMe();

  /// @brief Method get_lastScoreTime, addr 0x3be20bc, size 0x50, virtual false, abstract: false, final false
  inline int64_t get_lastScoreTime();

  /// @brief Method get_offsetSyncTime, addr 0x3be1f38, size 0xb8, virtual false, abstract: false, final false
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_score, addr 0x3bd3cc0, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_score();

  /// @brief Method get_userId, addr 0x3bd7bcc, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x3be210c, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

  /// @brief Method get_wasActiveAtLevelStart, addr 0x3be1ee4, size 0x28, virtual false, abstract: false, final false
  inline bool get_wasActiveAtLevelStart();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* i___System__IComparable_1___GlobalNamespace__MultiplayerScoreProvider_RankedPlayer__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreProvider_RankedPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider_RankedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreProvider_RankedPlayer(MultiplayerScoreProvider_RankedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider_RankedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreProvider_RankedPlayer(MultiplayerScoreProvider_RankedPlayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4612 };

  /// @brief Field _multiplayerSyncState, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* ____multiplayerSyncState;

  /// @brief Field _scoreSyncManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreSyncManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer, ____multiplayerSyncState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer, ____scoreSyncManager) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreProvider/<>c
class CORDL_TYPE MultiplayerScoreProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MultiplayerScoreProvider___c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0)) ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* __9__16_0;

  static inline ::GlobalNamespace::MultiplayerScoreProvider___c* New_ctor();

  /// @brief Method <Update>b__16_0, addr 0x3be22ac, size 0x24, virtual false, abstract: false, final false
  inline bool _Update_b__16_0(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* p);

  /// @brief Method .ctor, addr 0x3be22a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MultiplayerScoreProvider___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* getStaticF___9__16_0();

  static inline void setStaticF___9(::GlobalNamespace::MultiplayerScoreProvider___c* value);

  static inline void setStaticF___9__16_0(::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreProvider___c(MultiplayerScoreProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreProvider___c(MultiplayerScoreProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreProvider___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreProvider/<>c__DisplayClass18_0
class CORDL_TYPE MultiplayerScoreProvider___c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId)) ::StringW userId;

  static inline ::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0* New_ctor();

  /// @brief Method <GetPositionOfPlayer>b__0, addr 0x3be22d0, size 0x28, virtual false, abstract: false, final false
  inline bool _GetPositionOfPlayer_b__0(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* p);

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x3be1ff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreProvider___c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider___c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreProvider___c__DisplayClass18_0(MultiplayerScoreProvider___c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider___c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreProvider___c__DisplayClass18_0(MultiplayerScoreProvider___c__DisplayClass18_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4614 };

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0, ___userId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreProvider
class CORDL_TYPE MultiplayerScoreProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RankedPlayer = ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer;

  using __c = ::GlobalNamespace::MultiplayerScoreProvider___c;

  using __c__DisplayClass18_0 = ::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0;

  /// @brief Field <firstPlayer>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__firstPlayer_k__BackingField,
                      put = __cordl_internal_set__firstPlayer_k__BackingField)) ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* _firstPlayer_k__BackingField;

  /// @brief Field _players, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__players,
                      put = __cordl_internal_set__players)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* _players;

  /// @brief Field _rankedPlayers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__rankedPlayers,
                      put = __cordl_internal_set__rankedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* _rankedPlayers;

  /// @brief Field _scoreSyncStateManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncStateManager, put = __cordl_internal_set__scoreSyncStateManager)) ::GlobalNamespace::IScoreSyncStateManager* _scoreSyncStateManager;

  /// @brief Field _sharedOffsetSyncTime, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedOffsetSyncTime, put = __cordl_internal_set__sharedOffsetSyncTime)) int64_t _sharedOffsetSyncTime;

  __declspec(property(get = get_firstPlayer, put = set_firstPlayer)) ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* firstPlayer;

  /// @brief Field firstPlayerDidChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_firstPlayerDidChangeEvent,
                      put = __cordl_internal_set_firstPlayerDidChangeEvent)) ::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* firstPlayerDidChangeEvent;

  __declspec(property(get = get_rankedPlayers)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* rankedPlayers;

  __declspec(property(get = get_scoresAvailable)) bool scoresAvailable;

  /// @brief Method GetPositionOfPlayer, addr 0x3be0514, size 0xe0, virtual false, abstract: false, final false
  inline int32_t GetPositionOfPlayer(::StringW userId);

  static inline ::GlobalNamespace::MultiplayerScoreProvider* New_ctor();

  /// @brief Method TryGetScore, addr 0x3bd3c58, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetScore(::StringW userId, ::ByRef<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*> data);

  /// @brief Method Update, addr 0x3be176c, size 0x6c0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* const& __cordl_internal_get__firstPlayer_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*& __cordl_internal_get__firstPlayer_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const& __cordl_internal_get__players() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*& __cordl_internal_get__players();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const& __cordl_internal_get__rankedPlayers() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*& __cordl_internal_get__rankedPlayers();

  constexpr ::GlobalNamespace::IScoreSyncStateManager* const& __cordl_internal_get__scoreSyncStateManager() const;

  constexpr ::GlobalNamespace::IScoreSyncStateManager*& __cordl_internal_get__scoreSyncStateManager();

  constexpr int64_t const& __cordl_internal_get__sharedOffsetSyncTime() const;

  constexpr int64_t& __cordl_internal_get__sharedOffsetSyncTime();

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const& __cordl_internal_get_firstPlayerDidChangeEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*& __cordl_internal_get_firstPlayerDidChangeEvent();

  constexpr void __cordl_internal_set__firstPlayer_k__BackingField(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* value);

  constexpr void __cordl_internal_set__players(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value);

  constexpr void __cordl_internal_set__rankedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value);

  constexpr void __cordl_internal_set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value);

  constexpr void __cordl_internal_set__sharedOffsetSyncTime(int64_t value);

  constexpr void __cordl_internal_set_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value);

  /// @brief Method .ctor, addr 0x3be1ff8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_firstPlayerDidChangeEvent, addr 0x3bd7ea8, size 0xb0, virtual false, abstract: false, final false
  inline void add_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value);

  /// @brief Method get_firstPlayer, addr 0x3be1754, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* get_firstPlayer();

  /// @brief Method get_rankedPlayers, addr 0x3be1764, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* get_rankedPlayers();

  /// @brief Method get_scoresAvailable, addr 0x3be0130, size 0x20, virtual false, abstract: false, final false
  inline bool get_scoresAvailable();

  /// @brief Method remove_firstPlayerDidChangeEvent, addr 0x3bd7a88, size 0xb0, virtual false, abstract: false, final false
  inline void remove_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value);

  /// @brief Method set_firstPlayer, addr 0x3be175c, size 0x8, virtual false, abstract: false, final false
  inline void set_firstPlayer(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreProvider(MultiplayerScoreProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreProvider(MultiplayerScoreProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4615 };

  /// @brief Field _scoreSyncStateManager, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IScoreSyncStateManager* ____scoreSyncStateManager;

  /// @brief Field <firstPlayer>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* ____firstPlayer_k__BackingField;

  /// @brief Field firstPlayerDidChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* ___firstPlayerDidChangeEvent;

  /// @brief Field _sharedOffsetSyncTime, offset: 0x38, size: 0x8, def value: None
  int64_t ____sharedOffsetSyncTime;

  /// @brief Field _rankedPlayers, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* ____rankedPlayers;

  /// @brief Field _players, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* ____players;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____scoreSyncStateManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____firstPlayer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ___firstPlayerDidChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____sharedOffsetSyncTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____rankedPlayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____players) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreProvider, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider*, "", "MultiplayerScoreProvider");
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, "", "MultiplayerScoreProvider/RankedPlayer");
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider___c*, "", "MultiplayerScoreProvider/<>c");
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0*, "", "MultiplayerScoreProvider/<>c__DisplayClass18_0");
