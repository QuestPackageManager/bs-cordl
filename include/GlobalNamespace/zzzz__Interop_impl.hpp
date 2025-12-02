#pragma once
// IWYU pragma private; include "GlobalNamespace/Interop.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "GlobalNamespace/zzzz__Interop_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeFileHandle_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Interop_Error::Interop_Error(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_Error::Interop_Error() {}
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::SUCCESS{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_E2BIG{ static_cast<int32_t>(0x10001) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EACCES{ static_cast<int32_t>(0x10002) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EADDRINUSE{ static_cast<int32_t>(0x10003) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EADDRNOTAVAIL{ static_cast<int32_t>(0x10004) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EAFNOSUPPORT{ static_cast<int32_t>(0x10005) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EAGAIN{ static_cast<int32_t>(0x10006) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EALREADY{ static_cast<int32_t>(0x10007) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EBADF{ static_cast<int32_t>(0x10008) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EBADMSG{ static_cast<int32_t>(0x10009) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EBUSY{ static_cast<int32_t>(0x1000a) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ECANCELED{ static_cast<int32_t>(0x1000b) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ECHILD{ static_cast<int32_t>(0x1000c) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ECONNABORTED{ static_cast<int32_t>(0x1000d) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ECONNREFUSED{ static_cast<int32_t>(0x1000e) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ECONNRESET{ static_cast<int32_t>(0x1000f) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EDEADLK{ static_cast<int32_t>(0x10010) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EDESTADDRREQ{ static_cast<int32_t>(0x10011) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EDOM{ static_cast<int32_t>(0x10012) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EDQUOT{ static_cast<int32_t>(0x10013) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EEXIST{ static_cast<int32_t>(0x10014) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EFAULT{ static_cast<int32_t>(0x10015) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EFBIG{ static_cast<int32_t>(0x10016) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EHOSTUNREACH{ static_cast<int32_t>(0x10017) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EIDRM{ static_cast<int32_t>(0x10018) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EILSEQ{ static_cast<int32_t>(0x10019) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EINPROGRESS{ static_cast<int32_t>(0x1001a) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EINTR{ static_cast<int32_t>(0x1001b) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EINVAL{ static_cast<int32_t>(0x1001c) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EIO{ static_cast<int32_t>(0x1001d) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EISCONN{ static_cast<int32_t>(0x1001e) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EISDIR{ static_cast<int32_t>(0x1001f) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ELOOP{ static_cast<int32_t>(0x10020) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EMFILE{ static_cast<int32_t>(0x10021) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EMLINK{ static_cast<int32_t>(0x10022) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EMSGSIZE{ static_cast<int32_t>(0x10023) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EMULTIHOP{ static_cast<int32_t>(0x10024) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENAMETOOLONG{ static_cast<int32_t>(0x10025) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENETDOWN{ static_cast<int32_t>(0x10026) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENETRESET{ static_cast<int32_t>(0x10027) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENETUNREACH{ static_cast<int32_t>(0x10028) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENFILE{ static_cast<int32_t>(0x10029) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOBUFS{ static_cast<int32_t>(0x1002a) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENODEV{ static_cast<int32_t>(0x1002c) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOENT{ static_cast<int32_t>(0x1002d) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOEXEC{ static_cast<int32_t>(0x1002e) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOLCK{ static_cast<int32_t>(0x1002f) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOLINK{ static_cast<int32_t>(0x10030) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOMEM{ static_cast<int32_t>(0x10031) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOMSG{ static_cast<int32_t>(0x10032) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOPROTOOPT{ static_cast<int32_t>(0x10033) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOSPC{ static_cast<int32_t>(0x10034) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOSYS{ static_cast<int32_t>(0x10037) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOTCONN{ static_cast<int32_t>(0x10038) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOTDIR{ static_cast<int32_t>(0x10039) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOTEMPTY{ static_cast<int32_t>(0x1003a) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOTSOCK{ static_cast<int32_t>(0x1003c) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOTSUP{ static_cast<int32_t>(0x1003d) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENOTTY{ static_cast<int32_t>(0x1003e) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENXIO{ static_cast<int32_t>(0x1003f) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EOVERFLOW{ static_cast<int32_t>(0x10040) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EPERM{ static_cast<int32_t>(0x10042) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EPIPE{ static_cast<int32_t>(0x10043) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EPROTO{ static_cast<int32_t>(0x10044) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EPROTONOSUPPORT{ static_cast<int32_t>(0x10045) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EPROTOTYPE{ static_cast<int32_t>(0x10046) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ERANGE{ static_cast<int32_t>(0x10047) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EROFS{ static_cast<int32_t>(0x10048) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ESPIPE{ static_cast<int32_t>(0x10049) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ESRCH{ static_cast<int32_t>(0x1004a) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ESTALE{ static_cast<int32_t>(0x1004b) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ETIMEDOUT{ static_cast<int32_t>(0x1004d) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ETXTBSY{ static_cast<int32_t>(0x1004e) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EXDEV{ static_cast<int32_t>(0x1004f) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ESOCKTNOSUPPORT{ static_cast<int32_t>(0x1005e) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EPFNOSUPPORT{ static_cast<int32_t>(0x10060) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ESHUTDOWN{ static_cast<int32_t>(0x1006c) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EHOSTDOWN{ static_cast<int32_t>(0x10070) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_ENODATA{ static_cast<int32_t>(0x10071) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EOPNOTSUPP{ static_cast<int32_t>(0x1003d) };
constexpr ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Error::_cordl_EWOULDBLOCK{ static_cast<int32_t>(0x10006) };
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Interop_ErrorInfo::*)(int32_t)>(&::GlobalNamespace::Interop_ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5896fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Interop_ErrorInfo::*)(::GlobalNamespace::Interop_Error)>(
    &::GlobalNamespace::Interop_ErrorInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x589701c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_Error>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.get_Error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Interop_Error (::GlobalNamespace::Interop_ErrorInfo::*)()>(
    &::GlobalNamespace::Interop_ErrorInfo::get_Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5897028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), "get_Error",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.get_RawErrno
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::get_RawErrno)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5896e68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), "get_RawErrno",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.GetErrorMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::GetErrorMessage)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5896ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), "GetErrorMessage",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_ErrorInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::Interop_ErrorInfo::*)()>(&::GlobalNamespace::Interop_ErrorInfo::ToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5897120;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), 3));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop_ErrorInfo::_ctor(int32_t _cordl_errno) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_errno);
}
inline void GlobalNamespace::Interop_ErrorInfo::_ctor(::GlobalNamespace::Interop_Error error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_Error>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
inline ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_ErrorInfo::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), "get_Error",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_Error, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_ErrorInfo::get_RawErrno() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), "get_RawErrno",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::Interop_ErrorInfo::GetErrorMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), "GetErrorMessage",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::Interop_ErrorInfo::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_ErrorInfo>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_error", ty: "::GlobalNamespace::Interop_Error", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::Interop_ErrorInfo::Interop_ErrorInfo(::GlobalNamespace::Interop_Error _error, int32_t _rawErrno) noexcept {
  this->_error = _error;
  this->_rawErrno = _rawErrno;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_ErrorInfo::Interop_ErrorInfo() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Sys_Interop_NodeType::Sys_Interop_NodeType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_NodeType::Sys_Interop_NodeType() {}
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_UNKNOWN{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_FIFO{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_CHR{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_DIR{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_BLK{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_REG{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_LNK{ static_cast<int32_t>(0xa) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_SOCK{ static_cast<int32_t>(0xc) };
constexpr ::GlobalNamespace::Sys_Interop_NodeType GlobalNamespace::Sys_Interop_NodeType::DT_WHT{ static_cast<int32_t>(0xe) };
//  Writing Method size for method: ::GlobalNamespace::Sys_Interop_DirectoryEntry.GetName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<char16_t> (::GlobalNamespace::Sys_Interop_DirectoryEntry::*)(::System::Span_1<char16_t>)>(
    &::GlobalNamespace::Sys_Interop_DirectoryEntry::GetName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5897b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Sys_Interop_DirectoryEntry>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get() })));
    return ___internal_method;
  }
};
inline ::System::ReadOnlySpan_1<char16_t> GlobalNamespace::Sys_Interop_DirectoryEntry::GetName(::System::Span_1<char16_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Sys_Interop_DirectoryEntry>::get(), "GetName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<char16_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>, false>(this, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "Name", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "InodeType", ty: "::GlobalNamespace::Sys_Interop_NodeType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry::Sys_Interop_DirectoryEntry(uint8_t* Name, int32_t NameLength, ::GlobalNamespace::Sys_Interop_NodeType InodeType) noexcept {
  this->Name = Name;
  this->NameLength = NameLength;
  this->InodeType = InodeType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_DirectoryEntry::Sys_Interop_DirectoryEntry() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags::Sys_Interop_FileStatusFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags::Sys_Interop_FileStatusFlags() {}
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags GlobalNamespace::Sys_Interop_FileStatusFlags::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::Sys_Interop_FileStatusFlags GlobalNamespace::Sys_Interop_FileStatusFlags::HasBirthTime{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "Flags", ty: "::GlobalNamespace::Sys_Interop_FileStatusFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "Mode", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Size", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ATimeNsec", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "CTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "BirthTime", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Dev", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Ino", ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::Sys_Interop_FileStatus::Sys_Interop_FileStatus(::GlobalNamespace::Sys_Interop_FileStatusFlags Flags, int32_t Mode, uint32_t Uid, uint32_t Gid, int64_t Size, int64_t ATime,
                                                                            int64_t ATimeNsec, int64_t MTime, int64_t MTimeNsec, int64_t CTime, int64_t CTimeNsec, int64_t BirthTime,
                                                                            int64_t BirthTimeNsec, int64_t Dev, int64_t Ino, uint32_t UserFlags) noexcept {
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
constexpr ::GlobalNamespace::Sys_Interop_FileStatus::Sys_Interop_FileStatus() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Sys_Interop_Permissions::Sys_Interop_Permissions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Sys_Interop_Permissions::Sys_Interop_Permissions() {}
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::Mask{ static_cast<int32_t>(0x1ff) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IRWXU{ static_cast<int32_t>(0x1c0) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IRUSR{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IWUSR{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IXUSR{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IRWXG{ static_cast<int32_t>(0x38) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IRGRP{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IWGRP{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IXGRP{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IRWXO{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IROTH{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IWOTH{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::Sys_Interop_Permissions GlobalNamespace::Sys_Interop_Permissions::S_IXOTH{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetLastErrorInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Interop_ErrorInfo (*)()>(&::GlobalNamespace::Interop_Sys::GetLastErrorInfo)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5896cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetLastErrorInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.StrError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::GlobalNamespace::Interop_Sys::StrError)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5897034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "StrError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ConvertErrorPlatformToPal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Interop_Error (*)(int32_t)>(&::GlobalNamespace::Interop_Sys::ConvertErrorPlatformToPal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5897018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ConvertErrorPlatformToPal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ConvertErrorPalToPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::Interop_Error)>(&::GlobalNamespace::Interop_Sys::ConvertErrorPalToPlatform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5897030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ConvertErrorPalToPlatform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_Error>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.StrErrorR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (*)(int32_t, uint8_t*, int32_t)>(&::GlobalNamespace::Interop_Sys::StrErrorR)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5897204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "StrErrorR", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetNonCryptographicallySecureRandomBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int32_t)>(&::GlobalNamespace::Interop_Sys::GetNonCryptographicallySecureRandomBytes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5896fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetNonCryptographicallySecureRandomBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.OpenDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::OpenDir)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5897218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "OpenDir", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetReadDirRBufferSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::Interop_Sys::GetReadDirRBufferSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5897250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetReadDirRBufferSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ReadDirR
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr, uint8_t*, int32_t, ::ByRef<::GlobalNamespace::Sys_Interop_DirectoryEntry>)>(
    &::GlobalNamespace::Interop_Sys::ReadDirR)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5897258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ReadDirR", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_DirectoryEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.CloseDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::Interop_Sys::CloseDir)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589725c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "CloseDir", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ReadLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::GlobalNamespace::Interop_Sys::ReadLink)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5897278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ReadLink", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.ReadLink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::ReadLink)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x58972e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ReadLink", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Stat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::Stat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x589751c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Stat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LStat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>)>(&::GlobalNamespace::Interop_Sys::LStat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x589755c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LStat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Symlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Sys::Symlink)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x589759c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Symlink", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.CopyFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Microsoft::Win32::SafeHandles::SafeFileHandle*, ::Microsoft::Win32::SafeHandles::SafeFileHandle*)>(
    &::GlobalNamespace::Interop_Sys::CopyFile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58975f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "CopyFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetEGid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::GlobalNamespace::Interop_Sys::GetEGid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58976ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetEGid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.GetEUid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)()>(&::GlobalNamespace::Interop_Sys::GetEUid)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58976b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetEUid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LChflagsCanSetHiddenFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::GlobalNamespace::Interop_Sys::LChflagsCanSetHiddenFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58976b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(),
                                                                               "LChflagsCanSetHiddenFlag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Link
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Sys::Link)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58976bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Link", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.MkDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, int32_t)>(&::GlobalNamespace::Interop_Sys::MkDir)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5897718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "MkDir", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Rename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::StringW)>(&::GlobalNamespace::Interop_Sys::Rename)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5897758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Rename", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.RmDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::RmDir)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58977b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "RmDir", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Stat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<uint8_t>, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>)>(
    &::GlobalNamespace::Interop_Sys::Stat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58977ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Stat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Stat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>)>(
    &::GlobalNamespace::Interop_Sys::Stat)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5897808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Stat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LStat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ByRef<uint8_t>, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>)>(
    &::GlobalNamespace::Interop_Sys::LStat)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589792c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LStat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.LStat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>)>(
    &::GlobalNamespace::Interop_Sys::LStat)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5897948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LStat", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.Unlink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::GlobalNamespace::Interop_Sys::Unlink)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5897a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Unlink", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop_Sys.DoubleToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(double_t, uint8_t*, uint8_t*, int32_t)>(&::GlobalNamespace::Interop_Sys::DoubleToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "DoubleToString", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop_Sys::setStaticF_CanSetHiddenFlag(bool value) {
  ::cordl_internals::setStaticField<bool, "CanSetHiddenFlag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::Interop_Sys::getStaticF_CanSetHiddenFlag() {
  return ::cordl_internals::getStaticField<bool, "CanSetHiddenFlag", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get>();
}
inline ::GlobalNamespace::Interop_ErrorInfo GlobalNamespace::Interop_Sys::GetLastErrorInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetLastErrorInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_ErrorInfo, false>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::Interop_Sys::StrError(int32_t platformErrno) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "StrError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, platformErrno);
}
inline ::GlobalNamespace::Interop_Error GlobalNamespace::Interop_Sys::ConvertErrorPlatformToPal(int32_t platformErrno) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ConvertErrorPlatformToPal",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Interop_Error, false>(nullptr, ___internal_method, platformErrno);
}
inline int32_t GlobalNamespace::Interop_Sys::ConvertErrorPalToPlatform(::GlobalNamespace::Interop_Error error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ConvertErrorPalToPlatform", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_Error>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, error);
}
inline uint8_t* GlobalNamespace::Interop_Sys::StrErrorR(int32_t platformErrno, uint8_t* buffer, int32_t bufferSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "StrErrorR", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(nullptr, ___internal_method, platformErrno, buffer, bufferSize);
}
inline void GlobalNamespace::Interop_Sys::GetNonCryptographicallySecureRandomBytes(uint8_t* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetNonCryptographicallySecureRandomBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, length);
}
inline ::System::IntPtr GlobalNamespace::Interop_Sys::OpenDir(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "OpenDir", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::Interop_Sys::GetReadDirRBufferSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetReadDirRBufferSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_Sys::ReadDirR(::System::IntPtr dir, uint8_t* buffer, int32_t bufferSize, ::ByRef<::GlobalNamespace::Sys_Interop_DirectoryEntry> outputEntry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ReadDirR", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_DirectoryEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dir, buffer, bufferSize, outputEntry);
}
inline int32_t GlobalNamespace::Interop_Sys::CloseDir(::System::IntPtr dir) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "CloseDir", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, dir);
}
inline int32_t GlobalNamespace::Interop_Sys::ReadLink(::StringW path, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t bufferSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ReadLink", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, buffer, bufferSize);
}
inline ::StringW GlobalNamespace::Interop_Sys::ReadLink(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "ReadLink", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::Interop_Sys::Stat(::StringW path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Stat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::LStat(::StringW path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LStat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::Symlink(::StringW target, ::StringW linkPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Symlink", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, target, linkPath);
}
inline int32_t GlobalNamespace::Interop_Sys::CopyFile(::Microsoft::Win32::SafeHandles::SafeFileHandle* source, ::Microsoft::Win32::SafeHandles::SafeFileHandle* destination) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "CopyFile", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Microsoft::Win32::SafeHandles::SafeFileHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, destination);
}
inline uint32_t GlobalNamespace::Interop_Sys::GetEGid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetEGid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline uint32_t GlobalNamespace::Interop_Sys::GetEUid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "GetEUid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_Sys::LChflagsCanSetHiddenFlag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LChflagsCanSetHiddenFlag",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::Interop_Sys::Link(::StringW source, ::StringW link) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Link", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, link);
}
inline int32_t GlobalNamespace::Interop_Sys::MkDir(::StringW path, int32_t mode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "MkDir", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, mode);
}
inline int32_t GlobalNamespace::Interop_Sys::Rename(::StringW oldPath, ::StringW newPath) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Rename", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, oldPath, newPath);
}
inline int32_t GlobalNamespace::Interop_Sys::RmDir(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "RmDir", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path);
}
inline int32_t GlobalNamespace::Interop_Sys::Stat(::ByRef<uint8_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Stat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::Stat(::System::ReadOnlySpan_1<char16_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Stat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::LStat(::ByRef<uint8_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LStat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint8_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::LStat(::System::ReadOnlySpan_1<char16_t> path, ::ByRef<::GlobalNamespace::Sys_Interop_FileStatus> output) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "LStat", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::Sys_Interop_FileStatus>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, output);
}
inline int32_t GlobalNamespace::Interop_Sys::Unlink(::StringW pathname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "Unlink", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, pathname);
}
inline int32_t GlobalNamespace::Interop_Sys::DoubleToString(double_t value, uint8_t* format, uint8_t* buffer, int32_t bufferLength) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop_Sys*>::get(), "DoubleToString", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, value, format, buffer, bufferLength);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop_Sys::Interop_Sys() {}
//  Writing Method size for method: ::GlobalNamespace::Interop.ThrowExceptionForIoErrno
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::Interop_ErrorInfo, ::StringW, bool, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*)>(
        &::GlobalNamespace::Interop::ThrowExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5896670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "ThrowExceptionForIoErrno", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.CheckIo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int64_t (*)(int64_t, ::StringW, bool, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*)>(&::GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5896c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.CheckIo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (*)(int32_t, ::StringW, bool, ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*)>(&::GlobalNamespace::Interop::CheckIo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5896d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 4>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetExceptionForIoErrno
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::GlobalNamespace::Interop_ErrorInfo, ::StringW, bool)>(
    &::GlobalNamespace::Interop::GetExceptionForIoErrno)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x58966c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetExceptionForIoErrno", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetIOException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (*)(::GlobalNamespace::Interop_ErrorInfo)>(&::GlobalNamespace::Interop::GetIOException)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5896de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetIOException", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Interop.GetRandomBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, int32_t)>(&::GlobalNamespace::Interop::GetRandomBytes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5896f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetRandomBytes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Interop::ThrowExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo errorInfo, ::StringW path, bool isDirectory,
                                                               ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>* errorRewriter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "ThrowExceptionForIoErrno", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, errorInfo, path, isDirectory, errorRewriter);
}
inline int64_t GlobalNamespace::Interop::CheckIo(int64_t result, ::StringW path, bool isDirectory,
                                                 ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>* errorRewriter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
inline int32_t GlobalNamespace::Interop::CheckIo(int32_t result, ::StringW path, bool isDirectory,
                                                 ::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>* errorRewriter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "CheckIo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::GlobalNamespace::Interop_ErrorInfo, ::GlobalNamespace::Interop_ErrorInfo>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, result, path, isDirectory, errorRewriter);
}
inline ::System::Exception* GlobalNamespace::Interop::GetExceptionForIoErrno(::GlobalNamespace::Interop_ErrorInfo errorInfo, ::StringW path, bool isDirectory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetExceptionForIoErrno", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, errorInfo, path, isDirectory);
}
inline ::System::Exception* GlobalNamespace::Interop::GetIOException(::GlobalNamespace::Interop_ErrorInfo errorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetIOException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Interop_ErrorInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(nullptr, ___internal_method, errorInfo);
}
inline void GlobalNamespace::Interop::GetRandomBytes(uint8_t* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Interop*>::get(), "GetRandomBytes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buffer, length);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Interop::Interop() {}
