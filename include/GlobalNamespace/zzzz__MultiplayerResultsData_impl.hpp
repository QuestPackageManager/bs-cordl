#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerResultsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgesProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_gameId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerResultsData::*)()>(&::GlobalNamespace::MultiplayerResultsData::get_gameId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37394ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_gameId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_localPlayerResultData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerPlayerResultsData* (::GlobalNamespace::MultiplayerResultsData::*)()>(
    &::GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37394b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_localPlayerResultData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_otherPlayersData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* (
    ::GlobalNamespace::MultiplayerResultsData::*)()>(&::GlobalNamespace::MultiplayerResultsData::get_otherPlayersData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37394bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_otherPlayersData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData.get_allPlayersSortedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* (
    ::GlobalNamespace::MultiplayerResultsData::*)()>(&::GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37394c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_allPlayersSortedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerResultsData::*)(
    ::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*,
    ::GlobalNamespace::MultiplayerBadgesProvider*, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*)>(&::GlobalNamespace::MultiplayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0x37394cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                    ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(),
                                                    ::i2c::type_of<::GlobalNamespace::MultiplayerBadgesProvider*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__gameId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameId;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__gameId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameId;
}
constexpr void GlobalNamespace::MultiplayerResultsData::__cordl_internal_set__gameId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameId = value;
}
constexpr ::GlobalNamespace::MultiplayerPlayerResultsData*& GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__localPlayerResultData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerResultData;
}
constexpr ::GlobalNamespace::MultiplayerPlayerResultsData* const& GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__localPlayerResultData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerResultData;
}
constexpr void GlobalNamespace::MultiplayerResultsData::__cordl_internal_set__localPlayerResultData(::GlobalNamespace::MultiplayerPlayerResultsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerResultData = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__otherPlayersData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherPlayersData;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* const&
GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__otherPlayersData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____otherPlayersData;
}
constexpr void
GlobalNamespace::MultiplayerResultsData::__cordl_internal_set__otherPlayersData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____otherPlayersData = value;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__allPlayersSortedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPlayersSortedData;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* const&
GlobalNamespace::MultiplayerResultsData::__cordl_internal_get__allPlayersSortedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allPlayersSortedData;
}
constexpr void
GlobalNamespace::MultiplayerResultsData::__cordl_internal_set__allPlayersSortedData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allPlayersSortedData = value;
}
inline ::StringW GlobalNamespace::MultiplayerResultsData::get_gameId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_gameId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerPlayerResultsData* GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_localPlayerResultData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerPlayerResultsData*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* GlobalNamespace::MultiplayerResultsData::get_otherPlayersData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_otherPlayersData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(), { "get_allPlayersSortedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsData::_ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData,
                                                           ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData,
                                                           ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider,
                                                           ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerResultsData*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                  ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(),
                                                  ::i2c::type_of<::GlobalNamespace::MultiplayerBadgesProvider*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager);
}
inline ::GlobalNamespace::MultiplayerResultsData*
GlobalNamespace::MultiplayerResultsData::New_ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData,
                                                  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData,
                                                  ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::MultiplayerResultsData*>(gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerResultsData::MultiplayerResultsData() {}
