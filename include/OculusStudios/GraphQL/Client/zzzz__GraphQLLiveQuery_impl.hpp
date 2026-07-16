#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLLiveQuery.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLLiveQuery_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLLiveQuery._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLLiveQuery::*)()>(&::OculusStudios::GraphQL::Client::GraphQLLiveQuery::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f29ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_get_Cancelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cancelled;
}
constexpr bool const& OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_get_Cancelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cancelled;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_set_Cancelled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Cancelled = value;
}
constexpr int32_t& OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_get_PollingInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PollingInterval;
}
constexpr int32_t const& OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_get_PollingInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PollingInterval;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_set_PollingInterval(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PollingInterval = value;
}
constexpr ::System::Threading::CancellationTokenSource*& OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_get_TokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_get_TokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TokenSource;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLLiveQuery::__cordl_internal_set_TokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TokenSource = value;
}
inline void OculusStudios::GraphQL::Client::GraphQLLiveQuery::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* OculusStudios::GraphQL::Client::GraphQLLiveQuery::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLLiveQuery::GraphQLLiveQuery() {}
