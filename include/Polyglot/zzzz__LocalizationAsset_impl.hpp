#pragma once
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Polyglot::LocalizationAsset.get_TextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::Polyglot::LocalizationAsset::*)()>(
    &::Polyglot::LocalizationAsset::get_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_TextAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizationAsset.set_TextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizationAsset::*)(::UnityEngine::TextAsset*)>(&::Polyglot::LocalizationAsset::set_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_TextAsset", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizationAsset.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Polyglot::GoogleDriveDownloadFormat (::Polyglot::LocalizationAsset::*)()>(
    &::Polyglot::LocalizationAsset::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_Format",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizationAsset.set_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizationAsset::*)(::Polyglot::GoogleDriveDownloadFormat)>(
    &::Polyglot::LocalizationAsset::set_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_Format", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::GoogleDriveDownloadFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizationAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizationAsset::*)()>(&::Polyglot::LocalizationAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextAsset>& Polyglot::LocalizationAsset::__cordl_internal_get_textAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& Polyglot::LocalizationAsset::__cordl_internal_get_textAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr void Polyglot::LocalizationAsset::__cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Polyglot::GoogleDriveDownloadFormat& Polyglot::LocalizationAsset::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::Polyglot::GoogleDriveDownloadFormat const& Polyglot::LocalizationAsset::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void Polyglot::LocalizationAsset::__cordl_internal_set_format(::Polyglot::GoogleDriveDownloadFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
inline ::UnityW<::UnityEngine::TextAsset> Polyglot::LocalizationAsset::get_TextAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_TextAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline void Polyglot::LocalizationAsset::set_TextAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_TextAsset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Polyglot::GoogleDriveDownloadFormat Polyglot::LocalizationAsset::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_Format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Polyglot::GoogleDriveDownloadFormat, false>(this, ___internal_method);
}
inline void Polyglot::LocalizationAsset::set_Format(::Polyglot::GoogleDriveDownloadFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_Format", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::GoogleDriveDownloadFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Polyglot::LocalizationAsset* Polyglot::LocalizationAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Polyglot::LocalizationAsset*>());
}
inline void Polyglot::LocalizationAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Polyglot::LocalizationAsset::LocalizationAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
