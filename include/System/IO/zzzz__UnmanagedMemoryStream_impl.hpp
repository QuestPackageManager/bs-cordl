#pragma once
#include "System/IO/zzzz__FileAccess_impl.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/IO/zzzz__FileAccess_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeBuffer_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x287f4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::cordl_internals::Ptr<uint8_t>, int64_t, int64_t, ::System::IO::FileAccess)>(&::System::IO::UnmanagedMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x288a338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::cordl_internals::Ptr<uint8_t>, int64_t, int64_t, ::System::IO::FileAccess)>(&::System::IO::UnmanagedMemoryStream::Initialize)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x287f54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x288a3c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x288a3e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x288a3ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(bool)>(&::System::IO::UnmanagedMemoryStream::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x287fd78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.EnsureNotClosed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::EnsureNotClosed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x288a408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "EnsureNotClosed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.EnsureReadable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::EnsureReadable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x288a43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "EnsureReadable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.EnsureWriteable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::EnsureWriteable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x288a478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "EnsureWriteable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x288a4b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.FlushAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::IO::UnmanagedMemoryStream::*)(::System::Threading::CancellationToken)>(
    &::System::IO::UnmanagedMemoryStream::FlushAsync)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x288a4b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x288a62c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::get_Position)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x288a648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(int64_t)>(&::System::IO::UnmanagedMemoryStream::set_Position)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x288a690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.get_PositionPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<uint8_t> (::System::IO::UnmanagedMemoryStream::*)()>(
    &::System::IO::UnmanagedMemoryStream::get_PositionPointer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x288a738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                               "get_PositionPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::IO::UnmanagedMemoryStream::Read)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x288a7f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)(::System::Span_1<uint8_t>)>(
    &::System::IO::UnmanagedMemoryStream::Read)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x288a9b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)(::System::Span_1<uint8_t>)>(
    &::System::IO::UnmanagedMemoryStream::ReadCore)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x287f758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "ReadCore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::ReadAsync)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x288aa9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::IO::UnmanagedMemoryStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::ReadAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x288adac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::UnmanagedMemoryStream::*)()>(&::System::IO::UnmanagedMemoryStream::ReadByte)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x288b040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::IO::UnmanagedMemoryStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::System::IO::UnmanagedMemoryStream::Seek)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x288b1a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(int64_t)>(&::System::IO::UnmanagedMemoryStream::SetLength)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x288b2b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::IO::UnmanagedMemoryStream::Write)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x288b440;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(
    &::System::IO::UnmanagedMemoryStream::Write)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x288b62c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(
    &::System::IO::UnmanagedMemoryStream::WriteCore)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x287f988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "WriteCore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::IO::UnmanagedMemoryStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x288b710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::IO::UnmanagedMemoryStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::IO::UnmanagedMemoryStream::WriteAsync)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x288b9d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnmanagedMemoryStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::UnmanagedMemoryStream::*)(uint8_t)>(&::System::IO::UnmanagedMemoryStream::WriteByte)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x288bbe4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 40));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::SafeBuffer*& System::IO::UnmanagedMemoryStream::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::InteropServices::SafeBuffer*> const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__buffer(::System::Runtime::InteropServices::SafeBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<uint8_t>& System::IO::UnmanagedMemoryStream::__cordl_internal_get__mem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mem;
}
constexpr ::cordl_internals::Ptr<uint8_t> const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__mem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mem;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__mem(::cordl_internals::Ptr<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__length(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__cordl_internal_get__capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__capacity(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capacity = value;
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__cordl_internal_get__position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____position;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__position(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____position = value;
}
constexpr int64_t& System::IO::UnmanagedMemoryStream::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr int64_t const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__offset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr ::System::IO::FileAccess& System::IO::UnmanagedMemoryStream::__cordl_internal_get__access() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____access;
}
constexpr ::System::IO::FileAccess const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__access() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____access;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__access(::System::IO::FileAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____access = value;
}
constexpr bool& System::IO::UnmanagedMemoryStream::__cordl_internal_get__isOpen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr bool const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__isOpen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOpen;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__isOpen(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOpen = value;
}
constexpr ::System::Threading::Tasks::Task_1<int32_t>*& System::IO::UnmanagedMemoryStream::__cordl_internal_get__lastReadTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReadTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<int32_t>*> const& System::IO::UnmanagedMemoryStream::__cordl_internal_get__lastReadTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastReadTask;
}
constexpr void System::IO::UnmanagedMemoryStream::__cordl_internal_set__lastReadTask(::System::Threading::Tasks::Task_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastReadTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::IO::UnmanagedMemoryStream* System::IO::UnmanagedMemoryStream::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::UnmanagedMemoryStream*>());
}
inline void System::IO::UnmanagedMemoryStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IO::UnmanagedMemoryStream* System::IO::UnmanagedMemoryStream::New_ctor(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::IO::UnmanagedMemoryStream*>(pointer, length, capacity, access));
}
inline void System::IO::UnmanagedMemoryStream::_ctor(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointer, length, capacity, access);
}
inline void System::IO::UnmanagedMemoryStream::Initialize(::cordl_internals::Ptr<uint8_t> pointer, int64_t length, int64_t capacity, ::System::IO::FileAccess access) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointer, length, capacity, access);
}
inline bool System::IO::UnmanagedMemoryStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::UnmanagedMemoryStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::IO::UnmanagedMemoryStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::IO::UnmanagedMemoryStream::EnsureNotClosed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "EnsureNotClosed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::EnsureReadable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "EnsureReadable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::EnsureWriteable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "EnsureWriteable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::IO::UnmanagedMemoryStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline int64_t System::IO::UnmanagedMemoryStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::IO::UnmanagedMemoryStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::IO::UnmanagedMemoryStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::cordl_internals::Ptr<uint8_t> System::IO::UnmanagedMemoryStream::get_PositionPointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "get_PositionPointer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<uint8_t>, false>(this, ___internal_method);
}
inline int32_t System::IO::UnmanagedMemoryStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::IO::UnmanagedMemoryStream::Read(::System::Span_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer);
}
inline int32_t System::IO::UnmanagedMemoryStream::ReadCore(::System::Span_1<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "ReadCore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::UnmanagedMemoryStream::ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                                 ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::IO::UnmanagedMemoryStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, buffer, cancellationToken);
}
inline int32_t System::IO::UnmanagedMemoryStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t System::IO::UnmanagedMemoryStream::Seek(int64_t offset, ::System::IO::SeekOrigin loc) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, loc);
}
inline void System::IO::UnmanagedMemoryStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::IO::UnmanagedMemoryStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, count);
}
inline void System::IO::UnmanagedMemoryStream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void System::IO::UnmanagedMemoryStream::WriteCore(::System::ReadOnlySpan_1<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), "WriteCore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline ::System::Threading::Tasks::Task* System::IO::UnmanagedMemoryStream::WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count,
                                                                                       ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, count, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::ValueTask System::IO::UnmanagedMemoryStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, cancellationToken);
}
inline void System::IO::UnmanagedMemoryStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::UnmanagedMemoryStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::IO::UnmanagedMemoryStream::UnmanagedMemoryStream() {}
