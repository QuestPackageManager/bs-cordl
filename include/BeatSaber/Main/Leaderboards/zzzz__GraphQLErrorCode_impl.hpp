#pragma once
// IWYU pragma private; include "BeatSaber\Main\Leaderboards\GraphQLErrorCode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/Leaderboards/zzzz__GraphQLErrorCode_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::GraphQLErrorCode.IsBeatGamesErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x32a58c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>(), { "IsBeatGamesErrorCode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::Leaderboards::GraphQLErrorCode.IsBeatGamesErrorCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32a4214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>(), { "IsBeatGamesErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode(::StringW code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>(), { "IsBeatGamesErrorCode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, code);
}
inline bool BeatSaber::Main::Leaderboards::GraphQLErrorCode::IsBeatGamesErrorCode(int32_t code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::Leaderboards::GraphQLErrorCode*>(), { "IsBeatGamesErrorCode", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, code);
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::Leaderboards::GraphQLErrorCode::GraphQLErrorCode() {}
