#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\CollectionParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__CollectionParser_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__ElementTryParser_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__Lexer_def.hpp"
#include "System/Net/Http/Headers/zzzz__Token_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::CollectionParser.TryParse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, ::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(
    &::System::Net::Http::Headers::CollectionParser::TryParse)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60e4dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionParser*>(),
                            { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::CollectionParser.TryParseStringElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::Http::Headers::Lexer*, ::by_ref<::StringW>, ::by_ref<::System::Net::Http::Headers::Token>)>(
    &::System::Net::Http::Headers::CollectionParser::TryParseStringElement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60e4e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionParser*>(),
                            { "TryParseStringElement",
                              {},
                              { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
    return ___internal_method;
  }
};
template <typename T>
inline bool System::Net::Http::Headers::CollectionParser::TryParse(::StringW input, int32_t minimalCount, ::System::Net::Http::Headers::ElementTryParser_1<T>* parser,
                                                                   ::by_ref<::System::Collections::Generic::List_1<T>*> result) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionParser*>(),
                                                           { "TryParse",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Net::Http::Headers::ElementTryParser_1<T>*>(),
                                                               ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, parser, result);
}
inline bool System::Net::Http::Headers::CollectionParser::TryParse(::StringW input, int32_t minimalCount, ::by_ref<::System::Collections::Generic::List_1<::StringW>*> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionParser*>(),
                          { "TryParse", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, minimalCount, result);
}
inline bool System::Net::Http::Headers::CollectionParser::TryParseStringElement(::System::Net::Http::Headers::Lexer* lexer, ::by_ref<::StringW> parsedValue,
                                                                                ::by_ref<::System::Net::Http::Headers::Token> t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::CollectionParser*>(),
                          { "TryParseStringElement",
                            {},
                            { ::i2c::type_of<::System::Net::Http::Headers::Lexer*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::System::Net::Http::Headers::Token>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lexer, parsedValue, t);
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::CollectionParser::CollectionParser() {}
