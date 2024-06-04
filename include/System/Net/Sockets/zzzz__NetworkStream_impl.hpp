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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::NetworkStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3044db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*, bool)>(
    &::System::Net::Sockets::NetworkStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3044f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::Socket*, ::System::IO::FileAccess, bool)>(
    &::System::Net::Sockets::NetworkStream::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x3044dc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3044f80;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3044f88;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3044f90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_CanTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3044f98;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3044fa0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int32_t)>(&::System::Net::Sockets::NetworkStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30451cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3045420;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int32_t)>(&::System::Net::Sockets::NetworkStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30454a8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_DataAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_DataAvailable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3045530;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 42));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_Length)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3045694;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::get_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x30456e4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int64_t)>(&::System::Net::Sockets::NetworkStream::set_Position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3045734;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::Sockets::NetworkStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::System::Net::Sockets::NetworkStream::Seek)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3045784;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::Sockets::NetworkStream::Read)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x30457d4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)(::System::Span_1<uint8_t>)>(
    &::System::Net::Sockets::NetworkStream::Read)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3045b48;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.ReadByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::ReadByte)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3045eac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::Sockets::NetworkStream::Write)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x3045f30;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(
    &::System::Net::Sockets::NetworkStream::Write)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x30462a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.WriteByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(uint8_t)>(&::System::Net::Sockets::NetworkStream::WriteByte)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x30465a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int32_t)>(&::System::Net::Sockets::NetworkStream::Close)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x304661c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(bool)>(&::System::Net::Sockets::NetworkStream::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3046684;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x304678c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.BeginRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Net::Sockets::NetworkStream::BeginRead)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x3046830;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.EndRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::NetworkStream::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::NetworkStream::EndRead)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x3046bd4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.BeginWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::System::Net::Sockets::NetworkStream::BeginWrite)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x3046e58;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.EndWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::IAsyncResult*)>(
    &::System::Net::Sockets::NetworkStream::EndWrite)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x30471fc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (
    ::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::ReadAsync)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x3047480;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.ReadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask_1<int32_t> (::System::Net::Sockets::NetworkStream::*)(
    ::System::Memory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::ReadAsync)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x3047afc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::System::Net::Sockets::NetworkStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::WriteAsync)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x3047d54;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.WriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ValueTask (::System::Net::Sockets::NetworkStream::*)(
    ::System::ReadOnlyMemory_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::Sockets::NetworkStream::WriteAsync)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3048384;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)()>(&::System::Net::Sockets::NetworkStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x30485d8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.FlushAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::System::Net::Sockets::NetworkStream::*)(::System::Threading::CancellationToken)>(
    &::System::Net::Sockets::NetworkStream::FlushAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x30485dc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(int64_t)>(&::System::Net::Sockets::NetworkStream::SetLength)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3048664;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.SetSocketTimeoutOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::NetworkStream::*)(::System::Net::Sockets::SocketShutdown, int32_t, bool)>(
    &::System::Net::Sockets::NetworkStream::SetSocketTimeoutOption)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3045254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), "SetSocketTimeoutOption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::NetworkStream.get_InternalSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::NetworkStream::*)()>(
    &::System::Net::Sockets::NetworkStream::get_InternalSocket)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3048804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                               "get_InternalSocket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::NetworkStream::__cordl_internal_get__streamSocket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSocket;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::Socket*> const& System::Net::Sockets::NetworkStream::__cordl_internal_get__streamSocket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSocket;
}
constexpr void System::Net::Sockets::NetworkStream::__cordl_internal_set__streamSocket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamSocket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::NetworkStream::New_ctor(::System::Net::Sockets::Socket* socket) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::NetworkStream*>(socket));
}
inline void System::Net::Sockets::NetworkStream::_ctor(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket);
}
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::NetworkStream::New_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::NetworkStream*>(socket, ownsSocket));
}
inline void System::Net::Sockets::NetworkStream::_ctor(::System::Net::Sockets::Socket* socket, bool ownsSocket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket, ownsSocket);
}
inline ::System::Net::Sockets::NetworkStream* System::Net::Sockets::NetworkStream::New_ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::NetworkStream*>(socket, access, ownsSocket));
}
inline void System::Net::Sockets::NetworkStream::_ctor(::System::Net::Sockets::Socket* socket, ::System::IO::FileAccess access, bool ownsSocket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::FileAccess>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket, access, ownsSocket);
}
inline bool System::Net::Sockets::NetworkStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::NetworkStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::NetworkStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::Sockets::NetworkStream::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::NetworkStream::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::Sockets::NetworkStream::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::Sockets::NetworkStream::get_DataAvailable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 42)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Net::Sockets::NetworkStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::Net::Sockets::NetworkStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t System::Net::Sockets::NetworkStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline int32_t System::Net::Sockets::NetworkStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size);
}
inline int32_t System::Net::Sockets::NetworkStream::Read(::System::Span_1<uint8_t> destination) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, destination);
}
inline int32_t System::Net::Sockets::NetworkStream::ReadByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::NetworkStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::Sockets::NetworkStream::Write(::System::ReadOnlySpan_1<uint8_t> source) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source);
}
inline void System::Net::Sockets::NetworkStream::WriteByte(uint8_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::NetworkStream::Close(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), "Close", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
inline void System::Net::Sockets::NetworkStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::NetworkStream::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::Sockets::NetworkStream::BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback,
                                                                              ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline int32_t System::Net::Sockets::NetworkStream::EndRead(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, asyncResult);
}
inline ::System::IAsyncResult* System::Net::Sockets::NetworkStream::BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback,
                                                                               ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::Sockets::NetworkStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::Net::Sockets::NetworkStream::ReadAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                                   ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask_1<int32_t> System::Net::Sockets::NetworkStream::ReadAsync(::System::Memory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask_1<int32_t>, false>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::Sockets::NetworkStream::WriteAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size,
                                                                                         ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, buffer, offset, size, cancellationToken);
}
inline ::System::Threading::Tasks::ValueTask System::Net::Sockets::NetworkStream::WriteAsync(::System::ReadOnlyMemory_1<uint8_t> buffer, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::ValueTask, false>(this, ___internal_method, buffer, cancellationToken);
}
inline void System::Net::Sockets::NetworkStream::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::Sockets::NetworkStream::FlushAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, cancellationToken);
}
inline void System::Net::Sockets::NetworkStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::NetworkStream::SetSocketTimeoutOption(::System::Net::Sockets::SocketShutdown mode, int32_t timeout, bool silent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(), "SetSocketTimeoutOption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketShutdown>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode, timeout, silent);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::NetworkStream::get_InternalSocket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::NetworkStream*>::get(),
                                                                             "get_InternalSocket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::NetworkStream::NetworkStream() {}
