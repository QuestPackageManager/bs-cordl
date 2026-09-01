#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\Zlib\ZDeflaterOutputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZDeflaterOutputStream_def.hpp"
#include "Org/BouncyCastle/Utilities/Zlib/zzzz__ZStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3639758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(::System::IO::Stream*, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(::System::IO::Stream*, int32_t, bool)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3639764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36398c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36398cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36398d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36398dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36398e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(int64_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x36398ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Write)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x36398f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(int64_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3639a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3639a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(&::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Flush)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3639a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)(uint8_t)>(
    &::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3639a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(&::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Finish)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x3639ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), { "Finish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.End
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(&::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::End)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3639c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), { "End", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::*)()>(&::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Close)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x3639cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream* const& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr int32_t& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_flushLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flushLevel;
}
constexpr int32_t const& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_flushLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flushLevel;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_set_flushLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flushLevel = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_set_buf(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf = value;
}
constexpr ::ArrayW<uint8_t>& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_buf1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf1;
}
constexpr ::ArrayW<uint8_t> const& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_buf1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buf1;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_set_buf1(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buf1 = value;
}
constexpr ::System::IO::Stream*& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_outp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outp;
}
constexpr ::System::IO::Stream* const& Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_get_outp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outp;
}
constexpr void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::__cordl_internal_set_outp(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outp = value;
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::_ctor(::System::IO::Stream* outp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outp);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::_ctor(::System::IO::Stream* outp, int32_t level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outp, level);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::_ctor(::System::IO::Stream* outp, int32_t level, bool nowrap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outp, level, nowrap);
}
inline bool Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::get_Position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::set_Position(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Write(::ArrayW<uint8_t> b, int32_t off, int32_t len) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, off, len);
}
inline int64_t Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::SetLength(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Finish() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), { "Finish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::End() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), { "End", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::New_ctor(::System::IO::Stream* outp) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(outp));
}
inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::New_ctor(::System::IO::Stream* outp, int32_t level) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(outp, level));
}
inline ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream* Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::New_ctor(::System::IO::Stream* outp, int32_t level, bool nowrap) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream*>(outp, level, nowrap));
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Zlib::ZDeflaterOutputStream::ZDeflaterOutputStream() {}
