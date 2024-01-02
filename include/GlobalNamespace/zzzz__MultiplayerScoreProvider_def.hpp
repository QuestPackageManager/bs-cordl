#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerScoreProvider)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider____c__DisplayClass18_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class __MultiplayerScoreProvider____c;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
template <typename TStateTable, typename TType, typename TState> class MultiplayerSyncState_3;
}
namespace GlobalNamespace {
struct __StandardScoreSyncState__Score;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5248))
// CS Name: ::MultiplayerScoreProvider::RankedPlayer*
class CORDL_TYPE __MultiplayerScoreProvider__RankedPlayer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _multiplayerSyncState, offset 0x10, size 0x8
  __declspec(property(get = __get__multiplayerSyncState,
                      put = __set__multiplayerSyncState))::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score,
                                                                                                   int32_t>* _multiplayerSyncState;

  /// @brief Field _scoreSyncManager, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreSyncManager, put = __set__scoreSyncManager))::GlobalNamespace::MultiplayerScoreProvider* _scoreSyncManager;

  __declspec(property(get = get_offsetSyncTime)) int64_t offsetSyncTime;

  __declspec(property(get = get_lastScoreTime)) int64_t lastScoreTime;

  __declspec(property(get = get_score)) int32_t score;

  __declspec(property(get = get_isConnected)) bool isConnected;

  __declspec(property(get = get_isActiveOrFinished)) bool isActiveOrFinished;

  __declspec(property(get = get_isFailed)) bool isFailed;

  __declspec(property(get = get_wasActiveAtLevelStart)) bool wasActiveAtLevelStart;

  __declspec(property(get = get_isMe)) bool isMe;

  __declspec(property(get = get_userId))::StringW userId;

  __declspec(property(get = get_userName))::StringW userName;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*() noexcept;

  constexpr ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*& __get__multiplayerSyncState();

  constexpr ::cordl_internals::to_const_pointer<
      ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>*> const&
  __get__multiplayerSyncState() const;

  constexpr void __set__multiplayerSyncState(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreSyncManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreSyncManager() const;

  constexpr void __set__scoreSyncManager(::GlobalNamespace::MultiplayerScoreProvider* value);

  /// @brief Method get_offsetSyncTime, addr 0x225968c, size 0xb8, virtual false, abstract: false, final false
  inline int64_t get_offsetSyncTime();

  /// @brief Method get_lastScoreTime, addr 0x225980c, size 0x50, virtual false, abstract: false, final false
  inline int64_t get_lastScoreTime();

  /// @brief Method get_score, addr 0x224c140, size 0x30, virtual false, abstract: false, final false
  inline int32_t get_score();

  /// @brief Method get_isConnected, addr 0x2259580, size 0xb8, virtual false, abstract: false, final false
  inline bool get_isConnected();

  /// @brief Method get_isActiveOrFinished, addr 0x2250448, size 0x28, virtual false, abstract: false, final false
  inline bool get_isActiveOrFinished();

  /// @brief Method get_isFailed, addr 0x2250470, size 0x28, virtual false, abstract: false, final false
  inline bool get_isFailed();

  /// @brief Method get_wasActiveAtLevelStart, addr 0x2259638, size 0x28, virtual false, abstract: false, final false
  inline bool get_wasActiveAtLevelStart();

  /// @brief Method get_isMe, addr 0x22528f4, size 0xb4, virtual false, abstract: false, final false
  inline bool get_isMe();

  /// @brief Method get_userId, addr 0x22500c4, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_userId();

  /// @brief Method get_userName, addr 0x225985c, size 0xb8, virtual false, abstract: false, final false
  inline ::StringW get_userName();

  static inline ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*
  New_ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* multiplayerSyncState,
           ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);

  /// @brief Method .ctor, addr 0x2259660, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* multiplayerSyncState,
                    ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager);

  /// @brief Method CompareTo, addr 0x2259914, size 0x88, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* other);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider__RankedPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreProvider__RankedPlayer(__MultiplayerScoreProvider__RankedPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider__RankedPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreProvider__RankedPlayer(__MultiplayerScoreProvider__RankedPlayer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreProvider__RankedPlayer();

public:
  /// @brief Field _multiplayerSyncState, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::__StandardScoreSyncState__Score, int32_t>* ____multiplayerSyncState;

  /// @brief Field _scoreSyncManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreSyncManager;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5249))
// CS Name: ::MultiplayerScoreProvider::<>c*
class CORDL_TYPE __MultiplayerScoreProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__MultiplayerScoreProvider____c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0))::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* __9__16_0;

  static inline void setStaticF___9(::GlobalNamespace::__MultiplayerScoreProvider____c* value);

  static inline ::GlobalNamespace::__MultiplayerScoreProvider____c* getStaticF___9();

  static inline void setStaticF___9__16_0(::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* value);

  static inline ::System::Func_2<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*, bool>* getStaticF___9__16_0();

  static inline ::GlobalNamespace::__MultiplayerScoreProvider____c* New_ctor();

  /// @brief Method .ctor, addr 0x2259a00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Update>b__16_0, addr 0x2259a08, size 0x24, virtual false, abstract: false, final false
  inline bool _Update_b__16_0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* p);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreProvider____c(__MultiplayerScoreProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreProvider____c(__MultiplayerScoreProvider____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreProvider____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreProvider____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5250))
