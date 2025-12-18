#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequestException.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLException_impl.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__GraphErrorCode_impl.hpp"
#include "OculusStudios/GraphQL/Client/zzzz__GraphQLRequestException_def.hpp"
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestException::*)()>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d707f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestException::*)(::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d707f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::GraphQL::Client::GraphQLRequestException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::GraphQL::Client::GraphQLRequestException::*)(int32_t, ::StringW)>(
    &::OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d70654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_graphErrorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphErrorCode;
}
constexpr ::OculusStudios::GraphQL::ClientInterface::GraphErrorCode const& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_graphErrorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphErrorCode;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_set_graphErrorCode(::OculusStudios::GraphQL::ClientInterface::GraphErrorCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___graphErrorCode = value;
}
constexpr int32_t& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_errorCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr int32_t const& OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_get_errorCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___errorCode;
}
constexpr void OculusStudios::GraphQL::Client::GraphQLRequestException::__cordl_internal_set_errorCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___errorCode = value;
}
inline void OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestException*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void OculusStudios::GraphQL::Client::GraphQLRequestException::_ctor(int32_t errorCode, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::GraphQL::Client::GraphQLRequestException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, errorCode, message);
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* OculusStudios::GraphQL::Client::GraphQLRequestException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLRequestException*>());
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* OculusStudios::GraphQL::Client::GraphQLRequestException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(message));
}
inline ::OculusStudios::GraphQL::Client::GraphQLRequestException* OculusStudios::GraphQL::Client::GraphQLRequestException::New_ctor(int32_t errorCode, ::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::GraphQL::Client::GraphQLRequestException*>(errorCode, message));
}
// Ctor Parameters []
constexpr ::OculusStudios::GraphQL::Client::GraphQLRequestException::GraphQLRequestException() {}
