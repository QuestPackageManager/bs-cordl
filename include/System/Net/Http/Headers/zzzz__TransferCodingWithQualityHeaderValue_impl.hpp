#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\TransferCodingWithQualityHeaderValue.hpp"
#include "System/Net/Http/Headers/zzzz__TransferCodingHeaderValue_impl.hpp"
#include "System/Net/Http/Headers/zzzz__TransferCodingWithQualityHeaderValue_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::*)()>(
    &::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60f071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>)>(
        &::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60f0720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>(),
                                                { "TryParse",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue.TryParseElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>,
                                                                ::by_ref<::System::Net::Http::Headers::Token>)>(&::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParseElement)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x60f07d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>(),
                                         { "TryParseElement",
                                           {},
                                           { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>>(),
                                             ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParse(
    ::StringW input, int32_t minimalCount, ::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>(),
                                              { "TryParse",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TryParseElement(::System::Net::Http::Headers::Lexer* lexer,
                                                                                              ::by_ref<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*> parsedValue,
                                                                                              ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>(),
                                       { "TryParseElement",
                                         {},
                                         { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>>(),
                                           ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
inline ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue* System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::TransferCodingWithQualityHeaderValue::TransferCodingWithQualityHeaderValue() {}
