#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSUpsertLeaderboardEntryModel.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_impl.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSUpsertLeaderboardEntryModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSUpsertLeaderboardEntryModel_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel.set_ClientMutationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::set_ClientMutationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(),
                                                             { "set_ClientMutationId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel.get_ClientMutationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::get_ClientMutationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(), { "get_ClientMutationId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::__cordl_internal_get__ClientMutationId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientMutationId_k__BackingField;
}
constexpr ::StringW const&
BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::__cordl_internal_get__ClientMutationId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientMutationId_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::__cordl_internal_set__ClientMutationId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ClientMutationId_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::set_ClientMutationId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(),
                                                           { "set_ClientMutationId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::get_ClientMutationId() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(), { "get_ClientMutationId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*
BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel::
    BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel.set_XocBeatGamesBeatmapLeaderboardEntryUpsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::*)(
    ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*)>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::set_XocBeatGamesBeatmapLeaderboardEntryUpsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>(),
                                                { "set_XocBeatGamesBeatmapLeaderboardEntryUpsert",
                                                  {},
                                                  { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel.get_XocBeatGamesBeatmapLeaderboardEntryUpsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* (
    ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::*)()>(&::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::get_XocBeatGamesBeatmapLeaderboardEntryUpsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>(), { "get_XocBeatGamesBeatmapLeaderboardEntryUpsert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*&
BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::__cordl_internal_get__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* const&
BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::__cordl_internal_get__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::__cordl_internal_set__XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XocBeatGamesBeatmapLeaderboardEntryUpsert_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::set_XocBeatGamesBeatmapLeaderboardEntryUpsert(
    ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>(),
                                              { "set_XocBeatGamesBeatmapLeaderboardEntryUpsert",
                                                {},
                                                { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*
BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::get_XocBeatGamesBeatmapLeaderboardEntryUpsert() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>(), { "get_XocBeatGamesBeatmapLeaderboardEntryUpsert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel_XocBeatGamesBeatmapLeaderboardEntryUpsertModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel* BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertLeaderboardEntryModel::BSUpsertLeaderboardEntryModel() {}
