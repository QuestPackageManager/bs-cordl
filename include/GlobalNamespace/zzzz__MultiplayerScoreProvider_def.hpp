#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerScoreProvider)
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider____c;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider____c__DisplayClass18_0;
}
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
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
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider____c;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider____c__DisplayClass18_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreProvider);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerScoreProvider____c);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0);
// Type: ::RankedPlayer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreProvider::RankedPlayer*
class CORDL_TYPE __MultiplayerScoreProvider__RankedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSyncState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerSyncState,
                      put = __cordl_internal_set__multiplayerSyncState))::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState,
                                                                                                                  ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* _multiplayerSyncState;

  /// @brief Field _scoreSyncManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncManager, put = __cordl_internal_set__scoreSyncManager))::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreSyncManager;

  __declspec(property(get = get_isActiveOrFinished)) bool isActiveOrFinished;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_lastScoreTime)) int64_t lastScoreTime;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_score)) int32_t score;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  __declspec(property(get = get_wasActiveAtLevelStart)) bool wasActiveAtLevelStart;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*() noexcept;

  /// @brief Method CompareTo, addr 0x2732d9c, size 0x88, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* other);

  static inline ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*
  New_ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* multiplayerSyncState,
           ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);

  constexpr ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*&
  __cordl_internal_get__multiplayerSyncState();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*> const&
  __cordl_internal_get__multiplayerSyncState() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreSyncManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreSyncManager();

  constexpr void
  __cordl_internal_set__multiplayerSyncState(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* value);

  constexpr void __cordl_internal_set__scoreSyncManager(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  /// @brief Method .ctor, addr 0x2732ae8, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* multiplayerSyncState,
                    ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);

  /// @brief Method get_isActiveOrFinished, addr 0x272825c, size 0x28, virtual false, abstract: false, final false
  inline bool get_isActiveOrFinished();

  /// @brief Method get_isConnected, addr 0x2732a08, size 0xb8, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_isFailed, addr 0x2728284, size 0x28, virtual false, abstract: false, final false
  inline bool get_isFailed();

  /// @brief Method get_isMe, addr 0x272c1b0, size 0xb4, virtual false, abstract: false, final false
  inline bool get_isMe();

  /// @brief Method get_lastScoreTime, addr 0x2732c94, size 0x50, virtual false, abstract: false, final false
  inline int64_t get_lastScoreTime();

  /// @brief Method get_offsetSyncTime, addr 0x2732b14, size 0xb8, virtual false, abstract: false, final false
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_score, addr 0x2723f40, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_score();

  /// @brief Method get_userId, addr 0x2727ed8, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x2732ce4, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

  /// @brief Method get_wasActiveAtLevelStart, addr 0x2732ac0, size 0x28, virtual false, abstract: false, final false
  inline bool get_wasActiveAtLevelStart();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* i___System__IComparable_1___GlobalNamespace____MultiplayerScoreProvider__RankedPlayer__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreProvider__RankedPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider__RankedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreProvider__RankedPlayer(__MultiplayerScoreProvider__RankedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider__RankedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreProvider__RankedPlayer(__MultiplayerScoreProvider__RankedPlayer const&) = delete;

  /// @brief Field _multiplayerSyncState, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* ____multiplayerSyncState;

  /// @brief Field _scoreSyncManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreSyncManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer, ____multiplayerSyncState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer, ____scoreSyncManager) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreProvider::<>c*
class CORDL_TYPE __MultiplayerScoreProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerScoreProvider____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* __9__16_0;

  static inline ::GlobalNamespace::__MultiplayerScoreProvider____c* New_ctor();

  /// @brief Method <Update>b__16_0, addr 0x2732e90, size 0x24, virtual false, abstract: false, final false
  inline bool _Update_b__16_0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* p);

  /// @brief Method .ctor, addr 0x2732e88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MultiplayerScoreProvider____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* getStaticF___9__16_0();

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerScoreProvider____c* value);

  static inline void setStaticF___9__16_0(::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreProvider____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreProvider____c(__MultiplayerScoreProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreProvider____c(__MultiplayerScoreProvider____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreProvider____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreProvider::<>c__DisplayClass18_0*
class CORDL_TYPE __MultiplayerScoreProvider____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_userId, put = __cordl_internal_set_userId))::StringW userId;

  static inline ::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0* New_ctor();

  /// @brief Method <GetPositionOfPlayer>b__0, addr 0x2732eb4, size 0x28, virtual false, abstract: false, final false
  inline bool _GetPositionOfPlayer_b__0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* p);

  constexpr ::StringW const& __cordl_internal_get_userId() const;

  constexpr ::StringW& __cordl_internal_get_userId();

  constexpr void __cordl_internal_set_userId(::StringW value);

  /// @brief Method .ctor, addr 0x2732bcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreProvider____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreProvider____c__DisplayClass18_0(__MultiplayerScoreProvider____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreProvider____c__DisplayClass18_0(__MultiplayerScoreProvider____c__DisplayClass18_0 const&) = delete;

  /// @brief Field userId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___userId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0, ___userId) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerScoreProvider
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerScoreProvider*
class CORDL_TYPE MultiplayerScoreProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using RankedPlayer = ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer;

  using __c = ::GlobalNamespace::__MultiplayerScoreProvider____c;

  using __c__DisplayClass18_0 = ::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0;

  /// @brief Field <firstPlayer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__firstPlayer_k__BackingField,
                      put = __cordl_internal_set__firstPlayer_k__BackingField))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* _firstPlayer_k__BackingField;

  /// @brief Field _players, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__players,
                      put = __cordl_internal_set__players))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* _players;

  /// @brief Field _rankedPlayers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rankedPlayers,
                      put = __cordl_internal_set__rankedPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* _rankedPlayers;

  /// @brief Field _scoreSyncStateManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreSyncStateManager, put = __cordl_internal_set__scoreSyncStateManager))::GlobalNamespace::IScoreSyncStateManager* _scoreSyncStateManager;

  /// @brief Field _sharedOffsetSyncTime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sharedOffsetSyncTime, put = __cordl_internal_set__sharedOffsetSyncTime)) int64_t _sharedOffsetSyncTime;

  __declspec(property(get = get_firstPlayer, put = set_firstPlayer))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* firstPlayer;

  /// @brief Field firstPlayerDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_firstPlayerDidChangeEvent,
                      put = __cordl_internal_set_firstPlayerDidChangeEvent))::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* firstPlayerDidChangeEvent;

  __declspec(property(get = get_rankedPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* rankedPlayers;

  __declspec(property(get = get_scoresAvailable)) bool scoresAvailable;

  /// @brief Method GetPositionOfPlayer, addr 0x27310d4, size 0xe4, virtual false, abstract: false, final false
  inline int32_t GetPositionOfPlayer(::StringW userId);

  static inline ::GlobalNamespace::MultiplayerScoreProvider* New_ctor();

  /// @brief Method TryGetScore, addr 0x2723ed8, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetScore(::StringW userId, ByRef<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> data);

  /// @brief Method Update, addr 0x2732338, size 0x6d0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*& __cordl_internal_get__firstPlayer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> const& __cordl_internal_get__firstPlayer_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __cordl_internal_get__players();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const&
  __cordl_internal_get__players() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __cordl_internal_get__rankedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const&
  __cordl_internal_get__rankedPlayers() const;

  constexpr ::GlobalNamespace::IScoreSyncStateManager*& __cordl_internal_get__scoreSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> const& __cordl_internal_get__scoreSyncStateManager() const;

  constexpr int64_t const& __cordl_internal_get__sharedOffsetSyncTime() const;

  constexpr int64_t& __cordl_internal_get__sharedOffsetSyncTime();

  constexpr ::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __cordl_internal_get_firstPlayerDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const& __cordl_internal_get_firstPlayerDidChangeEvent() const;

  constexpr void __cordl_internal_set__firstPlayer_k__BackingField(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  constexpr void __cordl_internal_set__players(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  constexpr void __cordl_internal_set__rankedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  constexpr void __cordl_internal_set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value);

  constexpr void __cordl_internal_set__sharedOffsetSyncTime(int64_t value);

  constexpr void __cordl_internal_set_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  /// @brief Method .ctor, addr 0x2732bd4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_firstPlayerDidChangeEvent, addr 0x27281ac, size 0xb0, virtual false, abstract: false, final false
  inline void add_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  /// @brief Method get_firstPlayer, addr 0x2732320, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* get_firstPlayer();

  /// @brief Method get_rankedPlayers, addr 0x2732330, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* get_rankedPlayers();

  /// @brief Method get_scoresAvailable, addr 0x2730cf0, size 0x20, virtual false, abstract: false, final false
  inline bool get_scoresAvailable();

  /// @brief Method remove_firstPlayerDidChangeEvent, addr 0x2727d94, size 0xb0, virtual false, abstract: false, final false
  inline void remove_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  /// @brief Method set_firstPlayer, addr 0x2732328, size 0x8, virtual false, abstract: false, final false
  inline void set_firstPlayer(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

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

  /// @brief Field _scoreSyncStateManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IScoreSyncStateManager* ____scoreSyncStateManager;

  /// @brief Field <firstPlayer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* ____firstPlayer_k__BackingField;

  /// @brief Field firstPlayerDidChangeEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* ___firstPlayerDidChangeEvent;

  /// @brief Field _sharedOffsetSyncTime, offset: 0x30, size: 0x8, def value: None
  int64_t ____sharedOffsetSyncTime;

  /// @brief Field _rankedPlayers, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* ____rankedPlayers;

  /// @brief Field _players, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* ____players;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreProvider, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____scoreSyncStateManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____firstPlayer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ___firstPlayerDidChangeEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____sharedOffsetSyncTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____rankedPlayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreProvider, ____players) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreProvider*, "", "MultiplayerScoreProvider");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, "", "MultiplayerScoreProvider/RankedPlayer");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerScoreProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreProvider____c*, "", "MultiplayerScoreProvider/<>c");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0*, "", "MultiplayerScoreProvider/<>c__DisplayClass18_0");
