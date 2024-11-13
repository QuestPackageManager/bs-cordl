#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardUploadData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardUploadData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardUploadData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardUploadData::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::LeaderboardUploadData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26cb4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardUploadData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___score)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leaderboardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songSubName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___authorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bpm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___difficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___infoHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_modifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::LeaderboardUploadData::__cordl_internal_get_modifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___modifiers;
}
constexpr void GlobalNamespace::LeaderboardUploadData::__cordl_internal_set_modifiers(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___modifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::LeaderboardUploadData* GlobalNamespace::LeaderboardUploadData::New_ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId,
                                                                                                  ::StringW songName, ::StringW songSubName, ::StringW authorName, ::StringW bpm, ::StringW difficulty,
                                                                                                  ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW>* modifiers) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::LeaderboardUploadData*>(playerName, playerId, score, leaderboardId, songName, songSubName, authorName, bpm, difficulty, infoHash, modifiers));
}
inline void GlobalNamespace::LeaderboardUploadData::_ctor(::StringW playerName, ::StringW playerId, ::StringW score, ::StringW leaderboardId, ::StringW songName, ::StringW songSubName,
                                                          ::StringW authorName, ::StringW bpm, ::StringW difficulty, ::StringW infoHash, ::System::Collections::Generic::List_1<::StringW>* modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardUploadData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerName, playerId, score, leaderboardId, songName, songSubName, authorName, bpm, difficulty, infoHash,
                                                          modifiers);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardUploadData::LeaderboardUploadData() {}
