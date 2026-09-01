#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerScoreProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__IScoreSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59e5938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_offsetSyncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_lastScoreTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_lastScoreTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59e5adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_lastScoreTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_score
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(&::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_score)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59d7070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_score", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_isConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isConnected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59e584c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isConnected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_isActiveOrFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isActiveOrFinished)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59db4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isActiveOrFinished", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_isFailed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(&::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isFailed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59db51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isFailed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_wasActiveAtLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_wasActiveAtLevelStart)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59e5908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_wasActiveAtLevelStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_isMe
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(&::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isMe)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59df49c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isMe", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_userId)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59db120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.get_userName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_userName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x59e5b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_userName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)(
    ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*, ::GlobalNamespace::MultiplayerScoreProvider*)>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e5930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*>(),
                                ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::*)(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::CompareTo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x59e5bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(),
                                                                                           { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*&
GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::__cordl_internal_get__multiplayerSyncState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSyncState;
}
constexpr ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* const&
GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::__cordl_internal_get__multiplayerSyncState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSyncState;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::__cordl_internal_set__multiplayerSyncState(
    ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSyncState = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::__cordl_internal_get__scoreSyncManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreSyncManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::__cordl_internal_get__scoreSyncManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreSyncManager;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::__cordl_internal_set__scoreSyncManager(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreSyncManager = value;
}
inline int64_t GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_offsetSyncTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_offsetSyncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_lastScoreTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_lastScoreTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_score() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_score", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isConnected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isActiveOrFinished() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isActiveOrFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isFailed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isFailed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_wasActiveAtLevelStart() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_wasActiveAtLevelStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_isMe() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_isMe", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::get_userName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(), { "get_userName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::_ctor(
    ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* multiplayerSyncState,
    ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*>(),
                              ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSyncState, scoreSyncManager);
}
inline int32_t GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::CompareTo(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(),
                                                                                         { "CompareTo", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::New_ctor(
    ::GlobalNamespace::MultiplayerSyncState_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>* multiplayerSyncState,
    ::GlobalNamespace::MultiplayerScoreProvider* scoreSyncManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(multiplayerSyncState, scoreSyncManager));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>"
constexpr GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::operator ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>"
constexpr ::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*
GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::i___System__IComparable_1___GlobalNamespace__MultiplayerScoreProvider_RankedPlayer__() noexcept {
  return static_cast<::System::IComparable_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer::MultiplayerScoreProvider_RankedPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider___c::*)()>(&::GlobalNamespace::MultiplayerScoreProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e5cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider___c._Update_b__16_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider___c::*)(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreProvider___c::_Update_b__16_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59e5cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c*>(),
                                                             { "<Update>b__16_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerScoreProvider___c::setStaticF___9(::GlobalNamespace::MultiplayerScoreProvider___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MultiplayerScoreProvider___c*, "<>9", ::GlobalNamespace::MultiplayerScoreProvider___c*>(
      std::forward<::GlobalNamespace::MultiplayerScoreProvider___c*>(value));
}
inline ::GlobalNamespace::MultiplayerScoreProvider___c* GlobalNamespace::MultiplayerScoreProvider___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MultiplayerScoreProvider___c*, "<>9", ::GlobalNamespace::MultiplayerScoreProvider___c*>();
}
inline void GlobalNamespace::MultiplayerScoreProvider___c::setStaticF___9__16_0(::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>*, "<>9__16_0", ::GlobalNamespace::MultiplayerScoreProvider___c*>(
      std::forward<::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>* GlobalNamespace::MultiplayerScoreProvider___c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*, bool>*, "<>9__16_0", ::GlobalNamespace::MultiplayerScoreProvider___c*>();
}
inline void GlobalNamespace::MultiplayerScoreProvider___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider___c::_Update_b__16_0(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* p) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c*>(),
                                                                                         { "<Update>b__16_0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::MultiplayerScoreProvider___c* GlobalNamespace::MultiplayerScoreProvider___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreProvider___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreProvider___c::MultiplayerScoreProvider___c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e59f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0._GetPositionOfPlayer_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::*)(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::_GetPositionOfPlayer_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59e5cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0*>(),
                                                             { "<GetPositionOfPlayer>b__0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userId = value;
}
inline void GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::_GetPositionOfPlayer_b__0(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0*>(),
                                                           { "<GetPositionOfPlayer>b__0", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0* GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreProvider___c__DisplayClass18_0::MultiplayerScoreProvider___c__DisplayClass18_0() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.get_scoresAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider::*)()>(&::GlobalNamespace::MultiplayerScoreProvider::get_scoresAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59e3960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "get_scoresAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.get_firstPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* (::GlobalNamespace::MultiplayerScoreProvider::*)()>(
    &::GlobalNamespace::MultiplayerScoreProvider::get_firstPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e50e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "get_firstPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.set_firstPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider::*)(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*)>(
    &::GlobalNamespace::MultiplayerScoreProvider::set_firstPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e50ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                                             { "set_firstPlayer", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.add_firstPlayerDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerScoreProvider::add_firstPlayerDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59db41c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                                { "add_firstPlayerDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.remove_firstPlayerDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider::*)(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerScoreProvider::remove_firstPlayerDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59dafb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                                { "remove_firstPlayerDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.get_rankedPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* (
    ::GlobalNamespace::MultiplayerScoreProvider::*)()>(&::GlobalNamespace::MultiplayerScoreProvider::get_rankedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59e50f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "get_rankedPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider::*)()>(&::GlobalNamespace::MultiplayerScoreProvider::Update)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0x59e50fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.TryGetScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerScoreProvider::*)(::StringW, ::by_ref<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>)>(
    &::GlobalNamespace::MultiplayerScoreProvider::TryGetScore)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59d7004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                                { "TryGetScore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider.GetPositionOfPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerScoreProvider::*)(::StringW)>(&::GlobalNamespace::MultiplayerScoreProvider::GetPositionOfPlayer)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59e3dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "GetPositionOfPlayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerScoreProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerScoreProvider::*)()>(&::GlobalNamespace::MultiplayerScoreProvider::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59e59f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IScoreSyncStateManager*& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__scoreSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreSyncStateManager;
}
constexpr ::GlobalNamespace::IScoreSyncStateManager* const& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__scoreSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreSyncStateManager;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_set__scoreSyncStateManager(::GlobalNamespace::IScoreSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreSyncStateManager = value;
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__firstPlayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayer_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* const& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__firstPlayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstPlayer_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_set__firstPlayer_k__BackingField(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstPlayer_k__BackingField = value;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get_firstPlayerDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstPlayerDidChangeEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get_firstPlayerDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___firstPlayerDidChangeEvent;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_set_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___firstPlayerDidChangeEvent = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__sharedOffsetSyncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedOffsetSyncTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__sharedOffsetSyncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedOffsetSyncTime;
}
constexpr void GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_set__sharedOffsetSyncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sharedOffsetSyncTime = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*& GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__rankedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const&
GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__rankedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rankedPlayers;
}
constexpr void
GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_set__rankedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rankedPlayers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*&
GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__players() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* const&
GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_get__players() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
constexpr void
GlobalNamespace::MultiplayerScoreProvider::__cordl_internal_set__players(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____players = value;
}
inline bool GlobalNamespace::MultiplayerScoreProvider::get_scoresAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "get_scoresAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* GlobalNamespace::MultiplayerScoreProvider::get_firstPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "get_firstPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreProvider::set_firstPlayer(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                                                                         { "set_firstPlayer", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerScoreProvider::add_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                              { "add_firstPlayerDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerScoreProvider::remove_firstPlayerDidChangeEvent(::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                              { "remove_firstPlayerDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>* GlobalNamespace::MultiplayerScoreProvider::get_rankedPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "get_rankedPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerScoreProvider::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerScoreProvider::TryGetScore(::StringW userId, ::by_ref<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*> data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(),
                                              { "TryGetScore", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, data);
}
inline int32_t GlobalNamespace::MultiplayerScoreProvider::GetPositionOfPlayer(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { "GetPositionOfPlayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MultiplayerScoreProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerScoreProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerScoreProvider* GlobalNamespace::MultiplayerScoreProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerScoreProvider*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerScoreProvider::MultiplayerScoreProvider() {}
