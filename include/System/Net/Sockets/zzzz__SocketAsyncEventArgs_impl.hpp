#pragma once
// IWYU pragma private; include "System/Net/Sockets/SocketAsyncEventArgs.hpp"
#include "System/Net/Sockets/zzzz__IPPacketInformation_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketError_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_impl.hpp"
#include "System/Net/Sockets/zzzz__TransmitFileOptions_impl.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__Memory_1_impl.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncEventArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Sockets/zzzz__SendPacketsElement_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncOperation_def.hpp"
#include "System/Net/Sockets/zzzz__SocketAsyncResult_def.hpp"
#include "System/Net/Sockets/zzzz__SocketError_def.hpp"
#include "System/Net/Sockets/zzzz__SocketFlags_def.hpp"
#include "System/Net/Sockets/zzzz__Socket_def.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_AcceptSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_AcceptSocket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_AcceptSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_AcceptSocket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_BytesTransferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_BytesTransferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_BytesTransferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_BytesTransferred",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_LastOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_LastOperation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_RemoteEndPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::EndPoint*)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_RemoteEndPoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SendPacketsSendSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_SendPacketsSendSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_SocketError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::SocketError (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_SocketError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_SocketError", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SocketError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketError)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_SocketError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_SocketError", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_SocketFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketFlags)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_SocketFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_UserToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_UserToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_UserToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.set_UserToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Object*)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::set_UserToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b82fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_UserToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.add_Completed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(
    ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)>(&::System::Net::Sockets::SocketAsyncEventArgs::add_Completed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61b8304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "add_Completed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.remove_Completed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(
    ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*)>(&::System::Net::Sockets::SocketAsyncEventArgs::remove_Completed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x61b83c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "remove_Completed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x61b8484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(&::System::Net::Sockets::SocketAsyncEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x61b0808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Finalize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b850c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(bool)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x61b8518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::Dispose)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x61b852c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetBytesTransferred
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(int32_t)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b413c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetBytesTransferred",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_CurrentSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Sockets::Socket* (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b8594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_CurrentSocket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetCurrentSocket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::Socket*)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b859c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetCurrentSocket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetLastOperation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncOperation)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x61b85a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetLastOperation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.Complete_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::Complete_internal)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x61b8660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "Complete_internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Net::Sockets::SocketAsyncEventArgs*)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::OnCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x61b8678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_MemoryBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Memory_1<uint8_t> (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x61b86a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_MemoryBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_Offset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b86ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_Offset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::Sockets::SocketAsyncEventArgs::*)()>(
    &::System::Net::Sockets::SocketAsyncEventArgs::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b86b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.get_BufferList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* (
    ::System::Net::Sockets::SocketAsyncEventArgs::*)()>(&::System::Net::Sockets::SocketAsyncEventArgs::get_BufferList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x61b86bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                               "get_BufferList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SocketAsyncEventArgs.SetBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SocketAsyncEventArgs::*)(::System::Memory_1<uint8_t>)>(
    &::System::Net::Sockets::SocketAsyncEventArgs::SetBuffer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x61b86c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetBuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_in_progress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___in_progress;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_in_progress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___in_progress;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set_in_progress(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___in_progress = value;
}
constexpr ::System::Net::EndPoint*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_remote_ep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remote_ep;
}
constexpr ::System::Net::EndPoint* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_remote_ep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remote_ep;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set_remote_ep(::System::Net::EndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___remote_ep)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_current_socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_socket;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_current_socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current_socket;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set_current_socket(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current_socket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::SocketAsyncResult*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_socket_async_result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socket_async_result;
}
constexpr ::System::Net::Sockets::SocketAsyncResult* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_socket_async_result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___socket_async_result;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set_socket_async_result(::System::Net::Sockets::SocketAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___socket_async_result)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Exception*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__ConnectByNameError_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConnectByNameError_k__BackingField;
}
constexpr ::System::Exception* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__ConnectByNameError_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConnectByNameError_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__ConnectByNameError_k__BackingField(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ConnectByNameError_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::Socket*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__AcceptSocket_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AcceptSocket_k__BackingField;
}
constexpr ::System::Net::Sockets::Socket* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__AcceptSocket_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AcceptSocket_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__AcceptSocket_k__BackingField(::System::Net::Sockets::Socket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AcceptSocket_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__BytesTransferred_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BytesTransferred_k__BackingField;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__BytesTransferred_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BytesTransferred_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__BytesTransferred_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BytesTransferred_k__BackingField = value;
}
constexpr bool& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__DisconnectReuseSocket_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisconnectReuseSocket_k__BackingField;
}
constexpr bool const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__DisconnectReuseSocket_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisconnectReuseSocket_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__DisconnectReuseSocket_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DisconnectReuseSocket_k__BackingField = value;
}
constexpr ::System::Net::Sockets::SocketAsyncOperation& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__LastOperation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastOperation_k__BackingField;
}
constexpr ::System::Net::Sockets::SocketAsyncOperation const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__LastOperation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LastOperation_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__LastOperation_k__BackingField(::System::Net::Sockets::SocketAsyncOperation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LastOperation_k__BackingField = value;
}
constexpr ::System::Net::Sockets::IPPacketInformation& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__ReceiveMessageFromPacketInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReceiveMessageFromPacketInfo_k__BackingField;
}
constexpr ::System::Net::Sockets::IPPacketInformation const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__ReceiveMessageFromPacketInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ReceiveMessageFromPacketInfo_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__ReceiveMessageFromPacketInfo_k__BackingField(::System::Net::Sockets::IPPacketInformation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ReceiveMessageFromPacketInfo_k__BackingField = value;
}
constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*>&
System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SendPacketsElements_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendPacketsElements_k__BackingField;
}
constexpr ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*> const&
System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SendPacketsElements_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendPacketsElements_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__SendPacketsElements_k__BackingField(
    ::ArrayW<::System::Net::Sockets::SendPacketsElement*, ::Array<::System::Net::Sockets::SendPacketsElement*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SendPacketsElements_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Sockets::TransmitFileOptions& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SendPacketsFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendPacketsFlags_k__BackingField;
}
constexpr ::System::Net::Sockets::TransmitFileOptions const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SendPacketsFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendPacketsFlags_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__SendPacketsFlags_k__BackingField(::System::Net::Sockets::TransmitFileOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SendPacketsFlags_k__BackingField = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SendPacketsSendSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendPacketsSendSize_k__BackingField;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SendPacketsSendSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SendPacketsSendSize_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__SendPacketsSendSize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SendPacketsSendSize_k__BackingField = value;
}
constexpr ::System::Net::Sockets::SocketError& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SocketError_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SocketError_k__BackingField;
}
constexpr ::System::Net::Sockets::SocketError const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SocketError_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SocketError_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__SocketError_k__BackingField(::System::Net::Sockets::SocketError value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SocketError_k__BackingField = value;
}
constexpr ::System::Net::Sockets::SocketFlags& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SocketFlags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SocketFlags_k__BackingField;
}
constexpr ::System::Net::Sockets::SocketFlags const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__SocketFlags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SocketFlags_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__SocketFlags_k__BackingField(::System::Net::Sockets::SocketFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SocketFlags_k__BackingField = value;
}
constexpr ::System::Object*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__UserToken_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserToken_k__BackingField;
}
constexpr ::System::Object* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__UserToken_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserToken_k__BackingField;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__UserToken_k__BackingField(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UserToken_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_Completed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Completed;
}
constexpr ::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get_Completed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Completed;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Completed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Memory_1<uint8_t>& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr ::System::Memory_1<uint8_t> const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__buffer(::System::Memory_1<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__offset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__offset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offset;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__offset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offset = value;
}
constexpr int32_t& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
constexpr bool& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__bufferIsExplicitArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferIsExplicitArray;
}
constexpr bool const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__bufferIsExplicitArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferIsExplicitArray;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__bufferIsExplicitArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bufferIsExplicitArray = value;
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__bufferList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferList;
}
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__bufferList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferList;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__bufferList(::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bufferList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__bufferListInternal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferListInternal;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_get__bufferListInternal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bufferListInternal;
}
constexpr void System::Net::Sockets::SocketAsyncEventArgs::__cordl_internal_set__bufferListInternal(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bufferListInternal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncEventArgs::get_AcceptSocket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_AcceptSocket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_AcceptSocket(::System::Net::Sockets::Socket* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_AcceptSocket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::Sockets::SocketAsyncEventArgs::get_BytesTransferred() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_BytesTransferred", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_BytesTransferred(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_BytesTransferred",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_LastOperation(::System::Net::Sockets::SocketAsyncOperation value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_LastOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_RemoteEndPoint(::System::Net::EndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_RemoteEndPoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::EndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_SendPacketsSendSize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_SendPacketsSendSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Sockets::SocketError System::Net::Sockets::SocketAsyncEventArgs::get_SocketError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_SocketError", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::SocketError, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_SocketError(::System::Net::Sockets::SocketError value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_SocketError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketError>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_SocketFlags(::System::Net::Sockets::SocketFlags value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_SocketFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* System::Net::Sockets::SocketAsyncEventArgs::get_UserToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_UserToken", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::set_UserToken(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "set_UserToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::add_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "add_Completed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::remove_Completed(::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "remove_Completed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::EventHandler_1<::System::Net::Sockets::SocketAsyncEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::_ctor(bool flowExecutionContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowExecutionContext);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetBytesTransferred(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetBytesTransferred",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::Sockets::Socket* System::Net::Sockets::SocketAsyncEventArgs::get_CurrentSocket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_CurrentSocket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::Socket*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetCurrentSocket(::System::Net::Sockets::Socket* socket) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetCurrentSocket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::Socket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetLastOperation(::System::Net::Sockets::SocketAsyncOperation op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetLastOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Sockets::SocketAsyncOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::Complete_internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "Complete_internal", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::OnCompleted(::System::Net::Sockets::SocketAsyncEventArgs* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::System::Memory_1<uint8_t> System::Net::Sockets::SocketAsyncEventArgs::get_MemoryBuffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_MemoryBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Memory_1<uint8_t>, false>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::SocketAsyncEventArgs::get_Offset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "get_Offset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Net::Sockets::SocketAsyncEventArgs::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>* System::Net::Sockets::SocketAsyncEventArgs::get_BufferList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(),
                                                                             "get_BufferList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::ArraySegment_1<uint8_t>>*, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SocketAsyncEventArgs::SetBuffer(::System::Memory_1<uint8_t> buffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SocketAsyncEventArgs*>::get(), "SetBuffer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Memory_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline ::System::Net::Sockets::SocketAsyncEventArgs* System::Net::Sockets::SocketAsyncEventArgs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::SocketAsyncEventArgs*>());
}
inline ::System::Net::Sockets::SocketAsyncEventArgs* System::Net::Sockets::SocketAsyncEventArgs::New_ctor(bool flowExecutionContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::SocketAsyncEventArgs*>(flowExecutionContext));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::Sockets::SocketAsyncEventArgs::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::Sockets::SocketAsyncEventArgs::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SocketAsyncEventArgs::SocketAsyncEventArgs() {}
