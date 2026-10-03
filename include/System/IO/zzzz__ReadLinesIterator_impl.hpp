#pragma once
// IWYU pragma private; include "System/IO/ReadLinesIterator.hpp"
#include "System/IO/zzzz__Iterator_1_impl.hpp"
#include "System/IO/zzzz__ReadLinesIterator_def.hpp"
#include "System/IO/zzzz__Iterator_1_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::IO::ReadLinesIterator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ReadLinesIterator::*)(::StringW, ::System::Text::Encoding*, ::System::IO::StreamReader*)>(
    &::System::IO::ReadLinesIterator::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6023484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::IO::StreamReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ReadLinesIterator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IO::ReadLinesIterator::*)()>(&::System::IO::ReadLinesIterator::MoveNext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60234f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(), { ::i2c::class_of<::System::IO::ReadLinesIterator*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ReadLinesIterator.Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Iterator_1<::StringW>* (::System::IO::ReadLinesIterator::*)()>(&::System::IO::ReadLinesIterator::Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6023570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(), { ::i2c::class_of<::System::IO::ReadLinesIterator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ReadLinesIterator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::IO::ReadLinesIterator::*)(bool)>(&::System::IO::ReadLinesIterator::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6023630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(), { ::i2c::class_of<::System::IO::ReadLinesIterator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ReadLinesIterator.CreateIterator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::ReadLinesIterator* (*)(::StringW, ::System::Text::Encoding*)>(&::System::IO::ReadLinesIterator::CreateIterator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6023708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(), { "CreateIterator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::ReadLinesIterator.CreateIterator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::ReadLinesIterator* (*)(::StringW, ::System::Text::Encoding*, ::System::IO::StreamReader*)>(
    &::System::IO::ReadLinesIterator::CreateIterator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6023580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(),
                                         { "CreateIterator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::IO::StreamReader*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::IO::ReadLinesIterator::__cordl_internal_get__path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____path;
}
constexpr ::StringW const& System::IO::ReadLinesIterator::__cordl_internal_get__path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____path;
}
constexpr void System::IO::ReadLinesIterator::__cordl_internal_set__path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____path = value;
}
constexpr ::System::Text::Encoding*& System::IO::ReadLinesIterator::__cordl_internal_get__encoding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::IO::ReadLinesIterator::__cordl_internal_get__encoding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encoding;
}
constexpr void System::IO::ReadLinesIterator::__cordl_internal_set__encoding(::System::Text::Encoding* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____encoding = value;
}
constexpr ::System::IO::StreamReader*& System::IO::ReadLinesIterator::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::IO::StreamReader* const& System::IO::ReadLinesIterator::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void System::IO::ReadLinesIterator::__cordl_internal_set__reader(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reader = value;
}
inline void System::IO::ReadLinesIterator::_ctor(::StringW path, ::System::Text::Encoding* encoding, ::System::IO::StreamReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::IO::StreamReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, encoding, reader);
}
inline bool System::IO::ReadLinesIterator::MoveNext() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::ReadLinesIterator*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::Iterator_1<::StringW>* System::IO::ReadLinesIterator::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::ReadLinesIterator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Iterator_1<::StringW>*>(this, ___internal_method);
}
inline void System::IO::ReadLinesIterator::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::ReadLinesIterator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::IO::ReadLinesIterator* System::IO::ReadLinesIterator::CreateIterator(::StringW path, ::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(), { "CreateIterator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::ReadLinesIterator*>(nullptr, ___internal_method, path, encoding);
}
inline ::System::IO::ReadLinesIterator* System::IO::ReadLinesIterator::CreateIterator(::StringW path, ::System::Text::Encoding* encoding, ::System::IO::StreamReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::ReadLinesIterator*>(),
                                              { "CreateIterator", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::System::IO::StreamReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::ReadLinesIterator*>(nullptr, ___internal_method, path, encoding, reader);
}
inline ::System::IO::ReadLinesIterator* System::IO::ReadLinesIterator::New_ctor(::StringW path, ::System::Text::Encoding* encoding, ::System::IO::StreamReader* reader) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::ReadLinesIterator*>(path, encoding, reader));
}
// Ctor Parameters []
constexpr ::System::IO::ReadLinesIterator::ReadLinesIterator() {}
