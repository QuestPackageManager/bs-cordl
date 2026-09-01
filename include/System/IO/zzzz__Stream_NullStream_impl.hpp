#pragma once
// IWYU pragma private; include "System\IO\Stream_NullStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/zzzz__Stream_NullStream_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c1383c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(int64_t)>(&::GlobalNamespace::Stream_NullStream::set_Position)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c13a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.CopyTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::System::IO::Stream*, int32_t)>(&::GlobalNamespace::Stream_NullStream::CopyTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.CopyToAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::Stream_NullStream::*)(::System::IO::Stream*, int32_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::CopyToAsync)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5c13a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(bool)>(&::GlobalNamespace::Stream_NullStream::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c13bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c13bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.FlushAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::Stream_NullStream::*)(::System::Threading::CancellationToken)>(
    &::GlobalNamespace::Stream_NullStream::FlushAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c13bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.BeginRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                         ::System::Object*)>(&::GlobalNamespace::Stream_NullStream::BeginRead)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c13ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.EndRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Stream_NullStream::EndRead)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c13d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.BeginWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::AsyncCallback*,
                                                                                                                         ::System::Object*)>(&::GlobalNamespace::Stream_NullStream::BeginWrite)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c13dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.EndWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::System::IAsyncResult*)>(&::GlobalNamespace::Stream_NullStream::EndWrite)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c13e88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::GlobalNamespace::Stream_NullStream::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)(::System::Span_1<uint8_t>)>(&::GlobalNamespace::Stream_NullStream::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::ReadAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5c13f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::GlobalNamespace::Stream_NullStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::ReadAsync)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5c13f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Stream_NullStream::*)()>(&::GlobalNamespace::Stream_NullStream::ReadByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c13fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::GlobalNamespace::Stream_NullStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c13fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::GlobalNamespace::Stream_NullStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c13fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::Stream_NullStream::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::WriteAsync)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5c13fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.WriteAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::ValueTask (::GlobalNamespace::Stream_NullStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::GlobalNamespace::Stream_NullStream::WriteAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c140f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(uint8_t)>(&::GlobalNamespace::Stream_NullStream::WriteByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c141b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::Stream_NullStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::GlobalNamespace::Stream_NullStream::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c141b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Stream_NullStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Stream_NullStream::*)(int64_t)>(&::GlobalNamespace::Stream_NullStream::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c141c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 34 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Stream_NullStream::setStaticF_s_zeroTask(::System::Threading::Tasks::Task_1<int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::GlobalNamespace::Stream_NullStream*>(
      std::forward<::System::Threading::Tasks::Task_1<int32_t>*>(value));
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::Stream_NullStream::getStaticF_s_zeroTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<int32_t>*, "s_zeroTask", ::GlobalNamespace::Stream_NullStream*>();
}
inline void GlobalNamespace::Stream_NullStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::Stream_NullStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Stream_NullStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::Stream_NullStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t GlobalNamespace::Stream_NullStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::Stream_NullStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::Stream_NullStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::Stream_NullStream::CopyTo(::System::IO::Stream* destination, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, bufferSize);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::Stream_NullStream::CopyToAsync(::System::IO::Stream* destination, int32_t bufferSize,
                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, destination, bufferSize, cancellationToken);
}
inline void GlobalNamespace::Stream_NullStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::Stream_NullStream::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::Stream_NullStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, cancellationToken);
}
inline ::System::IAsyncResult* GlobalNamespace::Stream_NullStream::BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline int32_t GlobalNamespace::Stream_NullStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* GlobalNamespace::Stream_NullStream::BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, ::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, buffer, offset, count, callback, state);
}
inline void GlobalNamespace::Stream_NullStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncResult);
}
inline int32_t GlobalNamespace::Stream_NullStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t GlobalNamespace::Stream_NullStream::Read(::System::Span_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::Stream_NullStream::ReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                                  ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> GlobalNamespace::Stream_NullStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>>(this, ___internal_method, buffer, cancellationToken);
}
inline int32_t GlobalNamespace::Stream_NullStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::Stream_NullStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void GlobalNamespace::Stream_NullStream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::Stream_NullStream::WriteAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count,
                                                                                        ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask GlobalNamespace::Stream_NullStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask>(this, ___internal_method, buffer, cancellationToken);
}
inline void GlobalNamespace::Stream_NullStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::Stream_NullStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void GlobalNamespace::Stream_NullStream::SetLength(int64_t length) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Stream_NullStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline ::GlobalNamespace::Stream_NullStream* GlobalNamespace::Stream_NullStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Stream_NullStream*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Stream_NullStream::Stream_NullStream() {}
