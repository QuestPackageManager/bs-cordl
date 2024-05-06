#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Cache/zzzz__RequestCacheBinding_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/Cache/zzzz__RequestCacheValidator_def.hpp"
#include "System/Net/Cache/zzzz__RequestCache_def.hpp"
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Cache::RequestCacheBinding::*)(
    ::System::Net::Cache::RequestCache*, ::System::Net::Cache::RequestCacheValidator*, ::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::Cache::RequestCacheBinding::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x302754c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCache*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheValidator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Cache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCache* (::System::Net::Cache::RequestCacheBinding::*)()>(
    &::System::Net::Cache::RequestCacheBinding::get_Cache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30275c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), "get_Cache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Validator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCacheValidator* (::System::Net::Cache::RequestCacheBinding::*)()>(
    &::System::Net::Cache::RequestCacheBinding::get_Validator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30275d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(),
                                                                               "get_Validator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Cache::RequestCacheBinding.get_Policy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cache::RequestCachePolicy* (::System::Net::Cache::RequestCacheBinding::*)()>(
    &::System::Net::Cache::RequestCacheBinding::get_Policy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x30275d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), "get_Policy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Net::Cache::RequestCache*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_RequestCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCache*> const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_RequestCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestCache;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_RequestCache(::System::Net::Cache::RequestCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RequestCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Cache::RequestCacheValidator*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_CacheValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValidator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCacheValidator*> const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_CacheValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CacheValidator;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_CacheValidator(::System::Net::Cache::RequestCacheValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CacheValidator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_Policy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Policy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::Cache::RequestCachePolicy*> const& System::Net::Cache::RequestCacheBinding::__cordl_internal_get_m_Policy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Policy;
}
constexpr void System::Net::Cache::RequestCacheBinding::__cordl_internal_set_m_Policy(::System::Net::Cache::RequestCachePolicy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Policy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::Cache::RequestCacheBinding* System::Net::Cache::RequestCacheBinding::New_ctor(::System::Net::Cache::RequestCache* requestCache,
                                                                                                    ::System::Net::Cache::RequestCacheValidator* cacheValidator,
                                                                                                    ::System::Net::Cache::RequestCachePolicy* policy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Cache::RequestCacheBinding*>(requestCache, cacheValidator, policy));
}
inline void System::Net::Cache::RequestCacheBinding::_ctor(::System::Net::Cache::RequestCache* requestCache, ::System::Net::Cache::RequestCacheValidator* cacheValidator,
                                                           ::System::Net::Cache::RequestCachePolicy* policy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCache*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCacheValidator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Cache::RequestCachePolicy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestCache, cacheValidator, policy);
}
inline ::System::Net::Cache::RequestCache* System::Net::Cache::RequestCacheBinding::get_Cache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), "get_Cache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCache*, false>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCacheValidator* System::Net::Cache::RequestCacheBinding::get_Validator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), "get_Validator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCacheValidator*, false>(this, ___internal_method);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::Cache::RequestCacheBinding::get_Policy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Cache::RequestCacheBinding*>::get(), "get_Policy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Cache::RequestCacheBinding::RequestCacheBinding() {}
