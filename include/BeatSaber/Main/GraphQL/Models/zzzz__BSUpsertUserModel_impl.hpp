#pragma once
// IWYU pragma private; include "BeatSaber/Main/GraphQL/Models/BSUpsertUserModel.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLModel_impl.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSUpsertUserModel_def.hpp"
#include "BeatSaber/Main/GraphQL/Models/zzzz__BSUpsertUserModel_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel.set_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::set_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(),
                                                             { "set_Id", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel.get_Id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(), { "get_Id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::__cordl_internal_get__Id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr ::StringW const& BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::__cordl_internal_get__Id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Id_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::__cordl_internal_set__Id_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Id_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::set_Id(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(),
                                                           { "set_Id", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::get_Id() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(), { "get_Id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*
BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel.set_BeatGamesUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::*)(
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*)>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::set_BeatGamesUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(),
                                         { "set_BeatGamesUser", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel.get_BeatGamesUser
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* (
    ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::*)()>(&::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::get_BeatGamesUser)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(), { "get_BeatGamesUser", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*&
BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::__cordl_internal_get__BeatGamesUser_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BeatGamesUser_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* const&
BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::__cordl_internal_get__BeatGamesUser_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BeatGamesUser_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::__cordl_internal_set__BeatGamesUser_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BeatGamesUser_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::set_BeatGamesUser(
    ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(),
                                       { "set_BeatGamesUser", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*
BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::get_BeatGamesUser() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(), { "get_BeatGamesUser", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::XocBeatGamesUserUpsertModel_BSUpsertUserModel_BeatGamesUserModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel::BSUpsertUserModel_XocBeatGamesUserUpsertModel() {}
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel.set_XocBeatGamesUserUpsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::*)(
    ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*)>(&::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::set_XocBeatGamesUserUpsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>(),
                                                { "set_XocBeatGamesUserUpsert", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel.get_XocBeatGamesUserUpsert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* (::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::*)()>(
    &::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::get_XocBeatGamesUserUpsert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329f8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>(), { "get_XocBeatGamesUserUpsert", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::*)()>(&::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x329f8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*&
BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::__cordl_internal_get__XocBeatGamesUserUpsert_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesUserUpsert_k__BackingField;
}
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* const&
BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::__cordl_internal_get__XocBeatGamesUserUpsert_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XocBeatGamesUserUpsert_k__BackingField;
}
constexpr void BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::__cordl_internal_set__XocBeatGamesUserUpsert_k__BackingField(
    ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XocBeatGamesUserUpsert_k__BackingField = value;
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::set_XocBeatGamesUserUpsert(::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>(),
                                              { "set_XocBeatGamesUserUpsert", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel* BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::get_XocBeatGamesUserUpsert() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>(), { "get_XocBeatGamesUserUpsert", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel_XocBeatGamesUserUpsertModel*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel* BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::Models::BSUpsertUserModel::BSUpsertUserModel() {}
