#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLResponse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLResponse_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponse.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::GraphQL::Client::GraphQLResponse::*)(::System::Object*)>(&::OculusStudios::GraphQL::Client::GraphQLResponse::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f29ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponse.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::OculusStudios::GraphQL::Client::GraphQLResponse::*)()>(&::OculusStudios::GraphQL::Client::GraphQLResponse::GetHashCode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f29b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLResponse._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLResponse::*)()>(&::OculusStudios::GraphQL::Client::GraphQLResponse::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f24334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_set_data(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_error() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_error() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___error;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_set_error(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___error = value;
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_queryName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queryName;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_queryName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queryName;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_set_queryName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queryName = value;
}
constexpr ::StringW& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::StringW const& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_set_type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr int64_t& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr int64_t const& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_set_size(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
constexpr float_t& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_latency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___latency;
}
constexpr float_t const& OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_get_latency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___latency;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLResponse::__cordl_internal_set_latency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___latency = value;
}
inline bool OculusStudios::GraphQL::Client::GraphQLResponse::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t OculusStudios::GraphQL::Client::GraphQLResponse::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLResponse*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLResponse* OculusStudios::GraphQL::Client::GraphQLResponse::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLResponse*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLResponse::GraphQLResponse() {}
