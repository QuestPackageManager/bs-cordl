#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheBinding.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheValidator_def.hpp"
#include "System/Net/Cache/zzzz__RequestCache_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Cache::RequestCacheBinding::*)(
    ::System::Net::Cache::RequestCache*, ::System::Net::Cache::RequestCacheValidator*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::Cache::RequestCacheBinding::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6352340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::Cache::RequestCache*>(), ::i2c::type_of<::System::Net::Cache::RequestCacheValidator*>(),
                                                                 ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Cache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCache* (::System::Net::Cache::RequestCacheBinding::*)()>(&::System::Net::Cache::RequestCacheBinding::get_Cache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6352384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(), { "get_Cache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Validator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCacheValidator* (::System::Net::Cache::RequestCacheBinding::*)()>(
    &::System::Net::Cache::RequestCacheBinding::get_Validator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x635238c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(), { "get_Validator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Policy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCachePolicy* (::System::Net::Cache::RequestCacheBinding::*)()>(
    &::System::Net::Cache::RequestCacheBinding::get_Policy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6352394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(), { "get_Policy", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::Cache::RequestCache*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_RequestCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestCache;
}
constexpr ::System::Net::Cache::RequestCache* const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_RequestCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestCache;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_RequestCache(::System::Net::Cache::RequestCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestCache = value;
}
constexpr ::System::Net::Cache::RequestCacheValidator*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_CacheValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValidator;
}
constexpr ::System::Net::Cache::RequestCacheValidator* const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_CacheValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValidator;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CacheValidator = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_Policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Policy;
}
constexpr ::System::Net::Cache::RequestCachePolicy* const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_Policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Policy;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_Policy(::System::Net::Cache::RequestCachePolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Policy = value;
}
inline void System::Net::Cache::RequestCacheBinding::_ctor(::System::Net::Cache::RequestCache* requestCache, ::System::Net::Cache::RequestCacheValidator* cacheValidator,
                                                           ::System::Net::Cache::RequestCachePolicy* policy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::Cache::RequestCache*>(), ::i2c::type_of<::System::Net::Cache::RequestCacheValidator*>(),
                                                               ::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestCache, cacheValidator, policy);
}
inline ::System::Net::Cache::RequestCache* System::Net::Cache::RequestCacheBinding::get_Cache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(), { "get_Cache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCache*>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheValidator* System::Net::Cache::RequestCacheBinding::get_Validator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(), { "get_Validator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheValidator*>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::Cache::RequestCacheBinding::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheBinding*>(), { "get_Policy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheBinding::New_ctor(::System::Net::Cache::RequestCache* requestCache,
                                                                                                    ::System::Net::Cache::RequestCacheValidator* cacheValidator,
                                                                                                    ::System::Net::Cache::RequestCachePolicy* policy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Cache::RequestCacheBinding*>(requestCache, cacheValidator, policy));
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheBinding::RequestCacheBinding() {}
