#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__NetRes_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__WebExceptionStatus_def.hpp"
//  Writing Method size for method: ::System::Net::NetRes.GetWebStatusString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Net::WebExceptionStatus)>(&::System::Net::NetRes::GetWebStatusString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29a2c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetRes*>::get(), "GetWebStatusString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetRes.GetWebStatusString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&::System::Net::NetRes::GetWebStatusString)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ad11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetRes*>::get(), "GetWebStatusString", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetRes.GetWebStatusCodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::FtpStatusCode, ::StringW)>(&::System::Net::NetRes::GetWebStatusCodeString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x29ad178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetRes*>::get(), "GetWebStatusCodeString", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW System::Net::NetRes::GetWebStatusString(::StringW Res, ::System::Net::WebExceptionStatus Status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetRes*>::get(), "GetWebStatusString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, Res, Status);
}
inline ::StringW System::Net::NetRes::GetWebStatusString(::System::Net::WebExceptionStatus Status) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetRes*>::get(), "GetWebStatusString", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::WebExceptionStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, Status);
}
inline ::StringW System::Net::NetRes::GetWebStatusCodeString(::System::Net::FtpStatusCode statusCode, ::StringW statusDescription) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::NetRes*>::get(), "GetWebStatusCodeString", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, statusCode, statusDescription);
}
// Ctor Parameters []
constexpr ::System::Net::NetRes::NetRes() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
