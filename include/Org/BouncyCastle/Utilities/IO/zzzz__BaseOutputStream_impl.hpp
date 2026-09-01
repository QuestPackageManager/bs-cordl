#pragma once
// IWYU pragma private; include "Org\BouncyCastle\Utilities\IO\BaseOutputStream.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_CanRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368a9d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_CanRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_CanSeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x368a9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_CanSeek", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_CanWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x368a9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_CanWrite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x368a9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::Flush)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x368a9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_Length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x368a9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x368aa2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_Position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(int64_t)>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::set_Position)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x368aa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "set_Position", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::IO::BaseOutputStream::Read)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x368aa9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                             { "Read", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::Org::BouncyCastle::Utilities::IO::BaseOutputStream::Seek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x368aad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                           { "Seek", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(int64_t)>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::SetLength)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x368ab0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "SetLength", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Utilities::IO::BaseOutputStream::Write)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x368ab44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(::ArrayW<uint8_t>)>(
    &::Org::BouncyCastle::Utilities::IO::BaseOutputStream::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x368abc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)(uint8_t)>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::WriteByte)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x368abe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                          { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::IO::BaseOutputStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Org::BouncyCastle::Utilities::IO::BaseOutputStream::*)()>(&::Org::BouncyCastle::Utilities::IO::BaseOutputStream::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x368a784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& Org::BouncyCastle::Utilities::IO::BaseOutputStream::__cordl_internal_get_closed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closed;
}
constexpr bool const& Org::BouncyCastle::Utilities::IO::BaseOutputStream::__cordl_internal_get_closed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___closed;
}
constexpr void Org::BouncyCastle::Utilities::IO::BaseOutputStream::__cordl_internal_set_closed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___closed = value;
}
inline bool Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_CanRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_CanRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_CanSeek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_CanSeek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_CanWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_CanWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Utilities::IO::BaseOutputStream::get_Position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "get_Position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::set_Position(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "set_Position", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Org::BouncyCastle::Utilities::IO::BaseOutputStream::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                           { "Read", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t Org::BouncyCastle::Utilities::IO::BaseOutputStream::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(),
                                                                                         { "Seek", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IO::SeekOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::SetLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { "SetLength", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::Write(::ArrayW<uint8_t> buffer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::WriteByte(uint8_t b) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b);
}
inline void Org::BouncyCastle::Utilities::IO::BaseOutputStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* Org::BouncyCastle::Utilities::IO::BaseOutputStream::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Org::BouncyCastle::Utilities::IO::BaseOutputStream*>());
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::IO::BaseOutputStream::BaseOutputStream() {}
