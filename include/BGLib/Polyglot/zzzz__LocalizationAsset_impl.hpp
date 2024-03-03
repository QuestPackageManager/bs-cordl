#pragma once
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__LocalizationAsset_def.hpp"
#include "BGLib/Polyglot/zzzz__GoogleDriveDownloadFormat_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsset.get_TextAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::TextAsset> (::BGLib::Polyglot::LocalizationAsset::*)()>(
    &::BGLib::Polyglot::LocalizationAsset::get_TextAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe9253c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsset*>::get(), "get_TextAsset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsset.get_Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGLib::Polyglot::GoogleDriveDownloadFormat (::BGLib::Polyglot::LocalizationAsset::*)()>(
    &::BGLib::Polyglot::LocalizationAsset::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe92544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsset*>::get(), "get_Format",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::LocalizationAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::BGLib::Polyglot::LocalizationAsset::*)(::UnityEngine::TextAsset*, ::BGLib::Polyglot::GoogleDriveDownloadFormat)>(&::BGLib::Polyglot::LocalizationAsset::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xe9254c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::GoogleDriveDownloadFormat>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextAsset>& BGLib::Polyglot::LocalizationAsset::__cordl_internal_get_textAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& BGLib::Polyglot::LocalizationAsset::__cordl_internal_get_textAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textAsset;
}
constexpr void BGLib::Polyglot::LocalizationAsset::__cordl_internal_set_textAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___textAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat& BGLib::Polyglot::LocalizationAsset::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::BGLib::Polyglot::GoogleDriveDownloadFormat const& BGLib::Polyglot::LocalizationAsset::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void BGLib::Polyglot::LocalizationAsset::__cordl_internal_set_format(::BGLib::Polyglot::GoogleDriveDownloadFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
inline ::UnityW<::UnityEngine::TextAsset> BGLib::Polyglot::LocalizationAsset::get_TextAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsset*>::get(), "get_TextAsset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::GoogleDriveDownloadFormat BGLib::Polyglot::LocalizationAsset::get_Format() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsset*>::get(), "get_Format",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BGLib::Polyglot::GoogleDriveDownloadFormat, false>(this, ___internal_method);
}
inline ::BGLib::Polyglot::LocalizationAsset* BGLib::Polyglot::LocalizationAsset::New_ctor(::UnityEngine::TextAsset* textAsset, ::BGLib::Polyglot::GoogleDriveDownloadFormat format) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::Polyglot::LocalizationAsset*>(textAsset, format));
}
inline void BGLib::Polyglot::LocalizationAsset::_ctor(::UnityEngine::TextAsset* textAsset, ::BGLib::Polyglot::GoogleDriveDownloadFormat format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::Polyglot::LocalizationAsset*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextAsset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::Polyglot::GoogleDriveDownloadFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textAsset, format);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::LocalizationAsset::LocalizationAsset() {}
