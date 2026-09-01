#pragma once
// IWYU pragma private; include "System\IO\Error.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Error_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::IO::Error.GetStreamIsClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::IO::Error::GetStreamIsClosed)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bf6600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetStreamIsClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Error.GetEndOfFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::IO::Error::GetEndOfFile)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bf6684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetEndOfFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Error.GetReadNotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::IO::Error::GetReadNotSupported)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bf6704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetReadNotSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Error.GetWriteNotSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)()>(&::System::IO::Error::GetWriteNotSupported)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bf6784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetWriteNotSupported", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Exception* System::IO::Error::GetStreamIsClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetStreamIsClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::IO::Error::GetEndOfFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetEndOfFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::IO::Error::GetReadNotSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetReadNotSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
inline ::System::Exception* System::IO::Error::GetWriteNotSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Error*>(), { "GetWriteNotSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::Error::Error() {}
