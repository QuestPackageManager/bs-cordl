#pragma once
// IWYU pragma private; include "System/Net/Cache/RequestCacheManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheManager_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachingSectionInternal_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheManager.GetBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheBinding* (*)(::StringW)>(&::System::Net::Cache::RequestCacheManager::GetBinding)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x43ef1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get(), "GetBinding", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheManager.LoadConfigSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::System::Net::Cache::RequestCacheManager::LoadConfigSettings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x43ef39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get(),
                                                                               "LoadConfigSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_CacheConfigSettings(::System::Net::Cache::RequestCachingSectionInternal* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCachingSectionInternal*, "s_CacheConfigSettings",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>(
      std::forward<::System::Net::Cache::RequestCachingSectionInternal*>(value));
}
inline ::System::Net::Cache::RequestCachingSectionInternal* System::Net::Cache::RequestCacheManager::getStaticF_s_CacheConfigSettings() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCachingSectionInternal*, "s_CacheConfigSettings",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_BypassCacheBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_BypassCacheBinding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_BypassCacheBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_BypassCacheBinding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_DefaultGlobalBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultGlobalBinding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_DefaultGlobalBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultGlobalBinding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_DefaultHttpBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultHttpBinding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_DefaultHttpBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultHttpBinding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>();
}
inline void System::Net::Cache::RequestCacheManager::setStaticF_s_DefaultFtpBinding(::System::Net::Cache::RequestCacheBinding* value) {
  ::cordl_internals::setStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultFtpBinding",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>(
      std::forward<::System::Net::Cache::RequestCacheBinding*>(value));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::getStaticF_s_DefaultFtpBinding() {
  return ::cordl_internals::getStaticField<::System::Net::Cache::RequestCacheBinding*, "s_DefaultFtpBinding",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get>();
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheManager::GetBinding(::StringW internedScheme) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get(), "GetBinding", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheBinding*, false>(nullptr, ___internal_method, internedScheme);
}
inline void System::Net::Cache::RequestCacheManager::LoadConfigSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheManager*>::get(),
                                                                             "LoadConfigSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheManager::RequestCacheManager() {}
