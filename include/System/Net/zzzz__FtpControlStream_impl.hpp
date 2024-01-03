#pragma once
#include "System/Net/zzzz__CommandStream_impl.hpp"
#include "System/Net/zzzz__FtpLoginState_impl.hpp"
#include "System/Net/zzzz__FtpStatusCode_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__FtpControlStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__CommandStream_def.hpp"
#include "System/Net/zzzz__FtpControlStream_def.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/Net/zzzz__NetworkCredential_def.hpp"
#include "System/Net/zzzz__ResponseDescription_def.hpp"
#include "System/Net/zzzz__TlsStream_def.hpp"
#include "System/Net/zzzz__TriState_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/zzzz__WeakReference_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::__FtpControlStream__GetPathOption::__FtpControlStream__GetPathOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::__FtpControlStream__GetPathOption::__FtpControlStream__GetPathOption() {}
constexpr ::System::Net::__FtpControlStream__GetPathOption System::Net::__FtpControlStream__GetPathOption::Normal{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::__FtpControlStream__GetPathOption System::Net::__FtpControlStream__GetPathOption::AssumeFilename{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::__FtpControlStream__GetPathOption System::Net::__FtpControlStream__GetPathOption::AssumeNoFilename{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Net::__FtpControlStream____c__DisplayClass31_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpControlStream____c__DisplayClass31_0::*)()>(
    &::System::Net::__FtpControlStream____c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29904dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpControlStream____c__DisplayClass31_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::__FtpControlStream____c__DisplayClass31_0._PipelineCallback_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpControlStream____c__DisplayClass31_0::*)(::System::IAsyncResult*)>(
    &::System::Net::__FtpControlStream____c__DisplayClass31_0::_PipelineCallback_b__0)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x29934a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpControlStream____c__DisplayClass31_0*>::get(), "<PipelineCallback>b__0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Net::FtpControlStream*& System::Net::__FtpControlStream____c__DisplayClass31_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpControlStream*> const& System::Net::__FtpControlStream____c__DisplayClass31_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::__FtpControlStream____c__DisplayClass31_0::__set___4__this(::System::Net::FtpControlStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::TlsStream*& System::Net::__FtpControlStream____c__DisplayClass31_0::__get_tlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::TlsStream*> const& System::Net::__FtpControlStream____c__DisplayClass31_0::__get_tlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsStream;
}
constexpr void System::Net::__FtpControlStream____c__DisplayClass31_0::__set_tlsStream(::System::Net::TlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::__FtpControlStream____c__DisplayClass31_0* System::Net::__FtpControlStream____c__DisplayClass31_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__FtpControlStream____c__DisplayClass31_0*>());
}
inline void System::Net::__FtpControlStream____c__DisplayClass31_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpControlStream____c__DisplayClass31_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::__FtpControlStream____c__DisplayClass31_0::_PipelineCallback_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpControlStream____c__DisplayClass31_0*>::get(), "<PipelineCallback>b__0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
// Ctor Parameters []
constexpr ::System::Net::__FtpControlStream____c__DisplayClass31_0::__FtpControlStream____c__DisplayClass31_0() {}
//  Writing Method size for method: ::System::Net::FtpControlStream.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::NetworkCredential* (::System::Net::FtpControlStream::*)()>(
    &::System::Net::FtpControlStream::get_Credentials)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x298ecdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_Credentials",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)(::System::Net::NetworkCredential*)>(
    &::System::Net::FtpControlStream::set_Credentials)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x298ed84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "set_Credentials", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkCredential*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)(::System::Net::Sockets::TcpClient*)>(
    &::System::Net::FtpControlStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x298ee04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::TcpClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.AbortConnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::AbortConnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x298ee90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "AbortConnect",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.AcceptCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::FtpControlStream::AcceptCallback)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x298ef1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "AcceptCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.ConnectCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::FtpControlStream::ConnectCallback)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x298f318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "ConnectCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.SSLHandshakeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::FtpControlStream::SSLHandshakeCallback)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x298f4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "SSLHandshakeCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.QueueOrCreateFtpDataStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Net::__CommandStream__PipelineInstruction (::System::Net::FtpControlStream::*)(ByRef<::System::IO::Stream*>)>(&::System::Net::FtpControlStream::QueueOrCreateFtpDataStream)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x298f68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "QueueOrCreateFtpDataStream", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.ClearState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::ClearState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x298fc20;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 43));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.PipelineCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__CommandStream__PipelineInstruction (::System::Net::FtpControlStream::*)(
    ::System::Net::__CommandStream__PipelineEntry*, ::System::Net::ResponseDescription*, bool, ByRef<::System::IO::Stream*>)>(&::System::Net::FtpControlStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x82c;
  constexpr static std::size_t addrs = 0x298fcb0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.BuildCommandsList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*> (
    ::System::Net::FtpControlStream::*)(::System::Net::WebRequest*)>(&::System::Net::FtpControlStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0xdd8;
  constexpr static std::size_t addrs = 0x2991504;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.QueueOrCreateDataConection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::__CommandStream__PipelineInstruction (::System::Net::FtpControlStream::*)(
    ::System::Net::__CommandStream__PipelineEntry*, ::System::Net::ResponseDescription*, bool, ByRef<::System::IO::Stream*>, ByRef<bool>)>(
    &::System::Net::FtpControlStream::QueueOrCreateDataConection)> {
  constexpr static std::size_t size = 0x664;
  constexpr static std::size_t addrs = 0x29904e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "QueueOrCreateDataConection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CommandStream__PipelineEntry*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ResponseDescription*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPathInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Net::__FtpControlStream__GetPathOption, ::System::Uri*, ByRef<::StringW>, ByRef<::StringW>, ByRef<::StringW>)>(&::System::Net::FtpControlStream::GetPathInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x29923ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPathInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__FtpControlStream__GetPathOption>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.FormatAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::System::Net::IPAddress*, int32_t)>(
    &::System::Net::FtpControlStream::FormatAddress)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2992d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "FormatAddress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.FormatAddressV6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::System::Net::IPAddress*, int32_t)>(
    &::System::Net::FtpControlStream::FormatAddressV6)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2992e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "FormatAddressV6", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2992f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_ContentLength",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_LastModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2992f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_LastModified",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_ResponseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2992f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_ResponseUri",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_BannerMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_BannerMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2992f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_BannerMessage",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_WelcomeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_WelcomeMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2992f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_WelcomeMessage",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_ExitMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_ExitMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2992fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_ExitMessage",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetContentLengthFrom213Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpControlStream::*)(::StringW)>(
    &::System::Net::FtpControlStream::GetContentLengthFrom213Response)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2990fb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetContentLengthFrom213Response",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetLastModifiedFrom213Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::System::Net::FtpControlStream::*)(::StringW)>(
    &::System::Net::FtpControlStream::GetLastModifiedFrom213Response)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x29910f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetLastModifiedFrom213Response",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.TryUpdateResponseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)(::StringW, ::System::Net::FtpWebRequest*)>(
    &::System::Net::FtpControlStream::TryUpdateResponseUri)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x2990c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "TryUpdateResponseUri", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.TryUpdateContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::TryUpdateContentLength)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2990b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "TryUpdateContentLength", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetLoginDirectory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetLoginDirectory)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2991454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetLoginDirectory", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPortV4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetPortV4)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2992900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPortV4", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPortV6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetPortV6)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2992af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPortV6", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.CreateFtpListenerSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpControlStream::*)(::System::Net::FtpWebRequest*)>(
    &::System::Net::FtpControlStream::CreateFtpListenerSocket)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2992590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "CreateFtpListenerSocket", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPortCommandLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::System::Net::FtpWebRequest*)>(
    &::System::Net::FtpControlStream::GetPortCommandLine)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x299270c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPortCommandLine", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.FormatFtpCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::StringW, ::StringW)>(
    &::System::Net::FtpControlStream::FormatFtpCommand)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x29922dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "FormatFtpCommand", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.CreateFtpDataSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (
    ::System::Net::FtpControlStream::*)(::System::Net::FtpWebRequest*, ::System::Net::Sockets::Socket*)>(&::System::Net::FtpControlStream::CreateFtpDataSocket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2992cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "CreateFtpDataSocket", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.CheckValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpControlStream::*)(::System::Net::ResponseDescription*, ByRef<int32_t>, ByRef<int32_t>)>(
    &::System::Net::FtpControlStream::CheckValid)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2992fc8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 46));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.IsFtpDataStreamWriteable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::TriState (::System::Net::FtpControlStream::*)()>(
    &::System::Net::FtpControlStream::IsFtpDataStreamWriteable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x298f928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(),
                                                                               "IsFtpDataStreamWriteable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::FtpControlStream::__get__dataSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::FtpControlStream::__get__dataSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSocket;
}
constexpr void System::Net::FtpControlStream::__set__dataSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& System::Net::FtpControlStream::__get__passiveEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passiveEndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& System::Net::FtpControlStream::__get__passiveEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passiveEndPoint;
}
constexpr void System::Net::FtpControlStream::__set__passiveEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____passiveEndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::TlsStream*& System::Net::FtpControlStream::__get__tlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tlsStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::TlsStream*> const& System::Net::FtpControlStream::__get__tlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tlsStream;
}
constexpr void System::Net::FtpControlStream::__set__tlsStream(::System::Net::TlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tlsStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& System::Net::FtpControlStream::__get__bannerMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerMessage;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Net::FtpControlStream::__get__bannerMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerMessage;
}
constexpr void System::Net::FtpControlStream::__set__bannerMessage(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bannerMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& System::Net::FtpControlStream::__get__welcomeMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____welcomeMessage;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Net::FtpControlStream::__get__welcomeMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____welcomeMessage;
}
constexpr void System::Net::FtpControlStream::__set__welcomeMessage(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____welcomeMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Text::StringBuilder*& System::Net::FtpControlStream::__get__exitMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitMessage;
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& System::Net::FtpControlStream::__get__exitMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitMessage;
}
constexpr void System::Net::FtpControlStream::__set__exitMessage(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exitMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::WeakReference*& System::Net::FtpControlStream::__get__credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr ::cordl_internals::to_const_pointer<::System::WeakReference*> const& System::Net::FtpControlStream::__get__credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr void System::Net::FtpControlStream::__set__credentials(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpControlStream::__get__currentTypeSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTypeSetting;
}
constexpr ::StringW const& System::Net::FtpControlStream::__get__currentTypeSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTypeSetting;
}
constexpr void System::Net::FtpControlStream::__set__currentTypeSetting(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentTypeSetting)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::FtpControlStream::__get__contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentLength;
}
constexpr int64_t const& System::Net::FtpControlStream::__get__contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentLength;
}
constexpr void System::Net::FtpControlStream::__set__contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentLength = value;
}
constexpr ::System::DateTime& System::Net::FtpControlStream::__get__lastModified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr ::System::DateTime const& System::Net::FtpControlStream::__get__lastModified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr void System::Net::FtpControlStream::__set__lastModified(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastModified = value;
}
constexpr bool& System::Net::FtpControlStream::__get__dataHandshakeStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataHandshakeStarted;
}
constexpr bool const& System::Net::FtpControlStream::__get__dataHandshakeStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataHandshakeStarted;
}
constexpr void System::Net::FtpControlStream::__set__dataHandshakeStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataHandshakeStarted = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__get__loginDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginDirectory;
}
constexpr ::StringW const& System::Net::FtpControlStream::__get__loginDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginDirectory;
}
constexpr void System::Net::FtpControlStream::__set__loginDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loginDirectory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpControlStream::__get__establishedServerDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____establishedServerDirectory;
}
constexpr ::StringW const& System::Net::FtpControlStream::__get__establishedServerDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____establishedServerDirectory;
}
constexpr void System::Net::FtpControlStream::__set__establishedServerDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____establishedServerDirectory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpControlStream::__get__requestedServerDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedServerDirectory;
}
constexpr ::StringW const& System::Net::FtpControlStream::__get__requestedServerDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedServerDirectory;
}
constexpr void System::Net::FtpControlStream::__set__requestedServerDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestedServerDirectory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Uri*& System::Net::FtpControlStream::__get__responseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseUri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::FtpControlStream::__get__responseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseUri;
}
constexpr void System::Net::FtpControlStream::__set__responseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::FtpLoginState& System::Net::FtpControlStream::__get__loginState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginState;
}
constexpr ::System::Net::FtpLoginState const& System::Net::FtpControlStream::__get__loginState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginState;
}
constexpr void System::Net::FtpControlStream::__set__loginState(::System::Net::FtpLoginState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loginState = value;
}
constexpr ::System::Net::FtpStatusCode& System::Net::FtpControlStream::__get_StatusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr ::System::Net::FtpStatusCode const& System::Net::FtpControlStream::__get_StatusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr void System::Net::FtpControlStream::__set_StatusCode(::System::Net::FtpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusCode = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__get_StatusLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusLine;
}
constexpr ::StringW const& System::Net::FtpControlStream::__get_StatusLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusLine;
}
constexpr void System::Net::FtpControlStream::__set_StatusLine(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StatusLine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Net::FtpControlStream::setStaticF_s_acceptCallbackDelegate(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_acceptCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::FtpControlStream::getStaticF_s_acceptCallbackDelegate() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_acceptCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get>();
}
inline void System::Net::FtpControlStream::setStaticF_s_connectCallbackDelegate(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_connectCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::FtpControlStream::getStaticF_s_connectCallbackDelegate() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_connectCallbackDelegate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get>();
}
inline void System::Net::FtpControlStream::setStaticF_s_SSLHandshakeCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_SSLHandshakeCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get>(
      std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::FtpControlStream::getStaticF_s_SSLHandshakeCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_SSLHandshakeCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get>();
}
inline ::System::Net::NetworkCredential* System::Net::FtpControlStream::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_Credentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*, false>(this, ___internal_method);
}
inline void System::Net::FtpControlStream::set_Credentials(::System::Net::NetworkCredential* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "set_Credentials", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::NetworkCredential*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::FtpControlStream* System::Net::FtpControlStream::New_ctor(::System::Net::Sockets::TcpClient* client) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FtpControlStream*>(client));
}
inline void System::Net::FtpControlStream::_ctor(::System::Net::Sockets::TcpClient* client) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::TcpClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client);
}
inline void System::Net::FtpControlStream::AbortConnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "AbortConnect",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::FtpControlStream::AcceptCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "AcceptCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline void System::Net::FtpControlStream::ConnectCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "ConnectCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline void System::Net::FtpControlStream::SSLHandshakeCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "SSLHandshakeCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asyncResult);
}
inline ::System::Net::__CommandStream__PipelineInstruction System::Net::FtpControlStream::QueueOrCreateFtpDataStream(ByRef<::System::IO::Stream*> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "QueueOrCreateFtpDataStream", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__CommandStream__PipelineInstruction, false>(this, ___internal_method, stream);
}
inline void System::Net::FtpControlStream::ClearState() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 43)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::__CommandStream__PipelineInstruction
System::Net::FtpControlStream::PipelineCallback(::System::Net::__CommandStream__PipelineEntry* entry, ::System::Net::ResponseDescription* response, bool timeout, ByRef<::System::IO::Stream*> stream) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__CommandStream__PipelineInstruction, false>(this, ___internal_method, entry, response, timeout, stream);
}
inline ::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>
System::Net::FtpControlStream::BuildCommandsList(::System::Net::WebRequest* req) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::__CommandStream__PipelineEntry*, ::Array<::System::Net::__CommandStream__PipelineEntry*>*>, false>(this, ___internal_method, req);
}
inline ::System::Net::__CommandStream__PipelineInstruction System::Net::FtpControlStream::QueueOrCreateDataConection(::System::Net::__CommandStream__PipelineEntry* entry,
                                                                                                                     ::System::Net::ResponseDescription* response, bool timeout,
                                                                                                                     ByRef<::System::IO::Stream*> stream, ByRef<bool> isSocketReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "QueueOrCreateDataConection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__CommandStream__PipelineEntry*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ResponseDescription*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::IO::Stream*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__CommandStream__PipelineInstruction, false>(this, ___internal_method, entry, response, timeout, stream, isSocketReady);
}
inline void System::Net::FtpControlStream::GetPathInfo(::System::Net::__FtpControlStream__GetPathOption pathOption, ::System::Uri* uri, ByRef<::StringW> path, ByRef<::StringW> directory,
                                                       ByRef<::StringW> filename) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPathInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__FtpControlStream__GetPathOption>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pathOption, uri, path, directory, filename);
}
inline ::StringW System::Net::FtpControlStream::FormatAddress(::System::Net::IPAddress* address, int32_t Port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "FormatAddress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, address, Port);
}
inline ::StringW System::Net::FtpControlStream::FormatAddressV6(::System::Net::IPAddress* address, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "FormatAddressV6", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPAddress*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, address, port);
}
inline int64_t System::Net::FtpControlStream::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_ContentLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::System::DateTime System::Net::FtpControlStream::get_LastModified() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_LastModified",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::FtpControlStream::get_ResponseUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_ResponseUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::StringW System::Net::FtpControlStream::get_BannerMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_BannerMessage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::FtpControlStream::get_WelcomeMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_WelcomeMessage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Net::FtpControlStream::get_ExitMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "get_ExitMessage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int64_t System::Net::FtpControlStream::GetContentLengthFrom213Response(::StringW responseString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetContentLengthFrom213Response",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, responseString);
}
inline ::System::DateTime System::Net::FtpControlStream::GetLastModifiedFrom213Response(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetLastModifiedFrom213Response",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method, str);
}
inline void System::Net::FtpControlStream::TryUpdateResponseUri(::StringW str, ::System::Net::FtpWebRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "TryUpdateResponseUri", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str, request);
}
inline void System::Net::FtpControlStream::TryUpdateContentLength(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "TryUpdateContentLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str);
}
inline ::StringW System::Net::FtpControlStream::GetLoginDirectory(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetLoginDirectory", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, str);
}
inline int32_t System::Net::FtpControlStream::GetPortV4(::StringW responseString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPortV4", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, responseString);
}
inline int32_t System::Net::FtpControlStream::GetPortV6(::StringW responseString) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPortV6", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, responseString);
}
inline void System::Net::FtpControlStream::CreateFtpListenerSocket(::System::Net::FtpWebRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "CreateFtpListenerSocket", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request);
}
inline ::StringW System::Net::FtpControlStream::GetPortCommandLine(::System::Net::FtpWebRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "GetPortCommandLine", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, request);
}
inline ::StringW System::Net::FtpControlStream::FormatFtpCommand(::StringW command, ::StringW parameter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "FormatFtpCommand", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, command, parameter);
}
inline ::System::Net::Sockets::Socket* System::Net::FtpControlStream::CreateFtpDataSocket(::System::Net::FtpWebRequest* request, ::System::Net::Sockets::Socket* templateSocket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), "CreateFtpDataSocket", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method, request, templateSocket);
}
inline bool System::Net::FtpControlStream::CheckValid(::System::Net::ResponseDescription* response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(), 46)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, response, validThrough, completeLength);
}
inline ::System::Net::TriState System::Net::FtpControlStream::IsFtpDataStreamWriteable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpControlStream*>::get(),
                                                                             "IsFtpDataStreamWriteable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TriState, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::FtpControlStream::FtpControlStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
