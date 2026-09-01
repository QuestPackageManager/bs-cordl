#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Bcpg\BcpgInputStream.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__Packet_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)(::Org::BouncyCastle::Bcpg::BcpgInputStream*, bool, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3699f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadByte)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x369bf70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::Read)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x369c148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream.ReadPartialDataLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadPartialDataLength)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x369c018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(), { "ReadPartialDataLength", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_m_in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream* const& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_m_in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_in = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_partial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial;
}
constexpr bool const& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_partial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partial;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_set_partial(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___partial = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_dataLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataLength;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_get_dataLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataLength;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::__cordl_internal_set_dataLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dataLength = value;
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bcpgIn, partial, dataLength);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::ReadPartialDataLength() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(), { "ReadPartialDataLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn,
                                                                                                                                            bool partial, int32_t dataLength) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream*>(bcpgIn, partial, dataLength));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream_PartialInputStream::BcpgInputStream_PartialInputStream() {}
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Wrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::BcpgInputStream* (*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::Wrap)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3699584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "Wrap", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::System::IO::Stream*)>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3699618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3699644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::Read)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x369967c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x369972c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "ReadAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadFully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3699734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(),
                                                             { "ReadFully", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadFully
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)(::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3699788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "ReadFully", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.NextPacketTag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::PacketTag (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(
    &::Org::BouncyCastle::Bcpg::BcpgInputStream::NextPacketTag)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x36997a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "NextPacketTag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.ReadPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Bcpg::Packet* (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::ReadPacket)> {
  constexpr static std::size_t size = 0x6f8;
  constexpr static std::size_t addrs = 0x3699884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "ReadPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::BcpgInputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Bcpg::BcpgInputStream::*)()>(&::Org::BouncyCastle::Bcpg::BcpgInputStream::Close)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x369beec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_m_in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_m_in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_in;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_set_m_in(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_in = value;
}
constexpr bool& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr bool const& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_set_next(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_nextB() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextB;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_get_nextB() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextB;
}
constexpr void Org::BouncyCastle::Bcpg::BcpgInputStream::__cordl_internal_set_nextB(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextB = value;
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream::Wrap(::System::IO::Stream* inStr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "Wrap", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(nullptr, ___internal_method, inStr);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::_ctor(::System::IO::Stream* inputStream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inputStream);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::BcpgInputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Bcpg::BcpgInputStream::ReadAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "ReadAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully(::ArrayW<uint8_t> buffer, int32_t off, int32_t len) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(),
                                                           { "ReadFully", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, off, len);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::ReadFully(::ArrayW<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "ReadFully", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::BcpgInputStream::NextPacketTag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "NextPacketTag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PacketTag>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::Packet* Org::BouncyCastle::Bcpg::BcpgInputStream::ReadPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), { "ReadPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::Packet*>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::BcpgInputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Org::BouncyCastle::Bcpg::BcpgInputStream::New_ctor(::System::IO::Stream* inputStream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Bcpg::BcpgInputStream*>(inputStream));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream::BcpgInputStream() {}
