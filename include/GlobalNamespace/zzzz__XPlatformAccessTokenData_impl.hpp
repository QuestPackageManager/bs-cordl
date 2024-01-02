#pragma once
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.get_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::XPlatformAccessTokenData::*)()>(
    &::GlobalNamespace::XPlatformAccessTokenData::get_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), "get_token",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.set_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::StringW)>(
    &::GlobalNamespace::XPlatformAccessTokenData::set_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), "set_token", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.get_platformEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlatformEnvironment (::GlobalNamespace::XPlatformAccessTokenData::*)()>(
    &::GlobalNamespace::XPlatformAccessTokenData::get_platformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                                                                               "get_platformEnvironment", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData.set_platformEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::XPlatformAccessTokenData::set_platformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe51d64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), "set_platformEnvironment", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XPlatformAccessTokenData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::XPlatformAccessTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::XPlatformAccessTokenData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe51d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::XPlatformAccessTokenData::__get__token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::XPlatformAccessTokenData::__get__token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token_k__BackingField;
}
constexpr void GlobalNamespace::XPlatformAccessTokenData::__set__token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____token_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlatformEnvironment& GlobalNamespace::XPlatformAccessTokenData::__get__platformEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformEnvironment_k__BackingField;
}
constexpr ::GlobalNamespace::PlatformEnvironment const& GlobalNamespace::XPlatformAccessTokenData::__get__platformEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::XPlatformAccessTokenData::__set__platformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformEnvironment_k__BackingField = value;
}
inline ::StringW GlobalNamespace::XPlatformAccessTokenData::get_token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), "get_token",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::XPlatformAccessTokenData::set_token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), "set_token", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlatformEnvironment GlobalNamespace::XPlatformAccessTokenData::get_platformEnvironment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(),
                                                                             "get_platformEnvironment", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformEnvironment, false>(this, ___internal_method);
}
inline void GlobalNamespace::XPlatformAccessTokenData::set_platformEnvironment(::GlobalNamespace::PlatformEnvironment value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), "set_platformEnvironment", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XPlatformAccessTokenData* GlobalNamespace::XPlatformAccessTokenData::New_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::XPlatformAccessTokenData*>(token, platformEnvironment));
}
inline void GlobalNamespace::XPlatformAccessTokenData::_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment platformEnvironment) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::XPlatformAccessTokenData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, platformEnvironment);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XPlatformAccessTokenData::XPlatformAccessTokenData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
