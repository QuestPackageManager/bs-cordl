#pragma once
// IWYU pragma private; include "System\Net\CookieParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieParser_def.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::System::Net::CookieParser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::CookieParser::*)(::StringW)>(&::System::Net::CookieParser::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x641ba70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieParser*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieParser.Get
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cookie* (::System::Net::CookieParser::*)()>(&::System::Net::CookieParser::Get)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x641bae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieParser*>(), { "Get", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieParser.CheckQuoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::CookieParser::CheckQuoted)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x641c090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieParser*>(), { "CheckQuoted", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Net::CookieTokenizer*& System::Net::CookieParser::__cordl_internal_get_m_tokenizer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenizer;
}
constexpr ::System::Net::CookieTokenizer* const& System::Net::CookieParser::__cordl_internal_get_m_tokenizer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_tokenizer;
}
constexpr void System::Net::CookieParser::__cordl_internal_set_m_tokenizer(::System::Net::CookieTokenizer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_tokenizer = value;
}
inline void System::Net::CookieParser::_ctor(::StringW cookieString) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieParser*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookieString);
}
inline ::System::Net::Cookie* System::Net::CookieParser::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieParser*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cookie*>(this, ___internal_method);
}
inline ::StringW System::Net::CookieParser::CheckQuoted(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::CookieParser*>(), { "CheckQuoted", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::System::Net::CookieParser* System::Net::CookieParser::New_ctor(::StringW cookieString) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::CookieParser*>(cookieString));
}
// Ctor Parameters []
constexpr ::System::Net::CookieParser::CookieParser() {}
