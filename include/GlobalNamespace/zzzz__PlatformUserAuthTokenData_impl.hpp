#pragma once
#include "GlobalNamespace/zzzz__PlatformEnvironment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.get_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformUserAuthTokenData::*)()>(
    &::GlobalNamespace::PlatformUserAuthTokenData::get_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad45c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(),
                                                                               "get_token", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.set_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::StringW)>(
    &::GlobalNamespace::PlatformUserAuthTokenData::set_token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad45d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), "set_token", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.get_validPlatformEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlatformEnvironment (::GlobalNamespace::PlatformUserAuthTokenData::*)()>(
    &::GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad45d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(),
                                                                               "get_validPlatformEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData.set_validPlatformEnvironment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ad45e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), "set_validPlatformEnvironment", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformUserAuthTokenData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformUserAuthTokenData::*)(::StringW, ::GlobalNamespace::PlatformEnvironment)>(
    &::GlobalNamespace::PlatformUserAuthTokenData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2ad45e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token_k__BackingField;
}
constexpr void GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_set__token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____token_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlatformEnvironment& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__validPlatformEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validPlatformEnvironment_k__BackingField;
}
constexpr ::GlobalNamespace::PlatformEnvironment const& GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_get__validPlatformEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____validPlatformEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::PlatformUserAuthTokenData::__cordl_internal_set__validPlatformEnvironment_k__BackingField(::GlobalNamespace::PlatformEnvironment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____validPlatformEnvironment_k__BackingField = value;
}
inline ::StringW GlobalNamespace::PlatformUserAuthTokenData::get_token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), "get_token",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformUserAuthTokenData::set_token(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), "set_token", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlatformEnvironment GlobalNamespace::PlatformUserAuthTokenData::get_validPlatformEnvironment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(),
                                                                             "get_validPlatformEnvironment", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlatformEnvironment, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlatformUserAuthTokenData::set_validPlatformEnvironment(::GlobalNamespace::PlatformEnvironment value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), "set_validPlatformEnvironment", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlatformUserAuthTokenData* GlobalNamespace::PlatformUserAuthTokenData::New_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlatformUserAuthTokenData*>(token, validPlatformEnvironment));
}
inline void GlobalNamespace::PlatformUserAuthTokenData::_ctor(::StringW token, ::GlobalNamespace::PlatformEnvironment validPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformUserAuthTokenData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token, validPlatformEnvironment);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformUserAuthTokenData::PlatformUserAuthTokenData() {}
