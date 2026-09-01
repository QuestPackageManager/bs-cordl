#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IO\MacStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__MacStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)(::System::IO::Stream*, ::Org::BouncyCastle::Crypto::IMac*,
                                                                                                            ::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crypto::IO::MacStream::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x33e68fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.ReadMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::ReadMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e6974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.WriteMac
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IMac* (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::WriteMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::IO::MacStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::IO::MacStream::Read)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x33e6984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::ReadByte)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33e6a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::IO::MacStream::Write)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x33e6b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::IO::MacStream::WriteByte)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x33e6c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::get_CanRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33e6d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33e6d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33e6d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x33e6d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::get_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e6da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)(int64_t)>(&::Org::BouncyCastle::Crypto::IO::MacStream::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e6dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::Close)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x33e6de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)()>(&::Org::BouncyCastle::Crypto::IO::MacStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e6e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::IO::MacStream::*)(int64_t, ::System::IO::SeekOrigin)>(&::Org::BouncyCastle::Crypto::IO::MacStream::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e6e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::MacStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::MacStream::*)(int64_t)>(&::Org::BouncyCastle::Crypto::IO::MacStream::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e6e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 34 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_get_inMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_get_inMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inMac;
}
constexpr void Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_set_inMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inMac = value;
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_get_outMac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outMac;
}
constexpr ::Org::BouncyCastle::Crypto::IMac* const& Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_get_outMac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outMac;
}
constexpr void Org::BouncyCastle::Crypto::IO::MacStream::__cordl_internal_set_outMac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outMac = value;
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IMac* readMac, ::Org::BouncyCastle::Crypto::IMac* writeMac) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IMac*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, readMac, writeMac);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::IO::MacStream::ReadMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::IO::MacStream::WriteMac() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::IO::MacStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int32_t Org::BouncyCastle::Crypto::IO::MacStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline bool Org::BouncyCastle::Crypto::IO::MacStream::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::IO::MacStream::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::IO::MacStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::IO::MacStream::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::IO::MacStream::get_Position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::set_Position(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::IO::MacStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Org::BouncyCastle::Crypto::IO::MacStream::SetLength(int64_t length) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::MacStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline ::Org::BouncyCastle::Crypto::IO::MacStream* Org::BouncyCastle::Crypto::IO::MacStream::New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IMac* readMac,
                                                                                                      ::Org::BouncyCastle::Crypto::IMac* writeMac) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::IO::MacStream*>(stream, readMac, writeMac));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::IO::MacStream::MacStream() {}
