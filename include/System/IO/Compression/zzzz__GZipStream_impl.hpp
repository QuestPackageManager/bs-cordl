#pragma once
// IWYU pragma private; include "System\IO\Compression\GZipStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/Compression/zzzz__GZipStream_def.hpp"
#include "System/IO/Compression/zzzz__CompressionLevel_def.hpp"
#include "System/IO/Compression/zzzz__CompressionMode_def.hpp"
#include "System/IO/Compression/zzzz__DeflateStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
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
//  Writing Method size for method: ::System::IO::Compression::GZipStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode)>(
    &::System::IO::Compression::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f401c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::IO::Stream*, ::System::IO::Compression::CompressionMode, bool)>(
    &::System::IO::Compression::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x63f4024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionMode>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::IO::Stream*, ::System::IO::Compression::CompressionLevel)>(
    &::System::IO::Compression::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63f40d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::IO::Stream*, ::System::IO::Compression::CompressionLevel, bool)>(
    &::System::IO::Compression::GZipStream::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x63f40e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionLevel>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::get_CanRead)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63f418c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63f41a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x63f41bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::get_Length)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f41d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::get_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f4220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(int64_t)>(&::System::IO::Compression::GZipStream::set_Position)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f42b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::Compression::GZipStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::Compression::GZipStream::Seek)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f42ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(int64_t)>(&::System::IO::Compression::GZipStream::SetLength)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f4338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::ReadByte)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f4384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Compression::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                          ::System::Object*)>(&::System::IO::Compression::GZipStream::BeginRead)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63f43a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::GZipStream::*)(::System::IAsyncResult*)>(&::System::IO::Compression::GZipStream::EndRead)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x63f4454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Compression::GZipStream::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f44a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::Compression::GZipStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::Compression::GZipStream::Read)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63f44c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::IO::Compression::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                          ::System::Object*)>(&::System::IO::Compression::GZipStream::BeginWrite)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x63f46b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::IAsyncResult*)>(&::System::IO::Compression::GZipStream::EndWrite)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f4760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::Compression::GZipStream::Write)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f476c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::Compression::GZipStream::Write)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x63f478c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::Compression::GZipStream::CopyTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f48f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)(bool)>(&::System::IO::Compression::GZipStream::Dispose)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x63f4910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::IO::Compression::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::GZipStream::ReadAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f4974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::Compression::GZipStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::Compression::GZipStream::ReadAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63f4994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::IO::Compression::GZipStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::GZipStream::WriteAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f4a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::Compression::GZipStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::Compression::GZipStream::WriteAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x63f4a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::Compression::GZipStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::Compression::GZipStream::FlushAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f4b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::System::IO::Compression::GZipStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::Compression::GZipStream::CopyToAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x63f4b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.CheckDeflateStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::Compression::GZipStream::*)()>(&::System::IO::Compression::GZipStream::CheckDeflateStream)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x63f42d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { "CheckDeflateStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Compression::GZipStream.ThrowStreamClosedException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::Compression::GZipStream::ThrowStreamClosedException)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x63f4b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { "ThrowStreamClosedException", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Compression::DeflateStream*& System::IO::Compression::GZipStream::__cordl_internal_get__deflateStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deflateStream;
}
constexpr ::System::IO::Compression::DeflateStream* const& System::IO::Compression::GZipStream::__cordl_internal_get__deflateStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deflateStream;
}
constexpr void System::IO::Compression::GZipStream::__cordl_internal_set__deflateStream(::System::IO::Compression::DeflateStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deflateStream = value;
}
inline void System::IO::Compression::GZipStream::_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode);
}
inline void System::IO::Compression::GZipStream::_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionMode>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, mode, leaveOpen);
}
inline void System::IO::Compression::GZipStream::_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, compressionLevel);
}
inline void System::IO::Compression::GZipStream::_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel, bool leaveOpen) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::IO::Compression::CompressionLevel>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, compressionLevel, leaveOpen);
}
inline bool System::IO::Compression::GZipStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::Compression::GZipStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::Compression::GZipStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::IO::Compression::GZipStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::IO::Compression::GZipStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::Compression::GZipStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::Compression::GZipStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t System::IO::Compression::GZipStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void System::IO::Compression::GZipStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::Compression::GZipStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::IO::Compression::GZipStream::BeginRead(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback,
                                                                              ::System::Object* asyncState) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, array, offset, count, asyncCallback, asyncState);
}
inline int32_t System::IO::Compression::GZipStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline int32_t System::IO::Compression::GZipStream::Read(::ArrayW<uint8_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, offset, count);
}
inline int32_t System::IO::Compression::GZipStream::Read(::System::Span_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline ::System::IAsyncResult* System::IO::Compression::GZipStream::BeginWrite(::ArrayW<uint8_t> array, int32_t offset, int32_t count, ::System::AsyncCallback* asyncCallback,
                                                                               ::System::Object* asyncState) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, array, offset, count, asyncCallback, asyncState);
}
inline void System::IO::Compression::GZipStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline void System::IO::Compression::GZipStream::Write(::ArrayW<uint8_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, offset, count);
}
inline void System::IO::Compression::GZipStream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::Compression::GZipStream::CopyTo(::System::IO::Stream* destination, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, bufferSize);
}
inline void System::IO::Compression::GZipStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::Compression::GZipStream::ReadAsync(::ArrayW<uint8_t> array, int32_t offset, int32_t count,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, array, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::Compression::GZipStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::GZipStream::WriteAsync(::ArrayW<uint8_t> array, int32_t offset, int32_t count,
                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, array, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::IO::Compression::GZipStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::GZipStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::IO::Compression::GZipStream::CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize,
                                                                                          ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Compression::GZipStream*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline void System::IO::Compression::GZipStream::CheckDeflateStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { "CheckDeflateStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::Compression::GZipStream::ThrowStreamClosedException() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Compression::GZipStream*>(), { "ThrowStreamClosedException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::IO::Compression::GZipStream* System::IO::Compression::GZipStream::New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::GZipStream*>(stream, mode));
}
inline ::System::IO::Compression::GZipStream* System::IO::Compression::GZipStream::New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionMode mode, bool leaveOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::GZipStream*>(stream, mode, leaveOpen));
}
inline ::System::IO::Compression::GZipStream* System::IO::Compression::GZipStream::New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::GZipStream*>(stream, compressionLevel));
}
inline ::System::IO::Compression::GZipStream* System::IO::Compression::GZipStream::New_ctor(::System::IO::Stream* stream, ::System::IO::Compression::CompressionLevel compressionLevel,
                                                                                            bool leaveOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Compression::GZipStream*>(stream, compressionLevel, leaveOpen));
}
// Ctor Parameters []
constexpr ::System::IO::Compression::GZipStream::GZipStream() {}
