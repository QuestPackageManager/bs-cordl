#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgOutputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgObject_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::BcpgOutputStream* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Wrap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3699ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "Wrap", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3699f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x369a07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag, int64_t, bool)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x369a25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag, int64_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x369a38c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Bcpg::PacketTag, ::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x369a424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteNewPacketLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int64_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteNewPacketLength)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x369a548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WriteNewPacketLength", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::PacketTag, bool, bool, int64_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteHeader)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x369a108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                            { "WriteHeader", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.PartialFlush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(bool)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::PartialFlush)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x369a62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "PartialFlush", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePartial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x369a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WritePartial", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePartial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x369a714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                             { "WritePartial", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x369a818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::Write)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x369a844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteShort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int16_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteShort)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x369a870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int32_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteInt)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x369a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteLong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(int64_t)>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteLong)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x369a9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::ContainedPacket*)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x369aab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WritePacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::ContainedPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WritePacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::PacketTag, ::ArrayW<uint8_t>, bool)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x369aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                { "WritePacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::Org::BouncyCastle::Bcpg::BcpgObject*)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3699fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WriteObject", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.WriteObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)(::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*>)>(
    &::Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObjects)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x369ab24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                                                           { "WriteObjects", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x369ab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Finish)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x369abac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgOutputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgOutputStream::Close)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x369abec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_outStr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outStr;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_outStr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outStr;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_outStr(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outStr = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialBuffer;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialBuffer;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialBuffer(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partialBuffer = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBufferLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialBufferLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialBufferLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialBufferLength;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialBufferLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partialBufferLength = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialPower() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialPower;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialPower() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialPower;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialPower(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partialPower = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialOffset;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_get_partialOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partialOffset;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgOutputStream::__cordl_internal_set_partialOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partialOffset = value;
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::Wrap(::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "Wrap", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(nullptr, ___internal_method, outStr);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr, tag);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length, bool oldFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr, tag, length, oldFormat);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr, tag, length);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStr, tag, buffer);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteNewPacketLength(int64_t bodyLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WriteNewPacketLength", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyLen);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteHeader(::Org::BouncyCastle::Bcpg::PacketTag tag, bool oldPackets, bool partial, int64_t bodyLen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                       { "WriteHeader", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, oldPackets, partial, bodyLen);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::PartialFlush(bool isLast) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "PartialFlush", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLast);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial(uint8_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WritePartial", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePartial(::ArrayW<uint8_t> buffer, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                           { "WritePartial", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, off, len);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteByte(uint8_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteShort(int16_t n) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteInt(int32_t n) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteLong(int64_t n) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket(::Org::BouncyCastle::Bcpg::ContainedPacket* p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WritePacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::ContainedPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WritePacket(::Org::BouncyCastle::Bcpg::PacketTag tag, ::ArrayW<uint8_t> body, bool oldFormat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                              { "WritePacket", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::PacketTag>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tag, body, oldFormat);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObject(::Org::BouncyCastle::Bcpg::BcpgObject* bcpgObject) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "WriteObject", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgObject);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::WriteObjects(::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*> v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(),
                                                                                         { "WriteObjects", {}, { ::i2c::type_of<::ArrayW<::Org::BouncyCastle::Bcpg::BcpgObject*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgOutputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream* outStr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr));
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag));
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length,
                                                                                                        bool oldFormat) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag, length, oldFormat));
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag, int64_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag, length));
}
inline ::Org::BouncyCastle::Bcpg::BcpgOutputStream* Org::BouncyCastle::Bcpg::BcpgOutputStream::New_ctor(::System::IO::Stream* outStr, ::Org::BouncyCastle::Bcpg::PacketTag tag,
                                                                                                        ::ArrayW<uint8_t> buffer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>(outStr, tag, buffer));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgOutputStream::BcpgOutputStream() {}
