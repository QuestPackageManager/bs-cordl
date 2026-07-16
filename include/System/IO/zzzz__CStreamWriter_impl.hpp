#pragma once
// IWYU pragma private; include "System/IO/CStreamWriter.hpp"
#include "System/IO/zzzz__StreamWriter_impl.hpp"
#include "System/IO/zzzz__CStreamWriter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__TermInfoDriver_def.hpp"
//  Writing Method size for method: ::System::IO::CStreamWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::System::IO::Stream*, ::System::Text::Encoding*, bool)>(&::System::IO::CStreamWriter::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5c200cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::IO::CStreamWriter::Write)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5c20204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { ::i2c::class_of<::System::IO::CStreamWriter*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(char16_t)>(&::System::IO::CStreamWriter::Write)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c205d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { ::i2c::class_of<::System::IO::CStreamWriter*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.InternalWriteString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::StringW)>(&::System::IO::CStreamWriter::InternalWriteString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c20814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { "InternalWriteString", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.InternalWriteChar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(char16_t)>(&::System::IO::CStreamWriter::InternalWriteChar)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c2078c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { "InternalWriteChar", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.InternalWriteChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::ArrayW<char16_t>, int32_t)>(&::System::IO::CStreamWriter::InternalWriteChars)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5c2089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { "InternalWriteChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::ArrayW<char16_t>)>(&::System::IO::CStreamWriter::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c2092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { ::i2c::class_of<::System::IO::CStreamWriter*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.Write
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::StringW)>(&::System::IO::CStreamWriter::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c20950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { ::i2c::class_of<::System::IO::CStreamWriter*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamWriter.WriteLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamWriter::*)(::StringW)>(&::System::IO::CStreamWriter::WriteLine)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c20a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { ::i2c::class_of<::System::IO::CStreamWriter*>(), 23 }));
    return ___internal_method;
  }
};
constexpr ::System::TermInfoDriver*& System::IO::CStreamWriter::__cordl_internal_get_driver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___driver;
}
constexpr ::System::TermInfoDriver* const& System::IO::CStreamWriter::__cordl_internal_get_driver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___driver;
}
constexpr void System::IO::CStreamWriter::__cordl_internal_set_driver(::System::TermInfoDriver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___driver = value;
}
inline void System::IO::CStreamWriter::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding, leaveOpen);
}
inline void System::IO::CStreamWriter::Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamWriter*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, index, count);
}
inline void System::IO::CStreamWriter::Write(char16_t val) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamWriter*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void System::IO::CStreamWriter::InternalWriteString(::StringW val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { "InternalWriteString", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void System::IO::CStreamWriter::InternalWriteChar(char16_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { "InternalWriteChar", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void System::IO::CStreamWriter::InternalWriteChars(::ArrayW<char16_t> buffer, int32_t n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::CStreamWriter*>(), { "InternalWriteChars", {}, { ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, n);
}
inline void System::IO::CStreamWriter::Write(::ArrayW<char16_t> val) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamWriter*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void System::IO::CStreamWriter::Write(::StringW val) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamWriter*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void System::IO::CStreamWriter::WriteLine(::StringW val) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamWriter*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::System::IO::CStreamWriter* System::IO::CStreamWriter::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::CStreamWriter*>(stream, encoding, leaveOpen));
}
// Ctor Parameters []
constexpr ::System::IO::CStreamWriter::CStreamWriter() {}
