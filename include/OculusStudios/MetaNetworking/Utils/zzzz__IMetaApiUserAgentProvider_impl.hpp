#pragma once
// IWYU pragma private; include "OculusStudios/MetaNetworking/Utils/IMetaApiUserAgentProvider.hpp"
#include "OculusStudios/MetaNetworking/Utils/zzzz__IMetaApiUserAgentProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpRequestHeaders_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider.get_userAgent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::*)()>(
    &::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::get_userAgent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider.add_userAgentDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::*)(::System::Action*)>(
    &::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::add_userAgentDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider.remove_userAgentDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::*)(::System::Action*)>(
    &::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::remove_userAgentDidChangeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider.SetHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::*)(::System::Net::Http::Headers::HttpRequestHeaders*)>(
    &::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::SetHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider.SetHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::*)(
    ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::SetHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(),
                                                                                          { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 4 }));
    return ___internal_method;
  }
};
inline ::StringW OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::get_userAgent() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::add_userAgentDidChangeEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::remove_userAgentDidChangeEvent(::System::Action* value) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::SetHeader(::System::Net::Http::Headers::HttpRequestHeaders* headers) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers);
}
inline void OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider::SetHeader(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers);
}
