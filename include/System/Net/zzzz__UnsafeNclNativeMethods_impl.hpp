#pragma once
// IWYU pragma private; include "System/Net/UnsafeNclNativeMethods.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__UnsafeNclNativeMethods_def.hpp"
#include "System/Net/zzzz__UnsafeNclNativeMethods_def.hpp"
#include "System/Security/zzzz__SecureString_def.hpp"
//  Writing Method size for method: ::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6420eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID::setStaticF_m_Strings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_Strings", ::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID::getStaticF_m_Strings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_Strings", ::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID*>();
}
inline ::StringW System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID::ToString(int32_t position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID*>(), { "ToString", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, position);
}
// Ctor Parameters []
constexpr ::System::Net::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID::HttpApi_UnsafeNclNativeMethods_HTTP_REQUEST_HEADER_ID() {}
inline void System::Net::UnsafeNclNativeMethods_HttpApi::setStaticF_m_Strings(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "m_Strings", ::System::Net::UnsafeNclNativeMethods_HttpApi*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Net::UnsafeNclNativeMethods_HttpApi::getStaticF_m_Strings() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "m_Strings", ::System::Net::UnsafeNclNativeMethods_HttpApi*>();
}
// Ctor Parameters []
constexpr ::System::Net::UnsafeNclNativeMethods_HttpApi::UnsafeNclNativeMethods_HttpApi() {}
//  Writing Method size for method: ::System::Net::UnsafeNclNativeMethods_SecureStringHelper.CreateString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Security::SecureString*)>(&::System::Net::UnsafeNclNativeMethods_SecureStringHelper::CreateString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x642161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::UnsafeNclNativeMethods_SecureStringHelper*>(),
                                                                                           { "CreateString", {}, { ::i2c::type_of<::System::Security::SecureString*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::UnsafeNclNativeMethods_SecureStringHelper.CreateSecureString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::SecureString* (*)(::StringW)>(&::System::Net::UnsafeNclNativeMethods_SecureStringHelper::CreateSecureString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6421750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::UnsafeNclNativeMethods_SecureStringHelper*>(), { "CreateSecureString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Net::UnsafeNclNativeMethods_SecureStringHelper::CreateString(::System::Security::SecureString* secureString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::UnsafeNclNativeMethods_SecureStringHelper*>(), { "CreateString", {}, { ::i2c::type_of<::System::Security::SecureString*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, secureString);
}
inline ::System::Security::SecureString* System::Net::UnsafeNclNativeMethods_SecureStringHelper::CreateSecureString(::StringW plainString) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::UnsafeNclNativeMethods_SecureStringHelper*>(), { "CreateSecureString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::SecureString*>(nullptr, ___internal_method, plainString);
}
// Ctor Parameters []
constexpr ::System::Net::UnsafeNclNativeMethods_SecureStringHelper::UnsafeNclNativeMethods_SecureStringHelper() {}
// Ctor Parameters []
constexpr ::System::Net::UnsafeNclNativeMethods::UnsafeNclNativeMethods() {}
