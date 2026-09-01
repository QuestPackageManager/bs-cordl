#pragma once
// IWYU pragma private; include "System\IO\TextReader_NullTextReader.hpp"
#include "System/IO/zzzz__TextReader_impl.hpp"
#include "System/IO/zzzz__TextReader_NullTextReader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextReader_NullTextReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextReader_NullTextReader::*)()>(&::GlobalNamespace::TextReader_NullTextReader::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c036e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_NullTextReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextReader_NullTextReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextReader_NullTextReader::Read)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c03738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_NullTextReader.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextReader_NullTextReader::*)()>(&::GlobalNamespace::TextReader_NullTextReader::ReadLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c03740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), 14 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextReader_NullTextReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TextReader_NullTextReader::Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline ::StringW GlobalNamespace::TextReader_NullTextReader::ReadLine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_NullTextReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::TextReader_NullTextReader* GlobalNamespace::TextReader_NullTextReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextReader_NullTextReader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextReader_NullTextReader::TextReader_NullTextReader() {}
