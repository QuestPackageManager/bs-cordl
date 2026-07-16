#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/QueryRequest.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__QueryRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLQueryOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IQueryRequest_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::QueryRequest.add_performRequestCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::QueryRequest::*)(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*)>(
    &::OculusStudios::GraphQL::Client::QueryRequest::add_performRequestCalled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f20a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(),
                                                             { "add_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::QueryRequest.remove_performRequestCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::QueryRequest::*)(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*)>(
    &::OculusStudios::GraphQL::Client::QueryRequest::remove_performRequestCalled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f20b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(),
                                                             { "remove_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::QueryRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::QueryRequest::*)(::OculusStudios::GraphQL::Client::GraphQLQueryOperation*, bool)>(
    &::OculusStudios::GraphQL::Client::QueryRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f20be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::QueryRequest.PerformRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::QueryRequest::*)()>(&::OculusStudios::GraphQL::Client::QueryRequest::PerformRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f20c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::QueryRequest.SupportsClientMutationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::GraphQL::Client::QueryRequest::*)()>(&::OculusStudios::GraphQL::Client::QueryRequest::SupportsClientMutationId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f20c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::QueryRequest.GetCodeGenInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* (::OculusStudios::GraphQL::Client::QueryRequest::*)()>(
    &::OculusStudios::GraphQL::Client::QueryRequest::GetCodeGenInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f20c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*& OculusStudios::GraphQL::Client::QueryRequest::__cordl_internal_get_performRequestCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performRequestCalled;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* const& OculusStudios::GraphQL::Client::QueryRequest::__cordl_internal_get_performRequestCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performRequestCalled;
}
constexpr void OculusStudios::GraphQL::Client::QueryRequest::__cordl_internal_set_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___performRequestCalled = value;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLQueryOperation*& OculusStudios::GraphQL::Client::QueryRequest::__cordl_internal_get_query() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___query;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLQueryOperation* const& OculusStudios::GraphQL::Client::QueryRequest::__cordl_internal_get_query() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___query;
}
constexpr void OculusStudios::GraphQL::Client::QueryRequest::__cordl_internal_set_query(::OculusStudios::GraphQL::Client::GraphQLQueryOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___query = value;
}
inline void OculusStudios::GraphQL::Client::QueryRequest::add_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(),
                                                           { "add_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::QueryRequest::remove_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(),
                                                           { "remove_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::QueryRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::QueryRequest::_ctor(::OculusStudios::GraphQL::Client::GraphQLQueryOperation* query, bool forceRequestWhenOffline) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLQueryOperation*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, query, forceRequestWhenOffline);
}
inline void OculusStudios::GraphQL::Client::QueryRequest::PerformRequest() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OculusStudios::GraphQL::Client::QueryRequest::SupportsClientMutationId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* OculusStudios::GraphQL::Client::QueryRequest::GetCodeGenInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::QueryRequest*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::QueryRequest* OculusStudios::GraphQL::Client::QueryRequest::New_ctor(::OculusStudios::GraphQL::Client::GraphQLQueryOperation* query,
                                                                                                              bool forceRequestWhenOffline) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::QueryRequest*>(query, forceRequestWhenOffline));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IQueryRequest"
constexpr OculusStudios::GraphQL::Client::QueryRequest::operator ::OculusStudios::GraphQL::ClientInterface::IQueryRequest*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IQueryRequest"
constexpr ::OculusStudios::GraphQL::ClientInterface::IQueryRequest* OculusStudios::GraphQL::Client::QueryRequest::i___OculusStudios__GraphQL__ClientInterface__IQueryRequest() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IQueryRequest*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::QueryRequest::QueryRequest() {}
