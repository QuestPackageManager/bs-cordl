#pragma once
// IWYU pragma private; include "System/Net/Sockets/NetworkStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Net/Sockets/zzzz__SocketShutdown_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*)>(&::System::Net::Sockets::NetworkStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6352474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*, bool)>(&::System::Net::Sockets::NetworkStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6352618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*, ::System::IO::FileAccess, bool)>(
    &::System::Net::Sockets::NetworkStream::_ctor)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6352480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6352624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635262c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6352634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635263c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6352644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int32_t)>(&::System::Net::Sockets::NetworkStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6352830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6352a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int32_t)>(&::System::Net::Sockets::NetworkStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6352ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_DataAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_DataAvailable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6352b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_Length)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6352c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6352cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int64_t)>(&::System::Net::Sockets::NetworkStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6352d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::Sockets::NetworkStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::Sockets::NetworkStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6352d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Sockets::NetworkStream::Read)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6352dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)(::System::Span_1<uint8_t>)>(&::System::Net::Sockets::NetworkStream::Read)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x63530f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::ReadByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6353454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Net::Sockets::NetworkStream::Write)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x63534c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Net::Sockets::NetworkStream::Write)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6353804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(uint8_t)>(&::System::Net::Sockets::NetworkStream::WriteByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6353adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int32_t)>(&::System::Net::Sockets::NetworkStream::Close)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6353b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { "Close", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(bool)>(&::System::Net::Sockets::NetworkStream::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6353bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::Finalize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6353ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                          ::System::Object*)>(&::System::Net::Sockets::NetworkStream::BeginRead)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x6353cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::NetworkStream::EndRead)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6354060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                          ::System::Object*)>(&::System::Net::Sockets::NetworkStream::BeginWrite)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x63542b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::IAsyncResult*)>(&::System::Net::Sockets::NetworkStream::EndWrite)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6354620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::ReadAsync)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x6354874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::NetworkStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::ReadAsync)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6354f0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::WriteAsync)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x6355140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::NetworkStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::WriteAsync)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x63557a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63559d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Sockets::NetworkStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::Sockets::NetworkStream::FlushAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x63559d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int64_t)>(&::System::Net::Sockets::NetworkStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6355a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.SetSocketTimeoutOption
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::SocketShutdown, int32_t, bool)>(
    &::System::Net::Sockets::NetworkStream::SetSocketTimeoutOption)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x63528b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(),
                                                { "SetSocketTimeoutOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketShutdown>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_InternalSocket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_InternalSocket)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6355c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { "get_InternalSocket", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::NetworkStream::__cordl_internal_get__streamSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSocket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::NetworkStream::__cordl_internal_get__streamSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSocket;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__streamSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____streamSocket = value;
}
constexpr bool& System::Net::Sockets::NetworkStream::__cordl_internal_get__ownsSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownsSocket;
}
constexpr bool const& System::Net::Sockets::NetworkStream::__cordl_internal_get__ownsSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownsSocket;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__ownsSocket(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ownsSocket = value;
}
constexpr bool& System::Net::Sockets::NetworkStream::__cordl_internal_get__readable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readable;
}
constexpr bool const& System::Net::Sockets::NetworkStream::__cordl_internal_get__readable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readable;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__readable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readable = value;
}
constexpr bool& System::Net::Sockets::NetworkStream::__cordl_internal_get__writeable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeable;
}
constexpr bool const& System::Net::Sockets::NetworkStream::__cordl_internal_get__writeable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeable;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__writeable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeable = value;
}
constexpr int32_t& System::Net::Sockets::NetworkStream::__cordl_internal_get__closeTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeTimeout;
}
constexpr int32_t const& System::Net::Sockets::NetworkStream::__cordl_internal_get__closeTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeTimeout;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__closeTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeTimeout = value;
}
constexpr bool& System::Net::Sockets::NetworkStream::__cordl_internal_get__cleanedUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleanedUp;
}
constexpr bool const& System::Net::Sockets::NetworkStream::__cordl_internal_get__cleanedUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cleanedUp;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__cleanedUp(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cleanedUp = value;
}
constexpr int32_t& System::Net::Sockets::NetworkStream::__cordl_internal_get__currentReadTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentReadTimeout;
}
constexpr int32_t const& System::Net::Sockets::NetworkStream::__cordl_internal_get__currentReadTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentReadTimeout;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__currentReadTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentReadTimeout = value;
}
constexpr int32_t& System::Net::Sockets::NetworkStream::__cordl_internal_get__currentWriteTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentWriteTimeout;
}
constexpr int32_t const& System::Net::Sockets::NetworkStream::__cordl_internal_get__currentWriteTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentWriteTimeout;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__currentWriteTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentWriteTimeout = value;
}
inline void System::Net::Sockets::NetworkStream::_ctor(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void System::Net::Sockets::NetworkStream::_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket, ownsSocket);
}
inline void System::Net::Sockets::NetworkStream::_ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Net::Sockets::Socket*>(), ::i2c::type_of<::System::IO::FileAccess>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket, access, ownsSocket);
}
inline bool System::Net::Sockets::NetworkStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Sockets::NetworkStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Sockets::NetworkStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::Sockets::NetworkStream::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::NetworkStream::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::Sockets::NetworkStream::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::NetworkStream::get_DataAvailable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Net::Sockets::NetworkStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Net::Sockets::NetworkStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::Sockets::NetworkStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline int32_t System::Net::Sockets::NetworkStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, size);
}
inline int32_t System::Net::Sockets::NetworkStream::Read(::System::Span_1<uint8_t> destination) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, destination);
}
inline int32_t System::Net::Sockets::NetworkStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::Sockets::NetworkStream::Write(::System::ReadOnlySpan_1<uint8_t> source) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void System::Net::Sockets::NetworkStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::NetworkStream::Close(int32_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { "Close", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeout);
}
inline void System::Net::Sockets::NetworkStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::NetworkStream::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Sockets::NetworkStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline int32_t System::Net::Sockets::NetworkStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::Sockets::NetworkStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::Sockets::NetworkStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::NetworkStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::NetworkStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::Sockets::NetworkStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size,
                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::NetworkStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline void System::Net::Sockets::NetworkStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::Sockets::NetworkStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::Sockets::NetworkStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::Sockets::NetworkStream::SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, int32_t timeout, bool silent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(),
                                              { "SetSocketTimeoutOption", {}, { ::i2c::type_of<::System::Net::Sockets::SocketShutdown>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode, timeout, silent);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::NetworkStream::get_InternalSocket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::NetworkStream*>(), { "get_InternalSocket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*>(this, ___internal_method);
}
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::NetworkStream::New_ctor(::System::Net::Sockets::Socket* socket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::NetworkStream*>(socket));
}
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::NetworkStream::New_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::NetworkStream*>(socket, ownsSocket));
}
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::NetworkStream::New_ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::NetworkStream*>(socket, access, ownsSocket));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::NetworkStream::NetworkStream() {}
