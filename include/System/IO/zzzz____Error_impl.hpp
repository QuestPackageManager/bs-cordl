#pragma once
// IWYU pragma private; include "System\IO\__Error.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz____Error_def.hpp"
//  Writing Method size for method: ::System::IO::__Error.EndOfFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::__Error::EndOfFile)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c1576c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "EndOfFile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__Error.FileNotOpen
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::__Error::FileNotOpen)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c157bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "FileNotOpen", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__Error.ReaderClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::__Error::ReaderClosed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c15810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "ReaderClosed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__Error.GetDisplayablePath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, bool)>(&::System::IO::__Error::GetDisplayablePath)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c15864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "GetDisplayablePath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__Error.WinIOError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::StringW)>(&::System::IO::__Error::WinIOError)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5c15b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "WinIOError", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::__Error.WriterClosed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::IO::__Error::WriterClosed)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5c16090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "WriterClosed", {}, {} })));
    return ___internal_method;
  }
};
inline void System::IO::__Error::EndOfFile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "EndOfFile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::IO::__Error::FileNotOpen() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "FileNotOpen", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::IO::__Error::ReaderClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "ReaderClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW System::IO::__Error::GetDisplayablePath(::StringW path, bool isInvalidPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "GetDisplayablePath", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path, isInvalidPath);
}
inline void System::IO::__Error::WinIOError(int32_t errorCode, ::StringW maybeFullPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "WinIOError", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorCode, maybeFullPath);
}
inline void System::IO::__Error::WriterClosed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::__Error*>(), { "WriterClosed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::__Error::__Error() {}
