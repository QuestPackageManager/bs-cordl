#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardUploadData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardUploadData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardUploadData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardUploadData::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW,
                                                                                                          ::StringW, ::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::LeaderboardUploadData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3752310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardUploadData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerName = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_playerId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerId = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___score;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_score(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___score = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_leaderboardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_leaderboardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leaderboardId;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_leaderboardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leaderboardId = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songName;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songName;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songName = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSubName;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSubName;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSubName = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_authorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authorName;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_authorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___authorName;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_authorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___authorName = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_bpm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_bpm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bpm;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_bpm(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bpm = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_difficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_infoHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___infoHash;
}
constexpr ::StringW const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_infoHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___infoHash;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_infoHash(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___infoHash = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_modifiers(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___modifiers = value;
}
inline void GlobalNamespace::LeaderboardUploadData::_ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId, ::StringW songName, ::StringW songSubName,
                                                          ::StringW authorName, ::StringW bpm, ::StringW difficulty, ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW>* modifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardUploadData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, playerId, score, leaderboardId, songName, songSubName, authorName, bpm, difficulty, infoHash, modifiers);
}
inline ::GlobalNamespace::LeaderboardUploadData* GlobalNamespace::LeaderboardUploadData::New_ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId,
                                                                                                  ::StringW songName, ::StringW songSubName, ::StringW authorName, ::StringW bpm, ::StringW difficulty,
                                                                                                  ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW>* modifiers) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::LeaderboardUploadData*>(playerName, playerId, score, leaderboardId, songName, songSubName, authorName, bpm, difficulty, infoHash, modifiers));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardUploadData::LeaderboardUploadData() {}
