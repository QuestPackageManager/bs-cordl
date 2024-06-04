#pragma once
// IWYU pragma private; include "System/Net/FtpDataStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Net/zzzz__FtpDataStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "System/Net/zzzz__CloseExState_def.hpp"
#include "System/Net/zzzz__FtpWebRequest_def.hpp"
#include "System/Net/zzzz__ICloseEx_def.hpp"
#include "System/Net/zzzz__TriState_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::FtpDataStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::FtpDataStream::*)(::System::Net::Sockets::NetworkStream*, ::System::Net::FtpWebRequest*, ::System::Net::TriState)>(&::System::Net::FtpDataStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2fe21f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TriState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(bool)>(&::System::Net::FtpDataStream::Dispose)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2fe5dec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.System_Net_ICloseEx_CloseEx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(::System::Net::CloseExState)>(
    &::System::Net::FtpDataStream::System_Net_ICloseEx_CloseEx)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2fe5f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "System.Net.ICloseEx.CloseEx", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.CheckError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::CheckError)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2fe6358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "CheckError",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe639c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2fe63a4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe63c4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_Length)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2fe63cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_Position)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe63ec;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.set_Position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(int64_t)>(&::System::Net::FtpDataStream::set_Position)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6410;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Seek
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FtpDataStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::System::Net::FtpDataStream::Seek)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2fe6434;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpDataStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::FtpDataStream::Read)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2fe6500;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Net::FtpDataStream::Write)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2fe6604;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.AsyncReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&::System::Net::FtpDataStream::AsyncReadCallback)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x2fe66dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "AsyncReadCallback", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.BeginRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::FtpDataStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::FtpDataStream::BeginRead)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2fe698c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.EndRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&::System::Net::FtpDataStream::EndRead)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x2fe6b38;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.BeginWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::System::Net::FtpDataStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::System::Net::FtpDataStream::BeginWrite)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2fe6cd8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.EndWrite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(::System::IAsyncResult*)>(&::System::Net::FtpDataStream::EndWrite)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2fe6dcc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.Flush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::Flush)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6e6c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.SetLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(int64_t)>(&::System::Net::FtpDataStream::SetLength)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6e90;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_CanTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_CanTimeout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2fe6eb4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6ed4;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.set_ReadTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(int32_t)>(&::System::Net::FtpDataStream::set_ReadTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6ef8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.get_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FtpDataStream::*)()>(&::System::Net::FtpDataStream::get_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6f1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.set_WriteTimeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(int32_t)>(&::System::Net::FtpDataStream::set_WriteTimeout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2fe6f40;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpDataStream.SetSocketTimeoutOption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpDataStream::*)(int32_t)>(&::System::Net::FtpDataStream::SetSocketTimeoutOption)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2fe6f64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "SetSocketTimeoutOption", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr System::Net::FtpDataStream::operator ::System::Net::ICloseEx*() noexcept {
  return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::ICloseEx"
constexpr ::System::Net::ICloseEx* System::Net::FtpDataStream::i___System__Net__ICloseEx() noexcept {
  return static_cast<::System::Net::ICloseEx*>(static_cast<void*>(this));
}
constexpr ::System::Net::FtpWebRequest*& System::Net::FtpDataStream::__cordl_internal_get__request() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::FtpWebRequest*> const& System::Net::FtpDataStream::__cordl_internal_get__request() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____request;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__request(::System::Net::FtpWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____request)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::NetworkStream*& System::Net::FtpDataStream::__cordl_internal_get__networkStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Sockets::NetworkStream*> const& System::Net::FtpDataStream::__cordl_internal_get__networkStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____networkStream;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__networkStream(::System::Net::Sockets::NetworkStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____networkStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__writeable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeable;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__writeable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____writeable;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__writeable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____writeable = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__readable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readable;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__readable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readable;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__readable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readable = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__isFullyRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFullyRead;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__isFullyRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isFullyRead;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__isFullyRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isFullyRead = value;
}
constexpr bool& System::Net::FtpDataStream::__cordl_internal_get__closing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closing;
}
constexpr bool const& System::Net::FtpDataStream::__cordl_internal_get__closing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closing;
}
constexpr void System::Net::FtpDataStream::__cordl_internal_set__closing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closing = value;
}
inline ::System::Net::FtpDataStream* System::Net::FtpDataStream::New_ctor(::System::Net::Sockets::NetworkStream* networkStream, ::System::Net::FtpWebRequest* request,
                                                                          ::System::Net::TriState writeOnly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::FtpDataStream*>(networkStream, request, writeOnly));
}
inline void System::Net::FtpDataStream::_ctor(::System::Net::Sockets::NetworkStream* networkStream, ::System::Net::FtpWebRequest* request, ::System::Net::TriState writeOnly) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::NetworkStream*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpWebRequest*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::TriState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkStream, request, writeOnly);
}
inline void System::Net::FtpDataStream::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::FtpDataStream::System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "System.Net.ICloseEx.CloseEx", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CloseExState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, closeState);
}
inline void System::Net::FtpDataStream::CheckError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "CheckError",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::FtpDataStream::get_CanRead() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::FtpDataStream::get_CanSeek() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Net::FtpDataStream::get_CanWrite() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t System::Net::FtpDataStream::get_Length() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t System::Net::FtpDataStream::get_Position() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::set_Position(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t System::Net::FtpDataStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method, offset, origin);
}
inline int32_t System::Net::FtpDataStream::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::FtpDataStream::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, offset, size);
}
inline void System::Net::FtpDataStream::AsyncReadCallback(::System::IAsyncResult* ar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "AsyncReadCallback", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ar);
}
inline ::System::IAsyncResult* System::Net::FtpDataStream::BeginRead(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback,
                                                                     ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline int32_t System::Net::FtpDataStream::EndRead(::System::IAsyncResult* ar) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, ar);
}
inline ::System::IAsyncResult* System::Net::FtpDataStream::BeginWrite(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, ::System::AsyncCallback* callback,
                                                                      ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, buffer, offset, size, callback, state);
}
inline void System::Net::FtpDataStream::EndWrite(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncResult);
}
inline void System::Net::FtpDataStream::Flush() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::SetLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Net::FtpDataStream::get_CanTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Net::FtpDataStream::get_ReadTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::set_ReadTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::FtpDataStream::get_WriteTimeout() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::FtpDataStream::set_WriteTimeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::FtpDataStream::SetSocketTimeoutOption(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpDataStream*>::get(), "SetSocketTimeoutOption",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeout);
}
// Ctor Parameters []
constexpr ::System::Net::FtpDataStream::FtpDataStream() {}
