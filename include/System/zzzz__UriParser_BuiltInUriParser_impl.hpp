#pragma once
// IWYU pragma private; include "System\UriParser_BuiltInUriParser.hpp"
#include "System/zzzz__UriParser_impl.hpp"
#include "System/zzzz__UriParser_BuiltInUriParser_def.hpp"
#include "System/zzzz__UriSyntaxFlags_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UriParser_BuiltInUriParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UriParser_BuiltInUriParser::*)(::StringW, int32_t, ::System::UriSyntaxFlags)>(
    &::GlobalNamespace::UriParser_BuiltInUriParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6378c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UriParser_BuiltInUriParser*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::UriSyntaxFlags>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UriParser_BuiltInUriParser::_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UriParser_BuiltInUriParser*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::UriSyntaxFlags>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lwrCaseScheme, defaultPort, syntaxFlags);
}
inline ::GlobalNamespace::UriParser_BuiltInUriParser* GlobalNamespace::UriParser_BuiltInUriParser::New_ctor(::StringW lwrCaseScheme, int32_t defaultPort, ::System::UriSyntaxFlags syntaxFlags) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UriParser_BuiltInUriParser*>(lwrCaseScheme, defaultPort, syntaxFlags));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UriParser_BuiltInUriParser::UriParser_BuiltInUriParser() {}
