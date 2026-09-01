#pragma once
// IWYU pragma private; include "GlobalNamespace\ILeaderboardIdData.hpp"
#include "GlobalNamespace/zzzz__ILeaderboardIdData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ILeaderboardIdData.get_difficultyBeatmapId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ILeaderboardIdData::*)()>(&::GlobalNamespace::ILeaderboardIdData::get_difficultyBeatmapId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ILeaderboardIdData*>(), { ::i2c::class_of<::GlobalNamespace::ILeaderboardIdData*>(), 0 }));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::ILeaderboardIdData::get_difficultyBeatmapId() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ILeaderboardIdData*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
