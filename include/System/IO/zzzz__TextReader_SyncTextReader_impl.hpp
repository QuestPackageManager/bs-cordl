#pragma once
// IWYU pragma private; include "System\IO\TextReader_SyncTextReader.hpp"
#include "System/IO/zzzz__TextReader_impl.hpp"
#include "System/IO/zzzz__TextReader_SyncTextReader_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextReader_SyncTextReader::*)(::System::IO::TextReader*)>(&::GlobalNamespace::TextReader_SyncTextReader::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5c03608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.Close
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextReader_SyncTextReader::*)()>(&::GlobalNamespace::TextReader_SyncTextReader::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c03748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextReader_SyncTextReader::*)(bool)>(&::GlobalNamespace::TextReader_SyncTextReader::Dispose)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c03764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.Peek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextReader_SyncTextReader::*)()>(&::GlobalNamespace::TextReader_SyncTextReader::Peek)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c03828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextReader_SyncTextReader::*)()>(&::GlobalNamespace::TextReader_SyncTextReader::Read)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c03844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TextReader_SyncTextReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextReader_SyncTextReader::Read)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c03860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.ReadLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextReader_SyncTextReader::*)()>(&::GlobalNamespace::TextReader_SyncTextReader::ReadLine)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0387c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.ReadToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::TextReader_SyncTextReader::*)()>(&::GlobalNamespace::TextReader_SyncTextReader::ReadToEnd)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c0389c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextReader_SyncTextReader.ReadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<int32_t>* (::GlobalNamespace::TextReader_SyncTextReader::*)(::ArrayW<char16_t>, int32_t, int32_t)>(
    &::GlobalNamespace::TextReader_SyncTextReader::ReadAsync)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c038bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 15 }));
    return ___internal_method;
  }
};
constexpr ::System::IO::TextReader*& GlobalNamespace::TextReader_SyncTextReader::__cordl_internal_get__in() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr ::System::IO::TextReader* const& GlobalNamespace::TextReader_SyncTextReader::__cordl_internal_get__in() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____in;
}
constexpr void GlobalNamespace::TextReader_SyncTextReader::__cordl_internal_set__in(::System::IO::TextReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____in = value;
}
inline void GlobalNamespace::TextReader_SyncTextReader::_ctor(::System::IO::TextReader* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), { ".ctor", {}, { ::i2c::type_of<::System::IO::TextReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::TextReader_SyncTextReader::Close() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextReader_SyncTextReader::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline int32_t GlobalNamespace::TextReader_SyncTextReader::Peek() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TextReader_SyncTextReader::Read() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TextReader_SyncTextReader::Read(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, index, count);
}
inline ::StringW GlobalNamespace::TextReader_SyncTextReader::ReadLine() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::TextReader_SyncTextReader::ReadToEnd() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<int32_t>* GlobalNamespace::TextReader_SyncTextReader::ReadAsync(::ArrayW<char16_t> buffer, int32_t index, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextReader_SyncTextReader*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<int32_t>*>(this, ___internal_method, buffer, index, count);
}
inline ::GlobalNamespace::TextReader_SyncTextReader* GlobalNamespace::TextReader_SyncTextReader::New_ctor(::System::IO::TextReader* t) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextReader_SyncTextReader*>(t));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextReader_SyncTextReader::TextReader_SyncTextReader() {}
