#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Crypto\IO\CipherStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Org/BouncyCastle/Crypto/IO/zzzz__CipherStream_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBufferedCipher_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Crypto::IBufferedCipher*, ::Org::BouncyCastle::Crypto::IBufferedCipher*)>(&::Org::BouncyCastle::Crypto::IO::CipherStream::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x33e555c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>(),
                                                                                               ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_ReadCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(
    &::Org::BouncyCastle::Crypto::IO::CipherStream::get_ReadCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e55e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_ReadCipher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_WriteCipher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Org::BouncyCastle::Crypto::IBufferedCipher* (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(
    &::Org::BouncyCastle::Crypto::IO::CipherStream::get_WriteCipher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e55ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_WriteCipher", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::ReadByte)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x33e55f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::IO::CipherStream::Read)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x33e56d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.FillInBuf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::FillInBuf)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x33e5690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "FillInBuf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.ReadAndProcessBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::ReadAndProcessBlock)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x33e582c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "ReadAndProcessBlock", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::IO::CipherStream::Write)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x33e5a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(uint8_t)>(&::Org::BouncyCastle::Crypto::IO::CipherStream::WriteByte)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x33e5b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::get_CanRead)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33e5c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x33e5cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x33e5d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33e5d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33e5d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(int64_t)>(&::Org::BouncyCastle::Crypto::IO::CipherStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33e5d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "set_Position", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::Close)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x33e5dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)()>(&::Org::BouncyCastle::Crypto::IO::CipherStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x33e5f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Org::BouncyCastle::Crypto::IO::CipherStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33e5f24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(),
                                                                                           { "Seek", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::IO::CipherStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Crypto::IO::CipherStream::*)(int64_t)>(&::Org::BouncyCastle::Crypto::IO::CipherStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x33e5f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "SetLength", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_set_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stream = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_inCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_inCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inCipher;
}
constexpr void Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_set_inCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inCipher = value;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_outCipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outCipher;
}
constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_outCipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outCipher;
}
constexpr void Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_set_outCipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outCipher = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_mInBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInBuf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_mInBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInBuf;
}
constexpr void Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_set_mInBuf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInBuf = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_mInPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInPos;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_mInPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mInPos;
}
constexpr void Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_set_mInPos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mInPos = value;
}
constexpr bool& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_inStreamEnded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStreamEnded;
}
constexpr bool const& Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_get_inStreamEnded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inStreamEnded;
}
constexpr void Org::BouncyCastle::Crypto::IO::CipherStream::__cordl_internal_set_inStreamEnded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inStreamEnded = value;
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IBufferedCipher* readCipher,
                                                               ::Org::BouncyCastle::Crypto::IBufferedCipher* writeCipher) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>(),
                                                                                             ::i2c::type_of<::Org::BouncyCastle::Crypto::IBufferedCipher*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, readCipher, writeCipher);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Crypto::IO::CipherStream::get_ReadCipher() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_ReadCipher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IBufferedCipher* Org::BouncyCastle::Crypto::IO::CipherStream::get_WriteCipher() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_WriteCipher", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IBufferedCipher*>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::IO::CipherStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::IO::CipherStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline bool Org::BouncyCastle::Crypto::IO::CipherStream::FillInBuf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "FillInBuf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Org::BouncyCastle::Crypto::IO::CipherStream::ReadAndProcessBlock() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "ReadAndProcessBlock", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline bool Org::BouncyCastle::Crypto::IO::CipherStream::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::IO::CipherStream::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Crypto::IO::CipherStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::IO::CipherStream::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::IO::CipherStream::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::set_Position(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "set_Position", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Crypto::IO::CipherStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "Seek", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Org::BouncyCastle::Crypto::IO::CipherStream::SetLength(int64_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Crypto::IO::CipherStream*>(), { "SetLength", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline ::Org::BouncyCastle::Crypto::IO::CipherStream* Org::BouncyCastle::Crypto::IO::CipherStream::New_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Crypto::IBufferedCipher* readCipher,
                                                                                                            ::Org::BouncyCastle::Crypto::IBufferedCipher* writeCipher) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Crypto::IO::CipherStream*>(stream, readCipher, writeCipher));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::IO::CipherStream::CipherStream() {}