// CS Name: ::MultiplayerScoreProvider::<>c__DisplayClass18_0*
class CORDL_TYPE __MultiplayerScoreProvider____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field userId, offset 0x10, size 0x8
  __declspec(property(get = __get_userId, put = __set_userId))::StringW userId;

  constexpr ::StringW& __get_userId();

  constexpr ::StringW const& __get_userId() const;

  constexpr void __set_userId(::StringW value);

  static inline ::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x2259744, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <GetPositionOfPlayer>b__0, addr 0x2259a2c, size 0x28, virtual false, abstract: false, final false
  inline bool _GetPositionOfPlayer_b__0(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* p);

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MultiplayerScoreProvider____c__DisplayClass18_0(__MultiplayerScoreProvider____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MultiplayerScoreProvider____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MultiplayerScoreProvider____c__DisplayClass18_0(__MultiplayerScoreProvider____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreProvider____c__DisplayClass18_0();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5251))
// CS Name: ::MultiplayerScoreProvider*
class CORDL_TYPE MultiplayerScoreProvider : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::GlobalNamespace::__MultiplayerScoreProvider____c__DisplayClass18_0;

  using __c = ::GlobalNamespace::__MultiplayerScoreProvider____c;

  using RankedPlayer = ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer;

  /// @brief Field _scoreSyncStateManager, offset 0x18, size 0x8
  __declspec(property(get = __get__scoreSyncStateManager, put = __set__scoreSyncStateManager))::GlobalNamespace::IScoreSyncStateManager* _scoreSyncStateManager;

  /// @brief Field <firstPlayer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__firstPlayer_k__BackingField, put = __set__firstPlayer_k__BackingField))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* _firstPlayer_k__BackingField;

  /// @brief Field firstPlayerDidChangeEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_firstPlayerDidChangeEvent,
                      put = __set_firstPlayerDidChangeEvent))::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* firstPlayerDidChangeEvent;

  /// @brief Field _sharedOffsetSyncTime, offset 0x30, size 0x8
  __declspec(property(get = __get__sharedOffsetSyncTime, put = __set__sharedOffsetSyncTime)) int64_t _sharedOffsetSyncTime;

  /// @brief Field _rankedPlayers, offset 0x38, size 0x8
  __declspec(property(get = __get__rankedPlayers, put = __set__rankedPlayers))::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* _rankedPlayers;

  /// @brief Field _players, offset 0x40, size 0x8
  __declspec(property(get = __get__players, put = __set__players))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* _players;

  __declspec(property(get = get_scoresAvailable)) bool scoresAvailable;

  __declspec(property(get = get_firstPlayer, put = set_firstPlayer))::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* firstPlayer;

  __declspec(property(get = get_rankedPlayers))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* rankedPlayers;

  constexpr ::GlobalNamespace::IScoreSyncStateManager*& __get__scoreSyncStateManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreSyncStateManager*> const& __get__scoreSyncStateManager() const;

  constexpr void __set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value);

  constexpr ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*& __get__firstPlayer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> const& __get__firstPlayer_k__BackingField() const;

  constexpr void __set__firstPlayer_k__BackingField(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  constexpr ::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __get_firstPlayerDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const& __get_firstPlayerDidChangeEvent() const;

  constexpr void __set_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  constexpr int64_t& __get__sharedOffsetSyncTime();

  constexpr int64_t const& __get__sharedOffsetSyncTime() const;

  constexpr void __set__sharedOffsetSyncTime(int64_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __get__rankedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const& __get__rankedPlayers() const;

  constexpr void __set__rankedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*& __get__players();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>*> const& __get__players() const;

  constexpr void __set__players(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  /// @brief Method get_scoresAvailable, addr 0x2257870, size 0x20, virtual false, abstract: false, final false
  inline bool get_scoresAvailable();

  /// @brief Method get_firstPlayer, addr 0x2258e98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* get_firstPlayer();

  /// @brief Method set_firstPlayer, addr 0x2258ea0, size 0x8, virtual false, abstract: false, final false
  inline void set_firstPlayer(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* value);

  /// @brief Method add_firstPlayerDidChangeEvent, addr 0x2250398, size 0xb0, virtual false, abstract: false, final false
  inline void add_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  /// @brief Method remove_firstPlayerDidChangeEvent, addr 0x224ff80, size 0xb0, virtual false, abstract: false, final false
  inline void remove_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* value);

  /// @brief Method get_rankedPlayers, addr 0x2258ea8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*>* get_rankedPlayers();

  /// @brief Method Update, addr 0x2258eb0, size 0x6d0, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method TryGetScore, addr 0x224c0d8, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetScore(::StringW userId, ByRef<::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer*> data);

  /// @brief Method GetPositionOfPlayer, addr 0x2257c54, size 0xe4, virtual false, abstract: false, final false
  inline int32_t GetPositionOfPlayer(::StringW userId);

  static inline ::GlobalNamespace::MultiplayerScoreProvider* New_ctor();

  /// @brief Method .ctor, addr 0x225974c, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreProvider(MultiplayerScoreProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreProvider(MultiplayerScoreProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreProvider();

public:
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
