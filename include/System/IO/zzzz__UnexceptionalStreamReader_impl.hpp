#pragma once
// IWYU pragma private; include "System/IO/UnexceptionalStreamReader.hpp"
#include "System/IO/zzzz__StreamReader_impl.hpp"
#include "System/IO/zzzz__UnexceptionalStreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::UnexceptionalStreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(
    &::System::IO::UnexceptionalStreamReader::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c1f150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::UnexceptionalStreamReader::*)()>(&::System::IO::UnexceptionalStreamReader::Peek)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c1f1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::UnexceptionalStreamReader::*)()>(&::System::IO::UnexceptionalStreamReader::Read)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c1f258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::UnexceptionalStreamReader::*)(::by_ref<::ArrayW<char16_t>>, int32_t, int32_t)>(
    &::System::IO::UnexceptionalStreamReader::Read)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5c1f2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader.CheckEOL
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::UnexceptionalStreamReader::*)(char16_t)>(&::System::IO::UnexceptionalStreamReader::CheckEOL)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c1f570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { "CheckEOL", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::UnexceptionalStreamReader::*)()>(&::System::IO::UnexceptionalStreamReader::ReadLine)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c1f714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::UnexceptionalStreamReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::UnexceptionalStreamReader::*)()>(&::System::IO::UnexceptionalStreamReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c1f7a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::IO::UnexceptionalStreamReader::setStaticF_newline(::ArrayW<bool> value) {
  ::cordl_internals::setStaticField<::ArrayW<bool>, "newline", ::System::IO::UnexceptionalStreamReader*>(std::forward<::ArrayW<bool>>(value));
}
inline ::ArrayW<bool> System::IO::UnexceptionalStreamReader::getStaticF_newline() {
  return ::cordl_internals::getStaticField<::ArrayW<bool>, "newline", ::System::IO::UnexceptionalStreamReader*>();
}
inline void System::IO::UnexceptionalStreamReader::setStaticF_newlineChar(char16_t value) {
  ::cordl_internals::setStaticField<char16_t, "newlineChar", ::System::IO::UnexceptionalStreamReader*>(std::forward<char16_t>(value));
}
inline char16_t System::IO::UnexceptionalStreamReader::getStaticF_newlineChar() {
  return ::cordl_internals::getStaticField<char16_t, "newlineChar", ::System::IO::UnexceptionalStreamReader*>();
}
inline void System::IO::UnexceptionalStreamReader::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding);
}
inline int32_t System::IO::UnexceptionalStreamReader::Peek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::UnexceptionalStreamReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::UnexceptionalStreamReader::Read(::by_ref<::ArrayW<char16_t>> dest_buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest_buffer, index, count);
}
inline bool System::IO::UnexceptionalStreamReader::CheckEOL(char16_t current) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), { "CheckEOL", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, current);
}
inline ::StringW System::IO::UnexceptionalStreamReader::ReadLine() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::UnexceptionalStreamReader::ReadToEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::UnexceptionalStreamReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::UnexceptionalStreamReader* System::IO::UnexceptionalStreamReader::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::UnexceptionalStreamReader*>(stream, encoding));
}
// Ctor Parameters []
constexpr ::System::IO::UnexceptionalStreamReader::UnexceptionalStreamReader() {}
