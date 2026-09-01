#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\NameValueWithParametersHeaderValue.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_impl.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueWithParametersHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__NameValueHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)(::System::Net::Http::Headers::NameValueWithParametersHeaderValue*)>(
    &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x60ec500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(
    &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ec720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.get_Parameters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* (
    ::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(&::System::Net::Http::Headers::NameValueWithParametersHeaderValue::get_Parameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60ec6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), { "get_Parameters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.System_ICloneable_Clone
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(
    &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60ec724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)(::System::Object*)>(
    &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::Equals)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60ec780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(
    &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60ec848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::NameValueWithParametersHeaderValue::*)()>(
    &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60ec8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                                                                          { ::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*>)>(
        &::System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60ec94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                                { "TryParse",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::NameValueWithParametersHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>,
                                                                ::by_ref<::System::Net::Http::Headers::Token>)>(&::System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x60eca00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                         { "TryParseElement",
                                           {},
                                           { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>>(),
                                             ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*&
System::Net::Http::Headers::NameValueWithParametersHeaderValue::__cordl_internal_get_parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* const&
System::Net::Http::Headers::NameValueWithParametersHeaderValue::__cordl_internal_get_parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parameters;
}
constexpr void
System::Net::Http::Headers::NameValueWithParametersHeaderValue::__cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parameters = value;
}
inline void System::Net::Http::Headers::NameValueWithParametersHeaderValue::_ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue* source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void System::Net::Http::Headers::NameValueWithParametersHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::NameValueWithParametersHeaderValue::get_Parameters() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), { "get_Parameters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>*>(this, ___internal_method);
}
inline ::System::Object* System::Net::Http::Headers::NameValueWithParametersHeaderValue::System_ICloneable_Clone() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), { "System.ICloneable.Clone", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::NameValueWithParametersHeaderValue::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Net::Http::Headers::NameValueWithParametersHeaderValue::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::NameValueWithParametersHeaderValue::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool
System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParse(::StringW input, int32_t minimalCount,
                                                                         ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                              { "TryParse",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::NameValueWithParametersHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer,
                                                                                            ::by_ref<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*> parsedValue,
                                                                                            ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(),
                                              { "TryParseElement",
                                                {},
                                                { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>>(),
                                                  ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
inline ::System::Net::Http::Headers::NameValueWithParametersHeaderValue*
System::Net::Http::Headers::NameValueWithParametersHeaderValue::New_ctor(::System::Net::Http::Headers::NameValueWithParametersHeaderValue* source) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>(source));
}
inline ::System::Net::Http::Headers::NameValueWithParametersHeaderValue* System::Net::Http::Headers::NameValueWithParametersHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::NameValueWithParametersHeaderValue*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Net::Http::Headers::NameValueWithParametersHeaderValue::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* System::Net::Http::Headers::NameValueWithParametersHeaderValue::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::NameValueWithParametersHeaderValue::NameValueWithParametersHeaderValue() {}
