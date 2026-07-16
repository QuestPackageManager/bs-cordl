#pragma once
// IWYU pragma private; include "System/Net/FtpControlStream.hpp"
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
constexpr ::System::Net::FtpControlStream_GetPathOption::FtpControlStream_GetPathOption(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::FtpControlStream_GetPathOption::FtpControlStream_GetPathOption() {}
constexpr ::System::Net::FtpControlStream_GetPathOption System::Net::FtpControlStream_GetPathOption::Normal{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::FtpControlStream_GetPathOption System::Net::FtpControlStream_GetPathOption::AssumeFilename{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::FtpControlStream_GetPathOption System::Net::FtpControlStream_GetPathOption::AssumeNoFilename{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Net::FtpControlStream___c__DisplayClass31_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream___c__DisplayClass31_0::*)()>(&::System::Net::FtpControlStream___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63fcdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream___c__DisplayClass31_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream___c__DisplayClass31_0._PipelineCallback_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream___c__DisplayClass31_0::*)(::System::IAsyncResult*)>(
    &::System::Net::FtpControlStream___c__DisplayClass31_0::_PipelineCallback_b__0)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x63fcdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream___c__DisplayClass31_0*>(), { "<PipelineCallback>b__0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::FtpControlStream*& System::Net::FtpControlStream___c__DisplayClass31_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::System::Net::FtpControlStream* const& System::Net::FtpControlStream___c__DisplayClass31_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void System::Net::FtpControlStream___c__DisplayClass31_0::__cordl_internal_set___4__this(::System::Net::FtpControlStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Net::TlsStream*& System::Net::FtpControlStream___c__DisplayClass31_0::__cordl_internal_get_tlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsStream;
}
constexpr ::System::Net::TlsStream* const& System::Net::FtpControlStream___c__DisplayClass31_0::__cordl_internal_get_tlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tlsStream;
}
constexpr void System::Net::FtpControlStream___c__DisplayClass31_0::__cordl_internal_set_tlsStream(::System::Net::TlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tlsStream = value;
}
inline void System::Net::FtpControlStream___c__DisplayClass31_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream___c__DisplayClass31_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::FtpControlStream___c__DisplayClass31_0::_PipelineCallback_b__0(::System::IAsyncResult* ar) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream___c__DisplayClass31_0*>(), { "<PipelineCallback>b__0", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::System::Net::FtpControlStream___c__DisplayClass31_0* System::Net::FtpControlStream___c__DisplayClass31_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FtpControlStream___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::FtpControlStream___c__DisplayClass31_0::FtpControlStream___c__DisplayClass31_0() {}
//  Writing Method size for method: ::System::Net::FtpControlStream.get_Credentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::NetworkCredential* (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_Credentials)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x63f8794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_Credentials", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.set_Credentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)(::System::Net::NetworkCredential*)>(&::System::Net::FtpControlStream::set_Credentials)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63f8840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "set_Credentials", {}, { ::i2c::type_of<::System::Net::NetworkCredential*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)(::System::Net::Sockets::TcpClient*)>(&::System::Net::FtpControlStream::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63f88d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::TcpClient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.AbortConnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::AbortConnect)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x63f8950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "AbortConnect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.AcceptCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::FtpControlStream::AcceptCallback)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x63f89e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "AcceptCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.ConnectCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::FtpControlStream::ConnectCallback)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x63f8d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "ConnectCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.SSLHandshakeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IAsyncResult*)>(&::System::Net::FtpControlStream::SSLHandshakeCallback)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x63f8f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "SSLHandshakeCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.QueueOrCreateFtpDataStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CommandStream_PipelineInstruction (::System::Net::FtpControlStream::*)(::by_ref<::System::IO::Stream*>)>(
    &::System::Net::FtpControlStream::QueueOrCreateFtpDataStream)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x63f90ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "QueueOrCreateFtpDataStream", {}, { ::i2c::type_of<::by_ref<::System::IO::Stream*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.ClearState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::ClearState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x63f942c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { ::i2c::class_of<::System::Net::FtpControlStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.PipelineCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CommandStream_PipelineInstruction (::System::Net::FtpControlStream::*)(
    ::System::Net::CommandStream_PipelineEntry*, ::System::Net::ResponseDescription*, bool, ::by_ref<::System::IO::Stream*>)>(&::System::Net::FtpControlStream::PipelineCallback)> {
  constexpr static std::size_t size = 0x8c0;
  constexpr static std::size_t addrs = 0x63f94e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { ::i2c::class_of<::System::Net::FtpControlStream*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.BuildCommandsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Net::CommandStream_PipelineEntry*> (::System::Net::FtpControlStream::*)(::System::Net::WebRequest*)>(
    &::System::Net::FtpControlStream::BuildCommandsList)> {
  constexpr static std::size_t size = 0xda0;
  constexpr static std::size_t addrs = 0x63fae7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { ::i2c::class_of<::System::Net::FtpControlStream*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.QueueOrCreateDataConection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::CommandStream_PipelineInstruction (::System::Net::FtpControlStream::*)(
    ::System::Net::CommandStream_PipelineEntry*, ::System::Net::ResponseDescription*, bool, ::by_ref<::System::IO::Stream*>, ::by_ref<bool>)>(
    &::System::Net::FtpControlStream::QueueOrCreateDataConection)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x63f9da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(),
                                                             { "QueueOrCreateDataConection",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::CommandStream_PipelineEntry*>(), ::i2c::type_of<::System::Net::ResponseDescription*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPathInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::FtpControlStream_GetPathOption, ::System::Uri*, ::by_ref<::StringW>, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Net::FtpControlStream::GetPathInfo)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x63fbd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(),
                                                             { "GetPathInfo",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::FtpControlStream_GetPathOption>(), ::i2c::type_of<::System::Uri*>(),
                                                                 ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.FormatAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::FtpControlStream::FormatAddress)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x63fc648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "FormatAddress", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.FormatAddressV6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::System::Net::IPAddress*, int32_t)>(&::System::Net::FtpControlStream::FormatAddressV6)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x63fc774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "FormatAddressV6", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63fc878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_ContentLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_LastModified
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_LastModified)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63fc880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_LastModified", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_ResponseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63fc888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_ResponseUri", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_BannerMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_BannerMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63fc890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_BannerMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_WelcomeMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_WelcomeMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63fc8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_WelcomeMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.get_ExitMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::get_ExitMessage)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63fc8c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_ExitMessage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetContentLengthFrom213Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetContentLengthFrom213Response)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x63fa8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetContentLengthFrom213Response", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetLastModifiedFrom213Response
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetLastModifiedFrom213Response)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x63fa9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetLastModifiedFrom213Response", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.TryUpdateResponseUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)(::StringW, ::System::Net::FtpWebRequest*)>(&::System::Net::FtpControlStream::TryUpdateResponseUri)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x63fa538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "TryUpdateResponseUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::FtpWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.TryUpdateContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::TryUpdateContentLength)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x63fa434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "TryUpdateContentLength", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetLoginDirectory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetLoginDirectory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63fade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetLoginDirectory", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPortV4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetPortV4)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x63fc1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetPortV4", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPortV6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FtpControlStream::*)(::StringW)>(&::System::Net::FtpControlStream::GetPortV6)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x63fc3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetPortV6", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.CreateFtpListenerSocket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FtpControlStream::*)(::System::Net::FtpWebRequest*)>(&::System::Net::FtpControlStream::CreateFtpListenerSocket)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x63fbe74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "CreateFtpListenerSocket", {}, { ::i2c::type_of<::System::Net::FtpWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.GetPortCommandLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::System::Net::FtpWebRequest*)>(&::System::Net::FtpControlStream::GetPortCommandLine)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x63fbff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetPortCommandLine", {}, { ::i2c::type_of<::System::Net::FtpWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.FormatFtpCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FtpControlStream::*)(::StringW, ::StringW)>(&::System::Net::FtpControlStream::FormatFtpCommand)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x63fbc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "FormatFtpCommand", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.CreateFtpDataSocket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::FtpControlStream::*)(::System::Net::FtpWebRequest*, ::System::Net::Sockets::Socket*)>(
    &::System::Net::FtpControlStream::CreateFtpDataSocket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x63fc5c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(),
                                                             { "CreateFtpDataSocket", {}, { ::i2c::type_of<::System::Net::FtpWebRequest*>(), ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.CheckValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FtpControlStream::*)(::System::Net::ResponseDescription*, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::System::Net::FtpControlStream::CheckValid)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x63fc8d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { ::i2c::class_of<::System::Net::FtpControlStream*>(), 46 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpControlStream.IsFtpDataStreamWriteable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::TriState (::System::Net::FtpControlStream::*)()>(&::System::Net::FtpControlStream::IsFtpDataStreamWriteable)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63f93a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "IsFtpDataStreamWriteable", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::FtpControlStream::__cordl_internal_get__dataSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::FtpControlStream::__cordl_internal_get__dataSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSocket;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__dataSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSocket = value;
}
constexpr ::System::Net::IPEndPoint*& System::Net::FtpControlStream::__cordl_internal_get__passiveEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passiveEndPoint;
}
constexpr ::System::Net::IPEndPoint* const& System::Net::FtpControlStream::__cordl_internal_get__passiveEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____passiveEndPoint;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__passiveEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____passiveEndPoint = value;
}
constexpr ::System::Net::TlsStream*& System::Net::FtpControlStream::__cordl_internal_get__tlsStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tlsStream;
}
constexpr ::System::Net::TlsStream* const& System::Net::FtpControlStream::__cordl_internal_get__tlsStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tlsStream;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__tlsStream(::System::Net::TlsStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tlsStream = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::FtpControlStream::__cordl_internal_get__bannerMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerMessage;
}
constexpr ::System::Text::StringBuilder* const& System::Net::FtpControlStream::__cordl_internal_get__bannerMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bannerMessage;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__bannerMessage(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bannerMessage = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::FtpControlStream::__cordl_internal_get__welcomeMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____welcomeMessage;
}
constexpr ::System::Text::StringBuilder* const& System::Net::FtpControlStream::__cordl_internal_get__welcomeMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____welcomeMessage;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__welcomeMessage(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____welcomeMessage = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::FtpControlStream::__cordl_internal_get__exitMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitMessage;
}
constexpr ::System::Text::StringBuilder* const& System::Net::FtpControlStream::__cordl_internal_get__exitMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exitMessage;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__exitMessage(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exitMessage = value;
}
constexpr ::System::WeakReference*& System::Net::FtpControlStream::__cordl_internal_get__credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr ::System::WeakReference* const& System::Net::FtpControlStream::__cordl_internal_get__credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____credentials;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__credentials(::System::WeakReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____credentials = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__cordl_internal_get__currentTypeSetting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTypeSetting;
}
constexpr ::StringW const& System::Net::FtpControlStream::__cordl_internal_get__currentTypeSetting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentTypeSetting;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__currentTypeSetting(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentTypeSetting = value;
}
constexpr int64_t& System::Net::FtpControlStream::__cordl_internal_get__contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentLength;
}
constexpr int64_t const& System::Net::FtpControlStream::__cordl_internal_get__contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentLength;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentLength = value;
}
constexpr ::System::DateTime& System::Net::FtpControlStream::__cordl_internal_get__lastModified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr ::System::DateTime const& System::Net::FtpControlStream::__cordl_internal_get__lastModified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastModified;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__lastModified(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastModified = value;
}
constexpr bool& System::Net::FtpControlStream::__cordl_internal_get__dataHandshakeStarted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataHandshakeStarted;
}
constexpr bool const& System::Net::FtpControlStream::__cordl_internal_get__dataHandshakeStarted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataHandshakeStarted;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__dataHandshakeStarted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataHandshakeStarted = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__cordl_internal_get__loginDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginDirectory;
}
constexpr ::StringW const& System::Net::FtpControlStream::__cordl_internal_get__loginDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginDirectory;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__loginDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loginDirectory = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__cordl_internal_get__establishedServerDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____establishedServerDirectory;
}
constexpr ::StringW const& System::Net::FtpControlStream::__cordl_internal_get__establishedServerDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____establishedServerDirectory;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__establishedServerDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____establishedServerDirectory = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__cordl_internal_get__requestedServerDirectory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedServerDirectory;
}
constexpr ::StringW const& System::Net::FtpControlStream::__cordl_internal_get__requestedServerDirectory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestedServerDirectory;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__requestedServerDirectory(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestedServerDirectory = value;
}
constexpr ::System::Uri*& System::Net::FtpControlStream::__cordl_internal_get__responseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseUri;
}
constexpr ::System::Uri* const& System::Net::FtpControlStream::__cordl_internal_get__responseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseUri;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__responseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____responseUri = value;
}
constexpr ::System::Net::FtpLoginState& System::Net::FtpControlStream::__cordl_internal_get__loginState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginState;
}
constexpr ::System::Net::FtpLoginState const& System::Net::FtpControlStream::__cordl_internal_get__loginState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loginState;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set__loginState(::System::Net::FtpLoginState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loginState = value;
}
constexpr ::System::Net::FtpStatusCode& System::Net::FtpControlStream::__cordl_internal_get_StatusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr ::System::Net::FtpStatusCode const& System::Net::FtpControlStream::__cordl_internal_get_StatusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusCode;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set_StatusCode(::System::Net::FtpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusCode = value;
}
constexpr ::StringW& System::Net::FtpControlStream::__cordl_internal_get_StatusLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusLine;
}
constexpr ::StringW const& System::Net::FtpControlStream::__cordl_internal_get_StatusLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___StatusLine;
}
constexpr void System::Net::FtpControlStream::__cordl_internal_set_StatusLine(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___StatusLine = value;
}
inline void System::Net::FtpControlStream::setStaticF_s_acceptCallbackDelegate(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_acceptCallbackDelegate", ::System::Net::FtpControlStream*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::FtpControlStream::getStaticF_s_acceptCallbackDelegate() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_acceptCallbackDelegate", ::System::Net::FtpControlStream*>();
}
inline void System::Net::FtpControlStream::setStaticF_s_connectCallbackDelegate(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_connectCallbackDelegate", ::System::Net::FtpControlStream*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::FtpControlStream::getStaticF_s_connectCallbackDelegate() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_connectCallbackDelegate", ::System::Net::FtpControlStream*>();
}
inline void System::Net::FtpControlStream::setStaticF_s_SSLHandshakeCallback(::System::AsyncCallback* value) {
  ::cordl_internals::setStaticField<::System::AsyncCallback*, "s_SSLHandshakeCallback", ::System::Net::FtpControlStream*>(std::forward<::System::AsyncCallback*>(value));
}
inline ::System::AsyncCallback* System::Net::FtpControlStream::getStaticF_s_SSLHandshakeCallback() {
  return ::cordl_internals::getStaticField<::System::AsyncCallback*, "s_SSLHandshakeCallback", ::System::Net::FtpControlStream*>();
}
inline ::System::Net::NetworkCredential* System::Net::FtpControlStream::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_Credentials", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::NetworkCredential*>(this, ___internal_method);
}
inline void System::Net::FtpControlStream::set_Credentials(::System::Net::NetworkCredential* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "set_Credentials", {}, { ::i2c::type_of<::System::Net::NetworkCredential*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::FtpControlStream::_ctor(::System::Net::Sockets::TcpClient* client) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::TcpClient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void System::Net::FtpControlStream::AbortConnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "AbortConnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::FtpControlStream::AcceptCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "AcceptCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline void System::Net::FtpControlStream::ConnectCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "ConnectCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline void System::Net::FtpControlStream::SSLHandshakeCallback(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "SSLHandshakeCallback", {}, { ::i2c::type_of<::System::IAsyncResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, asyncResult);
}
inline ::System::Net::CommandStream_PipelineInstruction System::Net::FtpControlStream::QueueOrCreateFtpDataStream(::by_ref<::System::IO::Stream*> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "QueueOrCreateFtpDataStream", {}, { ::i2c::type_of<::by_ref<::System::IO::Stream*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CommandStream_PipelineInstruction>(this, ___internal_method, stream);
}
inline void System::Net::FtpControlStream::ClearState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FtpControlStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::CommandStream_PipelineInstruction System::Net::FtpControlStream::PipelineCallback(::System::Net::CommandStream_PipelineEntry* entry, ::System::Net::ResponseDescription* response,
                                                                                                        bool timeout, ::by_ref<::System::IO::Stream*> stream) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FtpControlStream*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CommandStream_PipelineInstruction>(this, ___internal_method, entry, response, timeout, stream);
}
inline ::ArrayW<::System::Net::CommandStream_PipelineEntry*> System::Net::FtpControlStream::BuildCommandsList(::System::Net::WebRequest* req) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FtpControlStream*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Net::CommandStream_PipelineEntry*>>(this, ___internal_method, req);
}
inline ::System::Net::CommandStream_PipelineInstruction System::Net::FtpControlStream::QueueOrCreateDataConection(::System::Net::CommandStream_PipelineEntry* entry,
                                                                                                                  ::System::Net::ResponseDescription* response, bool timeout,
                                                                                                                  ::by_ref<::System::IO::Stream*> stream, ::by_ref<bool> isSocketReady) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "QueueOrCreateDataConection",
                                                                                 {},
                                                                                 { ::i2c::type_of<::System::Net::CommandStream_PipelineEntry*>(), ::i2c::type_of<::System::Net::ResponseDescription*>(),
                                                                                   ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::IO::Stream*>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::CommandStream_PipelineInstruction>(this, ___internal_method, entry, response, timeout, stream, isSocketReady);
}
inline void System::Net::FtpControlStream::GetPathInfo(::System::Net::FtpControlStream_GetPathOption pathOption, ::System::Uri* uri, ::by_ref<::StringW> path, ::by_ref<::StringW> directory,
                                                       ::by_ref<::StringW> filename) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(),
                                                           { "GetPathInfo",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::FtpControlStream_GetPathOption>(), ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::StringW>>(),
                                                               ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pathOption, uri, path, directory, filename);
}
inline ::StringW System::Net::FtpControlStream::FormatAddress(::System::Net::IPAddress* address, int32_t Port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "FormatAddress", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, Port);
}
inline ::StringW System::Net::FtpControlStream::FormatAddressV6(::System::Net::IPAddress* address, int32_t port) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "FormatAddressV6", {}, { ::i2c::type_of<::System::Net::IPAddress*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, port);
}
inline int64_t System::Net::FtpControlStream::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_ContentLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::DateTime System::Net::FtpControlStream::get_LastModified() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_LastModified", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::Uri* System::Net::FtpControlStream::get_ResponseUri() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_ResponseUri", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::StringW System::Net::FtpControlStream::get_BannerMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_BannerMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::FtpControlStream::get_WelcomeMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_WelcomeMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Net::FtpControlStream::get_ExitMessage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "get_ExitMessage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int64_t System::Net::FtpControlStream::GetContentLengthFrom213Response(::StringW responseString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetContentLengthFrom213Response", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, responseString);
}
inline ::System::DateTime System::Net::FtpControlStream::GetLastModifiedFrom213Response(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetLastModifiedFrom213Response", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, str);
}
inline void System::Net::FtpControlStream::TryUpdateResponseUri(::StringW str, ::System::Net::FtpWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "TryUpdateResponseUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Net::FtpWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str, request);
}
inline void System::Net::FtpControlStream::TryUpdateContentLength(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "TryUpdateContentLength", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, str);
}
inline ::StringW System::Net::FtpControlStream::GetLoginDirectory(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetLoginDirectory", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, str);
}
inline int32_t System::Net::FtpControlStream::GetPortV4(::StringW responseString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetPortV4", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, responseString);
}
inline int32_t System::Net::FtpControlStream::GetPortV6(::StringW responseString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetPortV6", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, responseString);
}
inline void System::Net::FtpControlStream::CreateFtpListenerSocket(::System::Net::FtpWebRequest* request) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "CreateFtpListenerSocket", {}, { ::i2c::type_of<::System::Net::FtpWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::StringW System::Net::FtpControlStream::GetPortCommandLine(::System::Net::FtpWebRequest* request) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "GetPortCommandLine", {}, { ::i2c::type_of<::System::Net::FtpWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, request);
}
inline ::StringW System::Net::FtpControlStream::FormatFtpCommand(::StringW command, ::StringW parameter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "FormatFtpCommand", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, command, parameter);
}
inline ::System::Net::Sockets::Socket* System::Net::FtpControlStream::CreateFtpDataSocket(::System::Net::FtpWebRequest* request, ::System::Net::Sockets::Socket* templateSocket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(),
                                                           { "CreateFtpDataSocket", {}, { ::i2c::type_of<::System::Net::FtpWebRequest*>(), ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method, request, templateSocket);
}
inline bool System::Net::FtpControlStream::CheckValid(::System::Net::ResponseDescription* response, ::by_ref<int32_t> validThrough, ::by_ref<int32_t> completeLength) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FtpControlStream*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, validThrough, completeLength);
}
inline ::System::Net::TriState System::Net::FtpControlStream::IsFtpDataStreamWriteable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FtpControlStream*>(), { "IsFtpDataStreamWriteable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::TriState>(this, ___internal_method);
}
inline ::System::Net::FtpControlStream* System::Net::FtpControlStream::New_ctor(::System::Net::Sockets::TcpClient* client) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FtpControlStream*>(client));
}
// Ctor Parameters []
constexpr ::System::Net::FtpControlStream::FtpControlStream() {}
