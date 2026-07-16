#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/MediaTypeWithQualityHeaderValue.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeHeaderValue_impl.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeWithQualityHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::*)(::StringW)>(
    &::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e6628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60e662c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>,
                                                                ::by_ref<::System::Net::Http::Headers::Token>)>(&::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x60e6630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(),
                                                { "TryParseElement",
                                                  {},
                                                  { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>>(),
                                                    ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*>)>(
    &::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60e67a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(),
                                                { "TryParse",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::_ctor(::StringW mediaType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediaType);
}
inline void System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer,
                                                                                         ::by_ref<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*> parsedValue,
                                                                                         ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(),
                                              { "TryParseElement",
                                                {},
                                                { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>>(),
                                                  ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
inline bool
System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::TryParse(::StringW input, int32_t minimalCount,
                                                                      ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(),
                                              { "TryParse",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue* System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::New_ctor(::StringW mediaType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>(mediaType));
}
inline ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue* System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::MediaTypeWithQualityHeaderValue() {}
