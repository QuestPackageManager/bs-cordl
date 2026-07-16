#pragma once
// IWYU pragma private; include "System/Net/NetRes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NetRes_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetRes.GetWebStatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::System::Net::WebExceptionStatus)>(&::System::Net::NetRes::GetWebStatusString)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6408b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::NetRes*>(), { "GetWebStatusString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetRes.GetWebStatusString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&::System::Net::NetRes::GetWebStatusString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x641231c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetRes*>(), { "GetWebStatusString", {}, { ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetRes.GetWebStatusCodeString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Net::FtpStatusCode, ::StringW)>(&::System::Net::NetRes::GetWebStatusCodeString)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x6412374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::NetRes*>(), { "GetWebStatusCodeString", {}, { ::i2c::type_of<::System::Net::FtpStatusCode>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline ::StringW System::Net::NetRes::GetWebStatusString(::StringW Res, ::System::Net::WebExceptionStatus Status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetRes*>(), { "GetWebStatusString", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, Res, Status);
}
inline ::StringW System::Net::NetRes::GetWebStatusString(::System::Net::WebExceptionStatus Status) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetRes*>(), { "GetWebStatusString", {}, { ::i2c::type_of<::System::Net::WebExceptionStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, Status);
}
inline ::StringW System::Net::NetRes::GetWebStatusCodeString(::System::Net::FtpStatusCode statusCode, ::StringW statusDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::NetRes*>(), { "GetWebStatusCodeString", {}, { ::i2c::type_of<::System::Net::FtpStatusCode>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, statusCode, statusDescription);
}
// Ctor Parameters []
constexpr ::System::Net::NetRes::NetRes() {}
