#pragma once
// IWYU pragma private; include "GlobalNamespace/LeaderboardIdsModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardIdsSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LeaderboardIdsModel::*)(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*)>(
    &::GlobalNamespace::LeaderboardIdsModel::_ctor)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x3752388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsModel*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardIdsModel.TryGetPlatformLeaderboardId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LeaderboardIdsModel::*)(::by_ref<::GlobalNamespace::BeatmapKey>, ::by_ref<::StringW>)>(
    &::GlobalNamespace::LeaderboardIdsModel::TryGetPlatformLeaderboardId)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x375296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsModel*>(),
                                                { "TryGetPlatformLeaderboardId", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& GlobalNamespace::LeaderboardIdsModel::__cordl_internal_get__leaderboardIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& GlobalNamespace::LeaderboardIdsModel::__cordl_internal_get__leaderboardIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leaderboardIds;
}
constexpr void GlobalNamespace::LeaderboardIdsModel::__cordl_internal_set__leaderboardIds(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leaderboardIds = value;
}
inline void GlobalNamespace::LeaderboardIdsModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* idsMaps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsModel*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idsMaps);
}
inline bool GlobalNamespace::LeaderboardIdsModel::TryGetPlatformLeaderboardId(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::by_ref<::StringW> platformLeaderboardId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LeaderboardIdsModel*>(),
                                              { "TryGetPlatformLeaderboardId", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKey, platformLeaderboardId);
}
inline ::GlobalNamespace::LeaderboardIdsModel* GlobalNamespace::LeaderboardIdsModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::LeaderboardIdsSO>>* idsMaps) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LeaderboardIdsModel*>(idsMaps));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LeaderboardIdsModel::LeaderboardIdsModel() {}
