#pragma once
// IWYU pragma private; include "System/IO/TextWriter_NullTextWriter.hpp"
#include "System/IO/zzzz__TextWriter_impl.hpp"
#include "System/IO/zzzz__TextWriter_NullTextWriter_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_NullTextWriter::*)()>(&::GlobalNamespace::TextWriter_NullTextWriter::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5c02090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter.get_Encoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::GlobalNamespace::TextWriter_NullTextWriter::*)()>(&::GlobalNamespace::TextWriter_NullTextWriter::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c02124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_NullTextWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextWriter_NullTextWriter::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0212c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_NullTextWriter::*)(::StringW)>(&::GlobalNamespace::TextWriter_NullTextWriter::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c02130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_NullTextWriter::*)()>(&::GlobalNamespace::TextWriter_NullTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c02134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_NullTextWriter::*)(::StringW)>(&::GlobalNamespace::TextWriter_NullTextWriter::WriteLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c02138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextWriter_NullTextWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextWriter_NullTextWriter::*)(char16_t)>(&::GlobalNamespace::TextWriter_NullTextWriter::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0213c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 16 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TextWriter_NullTextWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::Encoding* GlobalNamespace::TextWriter_NullTextWriter::get_Encoding() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void GlobalNamespace::TextWriter_NullTextWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void GlobalNamespace::TextWriter_NullTextWriter::Write(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextWriter_NullTextWriter::WriteLine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextWriter_NullTextWriter::WriteLine(::StringW value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TextWriter_NullTextWriter::Write(char16_t value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextWriter_NullTextWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TextWriter_NullTextWriter* GlobalNamespace::TextWriter_NullTextWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextWriter_NullTextWriter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextWriter_NullTextWriter::TextWriter_NullTextWriter() {}
