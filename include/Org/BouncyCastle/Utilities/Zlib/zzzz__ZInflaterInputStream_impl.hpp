#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Zlib\ZInflaterInputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZInflaterInputStream_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(::System::IO::Stream*, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3639e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639f80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(int64_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::set_Position)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3639fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3639fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(int64_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3639fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Read)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x3639fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(&::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x363a140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::WriteByte)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x363a160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(&::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Close)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x363a164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::ReadByte)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x363a1fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 37 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_flushLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flushLevel;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_flushLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flushLevel;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_set_flushLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flushLevel = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_set_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_buf1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf1;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_buf1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf1;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_set_buf1(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf1 = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_inp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inp;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_inp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___inp;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_set_inp(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___inp = value;
}
constexpr bool& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_nomoreinput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nomoreinput;
}
constexpr bool const& Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_get_nomoreinput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nomoreinput;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::__cordl_internal_set_nomoreinput(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nomoreinput = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::_ctor(::System::IO::Stream* inp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inp);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::_ctor(::System::IO::Stream* inp, bool nowrap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inp, nowrap);
}
inline bool Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::get_Position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::set_Position(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Write(::ArrayW<uint8_t> b, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, off, len);
}
inline int64_t Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::SetLength(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Read(::ArrayW<uint8_t> b, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, b, off, len);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream* Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::New_ctor(::System::IO::Stream* inp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(inp));
}
inline ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream* Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::New_ctor(::System::IO::Stream* inp, bool nowrap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*>(inp, nowrap));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream::ZInflaterInputStream() {}
