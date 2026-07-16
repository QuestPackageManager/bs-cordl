#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MutationRequest.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__Request_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__MutationRequest_def.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLMutationOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLOperation_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IMutationRequest_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MutationRequest.add_performRequestCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MutationRequest::*)(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*)>(
    &::OculusStudios::GraphQL::Client::MutationRequest::add_performRequestCalled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f20840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(),
                                                             { "add_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MutationRequest.remove_performRequestCalled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MutationRequest::*)(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*)>(
    &::OculusStudios::GraphQL::Client::MutationRequest::remove_performRequestCalled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f20900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(),
                                                             { "remove_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MutationRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MutationRequest::*)(::OculusStudios::GraphQL::Client::GraphQLMutationOperation*, bool)>(
    &::OculusStudios::GraphQL::Client::MutationRequest::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f209c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MutationRequest.PerformRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::GraphQL::Client::MutationRequest::*)()>(&::OculusStudios::GraphQL::Client::MutationRequest::PerformRequest)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f20a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::MutationRequest.GetCodeGenInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* (::OculusStudios::GraphQL::Client::MutationRequest::*)()>(
    &::OculusStudios::GraphQL::Client::MutationRequest::GetCodeGenInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f20a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(), { ::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(), 10 }));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*& OculusStudios::GraphQL::Client::MutationRequest::__cordl_internal_get_performRequestCalled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performRequestCalled;
}
constexpr ::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* const& OculusStudios::GraphQL::Client::MutationRequest::__cordl_internal_get_performRequestCalled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performRequestCalled;
}
constexpr void OculusStudios::GraphQL::Client::MutationRequest::__cordl_internal_set_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___performRequestCalled = value;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLMutationOperation*& OculusStudios::GraphQL::Client::MutationRequest::__cordl_internal_get_mutation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mutation;
}
constexpr ::OculusStudios::GraphQL::Client::GraphQLMutationOperation* const& OculusStudios::GraphQL::Client::MutationRequest::__cordl_internal_get_mutation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mutation;
}
constexpr void OculusStudios::GraphQL::Client::MutationRequest::__cordl_internal_set_mutation(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mutation = value;
}
inline void OculusStudios::GraphQL::Client::MutationRequest::add_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(),
                                                           { "add_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::MutationRequest::remove_performRequestCalled(::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(),
                                                           { "remove_performRequestCalled", {}, { ::i2c::type_of<::System::Action_1<::OculusStudios::GraphQL::Client::MutationRequest*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::GraphQL::Client::MutationRequest::_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation, bool forceRequestWhenOffline) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::OculusStudios::GraphQL::Client::GraphQLMutationOperation*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mutation, forceRequestWhenOffline);
}
inline void OculusStudios::GraphQL::Client::MutationRequest::PerformRequest() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation* OculusStudios::GraphQL::Client::MutationRequest::GetCodeGenInfo() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::GraphQL::Client::MutationRequest*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::GraphQL::ClientInterface::IGraphQLOperation*>(this, ___internal_method);
}
inline ::OculusStudios::GraphQL::Client::MutationRequest* OculusStudios::GraphQL::Client::MutationRequest::New_ctor(::OculusStudios::GraphQL::Client::GraphQLMutationOperation* mutation,
                                                                                                                    bool forceRequestWhenOffline) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::GraphQL::Client::MutationRequest*>(mutation, forceRequestWhenOffline));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IMutationRequest"
constexpr OculusStudios::GraphQL::Client::MutationRequest::operator ::OculusStudios::GraphQL::ClientInterface::IMutationRequest*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IMutationRequest"
constexpr ::OculusStudios::GraphQL::ClientInterface::IMutationRequest* OculusStudios::GraphQL::Client::MutationRequest::i___OculusStudios__GraphQL__ClientInterface__IMutationRequest() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IMutationRequest*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::MutationRequest::MutationRequest() {}
