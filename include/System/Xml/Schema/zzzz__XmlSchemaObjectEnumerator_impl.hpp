#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaObjectEnumerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectEnumerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectEnumerator::*)(::System::Collections::IEnumerator*)>(
    &::System::Xml::Schema::XmlSchemaObjectEnumerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62322b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectEnumerator.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaObjectEnumerator::*)()>(&::System::Xml::Schema::XmlSchemaObjectEnumerator::MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62322b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectEnumerator.get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaObject* (::System::Xml::Schema::XmlSchemaObjectEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectEnumerator::get_Current)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x623235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectEnumerator.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaObjectEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectEnumerator::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6232454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectEnumerator.System_Collections_IEnumerator_MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XmlSchemaObjectEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectEnumerator::System_Collections_IEnumerator_MoveNext)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x62324fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaObjectEnumerator.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlSchemaObjectEnumerator::*)()>(
    &::System::Xml::Schema::XmlSchemaObjectEnumerator::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62325a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IEnumerator*& System::Xml::Schema::XmlSchemaObjectEnumerator::__cordl_internal_get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
constexpr ::System::Collections::IEnumerator* const& System::Xml::Schema::XmlSchemaObjectEnumerator::__cordl_internal_get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumerator;
}
constexpr void System::Xml::Schema::XmlSchemaObjectEnumerator::__cordl_internal_set_enumerator(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enumerator = value;
}
inline void System::Xml::Schema::XmlSchemaObjectEnumerator::_ctor(::System::Collections::IEnumerator* enumerator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IEnumerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumerator);
}
inline bool System::Xml::Schema::XmlSchemaObjectEnumerator::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObject* System::Xml::Schema::XmlSchemaObjectEnumerator::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObject*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaObjectEnumerator::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XmlSchemaObjectEnumerator::System_Collections_IEnumerator_MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "System.Collections.IEnumerator.MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Xml::Schema::XmlSchemaObjectEnumerator::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaObjectEnumerator* System::Xml::Schema::XmlSchemaObjectEnumerator::New_ctor(::System::Collections::IEnumerator* enumerator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaObjectEnumerator*>(enumerator));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Xml::Schema::XmlSchemaObjectEnumerator::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* System::Xml::Schema::XmlSchemaObjectEnumerator::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaObjectEnumerator::XmlSchemaObjectEnumerator() {}
