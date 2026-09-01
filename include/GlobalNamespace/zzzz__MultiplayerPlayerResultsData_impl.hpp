#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerPlayerResultsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerResultsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerPlayerResultsData::*)(
    ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(&::GlobalNamespace::MultiplayerPlayerResultsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x373d878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPlayerResultsData*>(),
                            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerPlayerResultsData.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerPlayerResultsData::*)(::System::Object*)>(&::GlobalNamespace::MultiplayerPlayerResultsData::CompareTo)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x373d880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPlayerResultsData*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedPlayer;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_set_connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___connectedPlayer = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults*& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_multiplayerLevelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerLevelCompletionResults;
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults* const& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_multiplayerLevelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerLevelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_set_multiplayerLevelCompletionResults(::GlobalNamespace::MultiplayerLevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplayerLevelCompletionResults = value;
}
constexpr ::GlobalNamespace::MultiplayerBadgeAwardData*& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_badge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badge;
}
constexpr ::GlobalNamespace::MultiplayerBadgeAwardData* const& GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_get_badge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badge;
}
constexpr void GlobalNamespace::MultiplayerPlayerResultsData::__cordl_internal_set_badge(::GlobalNamespace::MultiplayerBadgeAwardData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badge = value;
}
inline void GlobalNamespace::MultiplayerPlayerResultsData::_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                                 ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPlayerResultsData*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayer, multiplayerLevelCompletionResults);
}
inline int32_t GlobalNamespace::MultiplayerPlayerResultsData::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerPlayerResultsData*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline ::GlobalNamespace::MultiplayerPlayerResultsData*
GlobalNamespace::MultiplayerPlayerResultsData::New_ctor(::GlobalNamespace::IBeatSaberConnectedPlayer* connectedPlayer,
                                                        ::GlobalNamespace::MultiplayerLevelCompletionResults* multiplayerLevelCompletionResults) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerPlayerResultsData*>(connectedPlayer, multiplayerLevelCompletionResults));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::MultiplayerPlayerResultsData::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GlobalNamespace::MultiplayerPlayerResultsData::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerPlayerResultsData::MultiplayerPlayerResultsData() {}
