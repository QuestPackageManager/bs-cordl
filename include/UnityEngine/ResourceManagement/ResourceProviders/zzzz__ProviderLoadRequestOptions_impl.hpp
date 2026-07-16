#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ProviderLoadRequestOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderLoadRequestOptions_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* (
    ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(&::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::Copy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x691af44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "Copy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.get_IgnoreFailures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691afc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_IgnoreFailures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.set_IgnoreFailures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691afcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                           { "set_IgnoreFailures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.get_WebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_WebRequestTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691afd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_WebRequestTimeout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions.set_WebRequestTimeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)(int32_t)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_WebRequestTimeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x691afdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                           { "set_WebRequestTimeout", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x691afe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_IgnoreFailures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_IgnoreFailures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_set_m_IgnoreFailures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreFailures = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_WebRequestTimeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_get_m_WebRequestTimeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WebRequestTimeout;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::__cordl_internal_set_m_WebRequestTimeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WebRequestTimeout = value;
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::Copy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "Copy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(this, ___internal_method);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_IgnoreFailures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_IgnoreFailures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_IgnoreFailures(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                         { "set_IgnoreFailures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::get_WebRequestTimeout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { "get_WebRequestTimeout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::set_WebRequestTimeout(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(),
                                                                                         { "set_WebRequestTimeout", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions* UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderLoadRequestOptions::ProviderLoadRequestOptions() {}
