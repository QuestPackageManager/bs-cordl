#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsIdModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsIdModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsIdModel.GetLocalLeaderboardID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(&::GlobalNamespace::LocalLeaderboardsIdModel::GetLocalLeaderboardID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3752338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsIdModel*>(),
                                                                                           { "GetLocalLeaderboardID", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalLeaderboardsIdModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalLeaderboardsIdModel::*)()>(&::GlobalNamespace::LocalLeaderboardsIdModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3752340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsIdModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::LocalLeaderboardsIdModel::GetLocalLeaderboardID(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsIdModel*>(),
                                                                                         { "GetLocalLeaderboardID", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, beatmapKey);
}
inline void GlobalNamespace::LocalLeaderboardsIdModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalLeaderboardsIdModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalLeaderboardsIdModel* GlobalNamespace::LocalLeaderboardsIdModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalLeaderboardsIdModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalLeaderboardsIdModel::LocalLeaderboardsIdModel() {}
