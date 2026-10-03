#pragma once
// IWYU pragma private; include "OculusStudios/MetaNetworking/Utils/MetaApiUserAgentProviderBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/MetaNetworking/Utils/zzzz__MetaApiUserAgentProviderBase_def.hpp"
#include "OculusStudios/MetaNetworking/Utils/zzzz__IMetaApiUserAgentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase.get_userAgent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)()>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::get_userAgent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63491cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(), { "get_userAgent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase.add_userAgentDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)(::System::Action*)>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::add_userAgentDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x63491d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                                                           { "add_userAgentDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase.remove_userAgentDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)(::System::Action*)>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::remove_userAgentDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6349284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                                                           { "remove_userAgentDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase.SetHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)(::System::Net::Http::Headers::HttpRequestHeaders*)>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::SetHeader)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6349330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                                                           { "SetHeader", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpRequestHeaders*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase.SetHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::SetHeader)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x63493ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                             { "SetHeader", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase.SetUserAgent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)(::StringW)>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::SetUserAgent)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6349488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(), { "SetUserAgent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::*)()>(
    &::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x63494ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::__cordl_internal_get__userAgent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgent;
}
constexpr ::StringW const& OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::__cordl_internal_get__userAgent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgent;
}
constexpr void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::__cordl_internal_set__userAgent(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userAgent = value;
}
constexpr ::System::Action*& OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::__cordl_internal_get_userAgentDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userAgentDidChangeEvent;
}
constexpr ::System::Action* const& OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::__cordl_internal_get_userAgentDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userAgentDidChangeEvent;
}
constexpr void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::__cordl_internal_set_userAgentDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userAgentDidChangeEvent = value;
}
inline ::StringW OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::get_userAgent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(), { "get_userAgent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::add_userAgentDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                                                         { "add_userAgentDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::remove_userAgentDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                                                         { "remove_userAgentDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::SetHeader(::System::Net::Http::Headers::HttpRequestHeaders* headers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                                                         { "SetHeader", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpRequestHeaders*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers);
}
inline void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::SetHeader(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(),
                                                           { "SetHeader", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers);
}
inline void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::SetUserAgent(::StringW userAgent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(), { "SetUserAgent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userAgent);
}
inline void OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase* OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*>());
}
/// @brief Convert operator to "::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider"
constexpr OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::operator ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*() noexcept {
  return static_cast<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider"
constexpr ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*
OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::i___OculusStudios__MetaNetworking__Utils__IMetaApiUserAgentProvider() noexcept {
  return static_cast<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase::MetaApiUserAgentProviderBase() {}
