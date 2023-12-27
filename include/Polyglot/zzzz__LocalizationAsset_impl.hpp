#pragma once
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::Polyglot::LocalizationAsset.get_TextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextAsset* (::Polyglot::LocalizationAsset::*)()>(&::Polyglot::LocalizationAsset::get_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_TextAsset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::LocalizationAsset.set_TextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::LocalizationAsset::*)(::UnityEngine::TextAsset*)>(&::Polyglot::LocalizationAsset::set_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2804140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_TextAsset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
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
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_Format", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::GoogleDriveDownloadFormat>::get() })));
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
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextAsset*& Polyglot::LocalizationAsset::__get_textAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___textAsset;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextAsset*> const& Polyglot::LocalizationAsset::__get_textAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___textAsset;
}
constexpr void Polyglot::LocalizationAsset::__set_textAsset(::UnityEngine::TextAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Polyglot::GoogleDriveDownloadFormat& Polyglot::LocalizationAsset::__get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___format;
}
constexpr ::Polyglot::GoogleDriveDownloadFormat const& Polyglot::LocalizationAsset::__get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___format;
}
constexpr void Polyglot::LocalizationAsset::__set_format(::Polyglot::GoogleDriveDownloadFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___format = value;
}
inline ::UnityEngine::TextAsset* Polyglot::LocalizationAsset::get_TextAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_TextAsset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAsset*, false>(this, ___internal_method);
}
inline void Polyglot::LocalizationAsset::set_TextAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_TextAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Polyglot::GoogleDriveDownloadFormat Polyglot::LocalizationAsset::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "get_Format",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Polyglot::GoogleDriveDownloadFormat, false>(this, ___internal_method);
}
inline void Polyglot::LocalizationAsset::set_Format(::Polyglot::GoogleDriveDownloadFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), "set_Format", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Polyglot::GoogleDriveDownloadFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Polyglot::LocalizationAsset* Polyglot::LocalizationAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::LocalizationAsset*>());
}
inline void Polyglot::LocalizationAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::LocalizationAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Polyglot::LocalizationAsset::LocalizationAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
