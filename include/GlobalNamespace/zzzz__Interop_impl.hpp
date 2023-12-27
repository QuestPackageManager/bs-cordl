#pragma once
#include "GlobalNamespace/zzzz__Interop_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Interop__Error::__Interop__Error(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Error::__Interop__Error() {}
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::SUCCESS{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_E2BIG{ static_cast<int32_t>(0x10001) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EACCES{ static_cast<int32_t>(0x10002) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EADDRINUSE{ static_cast<int32_t>(0x10003) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EADDRNOTAVAIL{ static_cast<int32_t>(0x10004) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EAFNOSUPPORT{ static_cast<int32_t>(0x10005) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EAGAIN{ static_cast<int32_t>(0x10006) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EALREADY{ static_cast<int32_t>(0x10007) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EBADF{ static_cast<int32_t>(0x10008) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EBADMSG{ static_cast<int32_t>(0x10009) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EBUSY{ static_cast<int32_t>(0x1000a) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ECANCELED{ static_cast<int32_t>(0x1000b) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ECHILD{ static_cast<int32_t>(0x1000c) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ECONNABORTED{ static_cast<int32_t>(0x1000d) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ECONNREFUSED{ static_cast<int32_t>(0x1000e) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ECONNRESET{ static_cast<int32_t>(0x1000f) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EDEADLK{ static_cast<int32_t>(0x10010) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EDESTADDRREQ{ static_cast<int32_t>(0x10011) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EDOM{ static_cast<int32_t>(0x10012) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EDQUOT{ static_cast<int32_t>(0x10013) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EEXIST{ static_cast<int32_t>(0x10014) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EFAULT{ static_cast<int32_t>(0x10015) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EFBIG{ static_cast<int32_t>(0x10016) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EHOSTUNREACH{ static_cast<int32_t>(0x10017) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EIDRM{ static_cast<int32_t>(0x10018) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EILSEQ{ static_cast<int32_t>(0x10019) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EINPROGRESS{ static_cast<int32_t>(0x1001a) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EINTR{ static_cast<int32_t>(0x1001b) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EINVAL{ static_cast<int32_t>(0x1001c) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EIO{ static_cast<int32_t>(0x1001d) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EISCONN{ static_cast<int32_t>(0x1001e) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EISDIR{ static_cast<int32_t>(0x1001f) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ELOOP{ static_cast<int32_t>(0x10020) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EMFILE{ static_cast<int32_t>(0x10021) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EMLINK{ static_cast<int32_t>(0x10022) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EMSGSIZE{ static_cast<int32_t>(0x10023) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EMULTIHOP{ static_cast<int32_t>(0x10024) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENAMETOOLONG{ static_cast<int32_t>(0x10025) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENETDOWN{ static_cast<int32_t>(0x10026) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENETRESET{ static_cast<int32_t>(0x10027) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENETUNREACH{ static_cast<int32_t>(0x10028) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENFILE{ static_cast<int32_t>(0x10029) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOBUFS{ static_cast<int32_t>(0x1002a) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENODEV{ static_cast<int32_t>(0x1002c) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOENT{ static_cast<int32_t>(0x1002d) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOEXEC{ static_cast<int32_t>(0x1002e) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOLCK{ static_cast<int32_t>(0x1002f) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOLINK{ static_cast<int32_t>(0x10030) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOMEM{ static_cast<int32_t>(0x10031) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOMSG{ static_cast<int32_t>(0x10032) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOPROTOOPT{ static_cast<int32_t>(0x10033) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOSPC{ static_cast<int32_t>(0x10034) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOSYS{ static_cast<int32_t>(0x10037) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOTCONN{ static_cast<int32_t>(0x10038) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOTDIR{ static_cast<int32_t>(0x10039) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOTEMPTY{ static_cast<int32_t>(0x1003a) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOTSOCK{ static_cast<int32_t>(0x1003c) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOTSUP{ static_cast<int32_t>(0x1003d) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENOTTY{ static_cast<int32_t>(0x1003e) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENXIO{ static_cast<int32_t>(0x1003f) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EOVERFLOW{ static_cast<int32_t>(0x10040) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EPERM{ static_cast<int32_t>(0x10042) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EPIPE{ static_cast<int32_t>(0x10043) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EPROTO{ static_cast<int32_t>(0x10044) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EPROTONOSUPPORT{ static_cast<int32_t>(0x10045) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EPROTOTYPE{ static_cast<int32_t>(0x10046) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ERANGE{ static_cast<int32_t>(0x10047) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EROFS{ static_cast<int32_t>(0x10048) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ESPIPE{ static_cast<int32_t>(0x10049) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ESRCH{ static_cast<int32_t>(0x1004a) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ESTALE{ static_cast<int32_t>(0x1004b) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ETIMEDOUT{ static_cast<int32_t>(0x1004d) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ETXTBSY{ static_cast<int32_t>(0x1004e) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EXDEV{ static_cast<int32_t>(0x1004f) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ESOCKTNOSUPPORT{ static_cast<int32_t>(0x1005e) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EPFNOSUPPORT{ static_cast<int32_t>(0x10060) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ESHUTDOWN{ static_cast<int32_t>(0x1006c) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EHOSTDOWN{ static_cast<int32_t>(0x10070) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_ENODATA{ static_cast<int32_t>(0x10071) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EOPNOTSUPP{ static_cast<int32_t>(0x1003d) };
constexpr ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Error::_cordl_EWOULDBLOCK{ static_cast<int32_t>(0x10006) };
//  Writing Method size for method: ::GlobalNamespace::__Interop__ErrorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Interop__ErrorInfo::*)(int32_t)>(&::GlobalNamespace::__Interop__ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x241100c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__ErrorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__Interop__ErrorInfo::*)(::GlobalNamespace::__Interop__Error)>(
    &::GlobalNamespace::__Interop__ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2411078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Error>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__ErrorInfo.get_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Interop__Error (::GlobalNamespace::__Interop__ErrorInfo::*)()>(
    &::GlobalNamespace::__Interop__ErrorInfo::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2411084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), "get_Error",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__ErrorInfo.get_RawErrno
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__Interop__ErrorInfo::*)()>(&::GlobalNamespace::__Interop__ErrorInfo::get_RawErrno)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2410ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), "get_RawErrno",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__ErrorInfo.GetErrorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__Interop__ErrorInfo::*)()>(
    &::GlobalNamespace::__Interop__ErrorInfo::GetErrorMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2410f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(),
                                                                               "GetErrorMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__ErrorInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__Interop__ErrorInfo::*)()>(&::GlobalNamespace::__Interop__ErrorInfo::ToString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2411204;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), 3));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Interop__ErrorInfo::_ctor(int32_t _cordl_errno) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_errno);
}
inline void GlobalNamespace::__Interop__ErrorInfo::_ctor(::GlobalNamespace::__Interop__Error error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Error>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__ErrorInfo::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), "get_Error",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Interop__Error, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__Interop__ErrorInfo::get_RawErrno() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), "get_RawErrno",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__Interop__ErrorInfo::GetErrorMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), "GetErrorMessage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__Interop__ErrorInfo::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__ErrorInfo>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_error", ty: "::GlobalNamespace::__Interop__Error", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__Interop__ErrorInfo::__Interop__ErrorInfo(::GlobalNamespace::__Interop__Error _error, int32_t _rawErrno) noexcept {
  this->_error = _error;
  this->_rawErrno = _rawErrno;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__ErrorInfo::__Interop__ErrorInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Interop__Sys__NodeType::__Interop__Sys__NodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Sys__NodeType::__Interop__Sys__NodeType() {}
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_UNKNOWN{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_FIFO{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_CHR{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_DIR{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_BLK{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_REG{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_LNK{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_SOCK{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::__Interop__Sys__NodeType GlobalNamespace::__Interop__Sys__NodeType::DT_WHT{ static_cast<int32_t>(0xe) };
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys__DirectoryEntry.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ReadOnlySpan_1<char16_t> (::GlobalNamespace::__Interop__Sys__DirectoryEntry::*)(::System::Span_1<char16_t>)>(&::GlobalNamespace::__Interop__Sys__DirectoryEntry::GetName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2411c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys__DirectoryEntry>::get(), "GetName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<char16_t> GlobalNamespace::__Interop__Sys__DirectoryEntry::GetName(::System::Span_1<char16_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys__DirectoryEntry>::get(), "GetName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "Name", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "InodeType", ty: "::GlobalNamespace::__Interop__Sys__NodeType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry::__Interop__Sys__DirectoryEntry(::cordl_internals::Ptr<uint8_t> Name, int32_t NameLength,
                                                                                            ::GlobalNamespace::__Interop__Sys__NodeType InodeType) noexcept {
  this->Name = Name;
  this->NameLength = NameLength;
  this->InodeType = InodeType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Sys__DirectoryEntry::__Interop__Sys__DirectoryEntry() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Interop__Sys__FileStatusFlags::__Interop__Sys__FileStatusFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Sys__FileStatusFlags::__Interop__Sys__FileStatusFlags() {}
constexpr ::GlobalNamespace::__Interop__Sys__FileStatusFlags GlobalNamespace::__Interop__Sys__FileStatusFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__Interop__Sys__FileStatusFlags GlobalNamespace::__Interop__Sys__FileStatusFlags::HasBirthTime{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::__Interop__Sys__FileStatusFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "Mode", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Size", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ATimeNsec", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "CTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "BirthTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Dev", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Ino", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__Interop__Sys__FileStatus::__Interop__Sys__FileStatus(::GlobalNamespace::__Interop__Sys__FileStatusFlags Flags, int32_t Mode, uint32_t Uid, uint32_t Gid, int64_t Size,
                                                                                    int64_t ATime, int64_t ATimeNsec, int64_t MTime, int64_t MTimeNsec, int64_t CTime, int64_t CTimeNsec,
                                                                                    int64_t BirthTime, int64_t BirthTimeNsec, int64_t Dev, int64_t Ino, uint32_t UserFlags) noexcept {
  this->Flags = Flags;
  this->Mode = Mode;
  this->Uid = Uid;
  this->Gid = Gid;
  this->Size = Size;
  this->ATime = ATime;
  this->ATimeNsec = ATimeNsec;
  this->MTime = MTime;
  this->MTimeNsec = MTimeNsec;
  this->CTime = CTime;
  this->CTimeNsec = CTimeNsec;
  this->BirthTime = BirthTime;
  this->BirthTimeNsec = BirthTimeNsec;
  this->Dev = Dev;
  this->Ino = Ino;
  this->UserFlags = UserFlags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Sys__FileStatus::__Interop__Sys__FileStatus() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__Interop__Sys__Permissions::__Interop__Sys__Permissions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Sys__Permissions::__Interop__Sys__Permissions() {}
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::Mask{ static_cast<int32_t>(0x1ff) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IRWXU{ static_cast<int32_t>(0x1c0) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IRUSR{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IWUSR{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IXUSR{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IRWXG{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IRGRP{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IWGRP{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IXGRP{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IRWXO{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IROTH{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IWOTH{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__Interop__Sys__Permissions GlobalNamespace::__Interop__Sys__Permissions::S_IXOTH{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.GetLastErrorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Interop__ErrorInfo (*)()>(&::GlobalNamespace::__Interop__Sys::GetLastErrorInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2410d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetLastErrorInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.StrError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::__Interop__Sys::StrError)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2411108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "StrError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.ConvertErrorPlatformToPal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__Interop__Error (*)(int32_t)>(&::GlobalNamespace::__Interop__Sys::ConvertErrorPlatformToPal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ConvertErrorPlatformToPal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.ConvertErrorPalToPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::__Interop__Error)>(&::GlobalNamespace::__Interop__Sys::ConvertErrorPalToPlatform)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x241108c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ConvertErrorPalToPlatform", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Error>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.StrErrorR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint8_t> (*)(int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::GlobalNamespace::__Interop__Sys::StrErrorR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24112d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "StrErrorR", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.GetNonCryptographicallySecureRandomBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::GlobalNamespace::__Interop__Sys::GetNonCryptographicallySecureRandomBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetNonCryptographicallySecureRandomBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.OpenDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::StringW)>(&::GlobalNamespace::__Interop__Sys::OpenDir)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24112dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "OpenDir", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.GetReadDirRBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::__Interop__Sys::GetReadDirRBufferSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(),
                                                                               "GetReadDirRBufferSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.ReadDirR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(void*, ::cordl_internals::Ptr<uint8_t>, int32_t, ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>)>(&::GlobalNamespace::__Interop__Sys::ReadDirR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ReadDirR", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.CloseDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&::GlobalNamespace::__Interop__Sys::CloseDir)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2411318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "CloseDir", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.ReadLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::GlobalNamespace::__Interop__Sys::ReadLink)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2411334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ReadLink", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.ReadLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::__Interop__Sys::ReadLink)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2411380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ReadLink", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Stat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>)>(
    &::GlobalNamespace::__Interop__Sys::Stat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2411598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Stat", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.LStat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>)>(
    &::GlobalNamespace::__Interop__Sys::LStat)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24115d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "LStat", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Symlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::__Interop__Sys::Symlink)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2411610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Symlink", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.CopyFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::Microsoft::Win32::SafeHandles::SafeFileHandle*)>(
    &::GlobalNamespace::__Interop__Sys::CopyFile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x24116c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "CopyFile", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.GetEGid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::GlobalNamespace::__Interop__Sys::GetEGid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x241177c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetEGid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.GetEUid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::GlobalNamespace::__Interop__Sys::GetEUid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetEUid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.LChflagsCanSetHiddenFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::__Interop__Sys::LChflagsCanSetHiddenFlag)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(),
                                                                               "LChflagsCanSetHiddenFlag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Link
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::__Interop__Sys::Link)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2411788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Link", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.MkDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&::GlobalNamespace::__Interop__Sys::MkDir)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24117dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "MkDir", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Rename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::__Interop__Sys::Rename)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2411818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Rename", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.RmDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::__Interop__Sys::RmDir)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x241186c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "RmDir", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Stat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<uint8_t>, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>)>(
    &::GlobalNamespace::__Interop__Sys::Stat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24118a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Stat", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Stat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>)>(
    &::GlobalNamespace::__Interop__Sys::Stat)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x24118bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Stat", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.LStat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(ByRef<uint8_t>, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>)>(
    &::GlobalNamespace::__Interop__Sys::LStat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2411a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "LStat", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.LStat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>)>(
    &::GlobalNamespace::__Interop__Sys::LStat)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2411a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "LStat", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.Unlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::__Interop__Sys::Unlink)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2411b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Unlink", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__Interop__Sys.DoubleToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(double_t, ::cordl_internals::Ptr<uint8_t>, ::cordl_internals::Ptr<uint8_t>, int32_t)>(
    &::GlobalNamespace::__Interop__Sys::DoubleToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2411bbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "DoubleToString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__Interop__Sys::setStaticF_CanSetHiddenFlag(bool value) {
  ::cordl_internals::setStaticField<bool, "CanSetHiddenFlag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::__Interop__Sys::getStaticF_CanSetHiddenFlag() {
  return ::cordl_internals::getStaticField<bool, "CanSetHiddenFlag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get>();
}
inline ::GlobalNamespace::__Interop__ErrorInfo GlobalNamespace::__Interop__Sys::GetLastErrorInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetLastErrorInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Interop__ErrorInfo, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::__Interop__Sys::StrError(int32_t platformErrno) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "StrError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platformErrno);
}
inline ::GlobalNamespace::__Interop__Error GlobalNamespace::__Interop__Sys::ConvertErrorPlatformToPal(int32_t platformErrno) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ConvertErrorPlatformToPal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__Interop__Error, false>(nullptr, ___internal_method, platformErrno);
}
inline int32_t GlobalNamespace::__Interop__Sys::ConvertErrorPalToPlatform(::GlobalNamespace::__Interop__Error error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ConvertErrorPalToPlatform", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__Error>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, error);
}
inline ::cordl_internals::Ptr<uint8_t> GlobalNamespace::__Interop__Sys::StrErrorR(int32_t platformErrno, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "StrErrorR", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint8_t>, false>(nullptr, ___internal_method, platformErrno, buffer, bufferSize);
}
inline void GlobalNamespace::__Interop__Sys::GetNonCryptographicallySecureRandomBytes(::cordl_internals::Ptr<uint8_t> buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetNonCryptographicallySecureRandomBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, length);
}
inline void* GlobalNamespace::__Interop__Sys::OpenDir(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "OpenDir", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::__Interop__Sys::GetReadDirRBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetReadDirRBufferSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::__Interop__Sys::ReadDirR(void* dir, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferSize, ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry> outputEntry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ReadDirR", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__DirectoryEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dir, buffer, bufferSize, outputEntry);
}
inline int32_t GlobalNamespace::__Interop__Sys::CloseDir(void* dir) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "CloseDir", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dir);
}
inline int32_t GlobalNamespace::__Interop__Sys::ReadLink(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ReadLink", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, buffer, bufferSize);
}
inline ::StringW GlobalNamespace::__Interop__Sys::ReadLink(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "ReadLink", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::__Interop__Sys::Stat(::StringW path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Stat", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::__Interop__Sys::LStat(::StringW path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "LStat", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::__Interop__Sys::Symlink(::StringW target, ::StringW linkPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Symlink", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, target, linkPath);
}
inline int32_t GlobalNamespace::__Interop__Sys::CopyFile(::Microsoft::Win32::SafeHandles::SafeFileHandle* source, ::Microsoft::Win32::SafeHandles::SafeFileHandle* destination) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "CopyFile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, destination);
}
inline uint32_t GlobalNamespace::__Interop__Sys::GetEGid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetEGid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline uint32_t GlobalNamespace::__Interop__Sys::GetEUid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "GetEUid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::__Interop__Sys::LChflagsCanSetHiddenFlag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(),
                                                                             "LChflagsCanSetHiddenFlag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::__Interop__Sys::Link(::StringW source, ::StringW link) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Link", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, link);
}
inline int32_t GlobalNamespace::__Interop__Sys::MkDir(::StringW path, int32_t mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "MkDir", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, mode);
}
inline int32_t GlobalNamespace::__Interop__Sys::Rename(::StringW oldPath, ::StringW newPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Rename", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oldPath, newPath);
}
inline int32_t GlobalNamespace::__Interop__Sys::RmDir(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "RmDir", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::__Interop__Sys::Stat(ByRef<uint8_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Stat", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::__Interop__Sys::Stat(::System::ReadOnlySpan_1<char16_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Stat", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::__Interop__Sys::LStat(ByRef<uint8_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "LStat", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint8_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::__Interop__Sys::LStat(::System::ReadOnlySpan_1<char16_t> path, ByRef<::GlobalNamespace::__Interop__Sys__FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "LStat", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__Interop__Sys__FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::__Interop__Sys::Unlink(::StringW pathname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "Unlink", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pathname);
}
inline int32_t GlobalNamespace::__Interop__Sys::DoubleToString(double_t value, ::cordl_internals::Ptr<uint8_t> format, ::cordl_internals::Ptr<uint8_t> buffer, int32_t bufferLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Interop__Sys*>::get(), "DoubleToString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, format, buffer, bufferLength);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Interop__Sys::__Interop__Sys() {}
//  Writing Method size for method: ::GlobalNamespace::Interop.ThrowExceptionForIoErrno
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::__Interop__ErrorInfo, ::StringW, bool, ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*)>(
        &::GlobalNamespace::Interop::ThrowExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2410788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "ThrowExceptionForIoErrno", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.CheckIo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int64_t (*)(int64_t, ::StringW, bool, ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*)>(&::GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2410cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.CheckIo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(int32_t, ::StringW, bool, ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*)>(&::GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2410db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetExceptionForIoErrno
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::GlobalNamespace::__Interop__ErrorInfo, ::StringW, bool)>(
    &::GlobalNamespace::Interop::GetExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x24107e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetExceptionForIoErrno", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetIOException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::GlobalNamespace::__Interop__ErrorInfo)>(&::GlobalNamespace::Interop::GetIOException)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2410e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetIOException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetRandomBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(&::GlobalNamespace::Interop::GetRandomBytes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2410fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetRandomBytes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop::ThrowExceptionForIoErrno(::GlobalNamespace::__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory,
                                                               ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>* errorRewriter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "ThrowExceptionForIoErrno", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, errorInfo, path, isDirectory, errorRewriter);
}
/// @param path: ::StringW (default: nullptr)
/// @param isDirectory: bool (default: false)
/// @param errorRewriter: ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo,::GlobalNamespace::__Interop__ErrorInfo>* (default: nullptr)
inline int64_t GlobalNamespace::Interop::CheckIo(int64_t result, ::StringW path, bool isDirectory,
                                                 ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>* errorRewriter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
/// @param path: ::StringW (default: nullptr)
/// @param isDirectory: bool (default: false)
/// @param errorRewriter: ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo,::GlobalNamespace::__Interop__ErrorInfo>* (default: nullptr)
inline int32_t GlobalNamespace::Interop::CheckIo(int32_t result, ::StringW path, bool isDirectory,
                                                 ::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>* errorRewriter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::__Interop__ErrorInfo, ::GlobalNamespace::__Interop__ErrorInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
/// @param path: ::StringW (default: nullptr)
/// @param isDirectory: bool (default: false)
inline ::System::Exception* GlobalNamespace::Interop::GetExceptionForIoErrno(::GlobalNamespace::__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetExceptionForIoErrno", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, errorInfo, path, isDirectory);
}
inline ::System::Exception* GlobalNamespace::Interop::GetIOException(::GlobalNamespace::__Interop__ErrorInfo errorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetIOException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__Interop__ErrorInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, errorInfo);
}
inline void GlobalNamespace::Interop::GetRandomBytes(::cordl_internals::Ptr<uint8_t> buffer, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetRandomBytes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, length);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop::Interop() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
