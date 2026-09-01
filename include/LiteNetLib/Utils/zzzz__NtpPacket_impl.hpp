#pragma once
// IWYU pragma private; include "LiteNetLib\Utils\NtpPacket.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ac848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Bytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_Bytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NtpPacket::set_Bytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ac850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_Bytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_LeapIndicator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpLeapIndicator (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_LeapIndicator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_LeapIndicator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_VersionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_VersionNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_VersionNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_VersionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::set_VersionNumber)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58ac8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_VersionNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpMode (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Mode)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Mode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::LiteNetLib::Utils::NtpMode)>(&::LiteNetLib::Utils::NtpPacket::set_Mode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58ac910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_Mode", {}, { ::i2c::type_of<::LiteNetLib::Utils::NtpMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Stratum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Stratum)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Stratum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Poll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Poll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Poll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_Precision
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_Precision)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58ac99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Precision", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_RootDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_RootDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ac9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_RootDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_RootDispersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_RootDispersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aca4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_RootDispersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_ReferenceId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_ReferenceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58aca54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_ReferenceId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_ReferenceTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58acad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_ReferenceTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_OriginTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_OriginTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58acc20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_OriginTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_ReceiveTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58acc28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_ReceiveTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_TransmitTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58acc30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_TransmitTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_TransmitTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::System::Nullable_1<::System::DateTime>)>(&::LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58acc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_TransmitTimestamp", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_DestinationTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58acdac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_DestinationTimestamp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.set_DestinationTimestamp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::System::Nullable_1<::System::DateTime>)>(&::LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58acdb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_DestinationTimestamp", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_RoundTripTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x58acdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_RoundTripTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.get_CorrectionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::get_CorrectionOffset)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58ad010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_CorrectionOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58ad144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::Utils::NtpPacket::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58ad20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.FromServerResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::Utils::NtpPacket* (*)(::ArrayW<uint8_t>, ::System::DateTime)>(&::LiteNetLib::Utils::NtpPacket::FromServerResponse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58ad294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "FromServerResponse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.ValidateRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::ValidateRequest)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x58ad320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "ValidateRequest", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.ValidateReply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::ValidateReply)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x58ad418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "ValidateReply", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.CheckTimestamps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)()>(&::LiteNetLib::Utils::NtpPacket::CheckTimestamps)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58acee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "CheckTimestamps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetDateTime64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::DateTime> (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetDateTime64)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58acadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetDateTime64", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SetDateTime64
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(int32_t, ::System::Nullable_1<::System::DateTime>)>(&::LiteNetLib::Utils::NtpPacket::SetDateTime64)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x58acc48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SetDateTime64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetTimeSpan32
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetTimeSpan32)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58ac9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetTimeSpan32", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetUInt64BE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetUInt64BE)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58ad568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetUInt64BE", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SetUInt64BE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::Utils::NtpPacket::*)(int32_t, uint64_t)>(&::LiteNetLib::Utils::NtpPacket::SetUInt64BE)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58ad5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SetUInt64BE", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetInt32BE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetInt32BE)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ad65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetInt32BE", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.GetUInt32BE
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::LiteNetLib::Utils::NtpPacket::*)(int32_t)>(&::LiteNetLib::Utils::NtpPacket::GetUInt32BE)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58aca5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetUInt32BE", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SwapEndianness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::LiteNetLib::Utils::NtpPacket::SwapEndianness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ad6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SwapEndianness", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::Utils::NtpPacket.SwapEndianness
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t)>(&::LiteNetLib::Utils::NtpPacket::SwapEndianness)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58ad660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SwapEndianness", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& LiteNetLib::Utils::NtpPacket::__cordl_internal_get__Bytes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bytes_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& LiteNetLib::Utils::NtpPacket::__cordl_internal_get__Bytes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Bytes_k__BackingField;
}
constexpr void LiteNetLib::Utils::NtpPacket::__cordl_internal_set__Bytes_k__BackingField(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Bytes_k__BackingField = value;
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
  ::cordl_internals::setStaticField<::System::DateTime, "Epoch", ::LiteNetLib::Utils::NtpPacket*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime LiteNetLib::Utils::NtpPacket::getStaticF_Epoch() {
  return ::cordl_internals::getStaticField<::System::DateTime, "Epoch", ::LiteNetLib::Utils::NtpPacket*>();
}
inline ::ArrayW<uint8_t> LiteNetLib::Utils::NtpPacket::get_Bytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Bytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_Bytes(::ArrayW<uint8_t> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_Bytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::LiteNetLib::Utils::NtpLeapIndicator LiteNetLib::Utils::NtpPacket::get_LeapIndicator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_LeapIndicator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpLeapIndicator>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_VersionNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_VersionNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_VersionNumber(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_VersionNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::LiteNetLib::Utils::NtpMode LiteNetLib::Utils::NtpPacket::get_Mode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Mode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpMode>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_Mode(::LiteNetLib::Utils::NtpMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_Mode", {}, { ::i2c::type_of<::LiteNetLib::Utils::NtpMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_Stratum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Stratum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_Poll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Poll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::Utils::NtpPacket::get_Precision() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_Precision", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_RootDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_RootDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_RootDispersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_RootDispersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline uint32_t LiteNetLib::Utils::NtpPacket::get_ReferenceId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_ReferenceId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_ReferenceTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_OriginTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_OriginTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_ReceiveTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_TransmitTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_TransmitTimestamp", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_DestinationTimestamp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp(::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "set_DestinationTimestamp", {}, { ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_RoundTripTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_RoundTripTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::get_CorrectionOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "get_CorrectionOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::_ctor(::ArrayW<uint8_t> bytes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytes);
}
inline ::LiteNetLib::Utils::NtpPacket* LiteNetLib::Utils::NtpPacket::FromServerResponse(::ArrayW<uint8_t> bytes, ::System::DateTime destinationTimestamp) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(),
                                                                                         { "FromServerResponse", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NtpPacket*>(nullptr, ___internal_method, bytes, destinationTimestamp);
}
inline void LiteNetLib::Utils::NtpPacket::ValidateRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "ValidateRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::ValidateReply() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "ValidateReply", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::Utils::NtpPacket::CheckTimestamps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "CheckTimestamps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> LiteNetLib::Utils::NtpPacket::GetDateTime64(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetDateTime64", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>>(this, ___internal_method, offset);
}
inline void LiteNetLib::Utils::NtpPacket::SetDateTime64(int32_t offset, ::System::Nullable_1<::System::DateTime> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SetDateTime64", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::System::DateTime>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, value);
}
inline ::System::TimeSpan LiteNetLib::Utils::NtpPacket::GetTimeSpan32(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetTimeSpan32", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, offset);
}
inline uint64_t LiteNetLib::Utils::NtpPacket::GetUInt64BE(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetUInt64BE", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method, offset);
}
inline void LiteNetLib::Utils::NtpPacket::SetUInt64BE(int32_t offset, uint64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SetUInt64BE", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, value);
}
inline int32_t LiteNetLib::Utils::NtpPacket::GetInt32BE(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetInt32BE", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, offset);
}
inline uint32_t LiteNetLib::Utils::NtpPacket::GetUInt32BE(int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "GetUInt32BE", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, offset);
}
inline uint32_t LiteNetLib::Utils::NtpPacket::SwapEndianness(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SwapEndianness", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint64_t LiteNetLib::Utils::NtpPacket::SwapEndianness(uint64_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::Utils::NtpPacket*>(), { "SwapEndianness", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, x);
}
inline ::LiteNetLib::Utils::NtpPacket* LiteNetLib::Utils::NtpPacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NtpPacket*>());
}
inline ::LiteNetLib::Utils::NtpPacket* LiteNetLib::Utils::NtpPacket::New_ctor(::ArrayW<uint8_t> bytes) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::Utils::NtpPacket*>(bytes));
}
// Ctor Parameters []
constexpr ::LiteNetLib::Utils::NtpPacket::NtpPacket() {}
