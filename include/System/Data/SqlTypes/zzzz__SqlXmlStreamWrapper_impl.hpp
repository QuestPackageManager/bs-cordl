#pragma once
// IWYU pragma private; include "System/Data/SqlTypes/SqlXmlStreamWrapper.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "System/Data/SqlTypes/zzzz__SqlXmlStreamWrapper_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::System::IO::Stream*)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6096310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.get_CanRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanRead)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6096c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.get_CanSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanSeek)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6096cd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.get_CanWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanWrite)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6096d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::get_Length)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6096d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.get_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::get_Position)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6096e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.set_Position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(int64_t)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::set_Position)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6096ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(int64_t, ::System::IO::SeekOrigin)>(
    &::System::Data::SqlTypes::SqlXmlStreamWrapper::Seek)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x6096fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Data::SqlTypes::SqlXmlStreamWrapper::Read)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x609713c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(
    &::System::Data::SqlTypes::SqlXmlStreamWrapper::Write)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6097378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.ReadByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::ReadByte)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x60975b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.WriteByte
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(uint8_t)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::WriteByte)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60976d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.SetLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(int64_t)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::SetLength)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60977bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::Flush)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6097854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(bool)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6097870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.ThrowIfStreamCannotSeek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotSeek)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6096e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamCannotSeek", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.ThrowIfStreamCannotRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotRead)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60972fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamCannotRead", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.ThrowIfStreamCannotWrite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotWrite)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6097538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamCannotWrite", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.ThrowIfStreamClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)(::StringW)>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamClosed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6096db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamClosed", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SqlTypes::SqlXmlStreamWrapper.IsStreamClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SqlTypes::SqlXmlStreamWrapper::*)()>(&::System::Data::SqlTypes::SqlXmlStreamWrapper::IsStreamClosed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6096c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "IsStreamClosed", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_get__stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr ::System::IO::Stream* const& System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_get__stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stream;
}
constexpr void System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_set__stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stream = value;
}
constexpr int64_t& System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_get__lPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lPosition;
}
constexpr int64_t const& System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_get__lPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lPosition;
}
constexpr void System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_set__lPosition(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lPosition = value;
}
constexpr bool& System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_get__isClosed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isClosed;
}
constexpr bool const& System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_get__isClosed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isClosed;
}
constexpr void System::Data::SqlTypes::SqlXmlStreamWrapper::__cordl_internal_set__isClosed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isClosed = value;
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::_ctor(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline bool System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanRead() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanSeek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Data::SqlTypes::SqlXmlStreamWrapper::get_CanWrite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Data::SqlTypes::SqlXmlStreamWrapper::get_Length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t System::Data::SqlTypes::SqlXmlStreamWrapper::get_Position() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::set_Position(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Data::SqlTypes::SqlXmlStreamWrapper::Seek(int64_t offset, ::System::IO::SeekOrigin origin) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline int32_t System::Data::SqlTypes::SqlXmlStreamWrapper::Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, offset, count);
}
inline int32_t System::Data::SqlTypes::SqlXmlStreamWrapper::ReadByte() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::WriteByte(uint8_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::SetLength(int64_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::Flush() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotSeek(::StringW method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamCannotSeek", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotRead(::StringW method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamCannotRead", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamCannotWrite(::StringW method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamCannotWrite", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline void System::Data::SqlTypes::SqlXmlStreamWrapper::ThrowIfStreamClosed(::StringW method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "ThrowIfStreamClosed", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline bool System::Data::SqlTypes::SqlXmlStreamWrapper::IsStreamClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(), { "IsStreamClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Data::SqlTypes::SqlXmlStreamWrapper* System::Data::SqlTypes::SqlXmlStreamWrapper::New_ctor(::System::IO::Stream* stream) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SqlTypes::SqlXmlStreamWrapper*>(stream));
}
// Ctor Parameters []
constexpr ::System::Data::SqlTypes::SqlXmlStreamWrapper::SqlXmlStreamWrapper() {}
