#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationProvider_def.hpp"
#include "Polyglot/zzzz__Localization_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.get_localization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Polyglot::Localization> (::GlobalNamespace::LocalizationProvider::*)()>(
    &::GlobalNamespace::LocalizationProvider::get_localization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28008ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(),
                                                                               "get_localization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LocalizationProvider> (*)()>(&::GlobalNamespace::LocalizationProvider::get_Instance)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28008b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), "get_Instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.set_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::LocalizationProvider*)>(&::GlobalNamespace::LocalizationProvider::set_Instance)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2800a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LocalizationProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider.get_HasInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::LocalizationProvider::get_HasInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2800948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(),
                                                                               "get_HasInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizationProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LocalizationProvider::*)()>(&::GlobalNamespace::LocalizationProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2800a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Polyglot::Localization>& GlobalNamespace::LocalizationProvider::__cordl_internal_get__localization() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localization;
}
constexpr ::UnityW<::Polyglot::Localization> const& GlobalNamespace::LocalizationProvider::__cordl_internal_get__localization() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localization;
}
constexpr void GlobalNamespace::LocalizationProvider::__cordl_internal_set__localization(::UnityW<::Polyglot::Localization> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localization)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LocalizationProvider::setStaticF__instance(::UnityW<::GlobalNamespace::LocalizationProvider> value) {
  ::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::LocalizationProvider>, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get>(
      std::forward<::UnityW<::GlobalNamespace::LocalizationProvider>>(value));
}
inline ::UnityW<::GlobalNamespace::LocalizationProvider> GlobalNamespace::LocalizationProvider::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::LocalizationProvider>, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get>();
}
inline ::UnityW<::Polyglot::Localization> GlobalNamespace::LocalizationProvider::get_localization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(),
                                                                             "get_localization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Polyglot::Localization>, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::LocalizationProvider> GlobalNamespace::LocalizationProvider::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), "get_Instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LocalizationProvider>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::LocalizationProvider::set_Instance(::GlobalNamespace::LocalizationProvider* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), "set_Instance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LocalizationProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::LocalizationProvider::get_HasInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), "get_HasInstance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::LocalizationProvider* GlobalNamespace::LocalizationProvider::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LocalizationProvider*>());
}
inline void GlobalNamespace::LocalizationProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LocalizationProvider*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationProvider::LocalizationProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
