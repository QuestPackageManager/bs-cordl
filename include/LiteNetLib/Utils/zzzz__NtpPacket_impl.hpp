#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/NtpPacket.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/Utils/zzzz__NtpPacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__NtpLeapIndicator_def.hpp"
#include "LiteNetLib/Utils/zzzz__NtpMode_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abe934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Bytes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_Bytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::LiteNetLib::Utils::NtpPacket::set_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abe93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_Bytes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_LeapIndicator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpLeapIndicator (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_LeapIndicator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3abe944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_LeapIndicator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_VersionNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_VersionNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3abe970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_VersionNumber",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_VersionNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::set_VersionNumber)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3abe99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_VersionNumber", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpMode (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Mode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3abe9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Mode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_Mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::LiteNetLib::Utils::NtpMode)>(&::LiteNetLib::Utils::NtpPacket::set_Mode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3abe9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_Mode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NtpMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Stratum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Stratum)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3abea30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Stratum",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Poll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Poll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3abea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Poll",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Precision
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Precision)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3abea88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Precision",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_RootDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_RootDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abeab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_RootDelay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_RootDispersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_RootDispersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abeb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_RootDispersion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_ReferenceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_ReferenceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abeb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_ReferenceId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_ReferenceTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abebc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_ReferenceTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_OriginTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_OriginTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abed10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_OriginTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_ReceiveTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abed18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_ReceiveTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_TransmitTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abed20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_TransmitTimestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_TransmitTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::System::Nullable_1<::System::DateTime>)>(
    &::LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3abed28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_TransmitTimestamp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_DestinationTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(
    &::LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3abeea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(),
                                                                               "get_DestinationTimestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_DestinationTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::System::Nullable_1<::System::DateTime>)>(
    &::LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abeeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_DestinationTimestamp", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_RoundTripTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3abeeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_RoundTripTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_CorrectionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_CorrectionOffset)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3abf138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_CorrectionOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x3abf2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::LiteNetLib::Utils::NtpPacket::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3abf390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.FromServerResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpPacket* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::DateTime)>(
    &::LiteNetLib::Utils::NtpPacket::FromServerResponse)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3abf428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "FromServerResponse", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.ValidateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::ValidateRequest)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3abf4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "ValidateRequest",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.ValidateReply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::ValidateReply)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3abf5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "ValidateReply",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.CheckTimestamps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::CheckTimestamps)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x3abf014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "CheckTimestamps",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetDateTime64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(
    &::LiteNetLib::Utils::NtpPacket::GetDateTime64)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3abebd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetDateTime64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SetDateTime64
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(int32_t, ::System::Nullable_1<::System::DateTime>)>(
    &::LiteNetLib::Utils::NtpPacket::SetDateTime64)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3abed38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SetDateTime64", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetTimeSpan32
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetTimeSpan32)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3abeabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetTimeSpan32", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetUInt64BE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetUInt64BE)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3abf70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetUInt64BE", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SetUInt64BE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(int32_t, uint64_t)>(&::LiteNetLib::Utils::NtpPacket::SetUInt64BE)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3abf784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SetUInt64BE", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetInt32BE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetInt32BE)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3abf800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetInt32BE", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetUInt32BE
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetUInt32BE)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3abeb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetUInt32BE", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SwapEndianness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t)>(&::LiteNetLib::Utils::NtpPacket::SwapEndianness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3abf858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SwapEndianness", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SwapEndianness
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&::LiteNetLib::Utils::NtpPacket::SwapEndianness)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3abf804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SwapEndianness", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& LiteNetLib::Utils::NtpPacket::__cordl_internal_get__Bytes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bytes_k__BackingField;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& LiteNetLib::Utils::NtpPacket::__cordl_internal_get__Bytes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bytes_k__BackingField;
}
constexpr void LiteNetLib::Utils::NtpPacket::__cordl_internal_set__Bytes_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Bytes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& LiteNetLib::Utils::NtpPacket::__cordl_internal_get__DestinationTimestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DestinationTimestamp_k__BackingField;
}
constexpr ::System::Nullable_1<::System::DateTime> const& LiteNetLib::Utils::NtpPacket::__cordl_internal_get__DestinationTimestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DestinationTimestamp_k__BackingField;
}
constexpr void LiteNetLib::Utils::NtpPacket::__cordl_internal_set__DestinationTimestamp_k__BackingField(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DestinationTimestamp_k__BackingField = value;
}
inline void LiteNetLib::Utils::NtpPacket::setStaticF_Epoch(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "Epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime LiteNetLib::Utils::NtpPacket::getStaticF_Epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "Epoch", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get>();
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> LiteNetLib::Utils::NtpPacket::get_Bytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Bytes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_Bytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_Bytes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::Utils::NtpLeapIndicator LiteNetLib::Utils::NtpPacket::get_LeapIndicator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_LeapIndicator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpLeapIndicator, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_VersionNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_VersionNumber",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_VersionNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_VersionNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::Utils::NtpMode LiteNetLib::Utils::NtpPacket::get_Mode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Mode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpMode, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_Mode(::LiteNetLib::Utils::NtpMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_Mode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NtpMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_Stratum() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Stratum",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_Poll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Poll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_Precision() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_Precision",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_RootDelay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_RootDelay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_RootDispersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_RootDispersion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline uint32_t LiteNetLib::Utils::NtpPacket::get_ReferenceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_ReferenceId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_ReferenceTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_OriginTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_OriginTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_ReceiveTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_TransmitTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_TransmitTimestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_DestinationTimestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "set_DestinationTimestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_RoundTripTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_RoundTripTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_CorrectionOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "get_CorrectionOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bytes);
}
inline ::LiteNetLib::Utils::NtpPacket* LiteNetLib::Utils::NtpPacket::FromServerResponse(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::System::DateTime destinationTimestamp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "FromServerResponse", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpPacket*, false>(nullptr, ___internal_method, bytes, destinationTimestamp);
}
inline void LiteNetLib::Utils::NtpPacket::ValidateRequest() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "ValidateRequest",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::ValidateReply() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "ValidateReply",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::CheckTimestamps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "CheckTimestamps",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::GetDateTime64(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetDateTime64",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method, offset);
}
inline void LiteNetLib::Utils::NtpPacket::SetDateTime64(int32_t offset, ::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SetDateTime64", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::DateTime>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset, value);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::GetTimeSpan32(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetTimeSpan32",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(this, ___internal_method, offset);
}
inline uint64_t LiteNetLib::Utils::NtpPacket::GetUInt64BE(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetUInt64BE", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, offset);
}
inline void LiteNetLib::Utils::NtpPacket::SetUInt64BE(int32_t offset, uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SetUInt64BE", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, offset, value);
}
inline int32_t LiteNetLib::Utils::NtpPacket::GetInt32BE(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetInt32BE", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, offset);
}
inline uint32_t LiteNetLib::Utils::NtpPacket::GetUInt32BE(int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "GetUInt32BE", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, offset);
}
inline uint32_t LiteNetLib::Utils::NtpPacket::SwapEndianness(uint32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SwapEndianness", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, x);
}
inline uint64_t LiteNetLib::Utils::NtpPacket::SwapEndianness(uint64_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::Utils::NtpPacket*>::get(), "SwapEndianness", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, x);
}
inline ::LiteNetLib::Utils::NtpPacket* LiteNetLib::Utils::NtpPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NtpPacket*>());
}
inline ::LiteNetLib::Utils::NtpPacket* LiteNetLib::Utils::NtpPacket::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::Utils::NtpPacket*>(bytes));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NtpPacket::NtpPacket() {}
