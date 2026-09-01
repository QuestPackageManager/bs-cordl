#pragma once
// IWYU pragma private; include "System\Text\RegularExpressions\ExclusiveReference.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/RegularExpressions/zzzz__ExclusiveReference_def.hpp"
#include "System/Text/RegularExpressions/zzzz__RegexRunner_def.hpp"
//  Writing Method size for method: ::System::Text::RegularExpressions::ExclusiveReference.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::RegularExpressions::RegexRunner* (::System::Text::RegularExpressions::ExclusiveReference::*)()>(
    &::System::Text::RegularExpressions::ExclusiveReference::Get)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x637ff10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::ExclusiveReference*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::ExclusiveReference.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::ExclusiveReference::*)(::System::Text::RegularExpressions::RegexRunner*)>(
    &::System::Text::RegularExpressions::ExclusiveReference::Release)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x637ff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::ExclusiveReference*>(),
                                                                                           { "Release", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexRunner*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::RegularExpressions::ExclusiveReference._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Text::RegularExpressions::ExclusiveReference::*)()>(&::System::Text::RegularExpressions::ExclusiveReference::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x638000c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::ExclusiveReference*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Text::RegularExpressions::RegexRunner*& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ref;
}
constexpr ::System::Text::RegularExpressions::RegexRunner* const& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ref;
}
constexpr void System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_set__ref(::System::Text::RegularExpressions::RegexRunner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ref = value;
}
constexpr ::System::Text::RegularExpressions::RegexRunner*& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__obj() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr ::System::Text::RegularExpressions::RegexRunner* const& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__obj() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obj;
}
constexpr void System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_set__obj(::System::Text::RegularExpressions::RegexRunner* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obj = value;
}
constexpr int32_t& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr int32_t const& System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_get__locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locked;
}
constexpr void System::Text::RegularExpressions::ExclusiveReference::__cordl_internal_set__locked(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locked = value;
}
inline ::System::Text::RegularExpressions::RegexRunner* System::Text::RegularExpressions::ExclusiveReference::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::ExclusiveReference*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::RegularExpressions::RegexRunner*>(this, ___internal_method);
}
inline void System::Text::RegularExpressions::ExclusiveReference::Release(::System::Text::RegularExpressions::RegexRunner* obj) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::ExclusiveReference*>(),
                                                                                         { "Release", {}, { ::i2c::type_of<::System::Text::RegularExpressions::RegexRunner*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
inline void System::Text::RegularExpressions::ExclusiveReference::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Text::RegularExpressions::ExclusiveReference*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::RegularExpressions::ExclusiveReference* System::Text::RegularExpressions::ExclusiveReference::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Text::RegularExpressions::ExclusiveReference*>());
}
// Ctor Parameters []
constexpr ::System::Text::RegularExpressions::ExclusiveReference::ExclusiveReference() {}
