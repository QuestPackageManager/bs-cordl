#pragma once
// IWYU pragma private; include "System\IO\UnexceptionalStreamWriter.hpp"
#include "System/IO/zzzz__StreamWriter_impl.hpp"
#include "System/IO/zzzz__UnexceptionalStreamWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::IO::UnexceptionalStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c21b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)()>(&::System::IO::UnexceptionalStreamWriter::Flush)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c21ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c21c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(char16_t)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c21cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::ArrayW<char16_t>)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c21d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamWriter::*)(::StringW)>(&::System::IO::UnexceptionalStreamWriter::Write)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c21dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 19 }));
    return ___internal_method;
  }
};
inline void System::IO::UnexceptionalStreamWriter::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding);
}
inline void System::IO::UnexceptionalStreamWriter::Flush() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::UnexceptionalStreamWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::UnexceptionalStreamWriter::Write(char16_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::UnexceptionalStreamWriter::Write(::ArrayW<char16_t> value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::IO::UnexceptionalStreamWriter::Write(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::IO::UnexceptionalStreamWriter* System::IO::UnexceptionalStreamWriter::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::UnexceptionalStreamWriter*>(stream, encoding));
}
// Ctor Parameters []
constexpr ::System::IO::UnexceptionalStreamWriter::UnexceptionalStreamWriter() {}
