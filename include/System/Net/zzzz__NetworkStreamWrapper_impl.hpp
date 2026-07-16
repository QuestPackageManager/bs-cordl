#pragma once
// IWYU pragma private; include "System/Net/NetworkStreamWrapper.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__NetworkStreamWrapper_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(::System::Net::Sockets::TcpClient*)>(&::System::Net::NetworkStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6405a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::TcpClient*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_UsingSecureStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_UsingSecureStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6405afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_UsingSecureStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_ServerAddress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_ServerAddress)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6405b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_ServerAddress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_Socket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_Socket)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6405c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_Socket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_NetworkStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::NetworkStream* (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_NetworkStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6405c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_NetworkStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.set_NetworkStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(::System::Net::Sockets::NetworkStream*)>(
    &::System::Net::NetworkStreamWrapper::set_NetworkStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6405c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "set_NetworkStream", {}, { ::i2c::type_of<::System::Net::Sockets::NetworkStream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6405c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6405c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6405c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_CanTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_CanTimeout)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6405c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(int32_t)>(&::System::Net::NetworkStreamWrapper::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(int32_t)>(&::System::Net::NetworkStreamWrapper::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6405d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(int64_t)>(&::System::Net::NetworkStreamWrapper::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::NetworkStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::NetworkStreamWrapper::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::NetworkStreamWrapper::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::NetworkStreamWrapper::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(bool)>(&::System::Net::NetworkStreamWrapper::Dispose)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6405de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.CloseSocket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::CloseSocket)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x63fcec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "CloseSocket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(int32_t)>(&::System::Net::NetworkStreamWrapper::Close)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6405e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "Close", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                        ::System::Object*)>(&::System::Net::NetworkStreamWrapper::BeginRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::NetworkStreamWrapper::*)(::System::IAsyncResult*)>(&::System::Net::NetworkStreamWrapper::EndRead)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::NetworkStreamWrapper::ReadAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                        ::System::Object*)>(&::System::Net::NetworkStreamWrapper::BeginWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(::System::IAsyncResult*)>(&::System::Net::NetworkStreamWrapper::EndWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::NetworkStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::NetworkStreamWrapper::WriteAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)()>(&::System::Net::NetworkStreamWrapper::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::NetworkStreamWrapper::*)(::System::Threading::CancellationToken)>(
    &::System::Net::NetworkStreamWrapper::FlushAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(int64_t)>(&::System::Net::NetworkStreamWrapper::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6405f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::NetworkStreamWrapper.SetSocketTimeoutOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::NetworkStreamWrapper::*)(int32_t)>(&::System::Net::NetworkStreamWrapper::SetSocketTimeoutOption)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64026e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "SetSocketTimeoutOption", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::TcpClient*& System::Net::NetworkStreamWrapper::__cordl_internal_get__client() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr ::System::Net::Sockets::TcpClient* const& System::Net::NetworkStreamWrapper::__cordl_internal_get__client() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____client;
}
constexpr void System::Net::NetworkStreamWrapper::__cordl_internal_set__client(::System::Net::Sockets::TcpClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____client = value;
}
constexpr ::System::Net::Sockets::NetworkStream*& System::Net::NetworkStreamWrapper::__cordl_internal_get__networkStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkStream;
}
constexpr ::System::Net::Sockets::NetworkStream* const& System::Net::NetworkStreamWrapper::__cordl_internal_get__networkStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkStream;
}
constexpr void System::Net::NetworkStreamWrapper::__cordl_internal_set__networkStream(::System::Net::Sockets::NetworkStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____networkStream = value;
}
inline void System::Net::NetworkStreamWrapper::_ctor(::System::Net::Sockets::TcpClient* client) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::TcpClient*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline bool System::Net::NetworkStreamWrapper::get_UsingSecureStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_UsingSecureStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::IPAddress* System::Net::NetworkStreamWrapper::get_ServerAddress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_ServerAddress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline ::System::Net::Sockets::Socket* System::Net::NetworkStreamWrapper::get_Socket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_Socket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method);
}
inline ::System::Net::Sockets::NetworkStream* System::Net::NetworkStreamWrapper::get_NetworkStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "get_NetworkStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::NetworkStream*>(this, ___internal_method);
}
inline void System::Net::NetworkStreamWrapper::set_NetworkStream(::System::Net::Sockets::NetworkStream* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "set_NetworkStream", {}, { ::i2c::type_of<::System::Net::Sockets::NetworkStream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::NetworkStreamWrapper::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::NetworkStreamWrapper::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::NetworkStreamWrapper::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::NetworkStreamWrapper::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::NetworkStreamWrapper::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::NetworkStreamWrapper::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::NetworkStreamWrapper::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::NetworkStreamWrapper::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::NetworkStreamWrapper::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::NetworkStreamWrapper::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::NetworkStreamWrapper::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::NetworkStreamWrapper::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline int32_t System::Net::NetworkStreamWrapper::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::NetworkStreamWrapper::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::NetworkStreamWrapper::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::NetworkStreamWrapper::CloseSocket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "CloseSocket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::NetworkStreamWrapper::Close(int32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "Close", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline ::System::IAsyncResult* System::Net::NetworkStreamWrapper::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline int32_t System::Net::NetworkStreamWrapper::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::NetworkStreamWrapper::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::IAsyncResult* System::Net::NetworkStreamWrapper::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::NetworkStreamWrapper::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task* System::Net::NetworkStreamWrapper::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline void System::Net::NetworkStreamWrapper::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::NetworkStreamWrapper::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::NetworkStreamWrapper::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::NetworkStreamWrapper::SetSocketTimeoutOption(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::NetworkStreamWrapper*>(), { "SetSocketTimeoutOption", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline ::System::Net::NetworkStreamWrapper* System::Net::NetworkStreamWrapper::New_ctor(::System::Net::Sockets::TcpClient* client) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::NetworkStreamWrapper*>(client));
}
// Ctor Parameters []
constexpr ::System::Net::NetworkStreamWrapper::NetworkStreamWrapper() {}
