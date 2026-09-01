#pragma once
// IWYU pragma private; include "UnityEngineInternal\WebRequestUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngineInternal/zzzz__WebRequestUtils_def.hpp"
#include "System/Text/RegularExpressions/zzzz__Regex_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::WebRequestUtils.RedirectTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngineInternal::WebRequestUtils::RedirectTo)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6e27094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(), { "RedirectTo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::WebRequestUtils.MakeInitialUrl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::UnityEngineInternal::WebRequestUtils::MakeInitialUrl)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x6e2717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(), { "MakeInitialUrl", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::WebRequestUtils.MakeUriString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Uri*, ::StringW, bool)>(&::UnityEngineInternal::WebRequestUtils::MakeUriString)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x6e27508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(),
                                                             { "MakeUriString", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::WebRequestUtils.URLDecode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngineInternal::WebRequestUtils::URLDecode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e27938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(), { "URLDecode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngineInternal::WebRequestUtils::setStaticF_domainRegex(::System::Text::RegularExpressions::Regex* value) {
  ::cordl_internals::setStaticField<::System::Text::RegularExpressions::Regex*, "domainRegex", ::UnityEngineInternal::WebRequestUtils*>(
      std::forward<::System::Text::RegularExpressions::Regex*>(value));
}
inline ::System::Text::RegularExpressions::Regex* UnityEngineInternal::WebRequestUtils::getStaticF_domainRegex() {
  return ::cordl_internals::getStaticField<::System::Text::RegularExpressions::Regex*, "domainRegex", ::UnityEngineInternal::WebRequestUtils*>();
}
inline ::StringW UnityEngineInternal::WebRequestUtils::RedirectTo(::StringW baseUri, ::StringW redirectUri) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(), { "RedirectTo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, baseUri, redirectUri);
}
inline ::StringW UnityEngineInternal::WebRequestUtils::MakeInitialUrl(::StringW targetUrl, ::StringW localUrl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(), { "MakeInitialUrl", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, targetUrl, localUrl);
}
inline ::StringW UnityEngineInternal::WebRequestUtils::MakeUriString(::System::Uri* targetUri, ::StringW targetUrl, bool prependProtocol) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(),
                                                           { "MakeUriString", {}, { ::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, targetUri, targetUrl, prependProtocol);
}
inline ::StringW UnityEngineInternal::WebRequestUtils::URLDecode(::StringW encoded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngineInternal::WebRequestUtils*>(), { "URLDecode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, encoded);
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::WebRequestUtils::WebRequestUtils() {}
