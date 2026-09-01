#pragma once
// IWYU pragma private; include "System\Net\Http\Headers\HttpRequestHeaders.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__AuthenticationHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderValueCollection_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/Net/Http/Headers/zzzz__MediaTypeWithQualityHeaderValue_def.hpp"
#include "System/Net/Http/Headers/zzzz__TransferCodingHeaderValue_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpRequestHeaders___c::*)()>(&::System::Net::Http::Headers::HttpRequestHeaders___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60eab8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders___c._get_ConnectionClose_b__19_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpRequestHeaders___c::*)(::StringW)>(
    &::System::Net::Http::Headers::HttpRequestHeaders___c::_get_ConnectionClose_b__19_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x60eab90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(), { "<get_ConnectionClose>b__19_0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders___c._get_ExpectContinue_b__29_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpRequestHeaders___c::*)(::System::Net::Http::Headers::TransferCodingHeaderValue*)>(
    &::System::Net::Http::Headers::HttpRequestHeaders___c::_get_ExpectContinue_b__29_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60eabe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(),
                                                             { "<get_ExpectContinue>b__29_0", {}, { ::i2c::type_of<::System::Net::Http::Headers::TransferCodingHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders___c._get_TransferEncodingChunked_b__71_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Http::Headers::HttpRequestHeaders___c::*)(::System::Net::Http::Headers::TransferCodingHeaderValue*)>(
    &::System::Net::Http::Headers::HttpRequestHeaders___c::_get_TransferEncodingChunked_b__71_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x60eac40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(),
                                                             { "<get_TransferEncodingChunked>b__71_0", {}, { ::i2c::type_of<::System::Net::Http::Headers::TransferCodingHeaderValue*>() } })));
    return ___internal_method;
  }
};
inline void System::Net::Http::Headers::HttpRequestHeaders___c::setStaticF___9(::System::Net::Http::Headers::HttpRequestHeaders___c* value) {
  ::cordl_internals::setStaticField<::System::Net::Http::Headers::HttpRequestHeaders___c*, "<>9", ::System::Net::Http::Headers::HttpRequestHeaders___c*>(
      std::forward<::System::Net::Http::Headers::HttpRequestHeaders___c*>(value));
}
inline ::System::Net::Http::Headers::HttpRequestHeaders___c* System::Net::Http::Headers::HttpRequestHeaders___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Net::Http::Headers::HttpRequestHeaders___c*, "<>9", ::System::Net::Http::Headers::HttpRequestHeaders___c*>();
}
inline void System::Net::Http::Headers::HttpRequestHeaders___c::setStaticF___9__19_0(::System::Predicate_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::StringW>*, "<>9__19_0", ::System::Net::Http::Headers::HttpRequestHeaders___c*>(std::forward<::System::Predicate_1<::StringW>*>(value));
}
inline ::System::Predicate_1<::StringW>* System::Net::Http::Headers::HttpRequestHeaders___c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::StringW>*, "<>9__19_0", ::System::Net::Http::Headers::HttpRequestHeaders___c*>();
}
inline void System::Net::Http::Headers::HttpRequestHeaders___c::setStaticF___9__29_0(::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*, "<>9__29_0", ::System::Net::Http::Headers::HttpRequestHeaders___c*>(
      std::forward<::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*>(value));
}
inline ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* System::Net::Http::Headers::HttpRequestHeaders___c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*, "<>9__29_0", ::System::Net::Http::Headers::HttpRequestHeaders___c*>();
}
inline void System::Net::Http::Headers::HttpRequestHeaders___c::setStaticF___9__71_0(::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* value) {
  ::cordl_internals::setStaticField<::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*, "<>9__71_0", ::System::Net::Http::Headers::HttpRequestHeaders___c*>(
      std::forward<::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*>(value));
}
inline ::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* System::Net::Http::Headers::HttpRequestHeaders___c::getStaticF___9__71_0() {
  return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*, "<>9__71_0", ::System::Net::Http::Headers::HttpRequestHeaders___c*>();
}
inline void System::Net::Http::Headers::HttpRequestHeaders___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Http::Headers::HttpRequestHeaders___c::_get_ConnectionClose_b__19_0(::StringW l) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(), { "<get_ConnectionClose>b__19_0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline bool System::Net::Http::Headers::HttpRequestHeaders___c::_get_ExpectContinue_b__29_0(::System::Net::Http::Headers::TransferCodingHeaderValue* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(),
                                                           { "<get_ExpectContinue>b__29_0", {}, { ::i2c::type_of<::System::Net::Http::Headers::TransferCodingHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline bool System::Net::Http::Headers::HttpRequestHeaders___c::_get_TransferEncodingChunked_b__71_0(::System::Net::Http::Headers::TransferCodingHeaderValue* l) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders___c*>(),
                                                           { "<get_TransferEncodingChunked>b__71_0", {}, { ::i2c::type_of<::System::Net::Http::Headers::TransferCodingHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, l);
}
inline ::System::Net::Http::Headers::HttpRequestHeaders___c* System::Net::Http::Headers::HttpRequestHeaders___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpRequestHeaders___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpRequestHeaders___c::HttpRequestHeaders___c() {}
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpRequestHeaders::*)()>(&::System::Net::Http::Headers::HttpRequestHeaders::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60df3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_Accept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>* (
    ::System::Net::Http::Headers::HttpRequestHeaders::*)()>(&::System::Net::Http::Headers::HttpRequestHeaders::get_Accept)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60ea9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_Accept", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.set_Authorization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpRequestHeaders::*)(::System::Net::Http::Headers::AuthenticationHeaderValue*)>(
    &::System::Net::Http::Headers::HttpRequestHeaders::set_Authorization)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x60eaa54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(),
                                                             { "set_Authorization", {}, { ::i2c::type_of<::System::Net::Http::Headers::AuthenticationHeaderValue*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_Connection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW>* (::System::Net::Http::Headers::HttpRequestHeaders::*)()>(
    &::System::Net::Http::Headers::HttpRequestHeaders::get_Connection)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60d7318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_Connection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_ConnectionClose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::System::Net::Http::Headers::HttpRequestHeaders::*)()>(
    &::System::Net::Http::Headers::HttpRequestHeaders::get_ConnectionClose)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x60d7d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_ConnectionClose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_ExpectContinue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::System::Net::Http::Headers::HttpRequestHeaders::*)()>(
    &::System::Net::Http::Headers::HttpRequestHeaders::get_ExpectContinue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60d7e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_ExpectContinue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_Host
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Http::Headers::HttpRequestHeaders::*)()>(&::System::Net::Http::Headers::HttpRequestHeaders::get_Host)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60d804c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_Host", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_TransferEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* (
    ::System::Net::Http::Headers::HttpRequestHeaders::*)()>(&::System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncoding)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x60eaad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_TransferEncoding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.get_TransferEncodingChunked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (::System::Net::Http::Headers::HttpRequestHeaders::*)()>(
    &::System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncodingChunked)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x60da2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_TransferEncodingChunked", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Http::Headers::HttpRequestHeaders.AddHeaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Http::Headers::HttpRequestHeaders::*)(::System::Net::Http::Headers::HttpRequestHeaders*)>(
    &::System::Net::Http::Headers::HttpRequestHeaders::AddHeaders)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x60dbdc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(),
                                                                                           { "AddHeaders", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpRequestHeaders*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& System::Net::Http::Headers::HttpRequestHeaders::__cordl_internal_get_expectContinue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectContinue;
}
constexpr ::System::Nullable_1<bool> const& System::Net::Http::Headers::HttpRequestHeaders::__cordl_internal_get_expectContinue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expectContinue;
}
constexpr void System::Net::Http::Headers::HttpRequestHeaders::__cordl_internal_set_expectContinue(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expectContinue = value;
}
inline void System::Net::Http::Headers::HttpRequestHeaders::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>* System::Net::Http::Headers::HttpRequestHeaders::get_Accept() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_Accept", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpRequestHeaders::set_Authorization(::System::Net::Http::Headers::AuthenticationHeaderValue* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(),
                                                                                         { "set_Authorization", {}, { ::i2c::type_of<::System::Net::Http::Headers::AuthenticationHeaderValue*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW>* System::Net::Http::Headers::HttpRequestHeaders::get_Connection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_Connection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> System::Net::Http::Headers::HttpRequestHeaders::get_ConnectionClose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_ConnectionClose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> System::Net::Http::Headers::HttpRequestHeaders::get_ExpectContinue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_ExpectContinue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline ::StringW System::Net::Http::Headers::HttpRequestHeaders::get_Host() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_Host", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>* System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncoding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_TransferEncoding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Http::Headers::HttpHeaderValueCollection_1<::System::Net::Http::Headers::TransferCodingHeaderValue*>*>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> System::Net::Http::Headers::HttpRequestHeaders::get_TransferEncodingChunked() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(), { "get_TransferEncodingChunked", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(this, ___internal_method);
}
inline void System::Net::Http::Headers::HttpRequestHeaders::AddHeaders(::System::Net::Http::Headers::HttpRequestHeaders* headers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpRequestHeaders*>(),
                                                                                         { "AddHeaders", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpRequestHeaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers);
}
inline ::System::Net::Http::Headers::HttpRequestHeaders* System::Net::Http::Headers::HttpRequestHeaders::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpRequestHeaders*>());
}
// Ctor Parameters []
constexpr ::System::Net::Http::Headers::HttpRequestHeaders::HttpRequestHeaders() {}
