#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheManager_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheManager.GetBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCacheBinding* (*)(::StringW)>(&::System::Net::Cache::RequestCacheManager::GetBinding)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6351ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheManager*>(), { "GetBinding", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheManager.LoadConfigSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Net::Cache::RequestCacheManager::LoadConfigSettings)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x63520cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheManager*>(), { "LoadConfigSettings", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_CacheConfigSettings(::System::Net::Cache::RequestCachingSectionInternal* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCachingSectionInternal*, "s_CacheConfigSettings", ::System::Net::Cache::RequestCacheManager*>(
      std::forward<::System::Net::Cache::RequestCachingSectionInternal*>(value));
}
inline ::System::Net::Cache::RequestCachingSectionInternal* System::Net::Cache::RequestCacheManager::getStaticF_s_CacheConfigSettings() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCachingSectionInternal*, "s_CacheConfigSettings", ::System::Net::Cache::RequestCacheManager*>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_BypassCacheBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_BypassCacheBinding", ::System::Net::Cache::RequestCacheManager*>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_BypassCacheBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_BypassCacheBinding", ::System::Net::Cache::RequestCacheManager*>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_DefaultGlobalBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultGlobalBinding", ::System::Net::Cache::RequestCacheManager*>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_DefaultGlobalBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultGlobalBinding", ::System::Net::Cache::RequestCacheManager*>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_DefaultHttpBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultHttpBinding", ::System::Net::Cache::RequestCacheManager*>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_DefaultHttpBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultHttpBinding", ::System::Net::Cache::RequestCacheManager*>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_DefaultFtpBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultFtpBinding", ::System::Net::Cache::RequestCacheManager*>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_DefaultFtpBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultFtpBinding", ::System::Net::Cache::RequestCacheManager*>();
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::GetBinding(::StringW internedScheme) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheManager*>(), { "GetBinding", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheBinding*>(nullptr, ___internal_method, internedScheme);
}
inline void System::Net::Cache::RequestCacheManager::LoadConfigSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Cache::RequestCacheManager*>(), { "LoadConfigSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheManager::RequestCacheManager() {}
