#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\Queries\BSLeaderboardHealth.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_impl.hpp"
#include "BeatSaber/Main/GraphQL/Queries/zzzz__BSLeaderboardHealth_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth.GetVariableNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetVariableNames)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x329f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth.GetPersistedQueryID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::*)()>(
    &::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetPersistedQueryID)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x329f3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::*)()>(&::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::StringW>* BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetVariableNames() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline uint64_t BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::GetPersistedQueryID() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth* BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Queries::BSLeaderboardHealth::BSLeaderboardHealth() {}
