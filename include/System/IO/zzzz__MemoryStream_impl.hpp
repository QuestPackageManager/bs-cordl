#pragma once
// IWYU pragma private; include "System/IO/MemoryStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf4fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(int32_t)>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5bf4fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>)>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf5130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, bool)>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5bf5138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5bf521c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf53e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool, bool)>(&::System::IO::MemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5bf5228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(),
                            { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf53f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf53f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf5400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.EnsureNotClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::EnsureNotClosed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bf5408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "EnsureNotClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.EnsureWriteable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::EnsureWriteable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf5438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "EnsureWriteable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(bool)>(&::System::IO::MemoryStream::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5bf5474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.EnsureCapacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::MemoryStream::*)(int32_t)>(&::System::IO::MemoryStream::EnsureCapacity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5bf5488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf553c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::MemoryStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::MemoryStream::FlushAsync)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5bf5540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.GetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::GetBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5bf5714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.InternalGetBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::InternalGetBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf5770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalGetBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.InternalGetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::InternalGetPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf5778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalGetPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.InternalReadInt32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::InternalReadInt32)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bf5780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalReadInt32", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.InternalEmulateRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)(int32_t)>(&::System::IO::MemoryStream::InternalEmulateRead)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5bf5838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalEmulateRead", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.get_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::get_Capacity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf5874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.set_Capacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(int32_t)>(&::System::IO::MemoryStream::set_Capacity)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5bf5894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::get_Length)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5bf5a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bf5a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(int64_t)>(&::System::IO::MemoryStream::set_Position)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5bf5a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::MemoryStream::Read)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5bf5b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)(::System::Span_1<uint8_t>)>(&::System::IO::MemoryStream::Read)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5bf5d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::MemoryStream::ReadAsync)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5bf5ee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::MemoryStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::MemoryStream::ReadAsync)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5bf62d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::ReadByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bf6664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::System::IO::Stream*, int32_t)>(&::System::IO::MemoryStream::CopyTo)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bf66bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::MemoryStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::MemoryStream::CopyToAsync)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5bf6a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::IO::MemoryStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::IO::MemoryStream::Seek)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5bf6d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(int64_t)>(&::System::IO::MemoryStream::SetLength)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bf6ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.ToArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::IO::MemoryStream::*)()>(&::System::IO::MemoryStream::ToArray)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bf6fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::IO::MemoryStream::Write)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5bf70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::IO::MemoryStream::Write)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5bf7344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::IO::MemoryStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(
    &::System::IO::MemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5bf7558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::MemoryStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::MemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5bf78d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(uint8_t)>(&::System::IO::MemoryStream::WriteByte)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bf7bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::MemoryStream.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::MemoryStream::*)(::System::IO::Stream*)>(&::System::IO::MemoryStream::WriteTo)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5bf7ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ::i2c::class_of<::System::IO::MemoryStream*>(), 46 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::IO::MemoryStream::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::ArrayW<uint8_t> const& System::IO::MemoryStream::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__buffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int32_t& System::IO::MemoryStream::__cordl_internal_get__origin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____origin;
}
constexpr int32_t const& System::IO::MemoryStream::__cordl_internal_get__origin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____origin;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__origin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____origin = value;
}
constexpr int32_t& System::IO::MemoryStream::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr int32_t const& System::IO::MemoryStream::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__position(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr int32_t& System::IO::MemoryStream::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int32_t const& System::IO::MemoryStream::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr int32_t& System::IO::MemoryStream::__cordl_internal_get__capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr int32_t const& System::IO::MemoryStream::__cordl_internal_get__capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capacity = value;
}
constexpr bool& System::IO::MemoryStream::__cordl_internal_get__expandable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandable;
}
constexpr bool const& System::IO::MemoryStream::__cordl_internal_get__expandable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expandable;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__expandable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expandable = value;
}
constexpr bool& System::IO::MemoryStream::__cordl_internal_get__writable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writable;
}
constexpr bool const& System::IO::MemoryStream::__cordl_internal_get__writable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writable;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__writable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writable = value;
}
constexpr bool& System::IO::MemoryStream::__cordl_internal_get__exposable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exposable;
}
constexpr bool const& System::IO::MemoryStream::__cordl_internal_get__exposable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exposable;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__exposable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exposable = value;
}
constexpr bool& System::IO::MemoryStream::__cordl_internal_get__isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr bool const& System::IO::MemoryStream::__cordl_internal_get__isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOpen = value;
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>*& System::IO::MemoryStream::__cordl_internal_get__lastReadTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReadTask;
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>* const& System::IO::MemoryStream::__cordl_internal_get__lastReadTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReadTask;
}
constexpr void System::IO::MemoryStream::__cordl_internal_set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastReadTask = value;
}
inline void System::IO::MemoryStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::MemoryStream::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void System::IO::MemoryStream::_ctor(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void System::IO::MemoryStream::_ctor(::ArrayW<uint8_t> buffer, bool writable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, writable);
}
inline void System::IO::MemoryStream::_ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::MemoryStream::_ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count, writable);
}
inline void System::IO::MemoryStream::_ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(),
                          { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count, writable, publiclyVisible);
}
inline bool System::IO::MemoryStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::MemoryStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::IO::MemoryStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::IO::MemoryStream::EnsureNotClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "EnsureNotClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::MemoryStream::EnsureWriteable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "EnsureWriteable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::MemoryStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool System::IO::MemoryStream::EnsureCapacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline void System::IO::MemoryStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::MemoryStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::ArrayW<uint8_t> System::IO::MemoryStream::GetBuffer() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::IO::MemoryStream::InternalGetBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalGetBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline int32_t System::IO::MemoryStream::InternalGetPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalGetPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::MemoryStream::InternalReadInt32() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalReadInt32", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::MemoryStream::InternalEmulateRead(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::MemoryStream*>(), { "InternalEmulateRead", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, count);
}
inline int32_t System::IO::MemoryStream::get_Capacity() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::MemoryStream::set_Capacity(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::IO::MemoryStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::IO::MemoryStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::IO::MemoryStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::IO::MemoryStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::IO::MemoryStream::Read(::System::Span_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::MemoryStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::MemoryStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline int32_t System::IO::MemoryStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::IO::MemoryStream::CopyTo(::System::IO::Stream* destination, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, bufferSize);
}
inline ::System::Threading::Tasks::Task* System::IO::MemoryStream::CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline int64_t System::IO::MemoryStream::Seek(int64_t offset, ::System::IO::SeekOrigin loc) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, loc);
}
inline void System::IO::MemoryStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t> System::IO::MemoryStream::ToArray() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void System::IO::MemoryStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void System::IO::MemoryStream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* System::IO::MemoryStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::IO::MemoryStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline void System::IO::MemoryStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::MemoryStream::WriteTo(::System::IO::Stream* stream) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::MemoryStream*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>());
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>(capacity));
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::ArrayW<uint8_t> buffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>(buffer));
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::ArrayW<uint8_t> buffer, bool writable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>(buffer, writable));
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>(buffer, index, count));
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>(buffer, index, count, writable));
}
inline ::System::IO::MemoryStream* System::IO::MemoryStream::New_ctor(::ArrayW<uint8_t> buffer, int32_t index, int32_t count, bool writable, bool publiclyVisible) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::MemoryStream*>(buffer, index, count, writable, publiclyVisible));
}
// Ctor Parameters []
constexpr ::System::IO::MemoryStream::MemoryStream() {}
