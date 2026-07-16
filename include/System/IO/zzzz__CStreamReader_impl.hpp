#pragma once
// IWYU pragma private; include "System/IO/CStreamReader.hpp"
#include "System/IO/zzzz__StreamReader_impl.hpp"
#include "System/IO/zzzz__CStreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/zzzz__TermInfoDriver_def.hpp"
//  Writing Method size for method: ::System::IO::CStreamReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::CStreamReader::*)(::System::IO::Stream*, ::System::Text::Encoding*)>(&::System::IO::CStreamReader::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5c1fb60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::Peek)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c1fc8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ::i2c::class_of<::System::IO::CStreamReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::Read)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c1fd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ::i2c::class_of<::System::IO::CStreamReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::CStreamReader::*)(::by_ref<::ArrayW<char16_t>>, int32_t, int32_t)>(&::System::IO::CStreamReader::Read)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c1fdf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ::i2c::class_of<::System::IO::CStreamReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::ReadLine)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c1ff94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ::i2c::class_of<::System::IO::CStreamReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::CStreamReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::CStreamReader::*)()>(&::System::IO::CStreamReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c20030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ::i2c::class_of<::System::IO::CStreamReader*>(), 13 }));
    return ___internal_method;
  }
};
constexpr ::System::TermInfoDriver*& System::IO::CStreamReader::__cordl_internal_get_driver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___driver;
}
constexpr ::System::TermInfoDriver* const& System::IO::CStreamReader::__cordl_internal_get_driver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___driver;
}
constexpr void System::IO::CStreamReader::__cordl_internal_set_driver(::System::TermInfoDriver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___driver = value;
}
inline void System::IO::CStreamReader::_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::CStreamReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, encoding);
}
inline int32_t System::IO::CStreamReader::Peek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::CStreamReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::CStreamReader::Read(::by_ref<::ArrayW<char16_t>> dest, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dest, index, count);
}
inline ::StringW System::IO::CStreamReader::ReadLine() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::CStreamReader::ReadToEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::CStreamReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::IO::CStreamReader* System::IO::CStreamReader::New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::CStreamReader*>(stream, encoding));
}
// Ctor Parameters []
constexpr ::System::IO::CStreamReader::CStreamReader() {}
