#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLLiveQuery.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequest_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLLiveQuery_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLLiveQuery._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLLiveQuery::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLLiveQuery::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d16cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void OculusStudios::GraphQL::Client::GraphQLLiveQuery::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::GraphQLLiveQuery* OculusStudios::GraphQL::Client::GraphQLLiveQuery::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLLiveQuery*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLLiveQuery::GraphQLLiveQuery() {}
