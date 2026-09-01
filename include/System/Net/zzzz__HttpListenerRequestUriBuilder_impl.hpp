#pragma once
// IWYU pragma private; include "System\Net\HttpListenerRequestUriBuilder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__HttpListenerRequestUriBuilder_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpListenerRequestUriBuilder_ParsingResult::HttpListenerRequestUriBuilder_ParsingResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequestUriBuilder_ParsingResult::HttpListenerRequestUriBuilder_ParsingResult() {}
constexpr ::System::Net::HttpListenerRequestUriBuilder_ParsingResult System::Net::HttpListenerRequestUriBuilder_ParsingResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::HttpListenerRequestUriBuilder_ParsingResult System::Net::HttpListenerRequestUriBuilder_ParsingResult::InvalidString{ static_cast<int32_t>(0x1) };
constexpr ::System::Net::HttpListenerRequestUriBuilder_ParsingResult System::Net::HttpListenerRequestUriBuilder_ParsingResult::EncodingError{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HttpListenerRequestUriBuilder_EncodingType::HttpListenerRequestUriBuilder_EncodingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequestUriBuilder_EncodingType::HttpListenerRequestUriBuilder_EncodingType() {}
constexpr ::System::Net::HttpListenerRequestUriBuilder_EncodingType System::Net::HttpListenerRequestUriBuilder_EncodingType::Primary{ static_cast<int32_t>(0x0) };
constexpr ::System::Net::HttpListenerRequestUriBuilder_EncodingType System::Net::HttpListenerRequestUriBuilder_EncodingType::Secondary{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Net::HttpListenerRequestUriBuilder::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x640be80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetRequestUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::GetRequestUri)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x640bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
            { "GetRequestUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.Build
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::HttpListenerRequestUriBuilder::*)()>(&::System::Net::HttpListenerRequestUriBuilder::Build)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x640c02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "Build", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingCookedPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)()>(&::System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x640c114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "BuildRequestUriUsingCookedPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)()>(&::System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x640c324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "BuildRequestUriUsingRawPath", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetEncoding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (*)(::System::Net::HttpListenerRequestUriBuilder_EncodingType)>(
    &::System::Net::HttpListenerRequestUriBuilder::GetEncoding)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x640c7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                                                           { "GetEncoding", {}, { ::i2c::type_of<::System::Net::HttpListenerRequestUriBuilder_EncodingType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.BuildRequestUriUsingRawPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerRequestUriBuilder_ParsingResult (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*)>(
    &::System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x640c830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "BuildRequestUriUsingRawPath", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.ParseRawPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpListenerRequestUriBuilder_ParsingResult (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*)>(
    &::System::Net::HttpListenerRequestUriBuilder::ParseRawPath)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x640ca98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "ParseRawPath", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AppendUnicodeCodePointValuePercentEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequestUriBuilder::*)(::StringW)>(
    &::System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x640cf80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "AppendUnicodeCodePointValuePercentEncoded", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AddPercentEncodedOctetToRawOctetsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*, ::StringW)>(
    &::System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x640d288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                             { "AddPercentEncodedOctetToRawOctetsList", {}, { ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.EmptyDecodeAndAppendRawOctetsList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::HttpListenerRequestUriBuilder::*)(::System::Text::Encoding*)>(
    &::System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x640cbdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                                                           { "EmptyDecodeAndAppendRawOctetsList", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AppendOctetsPercentEncoded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IEnumerable_1<uint8_t>*)>(
    &::System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x640d3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                            { "AppendOctetsPercentEncoded", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint8_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetOctetsAsString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<uint8_t>*)>(&::System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x640d734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                             { "GetOctetsAsString", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint8_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.GetPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::GetPath)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x640c620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "GetPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.AddSlashToAsteriskOnlyPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x640bf2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "AddSlashToAsteriskOnlyPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HttpListenerRequestUriBuilder.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::HttpListenerRequestUriBuilder::*)(::StringW, ::StringW, ::ArrayW<::System::Object*>)>(
    &::System::Net::HttpListenerRequestUriBuilder::LogWarning)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x640c61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                             { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_rawUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawUri;
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_rawUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawUri;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_rawUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawUri = value;
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriScheme() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriScheme;
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriScheme() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriScheme;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_cookedUriScheme(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cookedUriScheme = value;
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriHost;
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriHost;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_cookedUriHost(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cookedUriHost = value;
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriPath;
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriPath;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_cookedUriPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cookedUriPath = value;
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriQuery() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriQuery;
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_cookedUriQuery() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cookedUriQuery;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_cookedUriQuery(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cookedUriQuery = value;
}
constexpr ::System::Text::StringBuilder*& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_requestUriString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestUriString;
}
constexpr ::System::Text::StringBuilder* const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_requestUriString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestUriString;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_requestUriString(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestUriString = value;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>*& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_rawOctets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawOctets;
}
constexpr ::System::Collections::Generic::List_1<uint8_t>* const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_rawOctets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawOctets;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_rawOctets(::System::Collections::Generic::List_1<uint8_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawOctets = value;
}
constexpr ::StringW& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_rawPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawPath;
}
constexpr ::StringW const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_rawPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rawPath;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_rawPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rawPath = value;
}
constexpr ::System::Uri*& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_requestUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestUri;
}
constexpr ::System::Uri* const& System::Net::HttpListenerRequestUriBuilder::__cordl_internal_get_requestUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestUri;
}
constexpr void System::Net::HttpListenerRequestUriBuilder::__cordl_internal_set_requestUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestUri = value;
}
inline void System::Net::HttpListenerRequestUriBuilder::setStaticF_useCookedRequestUrl(bool value) {
  ::cordl_internals::setStaticField<bool, "useCookedRequestUrl", ::System::Net::HttpListenerRequestUriBuilder*>(std::forward<bool>(value));
}
inline bool System::Net::HttpListenerRequestUriBuilder::getStaticF_useCookedRequestUrl() {
  return ::cordl_internals::getStaticField<bool, "useCookedRequestUrl", ::System::Net::HttpListenerRequestUriBuilder*>();
}
inline void System::Net::HttpListenerRequestUriBuilder::setStaticF_utf8Encoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "utf8Encoding", ::System::Net::HttpListenerRequestUriBuilder*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::getStaticF_utf8Encoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "utf8Encoding", ::System::Net::HttpListenerRequestUriBuilder*>();
}
inline void System::Net::HttpListenerRequestUriBuilder::setStaticF_ansiEncoding(::System::Text::Encoding* value) {
  ::cordl_internals::setStaticField<::System::Text::Encoding*, "ansiEncoding", ::System::Net::HttpListenerRequestUriBuilder*>(std::forward<::System::Text::Encoding*>(value));
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::getStaticF_ansiEncoding() {
  return ::cordl_internals::getStaticField<::System::Text::Encoding*, "ansiEncoding", ::System::Net::HttpListenerRequestUriBuilder*>();
}
inline void System::Net::HttpListenerRequestUriBuilder::_ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath, ::StringW cookedUriQuery) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
inline ::System::Uri* System::Net::HttpListenerRequestUriBuilder::GetRequestUri(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath,
                                                                                ::StringW cookedUriQuery) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                       { "GetRequestUri", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(nullptr, ___internal_method, rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery);
}
inline ::System::Uri* System::Net::HttpListenerRequestUriBuilder::Build() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "Build", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingCookedPath() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "BuildRequestUriUsingCookedPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "BuildRequestUriUsingRawPath", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::HttpListenerRequestUriBuilder::GetEncoding(::System::Net::HttpListenerRequestUriBuilder_EncodingType type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                                                         { "GetEncoding", {}, { ::i2c::type_of<::System::Net::HttpListenerRequestUriBuilder_EncodingType>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(nullptr, ___internal_method, type);
}
inline ::System::Net::HttpListenerRequestUriBuilder_ParsingResult System::Net::HttpListenerRequestUriBuilder::BuildRequestUriUsingRawPath(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "BuildRequestUriUsingRawPath", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerRequestUriBuilder_ParsingResult>(this, ___internal_method, encoding);
}
inline ::System::Net::HttpListenerRequestUriBuilder_ParsingResult System::Net::HttpListenerRequestUriBuilder::ParseRawPath(::System::Text::Encoding* encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "ParseRawPath", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpListenerRequestUriBuilder_ParsingResult>(this, ___internal_method, encoding);
}
inline bool System::Net::HttpListenerRequestUriBuilder::AppendUnicodeCodePointValuePercentEncoded(::StringW codePoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "AppendUnicodeCodePointValuePercentEncoded", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, codePoint);
}
inline bool System::Net::HttpListenerRequestUriBuilder::AddPercentEncodedOctetToRawOctetsList(::System::Text::Encoding* encoding, ::StringW escapedCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                           { "AddPercentEncodedOctetToRawOctetsList", {}, { ::i2c::type_of<::System::Text::Encoding*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, encoding, escapedCharacter);
}
inline bool System::Net::HttpListenerRequestUriBuilder::EmptyDecodeAndAppendRawOctetsList(::System::Text::Encoding* encoding) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                                                         { "EmptyDecodeAndAppendRawOctetsList", {}, { ::i2c::type_of<::System::Text::Encoding*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, encoding);
}
inline void System::Net::HttpListenerRequestUriBuilder::AppendOctetsPercentEncoded(::System::Text::StringBuilder* target, ::System::Collections::Generic::IEnumerable_1<uint8_t>* octets) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                          { "AppendOctetsPercentEncoded", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint8_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, octets);
}
inline ::StringW System::Net::HttpListenerRequestUriBuilder::GetOctetsAsString(::System::Collections::Generic::IEnumerable_1<uint8_t>* octets) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                                                         { "GetOctetsAsString", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<uint8_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, octets);
}
inline ::StringW System::Net::HttpListenerRequestUriBuilder::GetPath(::StringW uriString) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "GetPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, uriString);
}
inline ::StringW System::Net::HttpListenerRequestUriBuilder::AddSlashToAsteriskOnlyPath(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(), { "AddSlashToAsteriskOnlyPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, path);
}
inline void System::Net::HttpListenerRequestUriBuilder::LogWarning(::StringW methodName, ::StringW message, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::HttpListenerRequestUriBuilder*>(),
                                                           { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, methodName, message, args);
}
inline ::System::Net::HttpListenerRequestUriBuilder* System::Net::HttpListenerRequestUriBuilder::New_ctor(::StringW rawUri, ::StringW cookedUriScheme, ::StringW cookedUriHost, ::StringW cookedUriPath,
                                                                                                          ::StringW cookedUriQuery) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::HttpListenerRequestUriBuilder*>(rawUri, cookedUriScheme, cookedUriHost, cookedUriPath, cookedUriQuery));
}
// Ctor Parameters []
constexpr ::System::Net::HttpListenerRequestUriBuilder::HttpListenerRequestUriBuilder() {}
