#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSLeaderboardHealthModel.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesHealthCheckStatusValue_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardHealthModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesHealthCheckStatusValue_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSLeaderboardHealthModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel.set_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::*)(
    ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>)>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::set_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(),
                                                             { "set_Status", {}, { ::i2c::type_of<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel.get_Status
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> (
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::get_Status)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(), { "get_Status", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>&
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::__cordl_internal_get__Status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
constexpr ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> const&
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::__cordl_internal_get__Status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::__cordl_internal_set__Status_k__BackingField(
    ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Status_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::set_Status(
    ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(),
                                                           { "set_Status", {}, { ::i2c::type_of<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::get_Status() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(), { "get_Status", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesHealthCheckStatusValue>>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel.set_XocBeatGamesLeaderboardHealth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::*)(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*)>(
        &::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::set_XocBeatGamesLeaderboardHealth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>(),
                            { "set_XocBeatGamesLeaderboardHealth", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel.get_XocBeatGamesLeaderboardHealth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* (
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::*)()>(&::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::get_XocBeatGamesLeaderboardHealth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>(), { "get_XocBeatGamesLeaderboardHealth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*&
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::__cordl_internal_get__XocBeatGamesLeaderboardHealth_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesLeaderboardHealth_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* const&
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::__cordl_internal_get__XocBeatGamesLeaderboardHealth_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesLeaderboardHealth_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::__cordl_internal_set__XocBeatGamesLeaderboardHealth_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XocBeatGamesLeaderboardHealth_k__BackingField = value;
}
inline void
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::set_XocBeatGamesLeaderboardHealth(::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>(),
                          { "set_XocBeatGamesLeaderboardHealth", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*
BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::get_XocBeatGamesLeaderboardHealth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>(), { "get_XocBeatGamesLeaderboardHealth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel_XocBeatGamesLeaderboardHealthModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel* BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSLeaderboardHealthModel::BSLeaderboardHealthModel() {}
