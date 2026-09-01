#pragma once
// IWYU pragma private; include "System\IO\StringReader.hpp"
#include "System/IO/zzzz__TextReader_impl.hpp"
#include "System/IO/zzzz__StringReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::System::IO::StringReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringReader::*)(::StringW)>(&::System::IO::StringReader::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c188ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringReader::*)()>(&::System::IO::StringReader::Close)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c189a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::StringReader::*)(bool)>(&::System::IO::StringReader::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c189b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StringReader::*)()>(&::System::IO::StringReader::Peek)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c189bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StringReader::*)()>(&::System::IO::StringReader::Read)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c18a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::IO::StringReader::*)(::by_ref<::ArrayW<char16_t>>, int32_t, int32_t)>(&::System::IO::StringReader::Read)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c18a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::StringReader::*)()>(&::System::IO::StringReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c18bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::IO::StringReader::*)()>(&::System::IO::StringReader::ReadLine)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5c18c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::StringReader.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::System::IO::StringReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::System::IO::StringReader::ReadAsync)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c18d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ::i2c::class_of<::System::IO::StringReader*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::StringReader::__cordl_internal_get__s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s;
}
constexpr ::StringW const& System::IO::StringReader::__cordl_internal_get__s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s;
}
constexpr void System::IO::StringReader::__cordl_internal_set__s(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____s = value;
}
constexpr int32_t& System::IO::StringReader::__cordl_internal_get__pos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr int32_t const& System::IO::StringReader::__cordl_internal_get__pos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pos;
}
constexpr void System::IO::StringReader::__cordl_internal_set__pos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pos = value;
}
constexpr int32_t& System::IO::StringReader::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int32_t const& System::IO::StringReader::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void System::IO::StringReader::__cordl_internal_set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
inline void System::IO::StringReader::_ctor(::StringW s) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::StringReader*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline void System::IO::StringReader::Close() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::IO::StringReader::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t System::IO::StringReader::Peek() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::StringReader::Read() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::IO::StringReader::Read(::by_ref<::ArrayW<char16_t>> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline ::StringW System::IO::StringReader::ReadToEnd() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::IO::StringReader::ReadLine() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* System::IO::StringReader::ReadAsync(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::StringReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, index, count);
}
inline ::System::IO::StringReader* System::IO::StringReader::New_ctor(::StringW s) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::StringReader*>(s));
}
// Ctor Parameters []
constexpr ::System::IO::StringReader::StringReader() {}
